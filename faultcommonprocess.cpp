#include "faultcommonprocess.h"
#include "receivedata.h"
#include "cglobal.h"
#include <fstream>
#include <qapplication.h>
#include <qdebug.h>
#include <qfile.h>
#include <qsettings.h>
#include <qdebug.h>

ST_HISTORY_FAULTS_LIST g_historyFaultsList;
ST_FAULTS_LIST_FILTER g_historyFaultsListFilter;
ST_FAULTS_LIST_FILTER g_currentFaultsListFilter;
int g_history_click_idx = -1;
int g_current_click_idx = -1;
QString g_current_click_datetime;
int g_invoke_type = E_INVOKE_HISTORY;
int g_unconfirmed_faults_num = 0;

ST_DATETIME g_current_faults_datetime_array[D_HISTORY_FAULT_LIST_MAX_CNT];

FAULTS_ROM_DATA g_faultsrom[]={
 //  byte, bit,  car,     code, grade,           device,        position,      deviceNo,           flag,  confirm, name,                             advice


    //{388, bit3, D_CAR_1,   21, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("两端司机室激活"), QSTR("关闭一端司机钥匙") },


//    {416, bit6, D_CAR_1,   25, D_FAULT_GRADE_3, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("向前向后方向都激活"), QSTR("检查司控器") },
//    {416, bit7, D_CAR_1,   26, D_FAULT_GRADE_3, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("牵引制动均激活"), QSTR("检查司控器") },

    // 0 avail
    ///2014-7-24 change eth faults
    //{395, bit7, D_CAR_1,    1, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("另外一侧IDU离线"), QSTR("检查IDU设备及通信线路（记录另外一侧IDU在线状态）") },
    {378, bit0, D_CAR_1,    1, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("RIOM_Mc1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {378, bit1, D_CAR_1,    2, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("RIOM_Mc2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {378, bit2, D_CAR_1,    3, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("TCU_MC1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {378, bit3, D_CAR_1,    4, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("TCU_MC2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {378, bit4, D_CAR_1,    5, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("ACU_MC1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {378, bit5, D_CAR_1,    6, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("ACU_MC2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {379, bit6, D_CAR_1,    7, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("HVAC_MC1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {379, bit7, D_CAR_1,    8, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("HVAC_MC2 CANopen offline"), QSTR("Check the failure device and the communication cable") },

    {378, bit6, D_CAR_1,   9, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("DOOR1_MC1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {378, bit7, D_CAR_1,   10, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("DOOR2_MC1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {379, bit0, D_CAR_1,   11, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("DOOR3_MC1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {379, bit1, D_CAR_1,   12, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("DOOR4_MC1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {379, bit2, D_CAR_1,   13, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("DOOR5_MC2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {379, bit3, D_CAR_1,   14, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("DOOR6_MC2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {379, bit4, D_CAR_1,   15, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("DOOR7_MC2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {379, bit5, D_CAR_1,   16, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("DOOR8_MC2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {380, bit2, D_CAR_1,   17, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_T,   D_DEVICENO_TRAIN,      false, false, QSTR("BCU CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {380, bit0, D_CAR_1,   18, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("PIS_MC1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {380, bit1, D_CAR_1,   19, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("PIS_MC2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {383, bit0, D_CAR_1,   20, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Another IDU communication error"), QSTR("Check the failure device and the communication cable") },
    {382, bit7, D_CAR_1,   21, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Another VCU communication error"), QSTR("Check the failure device and the communication cable") },

    {384, bit0, D_CAR_1,    31, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train RIOM_Mc1 CANopen offline "), QSTR("Check the failure device and the communication cable") },
    {384, bit1, D_CAR_1,    32, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train RIOM_Mc2 CANopen offline "), QSTR("Check the failure device and the communication cable") },
    {384, bit2, D_CAR_1,    33, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train TCU_Mc1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {384, bit3, D_CAR_1,    34, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train TCU_Mc2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {384, bit4, D_CAR_1,    35, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train ACU_Mc1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {384, bit5, D_CAR_1,    36, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train ACU_Mc2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {385, bit6, D_CAR_1,    37, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train HVAC_Mc1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {385, bit7, D_CAR_1,    38, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train HVAC_Mc2 CANopen offline"), QSTR("Check the failure device and the communication cable") },

    {384, bit6, D_CAR_1,   41, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train DOOR1_Mc1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {384, bit7, D_CAR_1,   42, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train DOOR2_Mc1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {385, bit0, D_CAR_1,   43, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train DOOR3_Mc1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {385, bit1, D_CAR_1,   44, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train DOOR4_Mc1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {385, bit2, D_CAR_1,   45, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train DOOR5_Mc2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {385, bit3, D_CAR_1,   46, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train DOOR6_Mc2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {385, bit4, D_CAR_1,   47, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train DOOR7_Mc2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {385, bit5, D_CAR_1,   48, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train DOOR8_Mc2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {386, bit2, D_CAR_1,   50, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_T,   D_DEVICENO_TRAIN,      false, false, QSTR("Coupled train BCU CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {386, bit0, D_CAR_1,   39, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC1, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train PIS_Mc1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {386, bit1, D_CAR_1,   40, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_MC2, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train PIS_Mc2 CANopen offline"), QSTR("Check the failure device and the communication cable") },

    {389, bit0, D_CAR_1,   51, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train VCU_Mc2 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {389, bit1, D_CAR_1,   52, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train IDU_Mc1 CANopen offline"), QSTR("Check the failure device and the communication cable") },
    {389, bit2, D_CAR_1,   53, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Coupled train IDU_Mc2 CANopen offline"), QSTR("Check the failure device and the communication cable") },


//CODE 23 enable 1
    {363, bit2, D_CAR_1,   23, D_FAULT_GRADE_1, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Net voltage bigger than 1050 "), QSTR("Check Net voltage") },
    {363, bit3, D_CAR_1,   24, D_FAULT_GRADE_3, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("all TCU Error"), QSTR("If this error stays,the car must be rescued") },
    {363, bit7, D_CAR_1,   25, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Deadman event"), QSTR("Deadman button should be operate correctly before the deadman event happens") },
    {383, bit2, D_CAR_1,   29, D_FAULT_GRADE_3, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Head tail conflict"), QSTR("Check the status of head tail button") },
    {383, bit3, D_CAR_1,   26, D_FAULT_GRADE_3, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("direction conflict "), QSTR("Check the master controller") },
    {383, bit4, D_CAR_1,   27, D_FAULT_GRADE_3, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Traction brake conflict "), QSTR("Check the master controller") },
    {383, bit5, D_CAR_1,   22, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Key conflict "), QSTR("both keys of the car is actived,one of them must be turned off") },
    {383, bit6, D_CAR_1,   28, D_FAULT_GRADE_3, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Train couple error "), QSTR("Check train bus coupled line") },

    //    {363, bit7, D_CAR_1,   25, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Deadman control"), QSTR("警惕倒计时按键要在Deadman事件发生前按下或抬起") },
//    {363, bit7, D_CAR_1,   25, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Deadman control"), QSTR("警惕倒计时按键要在Deadman事件发生前按下或抬起") },
//    {363, bit7, D_CAR_1,   25, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Deadman control"), QSTR("警惕倒计时按键要在Deadman事件发生前按下或抬起") },
//    {363, bit7, D_CAR_1,   25, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Deadman control"), QSTR("警惕倒计时按键要在Deadman事件发生前按下或抬起") },
//    {363, bit7, D_CAR_1,   25, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Deadman control"), QSTR("警惕倒计时按键要在Deadman事件发生前按下或抬起") },
//    {363, bit7, D_CAR_1,   25, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Deadman control"), QSTR("警惕倒计时按键要在Deadman事件发生前按下或抬起") },
//    {363, bit7, D_CAR_1,   25, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Deadman control"), QSTR("警惕倒计时按键要在Deadman事件发生前按下或抬起") },
//    {363, bit7, D_CAR_1,   25, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Deadman control"), QSTR("警惕倒计时按键要在Deadman事件发生前按下或抬起") },
//    {363, bit7, D_CAR_1,   25, D_FAULT_GRADE_2, D_DEVICE_TRAIN, D_POSITION_TRAIN, D_DEVICENO_TRAIN,    false, false, QSTR("Deadman control"), QSTR("警惕倒计时按键要在Deadman事件发生前按下或抬起") },

    //door faults
    ///door1
    {64, bit0, D_CAR_1, 1401, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR1,    false, false, QSTR("DoorDynamoErr"),
    QSTR("Door cannot move and be set free. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {64, bit1, D_CAR_1, 1402, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR1,    false, false, QSTR("DoorLockSWErr"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {64, bit2, D_CAR_1, 1403, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR1,    false, false, QSTR("drDoorCloseSWErrtx"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {64, bit3, D_CAR_1, 1404, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR1,    false, false, QSTR("DoorUnlock3sErr"),
    QSTR("Door cannot move. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {64, bit4, D_CAR_1, 1405, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR1,    false, false, QSTR("DoorPositionSencerErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {64, bit5, D_CAR_1, 1406, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR1,    false, false, QSTR("DoorCloseTimesErr"),
    QSTR("Times can be set. If speculated attempts are taken, the door will open to the fully open position automatically.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {64, bit6, D_CAR_1, 1407, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR1,    false, false, QSTR("DoorOpenTimesErr"),
    QSTR("Times can be set. After speculated attempts,the door stops and accepts this position as the maximum reachable open position.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {64, bit7, D_CAR_1, 1408, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR1,    false, false, QSTR("DoorSafeRelayErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {65, bit0, D_CAR_1, 1409, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR1,    false, false, QSTR("DoorNoOpnCMD"),
    QSTR("The door attempts to close for three times.\nIf it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated.") },
    {65, bit1, D_CAR_1, 1410, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR1,    false, false, QSTR("DoorBelockErr"),
    QSTR("Door stopped, the breaker is turned on. If it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated") },
    {65, bit2, D_CAR_1, 1411, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR1,    false, false, QSTR("DoorSafeLoopErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },

///door2
    {70, bit0, D_CAR_1, 1401, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR2,    false, false, QSTR("DoorDynamoErr"),
    QSTR("Door cannot move and be set free. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {70, bit1, D_CAR_1, 1402, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR2,    false, false, QSTR("DoorLockSWErr"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {70, bit2, D_CAR_1, 1403, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR2,    false, false, QSTR("drDoorCloseSWErrtx"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {70, bit3, D_CAR_1, 1404, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR2,    false, false, QSTR("DoorUnlock3sErr"),
    QSTR("Door cannot move. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {70, bit4, D_CAR_1, 1405, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR2,    false, false, QSTR("DoorPositionSencerErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {70, bit5, D_CAR_1, 1406, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR2,    false, false, QSTR("DoorCloseTimesErr"),
    QSTR("Times can be set. If speculated attempts are taken, the door will open to the fully open position automatically.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {70, bit6, D_CAR_1, 1407, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR2,    false, false, QSTR("DoorOpenTimesErr"),
    QSTR("Times can be set. After speculated attempts,the door stops and accepts this position as the maximum reachable open position.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {70, bit7, D_CAR_1, 1408, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR2,    false, false, QSTR("DoorSafeRelayErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {71, bit0, D_CAR_1, 1409, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR2,    false, false, QSTR("DoorNoOpnCMD"),
    QSTR("The door attempts to close for three times.\nIf it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated.") },
    {71, bit1, D_CAR_1, 1410, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR2,    false, false, QSTR("DoorBelockErr"),
    QSTR("Door stopped, the breaker is turned on. If it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated") },
    {71, bit2, D_CAR_1, 1411, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR2,    false, false, QSTR("DoorSafeLoopErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
///door3
    {76, bit0, D_CAR_1, 1401, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR3,    false, false, QSTR("DoorDynamoErr"),
    QSTR("Door cannot move and be set free. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {76, bit1, D_CAR_1, 1402, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR3,    false, false, QSTR("DoorLockSWErr"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {76, bit2, D_CAR_1, 1403, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR3,    false, false, QSTR("drDoorCloseSWErrtx"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {76, bit3, D_CAR_1, 1404, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR3,    false, false, QSTR("DoorUnlock3sErr"),
    QSTR("Door cannot move. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {76, bit4, D_CAR_1, 1405, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR3,    false, false, QSTR("DoorPositionSencerErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {76, bit5, D_CAR_1, 1406, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR3,    false, false, QSTR("DoorCloseTimesErr"),
    QSTR("Times can be set. If speculated attempts are taken, the door will open to the fully open position automatically.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {76, bit6, D_CAR_1, 1407, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR3,    false, false, QSTR("DoorOpenTimesErr"),
    QSTR("Times can be set. After speculated attempts,the door stops and accepts this position as the maximum reachable open position.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {76, bit7, D_CAR_1, 1408, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR3,    false, false, QSTR("DoorSafeRelayErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {77, bit0, D_CAR_1, 1409, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR3,    false, false, QSTR("DoorNoOpnCMD"),
    QSTR("The door attempts to close for three times.\nIf it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated.") },
    {77, bit1, D_CAR_1, 1410, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR3,    false, false, QSTR("DoorBelockErr"),
    QSTR("Door stopped, the breaker is turned on. If it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated") },
    {77, bit2, D_CAR_1, 1411, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR3,    false, false, QSTR("DoorSafeLoopErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
///door4
    {82, bit0, D_CAR_1, 1401, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR4,    false, false, QSTR("DoorDynamoErr"),
    QSTR("Door cannot move and be set free. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {82, bit1, D_CAR_1, 1402, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR4,    false, false, QSTR("DoorLockSWErr"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {82, bit2, D_CAR_1, 1403, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR4,    false, false, QSTR("drDoorCloseSWErrtx"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {82, bit3, D_CAR_1, 1404, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR4,    false, false, QSTR("DoorUnlock3sErr"),
    QSTR("Door cannot move. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {82, bit4, D_CAR_1, 1405, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR4,    false, false, QSTR("DoorPositionSencerErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {82, bit5, D_CAR_1, 1406, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR4,    false, false, QSTR("DoorCloseTimesErr"),
    QSTR("Times can be set. If speculated attempts are taken, the door will open to the fully open position automatically.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {82, bit6, D_CAR_1, 1407, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR4,    false, false, QSTR("DoorOpenTimesErr"),
    QSTR("Times can be set. After speculated attempts,the door stops and accepts this position as the maximum reachable open position.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {82, bit7, D_CAR_1, 1408, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR4,    false, false, QSTR("DoorSafeRelayErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {83, bit0, D_CAR_1, 1409, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR4,    false, false, QSTR("DoorNoOpnCMD"),
    QSTR("The door attempts to close for three times.\nIf it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated.") },
    {83, bit1, D_CAR_1, 1410, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR4,    false, false, QSTR("DoorBelockErr"),
    QSTR("Door stopped, the breaker is turned on. If it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated") },
    {83, bit2, D_CAR_1, 1411, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC1, D_DEVICENO_DOOR4,    false, false, QSTR("DoorSafeLoopErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
///door5
    {88, bit0, D_CAR_1, 1401, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR5,    false, false, QSTR("DoorDynamoErr"),
    QSTR("Door cannot move and be set free. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {88, bit1, D_CAR_1, 1402, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR5,    false, false, QSTR("DoorLockSWErr"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {88, bit2, D_CAR_1, 1403, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR5,    false, false, QSTR("drDoorCloseSWErrtx"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {88, bit3, D_CAR_1, 1404, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR5,    false, false, QSTR("DoorUnlock3sErr"),
    QSTR("Door cannot move. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {88, bit4, D_CAR_1, 1405, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR5,    false, false, QSTR("DoorPositionSencerErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {88, bit5, D_CAR_1, 1406, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR5,    false, false, QSTR("DoorCloseTimesErr"),
    QSTR("Times can be set. If speculated attempts are taken, the door will open to the fully open position automatically.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {88, bit6, D_CAR_1, 1407, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR5,    false, false, QSTR("DoorOpenTimesErr"),
    QSTR("Times can be set. After speculated attempts,the door stops and accepts this position as the maximum reachable open position.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {88, bit7, D_CAR_1, 1408, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR5,    false, false, QSTR("DoorSafeRelayErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {89, bit0, D_CAR_1, 1409, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR5,    false, false, QSTR("DoorNoOpnCMD"),
    QSTR("The door attempts to close for three times.\nIf it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated.") },
    {89, bit1, D_CAR_1, 1410, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR5,    false, false, QSTR("DoorBelockErr"),
    QSTR("Door stopped, the breaker is turned on. If it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated") },
    {89, bit2, D_CAR_1, 1411, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR5,    false, false, QSTR("DoorSafeLoopErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
///door6
    {94, bit0, D_CAR_1, 1401, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR6,    false, false, QSTR("DoorDynamoErr"),
    QSTR("Door cannot move and be set free. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {94, bit1, D_CAR_1, 1402, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR6,    false, false, QSTR("DoorLockSWErr"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {94, bit2, D_CAR_1, 1403, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR6,    false, false, QSTR("drDoorCloseSWErrtx"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {94, bit3, D_CAR_1, 1404, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR6,    false, false, QSTR("DoorUnlock3sErr"),
    QSTR("Door cannot move. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {94, bit4, D_CAR_1, 1405, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR6,    false, false, QSTR("DoorPositionSencerErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {94, bit5, D_CAR_1, 1406, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR6,    false, false, QSTR("DoorCloseTimesErr"),
    QSTR("Times can be set. If speculated attempts are taken, the door will open to the fully open position automatically.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {94, bit6, D_CAR_1, 1407, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR6,    false, false, QSTR("DoorOpenTimesErr"),
    QSTR("Times can be set. After speculated attempts,the door stops and accepts this position as the maximum reachable open position.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {94, bit7, D_CAR_1, 1408, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR6,    false, false, QSTR("DoorSafeRelayErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {95, bit0, D_CAR_1, 1409, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR6,    false, false, QSTR("DoorNoOpnCMD"),
    QSTR("The door attempts to close for three times.\nIf it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated.") },
    {95, bit1, D_CAR_1, 1410, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR6,    false, false, QSTR("DoorBelockErr"),
    QSTR("Door stopped, the breaker is turned on. If it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated") },
    {95, bit2, D_CAR_1, 1411, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR6,    false, false, QSTR("DoorSafeLoopErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
///door7
    {100, bit0, D_CAR_1, 1401, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR7,    false, false, QSTR("DoorDynamoErr"),
    QSTR("Door cannot move and be set free. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {100, bit1, D_CAR_1, 1402, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR7,    false, false, QSTR("DoorLockSWErr"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {100, bit2, D_CAR_1, 1403, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR7,    false, false, QSTR("drDoorCloseSWErrtx"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {100, bit3, D_CAR_1, 1404, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR7,    false, false, QSTR("DoorUnlock3sErr"),
    QSTR("Door cannot move. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {100, bit4, D_CAR_1, 1405, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR7,    false, false, QSTR("DoorPositionSencerErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {100, bit5, D_CAR_1, 1406, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR7,    false, false, QSTR("DoorCloseTimesErr"),
    QSTR("Times can be set. If speculated attempts are taken, the door will open to the fully open position automatically.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {100, bit6, D_CAR_1, 1407, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR7,    false, false, QSTR("DoorOpenTimesErr"),
    QSTR("Times can be set. After speculated attempts,the door stops and accepts this position as the maximum reachable open position.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {100, bit7, D_CAR_1, 1408, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR7,    false, false, QSTR("DoorSafeRelayErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {101, bit0, D_CAR_1, 1409, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR7,    false, false, QSTR("DoorNoOpnCMD"),
    QSTR("The door attempts to close for three times.\nIf it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated.") },
    {101, bit1, D_CAR_1, 1410, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR7,    false, false, QSTR("DoorBelockErr"),
    QSTR("Door stopped, the breaker is turned on. If it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated") },
    {101, bit2, D_CAR_1, 1411, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR7,    false, false, QSTR("DoorSafeLoopErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
///door8
    {106, bit0, D_CAR_1, 1401, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR8,    false, false, QSTR("DoorDynamoErr"),
    QSTR("Door cannot move and be set free. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {106, bit1, D_CAR_1, 1402, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR8,    false, false, QSTR("DoorLockSWErr"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {106, bit2, D_CAR_1, 1403, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR8,    false, false, QSTR("drDoorCloseSWErrtx"),
    QSTR("The door will be closed immediately without response to opening commands. The door needs to be isolated.") },
    {106, bit3, D_CAR_1, 1404, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR8,    false, false, QSTR("DoorUnlock3sErr"),
    QSTR("Door cannot move. If it is fulfill the open or close conditions, the door will attempt to move again. The door should be checked or isolated.") },
    {106, bit4, D_CAR_1, 1405, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR8,    false, false, QSTR("DoorPositionSencerErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {106, bit5, D_CAR_1, 1406, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR8,    false, false, QSTR("DoorCloseTimesErr"),
    QSTR("Times can be set. If speculated attempts are taken, the door will open to the fully open position automatically.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {106, bit6, D_CAR_1, 1407, D_FAULT_GRADE_1, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR8,    false, false, QSTR("DoorOpenTimesErr"),
    QSTR("Times can be set. After speculated attempts,the door stops and accepts this position as the maximum reachable open position.\nIf it is fulfill the open or close conditions, the door will attempt to move again.") },
    {106, bit7, D_CAR_1, 1408, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR8,    false, false, QSTR("DoorSafeRelayErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
    {107, bit0, D_CAR_1, 1409, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR8,    false, false, QSTR("DoorNoOpnCMD"),
    QSTR("The door attempts to close for three times.\nIf it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated.") },
    {107, bit1, D_CAR_1, 1410, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR8,    false, false, QSTR("DoorBelockErr"),
    QSTR("Door stopped, the breaker is turned on. If it is fulfill the open or close conditions, the door will attempt to move again. The door needs to be isolated") },
    {107, bit2, D_CAR_1, 1411, D_FAULT_GRADE_2, D_DEVICE_DOOR, D_POSITION_MC2, D_DEVICENO_DOOR8,    false, false, QSTR("DoorSafeLoopErr"),
    QSTR("The door attempt to move. The door needs to be isolated.") },
///hvac faults
    {114, bit0, D_CAR_1, 1501, D_FAULT_GRADE_3, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("evaprator fan1 fault"), QSTR("The supply air fan  is jammed;or the motor's insulation breaks down") },
    {114, bit1, D_CAR_1, 1502, D_FAULT_GRADE_2, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("condenserfanfault"), QSTR("The condenser fan is jammed;or the motor's insulation breaks down")},
    {114, bit2, D_CAR_1, 1503, D_FAULT_GRADE_2, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("compressor1 over current protection fault"),QSTR("The compresosr  is jammed;or the motor's insulation breaks down") },
    {114, bit3, D_CAR_1, 1504, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("compressor1 high pressure protection fault"), QSTR("The condenser fan operates abnormally") },
    {114, bit4, D_CAR_1, 1505, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("compressor1 low pressure protection fault"), QSTR("compressor1 low pressure protection fault") },
    {114, bit5, D_CAR_1, 1506, D_FAULT_GRADE_3, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("evapratorfan2 fault"), QSTR("The supply air fan  is jammed;or the motor's insulation breaks down") },
    {114, bit7, D_CAR_1, 1507, D_FAULT_GRADE_2, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("compressor2 over current protectionfault"), QSTR("The compresosr is jammed;or the motor's insulation breaks down") },
    {115, bit0, D_CAR_1, 1508, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("compressor2 high pressure protectonfault"), QSTR("The condenser fan operates abnormally") },
    {115, bit1, D_CAR_1, 1509, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("compressor2 low pressure protection fault"), QSTR("Leak of the refrigerant, or the supply air fan operates abnormally") },
    {115, bit2, D_CAR_1, 1510, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("heater over current protection fault"), QSTR("The heater's insulation breaks down") },
    {115, bit3, D_CAR_1, 1511, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("heater1 over heating protection fault"), QSTR("The supply air fan operates abnormally") },
    {115, bit4, D_CAR_1, 1512, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("heater2 over heating protection fault"), QSTR("The supply air fan operates abnormally") },
    {115, bit5, D_CAR_1, 1513, D_FAULT_GRADE_2, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("fresh air temperature sensor fault"), QSTR("False contact with the air sensor's connecting wire") },
    {115, bit6, D_CAR_1, 1514, D_FAULT_GRADE_2, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("return air temperature sensor fault"), QSTR("False contact with the air sensor's connecting wire") },
    {115, bit7, D_CAR_1, 1515, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC1, D_DEVICENO_HVAC1,    false, false, QSTR("3-phase power fault"), QSTR("Lost medium voltage or the HVAC supply power circuit breaker  was tripped") },

    {124, bit0, D_CAR_1, 1501, D_FAULT_GRADE_3, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("evaprator fan1 fault"), QSTR("The supply air fan  is jammed;or the motor's insulation breaks down") },
    {124, bit1, D_CAR_1, 1502, D_FAULT_GRADE_2, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("condenserfanfault"), QSTR("The condenser fan is jammed;or the motor's insulation breaks down")},
    {124, bit2, D_CAR_1, 1503, D_FAULT_GRADE_2, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("compressor1 over current protection fault"),QSTR("The compresosr  is jammed;or the motor's insulation breaks down") },
    {124, bit3, D_CAR_1, 1504, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("compressor1 high pressure protection fault"), QSTR("The condenser fan operates abnormally") },
    {124, bit4, D_CAR_1, 1505, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("compressor1 low pressure protection fault"), QSTR("compressor1 low pressure protection fault") },
    {124, bit5, D_CAR_1, 1506, D_FAULT_GRADE_3, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("evapratorfan2 fault"), QSTR("The supply air fan  is jammed;or the motor's insulation breaks down") },
    {124, bit7, D_CAR_1, 1507, D_FAULT_GRADE_2, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("compressor2 over current protectionfault"), QSTR("The compresosr is jammed;or the motor's insulation breaks down") },
    {125, bit0, D_CAR_1, 1508, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("compressor2 high pressure protectonfault"), QSTR("The condenser fan operates abnormally") },
    {125, bit1, D_CAR_1, 1509, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("compressor2 low pressure protection fault"), QSTR("Leak of the refrigerant, or the supply air fan operates abnormally") },
    {125, bit2, D_CAR_1, 1510, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("heater over current protection fault"), QSTR("The heater's insulation breaks down") },
    {125, bit3, D_CAR_1, 1511, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("heater1 over heating protection fault"), QSTR("The supply air fan operates abnormally") },
    {125, bit4, D_CAR_1, 1512, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("heater2 over heating protection fault"), QSTR("The supply air fan operates abnormally") },
    {125, bit5, D_CAR_1, 1513, D_FAULT_GRADE_2, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("fresh air temperature sensor fault"), QSTR("False contact with the air sensor's connecting wire") },
    {125, bit6, D_CAR_1, 1514, D_FAULT_GRADE_2, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("return air temperature sensor fault"), QSTR("False contact with the air sensor's connecting wire") },
    {125, bit7, D_CAR_1, 1515, D_FAULT_GRADE_1, D_DEVICE_HVAC, D_POSITION_MC2, D_DEVICENO_HVAC2,    false, false, QSTR("3-phase power fault"), QSTR("Lost medium voltage or the HVAC supply power circuit breaker  was tripped") },
///TCU FAULTS
    ///mc1msr1
    { 200, bit0, D_CAR_1, 1101, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("line over voltage"), QSTR("1.nonfault.\n2.replace signal board.\n3.replace the line voltage sensor") },
    { 200, bit1, D_CAR_1, 1102, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("charging fault"), QSTR("1.Replace the input fuse.\n2.Check the charging contactor control line.\n3.replace the line voltage sensor") },
    { 200, bit2, D_CAR_1, 1103, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("brake overtake fault"), QSTR("1.Check the brake release signal wiring.\n2.replace signal board.") },
    { 200, bit3, D_CAR_1, 1104, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("cooling fan fault"), QSTR("1.check the air duct.\n2.replace fan current sensor.\n3.replace signal board") },
    { 200, bit4, D_CAR_1, 1105, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("command fault"), QSTR("1.check the command control wrie.\n2.replace signal board.") },
    { 200, bit5, D_CAR_1, 1106, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("line overcurrent"), QSTR("1.check the output current sensor wiring.\n2.the replacement of the input current sensor.\n3.replace signal board") },
    { 200, bit6, D_CAR_1, 1107, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("Overspeed"), QSTR("1.check the speed sensor wiring.\n2.replace signal board.") },
    { 200, bit7, D_CAR_1, 1108, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("chopping overtime"), QSTR("1.Replace the filter capacitor voltage sensor.\n2.Replace the chopper drive board.") },

    { 201, bit0, D_CAR_1, 1109, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("fuse fault"), QSTR("1.Replace the fuse .\n2.Check the wiring FUSE auxiliary contact.\n3.replace signal board") },
    { 201, bit1, D_CAR_1, 1110, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("filter capacitor overvoltage"), QSTR("1.External factors.\n2.Check the brake resistor.\n3.replace signal board.\n4.Replace the filter capacitor voltage sensor.") },
    { 201, bit2, D_CAR_1, 1111, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("filter capacitor lowvoltage"), QSTR("1.External factors.\n2.replace signal board.\n3.Replace the filter capacitor voltage sensor.") },
    { 201, bit3, D_CAR_1, 1112, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("traction motor over current"), QSTR("1.check the output current sensor wiring.\n2.Replace the inverter output current sensor.\n3.replace signal board") },
    { 201, bit4, D_CAR_1, 1113, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("Chopper drive fault"), QSTR("1.recovery after the restart .\n2.Replace the chopper drive board.\n3.replace signal board.") },
    { 201, bit5, D_CAR_1, 1114, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("Inverter drive fault"), QSTR("1.recovery after the restart .\n2.check the output current sensor wiring.\n3.replace signal board") },
    { 201, bit6, D_CAR_1, 1115, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("cooler over heat"), QSTR("1.check the air duct,check  The fan fastening screw not loose.\n2.If the fault persists after cooling，Check the temperature switch wiring whether disconnected.\n3.replace the fan") },
    { 201, bit7, D_CAR_1, 1116, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("inductor over heat"), QSTR("1.If the fault persists after cooling,check the wire whether disconnected.") },

    { 202, bit3, D_CAR_1, 1117, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("filter capacitor overvoltage（hardware）"), QSTR("1.External factors.\n2.Check the brake resistor .\n3.replace signal board.\n4.Replace the filter capacitor voltage sensor.\n5.recovery after the restart ") },
    { 202, bit4, D_CAR_1, 1118, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU1,    false, false, QSTR("line overcurrent(hardware)"), QSTR("1.Replace the DC link current sensor.\n2.replace signal board.\n3.recovery after the restart.") },
///mc1csr2
    { 218, bit0, D_CAR_1, 1101, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("line over voltage"), QSTR("1.nonfault.\n2.replace signal board.\n3.replace the line voltage sensor") },
    { 218, bit1, D_CAR_1, 1102, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("charging fault"), QSTR("1.Replace the input fuse.\n2.Check the charging contactor control line.\n3.replace the line voltage sensor") },
    { 218, bit2, D_CAR_1, 1103, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("brake overtake fault"), QSTR("1.Check the brake release signal wiring.\n2.replace signal board.") },
    { 218, bit3, D_CAR_1, 1104, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("cooling fan fault"), QSTR("1.check the air duct.\n2.replace fan current sensor.\n3.replace signal board") },
    { 218, bit4, D_CAR_1, 1105, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("command fault"), QSTR("1.check the command control wrie.\n2.replace signal board.") },
    { 218, bit5, D_CAR_1, 1106, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("line overcurrent"), QSTR("1.check the output current sensor wiring.\n2.the replacement of the input current sensor.\n3.replace signal board") },
    { 218, bit6, D_CAR_1, 1107, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("Overspeed"), QSTR("1.check the speed sensor wiring.\n2.replace signal board.") },
    { 218, bit7, D_CAR_1, 1108, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("chopping overtime"), QSTR("1.Replace the filter capacitor voltage sensor.\n2.Replace the chopper drive board.") },

    { 219, bit0, D_CAR_1, 1109, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("fuse fault"), QSTR("1.Replace the fuse .\n2.Check the wiring FUSE auxiliary contact.\n3.replace signal board") },
    { 219, bit1, D_CAR_1, 1110, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("filter capacitor overvoltage"), QSTR("1.External factors.\n2.Check the brake resistor.\n3.replace signal board.\n4.Replace the filter capacitor voltage sensor.") },
    { 219, bit2, D_CAR_1, 1111, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("filter capacitor lowvoltage"), QSTR("1.External factors.\n2.replace signal board.\n3.Replace the filter capacitor voltage sensor.") },
    { 219, bit3, D_CAR_1, 1112, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("traction motor over current"), QSTR("1.check the output current sensor wiring.\n2.Replace the inverter output current sensor.\n3.replace signal board") },
    { 219, bit4, D_CAR_1, 1113, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("Chopper drive fault"), QSTR("1.recovery after the restart .\n2.Replace the chopper drive board.\n3.replace signal board.") },
    { 219, bit5, D_CAR_1, 1114, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("Inverter drive fault"), QSTR("1.recovery after the restart .\n2.check the output current sensor wiring.\n3.replace signal board") },
    { 219, bit6, D_CAR_1, 1115, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("cooler over heat"), QSTR("1.check the air duct,check  The fan fastening screw not loose.\n2.If the fault persists after cooling，Check the temperature switch wiring whether disconnected.\n3.replace the fan") },
    { 219, bit7, D_CAR_1, 1116, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("inductor over heat"), QSTR("1.If the fault persists after cooling,check the wire whether disconnected.") },

    { 220, bit3, D_CAR_1, 1117, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("filter capacitor overvoltage（hardware）"), QSTR("1.External factors.\n2.Check the brake resistor .\n3.replace signal board.\n4.Replace the filter capacitor voltage sensor.\n5.recovery after the restart ") },
    { 220, bit4, D_CAR_1, 1118, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC1, D_DEVICENO_TCU2,    false, false, QSTR("line overcurrent(hardware)"), QSTR("1.Replace the DC link current sensor.\n2.replace signal board.\n3.recovery after the restart.") },
    ////mc2msr1
    { 236, bit0, D_CAR_1, 1101, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("line over voltage"), QSTR("1.nonfault.\n2.replace signal board.\n3.replace the line voltage sensor") },
    { 236, bit1, D_CAR_1, 1102, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("charging fault"), QSTR("1.Replace the input fuse.\n2.Check the charging contactor control line.\n3.replace the line voltage sensor") },
    { 236, bit2, D_CAR_1, 1103, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("brake overtake fault"), QSTR("1.Check the brake release signal wiring.\n2.replace signal board.") },
    { 236, bit3, D_CAR_1, 1104, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("cooling fan fault"), QSTR("1.check the air duct.\n2.replace fan current sensor.\n3.replace signal board") },
    { 236, bit4, D_CAR_1, 1105, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("command fault"), QSTR("1.check the command control wrie.\n2.replace signal board.") },
    { 236, bit5, D_CAR_1, 1106, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("line overcurrent"), QSTR("1.check the output current sensor wiring.\n2.the replacement of the input current sensor.\n3.replace signal board") },
    { 236, bit6, D_CAR_1, 1107, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("Overspeed"), QSTR("1.check the speed sensor wiring.\n2.replace signal board.") },
    { 236, bit7, D_CAR_1, 1108, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("chopping overtime"), QSTR("1.Replace the filter capacitor voltage sensor.\n2.Replace the chopper drive board.") },

    { 237, bit0, D_CAR_1, 1109, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("fuse fault"), QSTR("1.Replace the fuse .\n2.Check the wiring FUSE auxiliary contact.\n3.replace signal board") },
    { 237, bit1, D_CAR_1, 1110, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("filter capacitor overvoltage"), QSTR("1.External factors.\n2.Check the brake resistor.\n3.replace signal board.\n4.Replace the filter capacitor voltage sensor.") },
    { 237, bit2, D_CAR_1, 1111, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("filter capacitor lowvoltage"), QSTR("1.External factors.\n2.replace signal board.\n3.Replace the filter capacitor voltage sensor.") },
    { 237, bit3, D_CAR_1, 1112, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("traction motor over current"), QSTR("1.check the output current sensor wiring.\n2.Replace the inverter output current sensor.\n3.replace signal board") },
    { 237, bit4, D_CAR_1, 1113, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("Chopper drive fault"), QSTR("1.recovery after the restart .\n2.Replace the chopper drive board.\n3.replace signal board.") },
    { 237, bit5, D_CAR_1, 1114, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("Inverter drive fault"), QSTR("1.recovery after the restart .\n2.check the output current sensor wiring.\n3.replace signal board") },
    { 237, bit6, D_CAR_1, 1115, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("cooler over heat"), QSTR("1.check the air duct,check  The fan fastening screw not loose.\n2.If the fault persists after cooling，Check the temperature switch wiring whether disconnected.\n3.replace the fan") },
    { 237, bit7, D_CAR_1, 1116, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("inductor over heat"), QSTR("1.If the fault persists after cooling,check the wire whether disconnected.") },

    { 238, bit3, D_CAR_1, 1117, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("filter capacitor overvoltage（hardware）"), QSTR("1.External factors.\n2.Check the brake resistor .\n3.replace signal board.\n4.Replace the filter capacitor voltage sensor.\n5.recovery after the restart ") },
    { 238, bit4, D_CAR_1, 1118, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU1,    false, false, QSTR("line overcurrent(hardware)"), QSTR("1.Replace the DC link current sensor.\n2.replace signal board.\n3.recovery after the restart.") },
    ///mc2msr2
    { 254, bit0, D_CAR_1, 1101, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("line over voltage"), QSTR("1.nonfault.\n2.replace signal board.\n3.replace the line voltage sensor") },
    { 254, bit1, D_CAR_1, 1102, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("charging fault"), QSTR("1.Replace the input fuse.\n2.Check the charging contactor control line.\n3.replace the line voltage sensor") },
    { 254, bit2, D_CAR_1, 1103, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("brake overtake fault"), QSTR("1.Check the brake release signal wiring.\n2.replace signal board.") },
    { 254, bit3, D_CAR_1, 1104, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("cooling fan fault"), QSTR("1.check the air duct.\n2.replace fan current sensor.\n3.replace signal board") },
    { 254, bit4, D_CAR_1, 1105, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("command fault"), QSTR("1.check the command control wrie.\n2.replace signal board.") },
    { 254, bit5, D_CAR_1, 1106, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("line overcurrent"), QSTR("1.check the output current sensor wiring.\n2.the replacement of the input current sensor.\n3.replace signal board") },
    { 254, bit6, D_CAR_1, 1107, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("Overspeed"), QSTR("1.check the speed sensor wiring.\n2.replace signal board.") },
    { 254, bit7, D_CAR_1, 1108, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("chopping overtime"), QSTR("1.Replace the filter capacitor voltage sensor.\n2.Replace the chopper drive board.") },

    { 255, bit0, D_CAR_1, 1109, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("fuse fault"), QSTR("1.Replace the fuse .\n2.Check the wiring FUSE auxiliary contact.\n3.replace signal board") },
    { 255, bit1, D_CAR_1, 1110, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("filter capacitor overvoltage"), QSTR("1.External factors.\n2.Check the brake resistor.\n3.replace signal board.\n4.Replace the filter capacitor voltage sensor.") },
    { 255, bit2, D_CAR_1, 1111, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("filter capacitor lowvoltage"), QSTR("1.External factors.\n2.replace signal board.\n3.Replace the filter capacitor voltage sensor.") },
    { 255, bit3, D_CAR_1, 1112, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("traction motor over current"), QSTR("1.check the output current sensor wiring.\n2.Replace the inverter output current sensor.\n3.replace signal board") },
    { 255, bit4, D_CAR_1, 1113, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("Chopper drive fault"), QSTR("1.recovery after the restart .\n2.Replace the chopper drive board.\n3.replace signal board.") },
    { 255, bit5, D_CAR_1, 1114, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("Inverter drive fault"), QSTR("1.recovery after the restart .\n2.check the output current sensor wiring.\n3.replace signal board") },
    { 255, bit6, D_CAR_1, 1115, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("cooler over heat"), QSTR("1.check the air duct,check  The fan fastening screw not loose.\n2.If the fault persists after cooling，Check the temperature switch wiring whether disconnected.\n3.replace the fan") },
    { 255, bit7, D_CAR_1, 1116, D_FAULT_GRADE_2,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("inductor over heat"), QSTR("1.If the fault persists after cooling,check the wire whether disconnected.") },

    { 256, bit3, D_CAR_1, 1117, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("filter capacitor overvoltage（hardware）"), QSTR("1.External factors.\n2.Check the brake resistor .\n3.replace signal board.\n4.Replace the filter capacitor voltage sensor.\n5.recovery after the restart ") },
    { 256, bit4, D_CAR_1, 1118, D_FAULT_GRADE_1,  D_DEVICE_TCU, D_POSITION_MC2, D_DEVICENO_TCU2,    false, false, QSTR("line overcurrent(hardware)"), QSTR("1.Replace the DC link current sensor.\n2.replace signal board.\n3.recovery after the restart.") },
////ACU FAULTS LIST
    //acu1
    { 152, bit0, D_CAR_1, 1301, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("line voltage overvoltage"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 152, bit1, D_CAR_1, 1302, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("The phase overvoltage"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 152, bit2, D_CAR_1, 1303, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("Bus overvoltage"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 152, bit4, D_CAR_1, 1304, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("Driver board fault"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },

    { 154, bit0, D_CAR_1, 1305, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("bus voltage serious overvoltage"),QSTR("1.Can be restored after a restart.") },
    { 154, bit1, D_CAR_1, 1306, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("The radiator over temperature"),QSTR("1.Can automatically recover, but need to confirm duct is blocked, and ensure the cooling fan is working properly.\n2.If the fault still can not be removed after the temperature falls , check the wiring is disconnected, replace the temperature relay.") },
    { 154, bit2, D_CAR_1, 1307, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("The software overcurrent"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 154, bit3, D_CAR_1, 1308, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("Common output overvoltage"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 154, bit4, D_CAR_1, 1309, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("Serious output overvoltage"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 154, bit5, D_CAR_1, 1310, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("transformer over temperature"),QSTR("1.Can automatic recovery, but need to confirm duct is blocked, ensure the cooling fan is working properly.\n2.If the fault still can not be removed after the temperature falls , check the wiring is disconnected, replace the temperature relay.") },
    { 155, bit0, D_CAR_1, 1311, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("2 times overload"),QSTR("1.Observation three voltage or current sampling value, replace the voltage or current sensor fault.\n2.Removal of part of the load.") },
    { 155, bit2, D_CAR_1, 1312, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("The lacking phase"),QSTR("1.Can automatic recovery, but need to confirm duct is blocked, ensure the cooling fan is working properly.\n2.If the fault still can not be removed after the temperature falls , check the wiring is disconnected, replace the temperature relay.") },

    { 164, bit0, D_CAR_1, 1313, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("The charging contactor fault"),QSTR("1.Replace the input diode or fuse.\n2.Check the KM2 control power line.\n3.Replace the bus voltage sensor TV2.") },
    { 164, bit0, D_CAR_1, 1314, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("The main contactor fault"),QSTR("1.Check the control line, feedback line.\n2.Replace the signal board.") },
    { 164, bit0, D_CAR_1, 1315, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("bus voltages undervoltage"),QSTR("1.The external factors.\n2.Replace the vehicle auxiliary input fuse.\n3.Replace the input diode D1.\n4Replace the grid voltage sensor TV1.") },
    { 164, bit0, D_CAR_1, 1316, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("bus voltage overvoltage"),QSTR("1.The external factors.\n2.Check the vehicle braking resistor.\n3.Replace the signal board XHB1.\n4Replace the voltage sensor TV2.") },
    { 164, bit0, D_CAR_1, 1317, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("bus voltagesovervoltage（hardware）"),QSTR("1.The external factors.\n2.Check the vehicle braking resistor.\n3.Replace the signal board XHB1.\n4Replace the voltage sensor TV2.") },
    { 164, bit0, D_CAR_1, 1318, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("the grid voltage overvoltage"),QSTR("1.Non fault.\n2.Replace the signal board XHB1.\n3.Replace the voltage sensor TV1.") },
    { 164, bit0, D_CAR_1, 1319, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("Fan current U phase overcurrent"),QSTR("1.Check whether the air duct blockage.") },
    { 164, bit0, D_CAR_1, 1320, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("bus voltage serious overvoltage"),QSTR("1.Check whether the air duct blockage.") },

    { 165, bit0, D_CAR_1, 1321, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("Charger over temperature"),QSTR("1.Automatic recovery, but need to confirm whether the air duct blockage, whether to meet the cooling requirements.\n2.If the fault temperature after cooling still can not be removed, check the wiring is disconnected, replace  temperature relay.") },
    { 165, bit1, D_CAR_1, 1322, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("Fan over temperature"),QSTR("1.Automatic recovery, but need to check the air duct is blocked, confirm the fan fastening screw not loose.\n2.If the fault temperature after cooling still can not be removed, check the wiring is disconnected,replace the fan.") },
    { 165, bit2, D_CAR_1, 1323, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("Driver board fault"),QSTR("1.After the restart recovery.\n2.The drive plate's own fault .") },
    { 165, bit5, D_CAR_1, 1324, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("The input fuse fault"),QSTR("1.Replace the FUSE2.\n2.Check the wiring FUSE2 auxiliary contact.\n3.Replace the signal board.") },
    { 165, bit6, D_CAR_1, 1325, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("The output fuse fault"),QSTR("1.Replace the FUSE4.\n2.Check the wiring FUSE4 auxiliary contact.\n3.Replace the signal board.") },

    { 166, bit0, D_CAR_1, 1326, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("The primary side current overcurrent of transformer"),QSTR("1.Can be restored after a restart.") },
    { 166, bit1, D_CAR_1, 1327, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("The primary side current overcurrent of transformer（hardware）"),QSTR("1.Can be restored after a restart.") },
    { 166, bit2, D_CAR_1, 1328, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("The charging current overcurrent"),QSTR("1.Confirm the charging current protection is set to the right value.\n2.Replace the signal board or current sensor.") },
    { 166, bit3, D_CAR_1, 1329, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("total current overcurrent"),QSTR("1.Confirm the charging current protection is set to the right value.\n2.Replace the signal board or current sensor.") },
    { 166, bit4, D_CAR_1, 1330, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("output voltage overvoltage"),QSTR("1.Can be restored after a restart.\n2.Confirm the output voltage protection value is set to the right value.\n3.Replace the signal board.") },
    { 166, bit5, D_CAR_1, 1331, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("output voltage overvoltage（hardware）"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 166, bit7, D_CAR_1, 1332, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MC1, D_DEVICENO_ACU1,    false, false, QSTR("output short circuit fault"),QSTR("1.Within three times，automatic recovery,More than three times，Need to restart.") },
///acu2
    { 174, bit0, D_CAR_1, 1301, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("line voltage overvoltage"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 174, bit1, D_CAR_1, 1302, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("The phase overvoltage"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 174, bit2, D_CAR_1, 1303, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("Bus overvoltage"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 174, bit4, D_CAR_1, 1304, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("Driver board fault"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },

    { 176, bit0, D_CAR_1, 1305, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("bus voltage serious overvoltage"),QSTR("1.Can be restored after a restart.") },
    { 176, bit1, D_CAR_1, 1306, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("The radiator over temperature"),QSTR("1.Can automatically recover, but need to confirm duct is blocked, and ensure the cooling fan is working properly.\n2.If the fault still can not be removed after the temperature falls , check the wiring is disconnected, replace the temperature relay.") },
    { 176, bit2, D_CAR_1, 1307, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("The software overcurrent"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 176, bit3, D_CAR_1, 1308, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("Common output overvoltage"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 176, bit4, D_CAR_1, 1309, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("Serious output overvoltage"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 176, bit5, D_CAR_1, 1310, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("transformer over temperature"),QSTR("1.Can automatic recovery, but need to confirm duct is blocked, ensure the cooling fan is working properly.\n2.If the fault still can not be removed after the temperature falls , check the wiring is disconnected, replace the temperature relay.") },
    { 177, bit0, D_CAR_1, 1311, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("2 times overload"),QSTR("1.Observation three voltage or current sampling value, replace the voltage or current sensor fault.\n2.Removal of part of the load.") },
    { 177, bit2, D_CAR_1, 1312, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("The lacking phase"),QSTR("1.Can automatic recovery, but need to confirm duct is blocked, ensure the cooling fan is working properly.\n2.If the fault still can not be removed after the temperature falls , check the wiring is disconnected, replace the temperature relay.") },

    { 186, bit0, D_CAR_1, 1313, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("The charging contactor fault"),QSTR("1.Replace the input diode or fuse.\n2.Check the KM2 control power line.\n3.Replace the bus voltage sensor TV2.") },
    { 186, bit0, D_CAR_1, 1314, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("The main contactor fault"),QSTR("1.Check the control line, feedback line.\n2.Replace the signal board.") },
    { 186, bit0, D_CAR_1, 1315, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("bus voltages undervoltage"),QSTR("1.The external factors.\n2.Replace the vehicle auxiliary input fuse.\n3.Replace the input diode D1.\n4Replace the grid voltage sensor TV1.") },
    { 186, bit0, D_CAR_1, 1316, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("bus voltage overvoltage"),QSTR("1.The external factors.\n2.Check the vehicle braking resistor.\n3.Replace the signal board XHB1.\n4Replace the voltage sensor TV2.") },
    { 186, bit0, D_CAR_1, 1317, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("bus voltagesovervoltage（hardware）"),QSTR("1.The external factors.\n2.Check the vehicle braking resistor.\n3.Replace the signal board XHB1.\n4Replace the voltage sensor TV2.") },
    { 186, bit0, D_CAR_1, 1318, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("the grid voltage overvoltage"),QSTR("1.Non fault.\n2.Replace the signal board XHB1.\n3.Replace the voltage sensor TV1.") },
    { 186, bit0, D_CAR_1, 1319, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("Fan current U phase overcurrent"),QSTR("1.Check whether the air duct blockage.") },
    { 186, bit0, D_CAR_1, 1320, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("bus voltage serious overvoltage"),QSTR("1.Check whether the air duct blockage.") },

    { 187, bit0, D_CAR_1, 1321, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("Charger over temperature"),QSTR("1.Automatic recovery, but need to confirm whether the air duct blockage, whether to meet the cooling requirements.\n2.If the fault temperature after cooling still can not be removed, check the wiring is disconnected, replace  temperature relay.") },
    { 187, bit1, D_CAR_1, 1322, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("Fan over temperature"),QSTR("1.Automatic recovery, but need to check the air duct is blocked, confirm the fan fastening screw not loose.\n2.If the fault temperature after cooling still can not be removed, check the wiring is disconnected,replace the fan.") },
    { 187, bit2, D_CAR_1, 1323, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("Driver board fault"),QSTR("1.After the restart recovery.\n2.The drive plate's own fault .") },
    { 187, bit5, D_CAR_1, 1324, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("The input fuse fault"),QSTR("1.Replace the FUSE2.\n2.Check the wiring FUSE2 auxiliary contact.\n3.Replace the signal board.") },
    { 187, bit6, D_CAR_1, 1325, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("The output fuse fault"),QSTR("1.Replace the FUSE4.\n2.Check the wiring FUSE4 auxiliary contact.\n3.Replace the signal board.") },

    { 188, bit0, D_CAR_1, 1326, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("The primary side current overcurrent of transformer"),QSTR("1.Can be restored after a restart.") },
    { 188, bit1, D_CAR_1, 1327, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("The primary side current overcurrent of transformer（hardware）"),QSTR("1.Can be restored after a restart.") },
    { 188, bit2, D_CAR_1, 1328, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("The charging current overcurrent"),QSTR("1.Confirm the charging current protection is set to the right value.\n2.Replace the signal board or current sensor.") },
    { 188, bit3, D_CAR_1, 1329, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("total current overcurrent"),QSTR("1.Confirm the charging current protection is set to the right value.\n2.Replace the signal board or current sensor.") },
    { 188, bit4, D_CAR_1, 1330, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("output voltage overvoltage"),QSTR("1.Can be restored after a restart.\n2.Confirm the output voltage protection value is set to the right value.\n3.Replace the signal board.") },
    { 188, bit5, D_CAR_1, 1331, D_FAULT_GRADE_1,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("output voltage overvoltage（hardware）"),QSTR("1.Can be restored after a restart.\n2.Replace the signal board.") },
    { 188, bit7, D_CAR_1, 1332, D_FAULT_GRADE_2,  D_DEVICE_ACU, D_POSITION_MC2, D_DEVICENO_ACU2,    false, false, QSTR("output short circuit fault"),QSTR("1.Within three times，automatic recovery,More than three times，Need to restart.") },
////bcu faults list
    { 52, bit0, D_CAR_1, 1201, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_MB04_01_SYS"),QSTR("1.Check all boards on correct installation.\n2.Change board MB04B.\n3.Software update by Knorr-bremse.") },
    { 52, bit1, D_CAR_1, 1202, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_EB01_02_SYS"),QSTR("1.Check all boards on correct installation.\n2.Change board EB01A.") },
    { 52, bit2, D_CAR_1, 1203, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_MB04_01_CODING"),QSTR("1.Check coding and parity.") },
    { 52, bit3, D_CAR_1, 1204, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_EB01_02_CODING"),QSTR("1.Check coding and parity.") },
    { 52, bit4, D_CAR_1, 1205, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_MB04_01_EEP"),QSTR("1.Switch BCU off and on.") },
    { 52, bit5, D_CAR_1, 1206, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_CB02_28_SYS"),QSTR("1.Exchange the CB02B board.") },
    { 52, bit6, D_CAR_1, 1207, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_CB02_28_CODING"),QSTR("1.Check coding and parity.") },
    { 52, bit7, D_CAR_1, 1208, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_BKK_DATA"),QSTR("1.Unplug and plug CB02B; Change CB02B.") },

    { 53, bit0, D_CAR_1, 1209, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_BKK_ERROR"),QSTR("1.Unplug and plug CB02B; Change CB02B.") },
    { 53, bit1, D_CAR_1, 1210, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_BKK_OPERATIONAL"),QSTR("1.Check CANopen bus; Check CB02B.") },
    { 53, bit2, D_CAR_1, 1211, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_BKK_RPDO1"),QSTR("1.Check CANopen bus; Check CB02BB.") },
    { 53, bit3, D_CAR_1, 1212, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_BKK_RPDO2"),QSTR("1.Check CANopen bus; Check CB02B.") },
    { 53, bit4, D_CAR_1, 1213, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_OPEN_AS_VALVE"),QSTR("1.Test wiring between BCU to AS-Valve of open circuit.") },
    { 53, bit5, D_CAR_1, 1214, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_SHORT_AS_VALVE"),QSTR("1.Test wiring between BCU to AS-Valve of short cut.") },
    { 53, bit6, D_CAR_1, 1215, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_OPEN_AT_VALVE"),QSTR("1.Test wiring between BCU to AT-Valve of open circuit.") },
    { 53, bit7, D_CAR_1, 1216, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_SHORT_AT_VALVE"),QSTR("1.Test wiring between BCU to AT-Valve of short cut.") },

    { 54, bit0, D_CAR_1, 1217, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_OPEN_PUMP"),QSTR("1.Test wiring between BCU to PSM of open circuit.") },
    { 54, bit1, D_CAR_1, 1218, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_SHORT_PUMP"),QSTR("1.Test wiring between BCU to PSM of short cut..") },
    { 54, bit2, D_CAR_1, 1219, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_CUTOFF_PUMP"),QSTR("1.Test wiring between BCU and PSM; change MB04B.") },
    { 54, bit3, D_CAR_1, 1220, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_CUTOFF_VALVES"),QSTR("1.Test wiring between BCU and AS/AT-Valve; change MB04B.") },
    { 54, bit4, D_CAR_1, 1221, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_RO_MINOR_EVENT"),QSTR("1.Exchange the EB01A board.") },
    { 54, bit5, D_CAR_1, 1222, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_RO_MAJOR_EVENT"),QSTR("1.Exchange the EB01A board.") },
    { 54, bit6, D_CAR_1, 1223, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_RO_BRAKE_RELEASED"),QSTR("1.Exchange the EB01A board.") },
    { 54, bit7, D_CAR_1, 1224, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_ASI_C_PRESSURE"),QSTR("1.Check brake pressure sensor.") },

    { 55, bit0, D_CAR_1, 1225, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_ASI_R_PRESSURE"),QSTR("1.Check brake pressure sensor.\n2.Check wiring.") },
    { 55, bit1, D_CAR_1, 1226, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_ASI_LOAD_TC_1"),QSTR("1.Check load sensor.") },
    { 55, bit2, D_CAR_1, 1227, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_ASI_LOAD_TC_2"),QSTR("1.Check load sensor.") },
    { 55, bit3, D_CAR_1, 1228, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_AC1_DEVIATION"),QSTR("1.Check analog converter (AS/AT Valve).\n2.change MB04B if applicable.") },
    { 55, bit4, D_CAR_1, 1229, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_AC1_OFFSET"),QSTR("1.Check analog converter (AS/AT Valve).\n2.Check brake pressure sensor.\n3.Change MB04B if applicable") },
    { 55, bit5, D_CAR_1, 1230, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_AC1_LEAKAGE"),QSTR("1.Check AS/AT valve.\n2.Check free wheeling diode.") },
    { 55, bit6, D_CAR_1, 1231, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_AC1_PREVOLTAGES"),QSTR("1.Check analog converter (AS/AT valve).\n2.Check brake pressure sensor.") },
    { 55, bit7, D_CAR_1, 1232, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_AC1_ABORT_CALIBRATION"),QSTR("1.Check preconditions for calibration function controller learning (refer to TA40281/614).") },

    { 56, bit0, D_CAR_1, 1233, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_BS_LIMIT1"),QSTR("1.Check hydraulic sysem of leakage.\n2.Check reservoir pressure sensor.") },
    { 56, bit1, D_CAR_1, 1234, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_BS_LIMIT2"),QSTR("1.Check hydraulic sysem of leakage.\n2.Check reservoir pressure sensor.") },
    { 56, bit2, D_CAR_1, 1235, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_WARNING_PUMP"),QSTR("1.Check pump motor and PSM, also other event messages should be checked.") },
    { 56, bit3, D_CAR_1, 1236, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_ERROR_PUMP"),QSTR("1.Check pump motor and PSM, also other event messages should be checked.") },
    { 56, bit4, D_CAR_1, 1237, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_ERROR_PSM"),QSTR("1.check PSM") },
    { 56, bit5, D_CAR_1, 1238, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_SAFETY_BRAKE_TC"),QSTR("1.Check safety brake valve and wiring.\n2.Check safety loop.") },
    { 56, bit6, D_CAR_1, 1239, D_FAULT_GRADE_2,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_70_WSP"),QSTR("1.Check all speed sensors and their cabling; check further event messages.") },
    { 56, bit7, D_CAR_1, 1240, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_FSI_1_WSP"),QSTR("1.Check speed sensor V1 with wiring.") },

    { 57, bit0, D_CAR_1, 1241, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_FSI_2_WSP"),QSTR("1.Check speed sensor V2 with wiring.") },
    { 57, bit1, D_CAR_1, 1242, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_FSI_3_WSP"),QSTR("1.Check speed sensor V3 with wiring.") },
    { 57, bit2, D_CAR_1, 1243, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_FSI_4_WSP"),QSTR("1.Check speed sensor V4 with wiring.") },
    { 57, bit3, D_CAR_1, 1244, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_DV_1_WSP"),QSTR("1.Check speed sensor.\n2.Reset only possible if V > 3km/h.") },
    { 57, bit4, D_CAR_1, 1245, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_DV_2_WSP"),QSTR("1.Check speed sensor.\n2.Reset only possible if V > 3km/h.") },
    { 57, bit5, D_CAR_1, 1246, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_DV_3_WSP"),QSTR("1.Check speed sensor.\n2.Reset only possible if V > 3km/h.") },
    { 57, bit6, D_CAR_1, 1247, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_DV_4_WSP"),QSTR("1.Check speed sensor.\n2.Reset only possible if V > 3km/h.") },
    { 57, bit7, D_CAR_1, 1248, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_Plaus_ED_Signal"),QSTR("1.Check calculation of vehicle number.\n2.Check ED brake signals.\n3.Check CANopen communication.") },

    { 58, bit0, D_CAR_1, 1249, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_SerBr_Signal"),QSTR("1.Check CANopen communication.") },
    { 58, bit1, D_CAR_1, 1250, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_EmgBr_Signal"),QSTR("1.Check CANopen communication.") },
    { 58, bit2, D_CAR_1, 1251, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_Driving_Signal"),QSTR("1.Check CANopen communication.") },
    { 58, bit3, D_CAR_1, 1252, D_FAULT_GRADE_1,  D_DEVICE_BCU, D_POSITION_T, D_DEVICENO_BCU,    false, false, QSTR("DIA_SafetyBr_Signal"),QSTR("1.Check CANopen communication.") },
///pis faults list
    { 130, bit0, D_CAR_1, 1601, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC1, D_DEVICENO_PIS1,    false, false, QSTR("STD device 1 error"),
      QSTR("1.Check the related indicator in ACU’s “KAT-NVR”  module.\n2.Check the DC 12V  power  input.\n3.Check the cable to ACU “RS232”  and “VGA” interface.\n  4.Reset the ACU’s power.\n5.Replace the STD.") },
    { 130, bit1, D_CAR_1, 1601, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC2, D_DEVICENO_PIS2,    false, false, QSTR("STD device 2 error"),
      QSTR("1.Check the related indicator in ACU’s “KAT-NVR”  module.\n2.Check the DC 12V  power  input.\n3.Check the cable to ACU “RS232”  and “VGA” interface.\n  4.Reset the ACU’s power.\n5.Replace the STD.") },

    { 130, bit3, D_CAR_1, 1602, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC1, D_DEVICENO_PIS1,    false, false, QSTR("IP camera1 error"),
      QSTR("1.Check the cable to ACU’s “KAT-SWITCH” module .\n2.Check its IP Address by “ping” command .\n3.Replace the camera.") },
    { 130, bit4, D_CAR_1, 1602, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC1, D_DEVICENO_PIS1,    false, false, QSTR("IP camera2 error"),
      QSTR("1.Check the cable to ACU’s “KAT-SWITCH” module .\n2.Check its IP Address by “ping” command .\n3.Replace the camera.") },
    { 130, bit5, D_CAR_1, 1602, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC1, D_DEVICENO_PIS1,    false, false, QSTR("IP camera3 error"),
      QSTR("1.Check the cable to ACU’s “KAT-SWITCH” module .\n2.Check its IP Address by “ping” command .\n3.Replace the camera.") },
    { 130, bit6, D_CAR_1, 1602, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC1, D_DEVICENO_PIS1,    false, false, QSTR("IP camera4 error"),
      QSTR("1.Check the cable to ACU’s “KAT-SWITCH” module .\n2.Check its IP Address by “ping” command .\n3.Replace the camera.") },
    { 130, bit7, D_CAR_1, 1602, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC2, D_DEVICENO_PIS2,    false, false, QSTR("IP camera5 error"),
      QSTR("1.Check the cable to ACU’s “KAT-SWITCH” module .\n2.Check its IP Address by “ping” command .\n3.Replace the camera.") },
    { 131, bit0, D_CAR_1, 1602, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC2, D_DEVICENO_PIS2,    false, false, QSTR("IP camera6 error"),
      QSTR("1.Check the cable to ACU’s “KAT-SWITCH” module .\n2.Check its IP Address by “ping” command .\n3.Replace the camera.") },
    { 131, bit1, D_CAR_1, 1602, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC2, D_DEVICENO_PIS2,    false, false, QSTR("IP camera7 error"),
      QSTR("1.Check the cable to ACU’s “KAT-SWITCH” module .\n2.Check its IP Address by “ping” command .\n3.Replace the camera.") },
    { 131, bit2, D_CAR_1, 1602, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC2, D_DEVICENO_PIS2,    false, false, QSTR("IP camera8 error"),
      QSTR("1.Check the cable to ACU’s “KAT-SWITCH” module .\n2.Check its IP Address by “ping” command .\n3.Replace the camera.") },

    { 131, bit4, D_CAR_1, 1603, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC1, D_DEVICENO_PIS1,    false, false, QSTR("DACU In MC1 error"),
      QSTR("1.Check the cable to ACU “KAT-SWITCH” module.\n2.Check the DC 24V power input.\n3.Check if the “X4” interface is connected.\n4.Replace the DACU") },
    { 131, bit5, D_CAR_1, 1603, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC2, D_DEVICENO_PIS2,    false, false, QSTR("DACU In MC2 error"),
      QSTR("1.Check the cable to ACU “KAT-SWITCH” module.\n2.Check the DC 24V power input.\n3.Check if the “X4” interface is connected.\n4.Replace the DACU") },
    { 131, bit6, D_CAR_1, 1605, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC1, D_DEVICENO_PIS1,    false, false, QSTR("ACU In MC1 error"),
      QSTR("1.Reset the operating system, and enter BIOS setup by press “F10” of keyboard, check the  starting up order of operating system,the first item should seems to “Kinston harddisk.\n2.Check ACU’s NVR module,make sure the data cable between  the NVR module and HDD module is connected correctly.\n3.Replace the NVR module and try again after setting IP address") },
    { 131, bit7, D_CAR_1, 1605, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC2, D_DEVICENO_PIS2,    false, false, QSTR("ACU In MC2 error"),
      QSTR("1.Reset the operating system, and enter BIOS setup by press “F10” of keyboard, check the  starting up order of operating system,the first item should seems to “Kinston harddisk.\n2.Check ACU’s NVR module,make sure the data cable between  the NVR module and HDD module is connected correctly.\n3.Replace the NVR module and try again after setting IP address") },

    { 132, bit0, D_CAR_1, 1606, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC1, D_DEVICENO_PIS1,    false, false, QSTR("LED Device 1 Fail"),
      QSTR("1.Check the related indicator in ACU’s “KAT-CPU”  module.\n2.Check the cable to ACU’s “KAT-CPU”  module.\n3.Check the DC 24V power input.\n4.Replace the LED.") },
    { 132, bit1, D_CAR_1, 1606, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC1, D_DEVICENO_PIS1,    false, false, QSTR("LED Device 2 Fail"),
      QSTR("1.Check the related indicator in ACU’s “KAT-CPU”  module.\n2.Check the cable to ACU’s “KAT-CPU”  module.\n3.Check the DC 24V power input.\n4.Replace the LED.") },
    { 132, bit2, D_CAR_1, 1606, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC2, D_DEVICENO_PIS2,    false, false, QSTR("LED Device 3 Fail"),
      QSTR("1.Check the related indicator in ACU’s “KAT-CPU”  module.\n2.Check the cable to ACU’s “KAT-CPU”  module.\n3.Check the DC 24V power input.\n4.Replace the LED.") },
    { 132, bit3, D_CAR_1, 1606, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC2, D_DEVICENO_PIS2,    false, false, QSTR("LED Device 4 Fail"),
      QSTR("1.Check the related indicator in ACU’s “KAT-CPU”  module.\n2.Check the cable to ACU’s “KAT-CPU”  module.\n3.Check the DC 24V power input.\n4.Replace the LED.") },

    { 132, bit4, D_CAR_1, 1607, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC1, D_DEVICENO_PIS1,    false, false, QSTR("PECU 1 Fail"),
      QSTR("1.Check the cable to ACU’s “KAT-CPU”  module.\n2.Check the DIP switches in CPU module, it should be “1” in Mc1 car and “2” in Mc2 car.\n3.Check the IP address in ACU’s  operating system.\n4.Replace the PECU.") },
    { 132, bit5, D_CAR_1, 1607, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC1, D_DEVICENO_PIS1,    false, false, QSTR("PECU 2 Fail"),
      QSTR("1.Check the cable to ACU’s “KAT-CPU”  module.\n2.Check the DIP switches in CPU module, it should be “1” in Mc1 car and “2” in Mc2 car.\n3.Check the IP address in ACU’s  operating system.\n4.Replace the PECU.") },
    { 132, bit6, D_CAR_1, 1607, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC2, D_DEVICENO_PIS2,    false, false, QSTR("PECU 3 Fail"),
      QSTR("1.Check the cable to ACU’s “KAT-CPU”  module.\n2.Check the DIP switches in CPU module, it should be “1” in Mc1 car and “2” in Mc2 car.\n3.Check the IP address in ACU’s  operating system.\n4.Replace the PECU.") },
    { 132, bit7, D_CAR_1, 1607, D_FAULT_GRADE_1,  D_DEVICE_PIS, D_POSITION_MC2, D_DEVICENO_PIS2,    false, false, QSTR("PECU 4 Fail"),
      QSTR("1.Check the cable to ACU’s “KAT-CPU”  module.\n2.Check the DIP switches in CPU module, it should be “1” in Mc1 car and “2” in Mc2 car.\n3.Check the IP address in ACU’s  operating system.\n4.Replace the PECU.") },

};

int g_faultsRomLen = sizeof(g_faultsrom)/sizeof(FAULTS_ROM_DATA);

bool FaultsVerdict(FAULTS_ROM_DATA *pdata)
{
    if ( ((pdata->code >= 1) && (pdata->code <= 21))
        || (((pdata->code >= 31) && (pdata->code <= 53))&&MAIN_TRAINCOUPLED_BOOL ))
    {
        if (0 == (receiveData[pdata->offset] & pdata->bit))
        {
            if( (MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL)) || (MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL)) ) // MC1 HMI || MC2 HMI
            {
                return true;
            }
            else // unknow whitch side
            {
                return false;
            }
        }
    }
    else
    {
        if (0 != (receiveData[pdata->offset] & pdata->bit))
        {
            return true;
        }

    }

    return false;
}
// 20110118 zlb modify (0 == CAR1_NET_RIOMONLINESTATE_BOOL)->!(CAR1_NET_RIOMONLINESTATE_BOOL)
bool CheckDeviceOnline(FAULTS_ROM_DATA *pdata)
{
    if (D_CAR_1 == pdata->car)
    {
        if ((D_DEVICENO_RIOM1 == pdata->deviceNo) && !(NET_MC1_RIOMONLINESTATE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_RIOM2 == pdata->deviceNo) && !(NET_MC2_RIOMONLINESTATE_BOOL))
        {
             return false;
        }
//        else if ((D_DEVICENO_TCU1 == pdata->deviceNo) && !(NET_MC1_TCUONLINE_BOOL))
//        {
//            return false;

//        }
//        else if ((D_DEVICENO_TCU2 == pdata->deviceNo) && !(NET_MC2_TCUONLINE_BOOL))
//        {
//            return false;

//        }
        else if ((D_DEVICENO_ACU1 == pdata->deviceNo) && !(NET_MC1_ACUONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_ACU2 == pdata->deviceNo) && !(NET_MC2_ACUONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_HVAC1 == pdata->deviceNo) && !(NET_MC1_HVACONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_HVAC2 == pdata->deviceNo) && !(NET_MC2_HVACONLINE_BOOL))
        {
            return false;

        }
        else if ((D_DEVICENO_DOOR1 == pdata->deviceNo) && !(NET_MC1_DOOR1ONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_DOOR2 == pdata->deviceNo) && !(NET_MC1_DOOR2ONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_DOOR3 == pdata->deviceNo) && !(NET_MC1_DOOR3ONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_DOOR4 == pdata->deviceNo) && !(NET_MC1_DOOR4ONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_DOOR5 == pdata->deviceNo) && !(NET_MC2_DOOR5ONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_DOOR6 == pdata->deviceNo) && !(NET_MC2_DOOR6ONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_DOOR7 == pdata->deviceNo) && !(NET_MC2_DOOR7ONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_DOOR8 == pdata->deviceNo) && !(NET_MC2_DOOR8ONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_PIS1 == pdata->deviceNo) && !(NET_PISONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_PIS2 == pdata->deviceNo) && !(NET_PISONLINE2_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_DCDC1 == pdata->deviceNo) && !(NET_MC1_DCDCONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_DCDC2 == pdata->deviceNo) && !(NET_MC2_DCDCONLINE_BOOL))
        {
            return false;
        }
        else if ((D_DEVICENO_BCU == pdata->deviceNo) && !(NET_BCUONLINE_BOOL))
        {
            return false;

        }

    }

    return true;

}

bool SkipScanning(FAULTS_ROM_DATA *pdata)
{
    ASSERT(NULL != pdata);
    if (D_CAR_1 != pdata->car)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int GetTrainFaultsReturnValue(int code)
{
    int ret = 0;
    switch (code)
    {
    case 15:
        ret = D_FAULTS_SCANNING_CODE15;
        break;
    case 17:
        ret = D_FAULTS_SCANNING_CODE17;
        break;
    case 18:
        ret = D_FAULTS_SCANNING_CODE18;
        break;
    case 19:
        ret = D_FAULTS_SCANNING_CODE19;
        break;
    case 21:
        ret = D_FAULTS_SCANNING_CODE21;
        break;
    case 22:
        ret = D_FAULTS_SCANNING_CODE22;
        break;
    case 24:
        ret = D_FAULTS_SCANNING_CODE24;
        break;
    case 25:
        ret = D_FAULTS_SCANNING_CODE25;
        break;
    case 26:
        ret = D_FAULTS_SCANNING_CODE26;
        break;
    case 27:
        ret = D_FAULTS_SCANNING_CODE27;
        break;
    case 28:
        ret = D_FAULTS_SCANNING_CODE28;
        break;
    case 29:
        ret = D_FAULTS_SCANNING_CODE29;
        break;
    default:
        break;
    }

    return ret;
}

int FaultsScanning()
{
    int ret = 0;
    if (!g_communication_ok_flag)
    {
        return ret;
    }
    int i;
    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    bool found = false;
    int unconfirmed_count = 0;

    for (i = 0; i < g_faultsRomLen; i ++)
    {
        if (FaultsVerdict(pdata))
        {
            if( CheckDeviceOnline(pdata) )
            {
                if (pdata->flg)
                {   // already exist
                    // leave it alone

                    // shift the position in history-list in order to make
                    // the current-existing faults always on top of the stack
                    // HistoryListCollation(i);
                }
                else
                {   // a new fault occur
                    if (!AntiShakingProcess(i, true))
                    {
                        pdata++;
                        continue;
                    }

                    pdata->flg = true;
                    pdata->confirm = false;
                    QDateTime datetime = QDateTime::currentDateTime();

                    // 20111031 zlbzeb modify, remove "000000..." begin
                    if( datetime.date().year() < 1 ) continue;
                    // 20111031 zlbzeb modify, remove "000000..." end

                    // create a fault record
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime.year = datetime.date().year();
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime.month = datetime.date().month();
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime.day = datetime.date().day();
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime.hour = datetime.time().hour();
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime.minute = datetime.time().minute();
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime.second = datetime.time().second();
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].romIdx = i;

                    if (D_CAR_1 == pdata->car)
                    {
                        g_historyFaultsList.list[g_historyFaultsList.curIdx].carID = g_car1IDUint16;
                    }
                    else
                    {
                        // impossible
                    }

//                    if(g_login_type == ENUM_LOGIN_TYPE_DRIVER)
//                    {
//                        g_historyFaultsList.list[g_historyFaultsList.curIdx].nIDType = ENUM_LOGIN_TYPE_DRIVER;
//                    }
//                    else if(g_login_type == ENUM_LOGIN_TYPE_MAINTAINER)
//                    {
//                        g_historyFaultsList.list[g_historyFaultsList.curIdx].nIDType = ENUM_LOGIN_TYPE_MAINTAINER;
//                    }
//                    else
//                    {
//                         g_historyFaultsList.list[g_historyFaultsList.curIdx].nIDType = -1;
//                    }

                    g_historyFaultsList.list[g_historyFaultsList.curIdx].nIDType = g_fault_recorder_login_type;
                    g_historyFaultsList.list[g_historyFaultsList.curIdx].lID = g_fault_recorder_loginID.toLong();

                    g_current_faults_datetime_array[i] = g_historyFaultsList.list[g_historyFaultsList.curIdx].datetime;

                    if (g_historyFaultsList.curIdx < (D_HISTORY_FAULT_LIST_MAX_CNT - 1))
                    {
                        g_historyFaultsList.curIdx += 1;
                    }
                    else
                    {
                        g_historyFaultsList.curIdx = 0;
                    }

                    if (g_historyFaultsList.cnt < D_HISTORY_FAULT_LIST_MAX_CNT)
                    {
                        g_historyFaultsList.cnt += 1;
                    }

                    // if "found" is true, faults history file saving is needed when the scanning is finished!
                    found = true;
                    isNewFaultsOccurBool = true;
//                    if (D_POSITION_TRAIN == pdata->position)
//                    {
//                        ret |= GetTrainFaultsReturnValue(pdata->code);
//                    }
                }
                if (!pdata->confirm)
                {
                    unconfirmed_count += 1;
                }
            }
            else
            {
            }
        }
        else
        {
            if (pdata->flg)
            { // fault disapear
                if (!AntiShakingProcess(i, false))
                {
                    pdata++;
                    continue;
                }
                pdata->flg = false;
                pdata->confirm = false;
                memset(&g_current_faults_datetime_array[i], 0, sizeof(g_current_faults_datetime_array[i]));
            }
        }
        pdata++;
    }
    if (isNewFaultsOccurBool & (writeFileCnt>24) ) //400ms*25
    {
        //SaveFaultsHistory();
        isNewFaultsOccurBool = false;
        HistoryFaultsOutput();
        writeFileCnt = 0;
    }
    g_unconfirmed_faults_num = unconfirmed_count;
    return ret;
}

void HistoryFaultsListInit()
{
//    g_historyFaultsList.cnt = 0;
//    g_historyFaultsList.curIdx = 0;

    memset(&g_historyFaultsList, 0, sizeof(g_historyFaultsList));

    HistoryFaultsLoad();

    if((g_historyFaultsList.curIdx < 0) || (g_historyFaultsList.curIdx > D_HISTORY_FAULT_LIST_MAX_CNT))
    {
        g_historyFaultsList.curIdx = 0;
    }
}

QString GetDeviceStr(int val,int devno)
{
    QString str;
    switch (val)
    {
    case D_DEVICE_TRAIN:
        str = "VEHICLE";
        break;
    case D_DEVICE_VCU:
        str = "VCU";
        break;
    case D_DEVICE_TCU:
        if(devno == D_DEVICENO_TCU1)
        str = "TCU1";
        else if(devno == D_DEVICENO_TCU2)
        str = "TCU2";
        break;
    case D_DEVICE_BCU:
        str = "BCU";
        break;
    case D_DEVICE_ACU:
        if(devno == D_DEVICENO_ACU1)
        str = "ACU1";
        else if(devno == D_DEVICENO_ACU2)
        str = "ACU2";
        break;
    case D_DEVICE_DOOR:
        switch(devno)
        {
        case D_DEVICENO_DOOR1:
            str = "DOOR1";
            break;
        case D_DEVICENO_DOOR2:
            str = "DOOR2";
            break;
        case D_DEVICENO_DOOR3:
            str = "DOOR3";
            break;
        case D_DEVICENO_DOOR4:
            str = "DOOR4";
            break;
        case D_DEVICENO_DOOR5:
            str = "DOOR5";
            break;
        case D_DEVICENO_DOOR6:
            str = "DOOR6";
            break;
        case D_DEVICENO_DOOR7:
            str = "DOOR7";
            break;
        case D_DEVICENO_DOOR8:
            str = "DOOR8";
            break;
        }
        break;
    case D_DEVICE_HVAC:
        if(devno == D_DEVICENO_HVAC1)
        str = "HVAC1";
        else if(devno == D_DEVICENO_HVAC2)
        str = "HVAC2";
        break;
    case D_DEVICE_PIS:
        if(devno == D_DEVICENO_PIS1)
        str = "PIS1";
        else if(devno == D_DEVICENO_PIS2)
        str = "PIS2";
        break;
    case D_DEVICE_DCDC:
        str = "DC/DC";
        break;
    case D_DEVICE_RIOM:
        str = "RIOM";
        break;
    case D_DEVICE_IDU:
        str = "IDU";
        break;
    default:
        str = "---";
        break;
    }
    return str;
}

QString GetPositionStr(int val)
{
    QString str;
    switch (val)
    {
    case D_POSITION_MC1:
        str = "Mc1";
        break;
    case D_POSITION_MC2:
        str = "Mc2";
        break;
    case D_POSITION_T:
        str = "T";
        break;
    case D_POSITION_TRAIN:
        str = "Train";
        break;
    default:
        str = "---";
        break;
    }
    return str;
}

QString GetDateTimeStr(int idx)
{
    QString str = "-";

    ASSERT(idx < g_faultsRomLen)
    ST_DATETIME datetime = g_current_faults_datetime_array[idx];
    str.sprintf("%4d-%02d-%02d %02d:%02d:%02d",
                datetime.year, datetime.month, datetime.day,
                datetime.hour, datetime.minute, datetime.second);

    return str;
}

int CompareDateTime(ST_DATETIME datetime1, ST_DATETIME datetime2)
{
    if (datetime1.year > datetime2.year)
    {
        return 1;
    }
    else if (datetime1.year < datetime2.year)
    {
        return -1;
    }

    if (datetime1.month > datetime2.month)
    {
        return 1;
    }
    else if (datetime1.month < datetime2.month)
    {
        return -1;
    }

    if (datetime1.day > datetime2.day)
    {
        return 1;
    }
    else if (datetime1.day < datetime2.day)
    {
        return -1;
    }

    if (datetime1.hour > datetime2.hour)
    {
        return 1;
    }
    else if (datetime1.hour < datetime2.hour)
    {
        return -1;
    }

    if (datetime1.minute > datetime2.minute)
    {
        return 1;
    }
    else if (datetime1.minute < datetime2.minute)
    {
        return -1;
    }

    if (datetime1.second > datetime2.second)
    {
        return 1;
    }
    else if (datetime1.second < datetime2.second)
    {
        return -1;
    }

    return 0;
}

BYTE GetDeviceValFromStr(QString &str)
{
    BYTE val = 0;

    if (str == "D_DEVICE_TRAIN")
    {
        val = D_DEVICE_TRAIN;
    }
    else if (str ==  "D_DEVICE_VCU")
    {
        val = D_DEVICE_VCU;
    }
    else if (str ==  "D_DEVICE_TCU")
    {
        val = D_DEVICE_TCU;
    }
    else if (str ==  "D_DEVICE_BCU")
    {
        val = D_DEVICE_BCU;
    }
    else if (str ==  "D_DEVICE_ACU")
    {
        val = D_DEVICE_ACU;
    }
    else if (str ==  "D_DEVICE_DOOR")
    {
        val = D_DEVICE_DOOR;
    }
    else if (str ==  "D_DEVICE_HVAC")
    {
        val = D_DEVICE_HVAC;
    }
    else if (str ==  "D_DEVICE_PIS")
    {
        val = D_DEVICE_PIS;
    }
    else if (str ==  "D_DEVICE_DCDC")
    {
        val = D_DEVICE_DCDC;
    }
    else if (str ==  "D_DEVICE_RIOM")
    {
        val = D_DEVICE_RIOM;
    }
    else if (str ==  "D_DEVICE_IDU")
    {
        val = D_DEVICE_IDU;
    }

    return val;
}

BYTE GetGradeValFromStr(QString &str)
{
    BYTE val = 0;

    if (str == "D_FAULT_GRADE_1")
    {
        val = D_FAULT_GRADE_1;
    }
    else if (str ==  "D_FAULT_GRADE_2")
    {
        val = D_FAULT_GRADE_2;
    }
    else if (str ==  "D_FAULT_GRADE_3")
    {
        val = D_FAULT_GRADE_3;
    }
    else if (str ==  "D_FAULT_GRADE_4")
    {
        val = D_FAULT_GRADE_4;
    }

    return val;
}

BYTE GetPositionValFromStr(QString &str)
{
    BYTE val = 5;

    if (str == "D_POSITION_MC2")
    {
        val = D_POSITION_MC2;
    }
    else if (str ==  "D_POSITION_MC1")
    {
        val = D_POSITION_MC1;
    }
    else if (str ==  "D_POSITION_T")
    {
        val = D_POSITION_T;
    }
    else
    {
        ;
    }

    return val;
}

void ReadFaultsHistory()
{
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/faultshistory.csv";

    QFile f(fName);

    if (!f.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        return;
    }

    QTextStream stream(&f);

    QString line;
    QStringList list;
    QString str;

    g_historyFaultsList.cnt = 0;
    g_historyFaultsList.curIdx = 0;
    ST_HISTORY_FAULT_INFO *pdata = &g_historyFaultsList.list[0];
    
    while (NULL != (line = stream.readLine(0)))
    {
        list = line.split(",", QString::SkipEmptyParts);
        if (8 > list.count())
        {
            if(line.contains("curIndex:") == true)
            {
                g_historyFaultsList.curIdx = line.mid(9).toInt();
            }
            continue;
        }
        str = list[0].simplified();
        // 20111031 zlbzeb modify, remove "000000..." begin
        if( str.toInt() < 1 ) continue;
        // 20111031 zlbzeb modify, remove "000000..." end
        pdata->datetime.year = str.toInt();
        str = list[1].simplified();
        pdata->datetime.month = str.toInt();
        str = list[2].simplified();
        pdata->datetime.day = str.toInt();
        str = list[3].simplified();
        pdata->datetime.hour = str.toInt();
        str = list[4].simplified();
        pdata->datetime.minute = str.toInt();
        str = list[5].simplified();
        pdata->datetime.second = str.toInt();
        str = list[6].simplified();
        pdata->romIdx = str.toInt();
        str = list[7].simplified();
        pdata->carID = str.toUInt();
        if(list.count() == 10 )
        {
            str = list[8].simplified();
            pdata->nIDType = str.toInt();
            str = list[9].simplified();
            pdata->lID = str.toLong();
        }
        else
        {
            pdata->nIDType = -1;
            pdata->lID = -1;
        }

        if (g_historyFaultsList.cnt < D_HISTORY_FAULT_LIST_MAX_CNT)
        {
            g_historyFaultsList.cnt++;
        }
        pdata++;
    }

    f.close();

    return;
}

QString SaveFaultsHistory()
{
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/faultshistory.csv";

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::out);
    if (!fs.is_open())
    {
        return "";
    }

    char linebuff[100];
    int i = 0;

    ST_DATETIME datetime;
    for (i=0; i<g_historyFaultsList.cnt; i++)
    {
        memset(linebuff, 0, sizeof(linebuff));
        datetime = g_historyFaultsList.list[i].datetime;
        sprintf(linebuff,"%4d,%02d,%02d,%02d,%02d,%02d,%d,%d,%d,%ld\n",
                     datetime.year, datetime.month, datetime.day,
                     datetime.hour, datetime.minute, datetime.second,
                     g_historyFaultsList.list[i].romIdx,
                     g_historyFaultsList.list[i].carID,
                     g_historyFaultsList.list[i].nIDType,
                     g_historyFaultsList.list[i].lID);
        fs.write(linebuff,strlen(linebuff));
    }

    //save current history index.
    QString curIndex = "curIndex:" + QString::number(g_historyFaultsList.curIdx) + "\n";
    fs.write(curIndex.toStdString().c_str(),curIndex.length());

    fs.close();

    return fName;
}

void HistoryFaultsLoad()
{
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::in);

    if (!fs.is_open())
    {
        return;
    }
    fs.read((char *)&g_historyFaultsList, sizeof(g_historyFaultsList));

    fs.close();

    deleteUnexistFaults();
}

QString HistoryFaultsOutput()
{
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";

    fstream fs;
    fs.open(fName.toStdString().c_str(), ios_base::out);

    if (!fs.is_open())
    {
        return "";
    }
    ST_HISTORY_FAULTS_LIST historyFaultsList = g_historyFaultsList;
    fs.write((char*)&historyFaultsList, sizeof(historyFaultsList));

    fs.close();

    return fName;
}
int GetHistoryFaultIndexByNum(int num)
{
    int i;
    int index = g_historyFaultsList.curIdx - 1;

    if(index < 0)
        index = g_historyFaultsList.cnt - 1;

    for (i = 0; i < num - 1; i++)
    {
        if (0 >= index)
        {
            index = g_historyFaultsList.cnt - 1;
        }
        else
        {
            index -= 1;
        }
    }

    return index;
}

void HistoryListCollation(int idx)
{
    int i = 0;
    int index = 0;
    int romIdx = 0;
    bool bfind = false;
    int shiftIdx = 0;
    for (i=0; i<g_historyFaultsList.cnt; i++)
    {
        index = GetHistoryFaultIndexByNum(i + 1);
        romIdx = g_historyFaultsList.list[index].romIdx;
        if (idx == romIdx)
        {
            if (bfind)
            {
                ST_HISTORY_FAULT_INFO tmp;
                tmp = g_historyFaultsList.list[index];
                g_historyFaultsList.list[index] = g_historyFaultsList.list[shiftIdx];
                g_historyFaultsList.list[shiftIdx] = tmp;
            }
            break;
        }
        else if (!bfind && !g_faultsrom[romIdx].flg)
        {
            bfind = true;
            shiftIdx = index;
        }
    }
}

BYTE g_antiShakingVect0[D_HISTORY_FAULT_LIST_MAX_CNT];
BYTE g_antiShakingVect1[D_HISTORY_FAULT_LIST_MAX_CNT];

bool AntiShakingProcess(int idx, bool flg)
{
    bool ret = false;

    //return true;
    ASSERT(idx <= g_faultsRomLen)

    if (flg)
    { // accur
        g_antiShakingVect0[idx] = 0;
        g_antiShakingVect1[idx] += 1;
        if (g_antiShakingVect1[idx] >= D_ANTI_SHAKING_CNT)
        {
            g_antiShakingVect1[idx] = 0;
            ret = true;
        }
        else
        {
        }
    }
    else
    { // disapear
        g_antiShakingVect1[idx] = 0;
        g_antiShakingVect0[idx] += 1;
        if (g_antiShakingVect0[idx] >= D_ANTI_SHAKING_CNT)
        {
            g_antiShakingVect0[idx] = 0;
            ret = true;
        }
        else
        {
        }
    }

    return ret;
}

void ClearAllCurrentFaults()
{
    int i;
    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    for (i=0; i<g_faultsRomLen; i++)
    {
        pdata->flg = false;
        pdata->confirm = false;
        pdata++;
    }
    g_unconfirmed_faults_num = 0;
}

void ClearAllHistoryFaults()
{
    g_historyFaultsList.cnt = 0;
    g_historyFaultsList.curIdx = 0;

//    QString appPath = QApplication::applicationDirPath();
//    QString fName = appPath + "/faultshistory.csv";
    QString appPath = QApplication::applicationDirPath();
    QString fName = appPath + "/record/FaultsHistory.dat";
    QFile::remove(fName);
}

QString GetCarCodeString(int carnum)
{
    ASSERT(carnum == D_CAR_1);
    QString str = "";
    if (D_CAR_1 == carnum)
    {
        str = g_car1CodeStr;
    }

    return str;
}

// function: if there is a fault that cannot be found in fault list, delete it from history fault list.
// parameters: void
void deleteUnexistFaults()
{
    size_t i = 0;

    while (i < g_historyFaultsList.cnt)
    {
        if (g_historyFaultsList.list[i].romIdx >= 0 && g_historyFaultsList.list[i].romIdx < g_faultsRomLen)
        {
            i ++;
            continue;
        }
        else
        {
            for (size_t j = i; j < g_historyFaultsList.cnt - 1; j ++)
            {
                g_historyFaultsList.list[j] = g_historyFaultsList.list[j + 1];
            }

            g_historyFaultsList.cnt --;

            if (i > g_historyFaultsList.curIdx)
            {
                continue;
            }
            else if (0 == g_historyFaultsList.curIdx)
            {
                g_historyFaultsList.curIdx = g_historyFaultsList.cnt;
            }
            else
            {
                g_historyFaultsList.curIdx --;
            }
        }
    }
}
