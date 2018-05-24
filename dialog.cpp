#include "dialog.h"
#include "ui_dialog.h"
#include "QDebug"
#include "clog.h"
#include "QDebug"

#include "modbus.h"

//const quint32 BACKLIGHTTIME = 180; //second
int i = 0;
vector<CPage*>  g_PageVec(BKSURFACENUM);

BEGIN_PAGE_MANAGE()
        ADD_PAGE(CSysLoginPage,                ROM_INDEX(PAGE_ROM_INDEX_SYSLOGIN))
        ADD_PAGE(CMainPage,                    ROM_INDEX(PAGE_ROM_INDEX_MAIN))
        ADD_PAGE(CNetStatePage,                ROM_INDEX(PAGE_ROM_INDEX_NETSTATE))
        ADD_PAGE(CTcuStatePage,                ROM_INDEX(PAGE_ROM_INDEX_TCUSTATE))
        ADD_PAGE(CAcuStatePage,                ROM_INDEX(PAGE_ROM_INDEX_ACUSTATE))
        ADD_PAGE(CBcuStatePage,                ROM_INDEX(PAGE_ROM_INDEX_BCUSTATE))
        ADD_PAGE(CDcdcStatePage,               ROM_INDEX(PAGE_ROM_INDEX_DCDCSTATE))
        ADD_PAGE(CPisPage,                     ROM_INDEX(PAGE_ROM_INDEX_PIS))
        ADD_PAGE(CStartStationSetPage,         ROM_INDEX(PAGE_ROM_INDEX_STARTSTATIONSET))
        ADD_PAGE(CEndStationSetPage,           ROM_INDEX(PAGE_ROM_INDEX_ENDSTATIONSET))
        //ADD_PAGE(CCurrentStationSetPage,       ROM_INDEX(PAGE_ROM_INDEX_CURRENTSTATIONSET))
        ADD_PAGE(CHvacStatePage,               ROM_INDEX(PAGE_ROM_INDEX_HVACSTATE))
        ADD_PAGE(CHvacParameterSetPage,        ROM_INDEX(PAGE_ROM_INDEX_HVACPARAMETERSET))
        ADD_PAGE(CHvacTestPage,                ROM_INDEX(PAGE_ROM_INDEX_HVACTEST))
        ADD_PAGE(CParameterSetPage,            ROM_INDEX(PAGE_ROM_INDEX_PARAMETERSET))
        ADD_PAGE(CSysTimeSetPage,              ROM_INDEX(PAGE_ROM_INDEX_SYSTIMESET))
        ADD_PAGE(CCarCodeSetPage,              ROM_INDEX(PAGE_ROM_INDEX_CARCODESET))
        ADD_PAGE(CWheelDiameterSetPage,        ROM_INDEX(PAGE_ROM_INDEX_WHEELDIAMETERSET))
        ADD_PAGE(CLuminanceSetPage,            ROM_INDEX(PAGE_ROM_INDEX_LUMINANCESET))
        ADD_PAGE(CDriverCodeManagePage,        ROM_INDEX(PAGE_ROM_INDEX_DRIVERCODEMANAGE))
        ADD_PAGE(CDriverCodeListPage,          ROM_INDEX(PAGE_ROM_INDEX_DRIVERCODELIST))
        ADD_PAGE(CMaintainerManagePage,        ROM_INDEX(PAGE_ROM_INDEX_MAINTAINERMANAGE))
        ADD_PAGE(CMaintainerIDListPage,        ROM_INDEX(PAGE_ROM_INDEX_MAINTAINERLIST))
        ADD_PAGE(CModifyAccumulateMilePage,    ROM_INDEX(PAGE_ROM_INDEX_MODIFYACCUMULATEMILE))
        ADD_PAGE(CInstructionTestPage,         ROM_INDEX(PAGE_ROM_INDEX_INSTRUCTIONTEST))
        ADD_PAGE(CCurrentFaultListPage,        ROM_INDEX(PAGE_ROM_INDEX_CURRENTFAULTLIST))
        ADD_PAGE(CHistoryFaultListPage,        ROM_INDEX(PAGE_ROM_INDEX_HISTORYFAULTLIST))
        ADD_PAGE(CDeviceSelectPage,            ROM_INDEX(PAGE_ROM_INDEX_DEVICESELECT))
        ADD_PAGE(CGradeSelectPage,             ROM_INDEX(PAGE_ROM_INDEX_GRADESELECT))
        ADD_PAGE(CStartTimeSetPage,            ROM_INDEX(PAGE_ROM_INDEX_STARTTIMESET))
        ADD_PAGE(CEndTimeSetPage,              ROM_INDEX(PAGE_ROM_INDEX_ENDTIMESET))
        ADD_PAGE(CDoorPage,                    ROM_INDEX(PAGE_ROM_INDEX_DOOR))
        ADD_PAGE(CFaultAlarmPage,              ROM_INDEX(PAGE_ROM_INDEX_FAULTALARM))
        ADD_PAGE(CSerialDataPage,              ROM_INDEX(PAGE_ROM_INDEX_SERIALDATA))
        ADD_PAGE(CVersionPage,                 ROM_INDEX(PAGE_ROM_INDEX_VERSION))
        ADD_PAGE(CLocalIOPage,                 ROM_INDEX(PAGE_ROM_INDEX_LOCALIO))
        ADD_PAGE(CMainControlCmdPage,          ROM_INDEX(PAGE_ROM_INDEX_MAINCONTROLCMD))
        ADD_PAGE(cnetstatepagecoupled,          ROM_INDEX(PAGE_ROM_INDEX_NETSTATECOUPLED))
        ADD_PAGE(CAcuStatePageCoupled,          ROM_INDEX(PAGE_ROM_INDEX_ACUSTATEPAGECOUPLED))
        ADD_PAGE(CTcuStatePageCoupled,          ROM_INDEX(PAGE_ROM_INDEX_TCUSTATEPAGECOUPLED))
        ADD_PAGE(CBcuStatePageCoupled,          ROM_INDEX(PAGE_ROM_INDEX_BCUSTATEPAGECOUPLED))
        ADD_PAGE(CHvacStatePageCoupled,          ROM_INDEX(PAGE_ROM_INDEX_HVACSTATEPAGECOUPLED))

        ADD_PAGE(CMyaddpage,          ROM_INDEX(PAGE_ROM_INDEX_MYTEST))
        ADD_PAGE(cEmergencyBroadcast,          ROM_INDEX(PAGE_ROM_INDEX_EMERGENCYBROADCAST))
        ADD_PAGE(CTBCInstructionTestpage,          ROM_INDEX(PAGE_ROM_INDEX_INSTRUCTIONTESTTBC))
        ADD_PAGE(CCurrentStationSet,          ROM_INDEX(PAGE_ROM_INDEX_CURRENTSTATIONSET))

        END_PAGE_MANAGE()

        Dialog::Dialog(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::Dialog),
        // m_serialThread232(NULL),
//        m_serialThread485(NULL),// 20131219 cancel
        m_nRs232RevErrorNum(0),
//        m_nRs485RevErrorNum(0),// 20131219 cancel
        //m_nPreCLKtime(0),
        isOpen(false)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);

    QDesktopWidget* pDesktop = QApplication::desktop();
    int nScrW = pDesktop->width(), nScrH = pDesktop->height();
    if(nScrW == SCREEN_W && nScrH == SCREEN_H)
    {
        this->showFullScreen();
    }
    else
    {
        this->setFixedSize(SCREEN_W, SCREEN_H);
        int x = (nScrW - this->width())/2;
        int y = (nScrH - this->height())/2;
        this->move(x,y);
    }
    //iAdjustSystemTimeCnt = 0;
    oldADJUSTTIME_ENABLE_BOOL = false;
    oldCARCODE_SYNC_MAIN_BOOL = false;
    m_Powerontiming_flg = false;
    //init global

    globalDataInit();
#ifndef USE_RAND_DATA
//    HMI_Initial_Set();
//    SetWarningTemperature();
//    BackLightCtrl(1);
#endif
    //rand seed
    srand((unsigned int)time(NULL));
    //system.ini
    getDefaultParameter();

    //ReadFaultsHistory();

    //init page
    IMPLEMENT_PAGE_MANAGE()
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ChangePage(CGlobal::m_nCurPageIndex);//modify 20120927 PAGE_ROM_INDEX_SYSLOGIN

#ifdef USE_SERIAL_DATA
    //init serial thread232
    // m_serialThread232 = new SerialThread232();
    // m_serialThread232->render();
    // connect(m_serialThread232, SIGNAL(SendReadData(const QByteArray&, int)),
    //         this, SLOT(get232RevDataSlot(const QByteArray&, int)));
// 20131219 cancel
    //init serial thread485
//    m_serialThread485 = new SerialThread485();
//    m_serialThread485->render();
//    connect(m_serialThread485, SIGNAL(SendReadData(const QByteArray&, int)),
//            this, SLOT(get485RevDataSlot(const QByteArray&, int)));
#endif

    //update serial data
    connect(&UpdateDataTimer,SIGNAL(timeout()),this,SLOT(OnUpdateData()));
    UpdateDataTimer.start(400); // refresh screen
    // connect(&recorderThread,SIGNAL(restartScreenUptateSignal()),this,SLOT(restartScreenUptateSlot()));
    // recorderThread.render();

    connect(&riomBoardOnLineTestTimer,SIGNAL(timeout()),this,SLOT(testRiomBoardOnLineSlot()));
    riomBoardOnLineTestTimer.start(2000);

    connect(&timer30s,SIGNAL(timeout()),this,SLOT(OnTimer30s()));
    timer30s.start(30000);
    oldMAIN_INNOPOWERAREA_BOOL = false;
    oldMAIN_INLARGENOPOWERAREA_BOOL = false;
    oldMAIN_OUTNOPOWERAREA_BOOL = false;
    oldMAIN_CURRENTINLARGENOPOWERAREA_BOOL = false;
    m_FaultDlgFlag = false;

    // added by Deng Ran on the 15th of October
    this->delOldRecorder();
}

Dialog::~Dialog()
{
    // m_serialThread232->quit();
   // m_serialThread232->wait();
    // m_serialThread232->exit();
    // SAFE_DELETE(m_serialThread232);
    //thread.exit();

//    SAFE_DELETE(m_serialThread485);// 20131219 cancel
    for_each(g_PageVec.begin(), g_PageVec.end(), DELOBJ<CPage*>());
    delete ui;
}

// call this function when serial have data.
void Dialog::get232RevDataSlot()
{

#ifndef SLAVE_ID
    #define SLAVE_ID 1
#else
    qDebug() << "A macro named SLAVE_ID cannot be redefined, this message comes from dialog.cpp";
#endif

    static bool first = true,           // Power on.
                connect_OK = false;     // Connected to dev/ttyS0 successfully.

    bool communication_OK = false;      // send or receive data successfully.

    static unsigned char counter = 0;   // a variable used to count communication.

    static modbus_t* ctx = NULL;                                // Modbus context pointer.
    static struct timeval response_timeout, byte_timeout;       // a type of time in modbus protocol.

    int rc = 0;
    unsigned short int temp[130] = {0};   // A heap of memory used to store the modbus data temporarily.

    QString timeStr;
    timeStr=QDateTime::currentDateTime().toString("HH:mm:ss:z");

    // first power on
    if (first)
    {
        first = false;

        ctx = modbus_new_rtu("/dev/ttyS0", 19200, 'N', 8, 1);

        if (ctx == NULL)
        {
            qDebug() << "Modbus context cannot be created, and the error information is"
                            << modbus_strerror(errno) << ", this message comes from dialog.cpp";
            connect_OK = false;
            communication_OK = false;
        }
        else if (modbus_connect(ctx) == -1)
        {
            qDebug() << "It cannot be connected to /dev/ttyS0, and the error information is"
                            << modbus_strerror(errno) << ", this message comes from dialog.cpp";
            connect_OK = false;
            communication_OK = false;
        }
        else
        {
            connect_OK = true;
            modbus_set_slave(ctx, SLAVE_ID);
            // modbus_set_debug(ctx, TRUE);

            byte_timeout.tv_sec = 0;
            byte_timeout.tv_usec = 120000;
            modbus_set_byte_timeout(ctx, &byte_timeout);

            response_timeout.tv_sec = 0;
            response_timeout.tv_usec = 150000;
            modbus_set_response_timeout(ctx, &response_timeout);

            modbus_flush(ctx) ;
        }
    }

    if (m_nRs232RevErrorNum >= 6)
    {
        modbus_close(ctx);
        modbus_free(ctx);

        ctx = modbus_new_rtu("/dev/ttyS0", 19200, 'N', 8, 1);

        if (ctx == NULL)
        {
            qDebug() << "Modbus context cannot be created, and the error information is"
                            << modbus_strerror(errno) << ", this message comes from dialog.cpp";
            connect_OK = false;
            communication_OK = false;
        }
        else if (modbus_connect(ctx) == -1)
        {
            qDebug() << "It cannot be connected to /dev/ttyS0, and the error information is"
                            << modbus_strerror(errno) << ", this message comes from dialog.cpp";
            connect_OK = false;
            communication_OK = false;
        }
        else
        {
            connect_OK = true;
            modbus_set_slave(ctx, SLAVE_ID);
            // modbus_set_debug(ctx, TRUE);

            byte_timeout.tv_sec = 0;
            byte_timeout.tv_usec = 120000;
            modbus_set_byte_timeout(ctx, &byte_timeout);

            response_timeout.tv_sec = 0;
            response_timeout.tv_usec = 150000;
            modbus_set_response_timeout(ctx, &response_timeout);

            modbus_flush(ctx) ;
        }
    }

    // request or send one bag one time.
    if (counter == 0 && connect_OK)
    {
        counter ++;

        CreateSendData();

        for (int i = 0; i < 20; i ++)
        {
            // tab_rq_registers[i] = uint16_t(sendData[i*2] << 8) + uint16_t(sendData[i*2+1]);
            temp[i] = sendData[i * 2] + sendData[i * 2 + 1] * 256;
        }
        /* MULTIPLE REGISTERS*/
        timeStr=QDateTime::currentDateTime().toString("HH:mm:ss:z");
        // qDebug()<<"modbus_write_registers Time start: "<<timeStr;
        rc = modbus_write_registers(ctx, 0, 20, temp);
        timeStr=QDateTime::currentDateTime().toString("HH:mm:ss:z");
        // qDebug()<<"modbus_write_registers Time end  : "<<timeStr;

        if (rc != 20)
        {
            // added by Deng Ran on January 14th.
            communication_OK = false;

            qDebug() << "It cannot send data to the target, and the error information is"
                            << modbus_strerror(errno) << ", this message comes from dialog.cpp";

        }
        else
        {
            communication_OK = true;
        }
    }
    else if (counter == 1 && connect_OK)
    {
        counter ++;

        rc = modbus_read_registers(ctx, 0x32, 0x78, temp);

        if (rc != 120)
        {
            // added by Deng Ran on January 14th.
            communication_OK = false;

            qDebug() << "It cannot receive data from the target, and the error information is"
                            << modbus_strerror(errno) << ", this message comes from dialog.cpp";
        }
        else
        {
            communication_OK = true;

            for(int i = 0; i < 120; i ++)
            {
                receiveData[i * 2] = temp[i] % 256;
                receiveData[i * 2 + 1] = temp[i] / 256;
            }
        }
    }
    else if (counter == 2 && connect_OK)
    {
        counter = 0;

        rc = modbus_read_registers(ctx, 0xAA, 0x76, temp);
        if (rc != 118)
        {
            // added by Deng Ran on January 14th.
            communication_OK = false;

            qDebug() << "It cannot receive data from the target, and the error information is"
                            << modbus_strerror(errno) << ", this message comes from dialog.cpp";
        }
        else
        {
            communication_OK = true;

            for(int i = 0; i < 118; i ++)
            {
                receiveData[240 + i * 2] = temp[i] % 256;
                receiveData[240 + i * 2 + 1] = temp[i] / 256;
            }
        }
    }

    if (counter == 2)
    {
        // write record every 12000ms.
        writeRecorder();
        qDebug()<< counter;
    }

    timeStr=QDateTime::currentDateTime().toString("HH:mm:ss:z");
    // qDebug("modbus_close Time: "  + timeStr +__FILE__+ QString("   Line:") +QString::number(__LINE__));
    // qDebug()<<"modbus_close Time: "<<timeStr;

    if (communication_OK)
    {
        m_nRs232RevErrorNum = 0;
    }
    else
    {
        m_nRs232RevErrorNum ++;
    }

    // added by Deng Ran on January 13th.
    if(m_nRs232RevErrorNum >= 8)
    {
        g_communication_ok_flag = false;

        if(m_nRs232RevErrorNum > 50000)
        {
            m_nRs232RevErrorNum = 8;
        }

        if( !m_CriticalWarningDlg.GetComBreakFlag() )
        {
            m_CriticalWarningDlg.SetComBreakFlag(true);
            ClearAllCurrentFaults();
            m_CriticalWarningDlg.SetWarningStr(QSTR("Communication\nDisconnected"));
            m_CriticalWarningDlg.setGeometry(this->x(),this->y(),this->width(),this->height());
            m_CriticalWarningDlg.SetWarningLabel();
            m_CriticalWarningDlg.show();
        }
    }
    else if (m_nRs232RevErrorNum == 0)
    {
        g_communication_ok_flag = true;
        m_CriticalWarningDlg.SetComBreakFlag(false);

        if(m_CriticalWarningDlg.isVisible())
        {
            m_CriticalWarningDlg.hide();
        }
    }
}

void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type())
    {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

QString Dialog::carIDToString(__in quint16 data)
{
    QVariant  var = data;

    if( data < 10 )
    {
        return ( "0" + var.toString() );
    }
    else
    {
        return ( var.toString() );
    }
}

void Dialog::OnUpdateData()
{
    this->get232RevDataSlot();

    screenUpdateCnt++;
    //qDebug() << screenUpdateCnt << screenUpdateCntBack;
    m_UpdateMutex.lock();
    OnUpdateDate();
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    // 20121227 add begin
    // car code can not be zero
    // MC1 key actived, MC2 HMI sync MC1 car code
    // MC2 key actived, MC1 HMI sync MC2 car code
    // others: use local car code

    if(CARCODE_SYNC_MAIN_BOOL && (!(oldCARCODE_SYNC_MAIN_BOOL)))
    {

                if( g_car1IDUint16 != (quint16)(CARCODE_MAIN_WORD) )
                {
                    g_car1IDUint16 = (quint16)(CARCODE_MAIN_WORD);
                    g_car1CodeStr.sprintf("%03d", g_car1IDUint16);
                    //add slave number
                    SetINIInfo("CARCODE",g_car1CodeStr);
                    qDebug()<<"12";
                }
    }

    oldCARCODE_SYNC_MAIN_BOOL = CARCODE_SYNC_MAIN_BOOL;

    g_car1CodeStr.sprintf("%03d", g_car1IDUint16);
    g_car2CodeStr.sprintf("%03d",(quint16)(CARCODE_SLAVE_WORD));

    //2014-5-27 add ht clash signal
       //CWarningDialog ClashfaultDlg;




      if(MAIN_HEADTAILCLASH_BOOL)
     {
          if( !m_FaultDlg.GetComBreakFlag() )
          {
              m_FaultDlg.SetComBreakFlag( true );
              m_FaultDlg.SetWarningStr(QSTR("Head tail switch conflict!"));
              m_FaultDlg.setGeometry(((this->width()-400)/2+this->x()),this->y()+int((this->height()-120)/2),400,120);
              m_FaultDlg.SetWarningLabel();
              m_FaultDlg.show();
          }

     }
     else
     {
         m_FaultDlg.close();
         m_FaultDlg.SetComBreakFlag(false);
        //ChangePage(PAGE_ROM_INDEX_MAIN);
     }


     ///2014-8-3 add backupmode dlg

//     if(MAIN_BACKUPMODE_BOOL)
//    {
//         if( !m_BackupModeDlg.GetComBreakFlag() )
//         {
//             m_BackupModeDlg.SetComBreakFlag( true );
//             m_BackupModeDlg.SetWarningStr(QSTR("Back Up Mode!"));
//             m_BackupModeDlg.setGeometry(((this->width()-400)/2+this->x()),this->y()+int((this->height()-120)/2),400,120);
//             m_BackupModeDlg.SetWarningLabel();
//             m_BackupModeDlg.show();
//         }

//    }
//    else
//    {
//        m_BackupModeDlg.close();
//        m_BackupModeDlg.SetComBreakFlag(false);
//       //ChangePage(PAGE_ROM_INDEX_MAIN);
//    }

    // 20121227 add end

    pPage->UpdateCommonLabel();
    UpdateTimers();

#ifdef USE_RAND_DATA
    //test data
//    for(int i = 0; i < D_RECEIVE_BUFFER_SIZE; i++)
//    {
//        //if(!optDebugBool)receiveData[i]=rand()%255;
//        if(!optDebugBool)
//            receiveData[i]++;
//        //receiveData[i] = 0x00;
//    }
#endif

    QVariant var;
    quint16 loginIDuint16;
    g_fault_recorder_loginID = g_loginID;
    var = g_fault_recorder_loginID;
    loginIDuint16 = var.toUInt();
    if( loginIDuint16<1 )
        g_fault_recorder_login_type = ENUM_LOGIN_TYPE_ANONYMOUS;
    else if( loginIDuint16>0 && loginIDuint16<9000 )
        g_fault_recorder_login_type = ENUM_LOGIN_TYPE_DRIVER;
    else
        g_fault_recorder_login_type = ENUM_LOGIN_TYPE_MAINTAINER;

    writeFileCnt++; // for save faults

    int ret = FaultsScanning();
    if( writeFileCnt>24 )
        writeFileCnt = 0;

    if (0 != ret)
    {
#ifdef USE_SERIAL_DATA
        //ShowWarnningDialog(ret);
#endif
    }

    CreateSendData();


    if(g_InLargeNoPowerArea_Bool)
    {
        if( (!(MAIN_PANTOGRAPHDOWNOK_BOOL)) && (MAIN_TOP_SPEED_QUINT8>0) )
        {
            if(!warningDlg.isActiveWindow())
            {
                warningDlg.SetWarningStr(QSTR("请确保降弓！"));
                warningDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
                warningDlg.SetButtonVisible(false);
                warningDlg.show();
            }
        }
        else
        {
            if(warningDlg.isActiveWindow())
                warningDlg.close();
        }
    }


    if( MAIN_INNOPOWERAREA_BOOL && (!oldMAIN_INNOPOWERAREA_BOOL) )
    {
        warningDlg.SetWarningStr(QSTR("即将进入无电区，请确保辅助系统关闭！"));
        warningDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        //warningDlg.show();
    }
    oldMAIN_INNOPOWERAREA_BOOL = MAIN_INNOPOWERAREA_BOOL;

    if( MAIN_INLARGENOPOWERAREA_BOOL && (!oldMAIN_INLARGENOPOWERAREA_BOOL) )
    {
        warningDlg.SetWarningStr(QSTR("即将进入无电区，请确保辅助系统关闭！\n受电弓降弓！"));
        warningDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        //warningDlg.show();
    }
    oldMAIN_INLARGENOPOWERAREA_BOOL = MAIN_INLARGENOPOWERAREA_BOOL;

    if( MAIN_OUTNOPOWERAREA_BOOL && (!oldMAIN_OUTNOPOWERAREA_BOOL) )
    {
        warningDlg.SetWarningStr(QSTR("已驶出无电区！"));
        warningDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        //warningDlg.show();
    }
    oldMAIN_OUTNOPOWERAREA_BOOL = MAIN_OUTNOPOWERAREA_BOOL;

    if( MAIN_CURRENTINLARGENOPOWERAREA_BOOL && (!oldMAIN_CURRENTINLARGENOPOWERAREA_BOOL) )
    {
        warningDlg.SetWarningStr(QSTR("当前在大无电区，\n请确保受电弓降弓到位！"));
        warningDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        //warningDlg.show();
    }
    oldMAIN_CURRENTINLARGENOPOWERAREA_BOOL = MAIN_CURRENTINLARGENOPOWERAREA_BOOL;

    // 20140115 add for battery contactor state
    if( !(BATTERYCONTACTOR_MC1_RIOM_BOOL) || !(BATTERYCONTACTOR_MC2_RIOM_BOOL) )
    {
        if(!butteryContectorBreakCheckedBool)
        {
            butteryContectorBreakCheckedBool = true;
            warningDlg.SetWarningStr(QSTR("Battery contactor disconnect\n   please reconfirm!"));
            warningDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
            warningDlg.SetButtonVisible(true);
            //warningDlg.show();
        }
    }
    if( BATTERYCONTACTOR_MC1_RIOM_BOOL && BATTERYCONTACTOR_MC2_RIOM_BOOL )
        butteryContectorBreakCheckedBool = false;
    pPage->ConnectEvent(WM_UPDATEPAGE);
    m_UpdateMutex.unlock();
}
/*
send data process
*/
void Dialog::CreateSendData()
{
    quint32 tempFloat32;
    quint16 tempFloat16;


    if( Hvac_AutoWarm_Bool )
        sendData[0] |= bit0;
    else
        sendData[0] &= Nbit0;

    if( Hvac_AutoCold_Bool )
        sendData[0] |= bit1;
    else
        sendData[0] &= Nbit1;

    if( Hvac_Ventilation_Bool )
        sendData[0] |= bit2;
    else
        sendData[0] &= Nbit2;

    if( Hvac_EmgcVentilation_Bool )
        sendData[0] |= bit3;
    else
        sendData[0] &= Nbit3;

    if( Hvac_Stop_Bool )
        sendData[0] |= bit4;
    else
        sendData[0] &= Nbit4;

    sendData[1] = Hvac_TempSet_Char;

    if( Hvac_HalfColdTest_Bool )
        sendData[2] |= bit0;
    else
        sendData[2] &= Nbit0;

    if( Hvac_FullColdTest_Bool )
        sendData[2] |= bit1;
    else
        sendData[2] &= Nbit1;

    if( Hvac_HalfWarmTest_Bool )
        sendData[2] |= bit2;
    else
        sendData[2] &= Nbit2;

    if( Hvac_FullWarmTest_Bool )
        sendData[2] |= bit3;
    else
        sendData[2] &= Nbit3;

    if( EBGlass_Bool )
        sendData[2] |= bit4;
    else
        sendData[2] &= Nbit4;

    if( CabEB_Bool )
        sendData[2] |= bit5;
    else
        sendData[2] &= Nbit5;

    if(Main_HMIFan_bool)
        sendData[2] |= bit6;
    else
        sendData[2] &= Nbit6;

    if(HVAC_UICCmd_bool)
        sendData[2] |= bit7;
    else
        sendData[2] &= Nbit7;



    sendData[3] = LineNumber_Char;


    if( Main_SkipStationInstruction_Bool )
        sendData[4] |= bit0;
    else
        sendData[4] &= Nbit0;

    if( StationSet_UpOrDown_Bool )
        sendData[4] |= bit1;
    else
        sendData[4] &= Nbit1;

    if( StationSet_PisToTCMS_Bool )
        sendData[4] |= bit2;
    else
        sendData[4] &= Nbit2;

    if( StationSettedFlag_Bool )
        sendData[4] |= bit3;
    else
        sendData[4] &= Nbit3;

    if( g_SystemTimeSetEn_Bool )
        sendData[4] |= bit4;
    else
        sendData[4] &= Nbit4;

    if( TEST_Mc1FrictionBrakeRelease_BOOL )
        sendData[4] |= bit5;
    else
        sendData[4] &= Nbit5;

    if( TEST_Mc2FrictionBrakeRelease_BOOL )
        sendData[4] |= bit6;
    else
        sendData[4] &= Nbit6;
    ///2014-5-20 add carcode setenable
    if( g_Vehicle_CodeSet_enable )
    {
        sendData[4] |= bit7;
    }
    else
        sendData[4] &= Nbit7;

    if(LineNumber_Char == 2 || LineNumber_Char == 1)
    {
        sendData[5] = g_StationSet_DepartureStation_Uchar;
        sendData[6] = g_StationSet_TerminalStation_Uchar;
        sendData[7] = g_StationSet_CurrentStation_Uchar;
    }

    if(LineNumber_Char == 4 || LineNumber_Char == 3)
    {
        if(g_StationSet_DepartureStation_Uchar<11)
        {
            sendData[5] = g_StationSet_DepartureStation_Uchar+22;
        }else
        {
           if(g_StationSet_DepartureStation_Uchar<16)
            {
               sendData[5] = g_StationSet_DepartureStation_Uchar+5;
           }
           else
           {
                if(g_StationSet_DepartureStation_Uchar<23)
               {
                    sendData[5] = g_StationSet_DepartureStation_Uchar+17;
                }
                else
                {

                }
           }
        }

        if(g_StationSet_TerminalStation_Uchar<11)
        {
            sendData[6] = g_StationSet_TerminalStation_Uchar+22;
        }else
        {
           if(g_StationSet_TerminalStation_Uchar<16)
            {
               sendData[6] = g_StationSet_TerminalStation_Uchar+5;
           }
           else
           {
                if(g_StationSet_TerminalStation_Uchar<23)
               {
                    sendData[6] = g_StationSet_TerminalStation_Uchar+17;
                }
                else
                {

                }
           }
        }

        if(g_StationSet_CurrentStation_Uchar<11)
        {
            sendData[7] = g_StationSet_CurrentStation_Uchar+22;
        }else
        {
           if(g_StationSet_CurrentStation_Uchar<16)
            {
               sendData[7] = g_StationSet_CurrentStation_Uchar+5;
           }
           else
           {
                if(g_StationSet_CurrentStation_Uchar<23)
               {
                    sendData[7] = g_StationSet_CurrentStation_Uchar+17;
                }
                else
                {

                }
           }
        }

    }

//    sendData[5] = g_StationSet_DepartureStation_Uchar;
//    sendData[6] = g_StationSet_TerminalStation_Uchar;
//    sendData[7] = g_StationSet_CurrentStation_Uchar;

    uchar  tmparr1[2];
    tempFloat16 = g_ParamSet_CarCode_Uint;
    memcpy( tmparr1, &tempFloat16, 2 );
    for( int i = 0; i < 2; i++ ){
        sendData[8+i] = tmparr1[i];
    } // end

    uchar tmparr4[4], tmparr2[2];

    tempFloat32 = g_ParamSet_initAccumulateKms_Quint32;
    memcpy( tmparr4, &tempFloat32, 4 );
    for( int i = 0; i < 4; i++ ){
        sendData[10+i] = tmparr4[i];
    } // end

    tempFloat16 = g_loginID.toUInt();
    memcpy( tmparr2, &tempFloat16, 2 );
    for( int i = 0; i < 2; i++ ){
        sendData[14+i] = tmparr2[i];
    } // end

    sendData[16] = g_ParamSet_WheelDiameter_Uchar;

    QDate date;
    QTime time;
    date = QDate::currentDate();
    time = QTime::currentTime();

    sendData[17] = uchar( date.year() - 2000 );
    sendData[18] = uchar( date.month() );
    sendData[19] = uchar( date.day() );
    sendData[20] = uchar( time.hour() );
    sendData[21] = uchar( time.minute() );
    sendData[22] = uchar( time.second() );

    if( Main_AccumulateKmSettedFlag_Bool )
        sendData[23] |= bit0;
    else
        sendData[23] &= Nbit0;

    if( (WashingMode_Bool)||(Coupling_Bool))
        sendData[23] |= bit1;
    else
        sendData[23] &= Nbit1;
//    if( Coupling_Bool )
//        sendData[23] |= bit1;
//    else
//        sendData[23] &= Nbit1;


    if( DispatchMode_Bool )
        sendData[23] |= bit2;
    else
        sendData[23] &= Nbit2;

    if( LightOn_Bool )
        sendData[23] |= bit3;
    else
        sendData[23] &= Nbit3;

    if( LeftTurnCmd_Bool )
        sendData[23] |= bit4;
    else
        sendData[23] &= Nbit4;

    if( RightTurnCmd_Bool )
        sendData[23] |= bit5;
    else
        sendData[23] &= Nbit5;

    if( SandingForbid_Bool )
        sendData[23] |= bit6;
    else
        sendData[23] &= Nbit6;

    if( g_ForcePumpFanEn_Bool )
        sendData[23] |= bit7;
    else
        sendData[23] &= Nbit7;

///control button senddate
    if( TEST_MTB_BOOL )
        sendData[24] |= bit0;
    else
        sendData[24] &= Nbit0;

    if( TEST_Factory_BOOL )
        sendData[24] |= bit1;
    else
        sendData[24] &= Nbit1;

    if( TEST_Mc1ACUDisable_BOOL )
        sendData[24] |= bit2;
    else
        sendData[24] &= Nbit2;

    if( TEST_Mc2ACUDisable_BOOL )
        sendData[24] |= bit3;
    else
        sendData[24] &= Nbit3;

    if( TEST_Mc1BCCDisable_BOOL )
        sendData[24] |= bit4;
    else
        sendData[24] &= Nbit4;

    if( TEST_Mc2BCCDisable_BOOL )
        sendData[24] |= bit5;
    else
        sendData[24] &= Nbit5;

    if( TEST_Mc1MSR1Disable_BOOL )
        sendData[24] |= bit6;
    else
        sendData[24] &= Nbit6;

    if( TEST_Mc1MSR2Disable_BOOL )
        sendData[24] |= bit7;
    else
        sendData[24] &= Nbit7;

    if( TEST_Mc2MSR1Disable_BOOL )
        sendData[25] |= bit0;
    else
        sendData[25] &= Nbit0;

    if( TEST_Mc2MSR2Disable_BOOL )
        sendData[25] |= bit1;
    else
        sendData[25] &= Nbit1;

    if( TEST_Mc1ACUReset_BOOL )
        sendData[25] |= bit2;
    else
        sendData[25] &= Nbit2;

    if( TEST_Mc2ACUReset_BOOL  )
        sendData[25] |= bit3;
    else
        sendData[25] &= Nbit3;

    if( TEST_Mc1TCUReset_BOOL )
        sendData[25] |= bit4;
    else
        sendData[25] &= Nbit4;

    if( TEST_Mc2TCUReset_BOOL )
        sendData[25] |= bit5;
    else
        sendData[25] &= Nbit5;

    if( TEST_Mc1BCCReset_BOOL )
        sendData[25] |= bit6;
    else
        sendData[25] &= Nbit6;

    if( TEST_Mc2BCCReset_BOOL )
        sendData[25] |= bit7;
    else
        sendData[25] &= Nbit7;
////
    if( TEST_Mc1ACUDisable_BOOL_TBC )
        sendData[26] |= bit0;
    else
        sendData[26] &= Nbit0;

    if( TEST_Mc2ACUDisable_BOOL_TBC )
        sendData[26] |= bit1;
    else
        sendData[26] &= Nbit1;

    if( TEST_Mc1BCCDisable_BOOL_TBC )
        sendData[26] |= bit2;
    else
        sendData[26] &= Nbit2;

    if( TEST_Mc2BCCDisable_BOOL_TBC )
        sendData[26] |= bit3;
    else
        sendData[26] &= Nbit3;

    if( TEST_Mc1MSR1Disable_BOOL_TBC )
        sendData[26] |= bit4;
    else
        sendData[26] &= Nbit4;

    if( TEST_Mc1MSR2Disable_BOOL_TBC )
        sendData[26] |= bit5;
    else
        sendData[26] &= Nbit5;

    if( TEST_Mc2MSR1Disable_BOOL_TBC )
        sendData[26] |= bit6;
    else
        sendData[26] &= Nbit6;

    if( TEST_Mc2MSR2Disable_BOOL_TBC )
        sendData[26] |= bit7;
    else
        sendData[26] &= Nbit7;

    if( TEST_Mc1ACUReset_BOOL_TBC )
        sendData[27] |= bit0;
    else
        sendData[27] &= Nbit0;

    if( TEST_Mc2ACUReset_BOOL_TBC )
        sendData[27] |= bit1;
    else
        sendData[27] &= Nbit1;

    if( TEST_Mc1TCUReset_BOOL_TBC )
        sendData[27] |= bit2;
    else
        sendData[27] &= Nbit2;

    if( TEST_Mc2TCUReset_BOOL_TBC )
        sendData[27] |= bit3;
    else
        sendData[27] &= Nbit3;

    if( TEST_Mc1BCCReset_BOOL_TBC )
        sendData[27] |= bit4;
    else
        sendData[27] &= Nbit4;

    if( TEST_Mc2BCCReset_BOOL_TBC )
        sendData[27] |= bit5;
    else
        sendData[27] &= Nbit5;



    if( g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL )
        sendData[28] |= bit0;
    else
        sendData[28] &= Nbit0;

    if( g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL )
        sendData[28] |= bit1;
    else
        sendData[28] &= Nbit1;

    if( g_SANDINGSIGNAL_MC1_RIOM_BOOL )
        sendData[28] |= bit2;
    else
        sendData[28] &= Nbit2;

    if( g_STOPPINGBRAKE_MC1_RIOM_BOOL )
        sendData[28] |= bit3;
    else
        sendData[28] &= Nbit3;

    if( g_HOLDINGBRAKE_MC1_RIOM_BOOL )
        sendData[28] |= bit4;
    else
        sendData[28] &= Nbit4;

    if( g_SUBSTEPBRAKE_MC1_RIOM_BOOL )
        sendData[28] |= bit5;
    else
        sendData[28] &= Nbit5;

    if( g_DEADMAN_MC1_RIOM_BOOL )
        sendData[28] |= bit6;
    else
        sendData[28] &= Nbit6;

    if( g_BEEP_MC1_RIOM_BOOL )
        sendData[28] |= bit7;
    else
        sendData[28] &= Nbit7;


    if( g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL )
        sendData[29] |= bit0;
    else
        sendData[29] &= Nbit0;

    if( g_NORMALLIGHT_MC1_RIOM_BOOL )
        sendData[29] |= bit1;
    else
        sendData[29] &= Nbit1;

    if( g_FORCEDPUMPFAN_MC1_RIOM_BOOL )
        sendData[29] |= bit2;
    else
        sendData[29] &= Nbit2;

    if( g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL )
        sendData[29] |= bit3;
    else
        sendData[29] &= Nbit3;

//    if( g_DO_1_X1_X_OUT13_MC1_RIOM_BOOL )
//        sendData[29] |= bit4;
//    else
//        sendData[29] &= Nbit4;

    if( g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL )
        sendData[29] |= bit5;
    else
        sendData[29] &= Nbit5;

    if( g_LEFTTURNOUT_MC1_RIOM_BOOL )
        sendData[29] |= bit6;
    else
        sendData[29] &= Nbit6;

    if( g_RIGHTTURNOUT_MC1_RIOM_BOOL )
        sendData[29] |= bit7;
    else
        sendData[29] &= Nbit7;

    if( g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL )
        sendData[30] |= bit0;
    else
        sendData[30] &= Nbit0;

    if( g_LEFTTURN_MC1_RIOM_BOOL )
        sendData[30] |= bit1;
    else
        sendData[30] &= Nbit1;

    if( g_RIGHTTURN_MC1_RIOM_BOOL )
        sendData[30] |= bit2;
    else
        sendData[30] &= Nbit2;

    if( g_CABELECTRIC_MC1_RIOM_BOOL )
        sendData[30] |= bit3;
    else
        sendData[30] &= Nbit3;

    if( g_EMGCINVERTERSTART_MC1_RIOM_BOOL )
        sendData[30] |= bit4;
    else
        sendData[30] &= Nbit4;

    if( g_DO_2_X1_N_OUT6_MC1_RIOM_BOOL )
        sendData[30] |= bit5;
    else
        sendData[30] &= Nbit5;

    if( g_DO_2_X1_S_OUT7_MC1_RIOM_BOOL )
        sendData[30] |= bit6;
    else
        sendData[30] &= Nbit6;

    if( g_FRONTGLASSHEAT_MC1_RIOM_BOOL )
        sendData[30] |= bit7;
    else
        sendData[30] &= Nbit7;


    if( g_DO_2_X1_T_OUT9_MC1_RIOM_BOOL )
        sendData[31] |= bit0;
    else
        sendData[31] &= Nbit0;

    if( g_DO_2_X1_W_OUT10_MC1_RIOM_BOOL )
        sendData[31] |= bit1;
    else
        sendData[31] &= Nbit1;

    if( g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL )
        sendData[31] |= bit2;
    else
        sendData[31] &= Nbit2;

    if( g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL )
        sendData[31] |= bit3;
    else
        sendData[31] &= Nbit3;
    if( g_DO_2_X1_BB_OUT14_MC1_RIOM_BOOL )
        sendData[31] |= bit5;
    else
        sendData[31] &= Nbit5;
    if( g_DO_2_X1_BB_OUT15_MC1_RIOM_BOOL )
        sendData[31] |= bit6;
    else
        sendData[31] &= Nbit6;
    if( g_DO_2_X1_BB_OUT16_MC1_RIOM_BOOL )
        sendData[31] |= bit7;
    else
        sendData[31] &= Nbit7;


    if( g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL )
        sendData[32] |= bit0;
    else
        sendData[32] &= Nbit0;

    if( g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL )
        sendData[32] |= bit1;
    else
        sendData[32] &= Nbit1;

    if( g_SANDINGSIGNAL_MC2_RIOM_BOOL )
        sendData[32] |= bit2;
    else
        sendData[32] &= Nbit2;

    if( g_STOPPINGBRAKE_MC2_RIOM_BOOL )
        sendData[32] |= bit3;
    else
        sendData[32] &= Nbit3;

    if( g_HOLDINGBRAKE_MC2_RIOM_BOOL )
        sendData[32] |= bit4;
    else
        sendData[32] &= Nbit4;

    if( g_SUBSTEPBRAKE_MC2_RIOM_BOOL )
        sendData[32] |= bit5;
    else
        sendData[32] &= Nbit5;

    if( g_DEADMAN_MC2_RIOM_BOOL )
        sendData[32] |= bit6;
    else
        sendData[32] &= Nbit6;

    if( g_BEEP_MC2_RIOM_BOOL )
        sendData[32] |= bit7;
    else
        sendData[32] &= Nbit7;

    if( g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL )
        sendData[33] |= bit0;
    else
        sendData[33] &= Nbit0;

    if( g_NORMALLIGHT_MC2_RIOM_BOOL )
        sendData[33] |= bit1;
    else
        sendData[33] &= Nbit1;

    if( g_FORCEDPUMPFAN_MC2_RIOM_BOOL )
        sendData[33] |= bit2;
    else
        sendData[33] &= Nbit2;

    if( g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL )
        sendData[33] |= bit3;
    else
        sendData[33] &= Nbit3;

    if( g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL )
        sendData[33] |= bit5;
    else
        sendData[33] &= Nbit5;

    if( g_LEFTTURNOUT_MC2_RIOM_BOOL )
        sendData[33] |= bit6;
    else
        sendData[33] &= Nbit6;

    if( g_RIGHTTURNOUT_MC2_RIOM_BOOL )
        sendData[33] |= bit7;
    else
        sendData[33] &= Nbit7;

    if( g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL )
        sendData[34] |= bit0;
    else
        sendData[34] &= Nbit0;

    if( g_LEFTTURN_MC2_RIOM_BOOL )
        sendData[34] |= bit1;
    else
        sendData[34] &= Nbit1;

    if( g_RIGHTTURN_MC2_RIOM_BOOL )
        sendData[34] |= bit2;
    else
        sendData[34] &= Nbit2;

    if( g_CABELECTRIC_MC2_RIOM_BOOL )
        sendData[34] |= bit3;
    else
        sendData[34] &= Nbit3;

    if( g_EMGCINVERTERSTART_MC2_RIOM_BOOL )
        sendData[34] |= bit4;
    else
        sendData[34] &= Nbit4;

    if( g_DO_2_X1_N_OUT6_MC2_RIOM_BOOL )
        sendData[34] |= bit5;
    else
        sendData[34] &= Nbit5;

    if( g_DO_2_X1_S_OUT7_MC2_RIOM_BOOL )
        sendData[34] |= bit6;
    else
        sendData[34] &= Nbit6;

    if( g_FRONTGLASSHEAT_MC2_RIOM_BOOL )
        sendData[34] |= bit7;
    else
        sendData[34] &= Nbit7;

    if( g_DO_2_X1_T_OUT9_MC2_RIOM_BOOL )
        sendData[35] |= bit0;
    else
        sendData[35] &= Nbit0;

    if( g_DO_2_X1_W_OUT10_MC2_RIOM_BOOL )
        sendData[35] |= bit1;
    else
        sendData[35] &= Nbit1;

    if( g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL )
        sendData[35] |= bit2;
    else
        sendData[35] &= Nbit2;

    if( g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL )
        sendData[35] |= bit3;
    else
        sendData[35] &= Nbit3;



    if( g_DO_2_X1_BB_OUT14_MC2_RIOM_BOOL )
        sendData[35] |= bit5;
    else
        sendData[35] &= Nbit5;

    if( g_DO_2_X1_BB_OUT15_MC2_RIOM_BOOL )
        sendData[35] |= bit6;
    else
        sendData[35] &= Nbit6;

    if( g_DO_2_X1_BB_OUT16_MC2_RIOM_BOOL )
        sendData[35] |= bit7;
    else
        sendData[35] &= Nbit7;

    sendData[36] = emergencyBroadcastNumberUChar;
//    if( g_ZEROSPEEDBYPASS_MC2_RIOM_BOOL )
//        sendData[37] |= bit0;
//    else
//        sendData[37] &= Nbit0;

//    if( g_EMGCINVERTERSTART_MC2_RIOM_BOOL )
//        sendData[37] |= bit1;
//    else
//        sendData[37] &= Nbit1;

//    if( g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL )
//        sendData[37] |= bit2;
//    else
//        sendData[37] &= Nbit2;

//    if( g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL )
//        sendData[37] |= bit3;
//    else
//        sendData[37] &= Nbit3;

//    if( g_FORCEDROPPANTOGRAPH_MC2_RIOM_BOOL )
//        sendData[37] |= bit5;
//    else
//        sendData[37] &= Nbit5;

//    if( g_DO_2_X1_EE_OPEN15_MC2_RIOM_BOOL )
//        sendData[37] |= bit6;
//    else
//        sendData[37] &= Nbit6;

//    if( g_DO_2_X1_KK_OPEN16_MC2_RIOM_BOOL )
//        sendData[37] |= bit7;
//    else
//        sendData[37] &= Nbit7;

//    // byte38
//    sendData[38] = g_testbyte;
}

void Dialog::setScreenTime( int year, int mon, int day, int hour, int minute, int second )
{
//    time_t t;
//    struct tm nowtime;
//    nowtime.tm_sec = second; // second
//    nowtime.tm_min = minute; ///*       Minutes.[0-59]
//    nowtime.tm_hour = hour;  ///*       Hours.   [0-23]
//    nowtime.tm_mday = day;   ///*       Day.[1-31]
//    nowtime.tm_mon = mon - 1; ///*       Month.   [0-11]
//    nowtime.tm_year = year + 2000 - 1900; ///*       Year-       1900.
//    nowtime.tm_isdst = -1;    ///*       DST.[-1/0/1]
//    t = mktime(&nowtime);
//    stime(&t);

    QDate date( year + 2000, mon, day );
    QTime time( hour, minute, second );
    QString dateStr = date.toString( "yyyy-MM-dd" );
    QString timeStr = time.toString( "hh:mm:ss" );
    //QString hwclockStr = "hwclock --set --date \"";
    QString hwclockStr = "date -s \"";
    dateStr.replace(QRegExp("-"), "");
    timeStr.replace(QRegExp("-"), ":");
    hwclockStr = hwclockStr + dateStr + " " + timeStr + "\"";
    char *c=hwclockStr.toAscii().data();
    system(c);

    //system("hwclock -w");
}

void Dialog::OnUpdateDate()
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];

    // update time
    if((ADJUSTTIME_ENABLE_BOOL) && (!(oldADJUSTTIME_ENABLE_BOOL)) )
    {
        if( ADJUSTTIME_YEAR_BYTE!=0 && ADJUSTTIME_MONTH_BYTE!=0 && ADJUSTTIME_DAY_BYTE!=0 )
        {
            if(QDate::isValid( ADJUSTTIME_YEAR_BYTE+2000, ADJUSTTIME_MONTH_BYTE, ADJUSTTIME_DAY_BYTE ) && QTime::isValid( ADJUSTTIME_HOUR_BYTE, ADJUSTTIME_MINUTE_BYTE, ADJUSTTIME_SECOND_BYTE ))
            {
                qDebug()<<"234";
                ///only 400ms   setScreenTime
                SetSystemTime(ADJUSTTIME_YEAR_BYTE+2000,ADJUSTTIME_MONTH_BYTE,ADJUSTTIME_DAY_BYTE,ADJUSTTIME_HOUR_BYTE,ADJUSTTIME_MINUTE_BYTE,ADJUSTTIME_SECOND_BYTE);
            }
            else
            {
//                QMessageBox::warning(NULL,
//                                     QSTR("提示") ,
//                                     QSTR("后台时间同步格式异常！"),
//                                     QMessageBox::Ok,QMessageBox::Ok);

            }
        }
        else
        {
//            QMessageBox::warning(NULL,
//                                 QSTR("提示") ,
//                                 QSTR("后台时间同步格式异常！"),
//                                 QMessageBox::Ok,QMessageBox::Ok);

        }
    }
    oldADJUSTTIME_ENABLE_BOOL = ADJUSTTIME_ENABLE_BOOL;
    //iAdjustSystemTimeCnt++;

//    if(!g_SystemTimeSetEn_Bool) // this idu doesn't set time
//    {
//        QDateTime dateTime = QDateTime::currentDateTime();
//        if( ADJUSTTIME_YEAR_BYTE!=0 && ADJUSTTIME_MONTH_BYTE!=0 && ADJUSTTIME_DAY_BYTE!=0 )
//        {
//            if( (ADJUSTTIME_YEAR_BYTE+2000)!=dateTime.date().year() ||
//                ADJUSTTIME_MONTH_BYTE!=dateTime.date().month() ||
//                ADJUSTTIME_DAY_BYTE!=dateTime.date().day() ||
//                ADJUSTTIME_HOUR_BYTE!=dateTime.time().hour() ||
//                ADJUSTTIME_MINUTE_BYTE!=dateTime.time().minute() ||
//                (qAbs(ADJUSTTIME_SECOND_BYTE-dateTime.time().second())>30) )
//            {
//                if(QDate::isValid( ADJUSTTIME_YEAR_BYTE+2000, ADJUSTTIME_MONTH_BYTE, ADJUSTTIME_DAY_BYTE )
//                    && QTime::isValid( ADJUSTTIME_HOUR_BYTE, ADJUSTTIME_MINUTE_BYTE, ADJUSTTIME_SECOND_BYTE ))
//                {
//                    SetSystemTime(ADJUSTTIME_YEAR_BYTE,ADJUSTTIME_MONTH_BYTE,ADJUSTTIME_DAY_BYTE,ADJUSTTIME_HOUR_BYTE,ADJUSTTIME_MINUTE_BYTE,(ADJUSTTIME_SECOND_BYTE+3));
//                }
//            }
//        }
//    }

    /*if (pPage->TestControlExists(ID_COM_WARNING))
    {
        if (0 == g_unconfirmed_faults_num)
        {
            ((CImageCtrl *)pPage->GetDlgItem(ID_COM_WARNING))->UpdateImage("warning_icon_invalid.png");
        }
        else
        {
            ((CImageCtrl *)pPage->GetDlgItem(ID_COM_WARNING))->UpdateImage("warning_icon.png");
        }
    }*/
    if (pPage->TestControlExists(ID_COM_WARNING))
    {
        if (0 == g_unconfirmed_faults_num)
        {
            ((CImageCtrl *)pPage->GetDlgItem(ID_COM_WARNING))->UpdateImage("warning_icon_invalid.png");
        }
        else
        {
            ((CImageCtrl *)pPage->GetDlgItem(ID_COM_WARNING))->UpdateImage("warning_icon.png");
        }
    }
    if(pPage->TestControlExists(IDLB_COM_TIME))
    {
        pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(QTime::currentTime().toString("HH:mm:ss"));
        pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(QDate::currentDate().toString("yyyy-MM-dd"));
        this->update();
    }

//    if(pPage->TestControlExists(IDLB_COM_TIME))
//    {

//   //     if (!g_communication_ok_flag)
//        {
//            QDate date = QDate::currentDate().toString("yyyy-MM-dd");

//            pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(date);

//            QString time1 = QDateTime::currentDateTime().toString("HH:mm:ss");
//            pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time1);
//        }
////        else
////        //qDebug()<<"2";
////        {
////            QString str,Month,Day;
////            Month.sprintf("%02d",MAIN_SYNC_MONTH_USINT);
////            Day.sprintf("%02d",MAIN_SYNC_DAY_USINT);
////            str = QString::number(MAIN_SYNC_YEAR_USINT+2000) + tr("-")+
////                  Month + tr("-")+
////                  Day;
////    //                str = QString::number(CTALL_Year_U8+2000) + QObject::trUtf8("-")+
////    //                      Month + QObject::trUtf8("-")+
////    //                      Day;
////            pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);


////            QString time ,Hour,Minute,Second;
////            Hour.sprintf("%02d",MAIN_SYNC_HOUR_USINT);
////            Minute.sprintf("%02d",MAIN_SYNC_MINUTE_USINT);
////            Second.sprintf("%02d",MAIN_SYNC_SECOND_USINT);
////            time = Hour + QObject::trUtf8(":")+
////                  Minute+ QObject::trUtf8(":")+
////                  Second;
////            //SetSystemTime(ADJUSTTIME_YEAR_BYTE,ADJUSTTIME_MONTH_BYTE,ADJUSTTIME_DAY_BYTE,ADJUSTTIME_HOUR_BYTE,ADJUSTTIME_MINUTE_BYTE,ADJUSTTIME_SECOND_BYTE);
////            pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
////        }

//        //this->update();
//    }


    // cancel for shenyang prj
    //if current page is system login page, then close back light
    //   if(CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_SYSLOGIN)
    //   {
    //       m_nPreCLKtime++;
    //       if( m_nPreCLKtime >= BACKLIGHTTIME )
    //       {
    //           BackLightCtrl(false);
    //       }

    //   }else
    //   {
    //       m_nPreCLKtime = 0;
    //   }

}

void Dialog::paintEvent(QPaintEvent* e)
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    ASSERT(pPage!= NULL);
    ASSERT(pPage->GetPixmap() != NULL);
    if(pPage->TestControlExists(IDLB_COM_DATE))
    {
        pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(QDate::currentDate().toString("yyyy-MM-dd"));
    }
    if(pPage->TestControlExists(IDLB_COM_TIME))
    {
        pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(QTime::currentTime().toString("HH:mm:ss"));
    }
//    if(pPage->TestControlExists(IDLB_COM_TIME))
//    {

//     //   if (!g_communication_ok_flag)
//        {
//            QString date = QDate::currentDate().toString("yyyy-MM-dd");
////            QString str1;
////            str1 = QString::number(date.year()) + QObject::trUtf8("-")+
////                  QString::number(date.month()) + QObject::trUtf8("-")+
////                  QString::number(date.day()) + QObject::trUtf8("");
////            pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str1);
//            pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(date);

//            QString time1 = QDateTime::currentDateTime().toString("HH:mm:ss");
//            pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time1);
//        }
////        else
////        //qDebug()<<"2";
////        {
////            QString str,Month,Day;
////            Month.sprintf("%02d",MAIN_SYNC_MONTH_USINT);
////            Day.sprintf("%02d",MAIN_SYNC_DAY_USINT);
////            str = QString::number(MAIN_SYNC_YEAR_USINT+2000) + tr("-")+
////                  Month + tr("-")+
////                  Day;
////    //                str = QString::number(CTALL_Year_U8+2000) + QObject::trUtf8("-")+
////    //                      Month + QObject::trUtf8("-")+
////    //                      Day;
////            pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);


////            QString time ,Hour,Minute,Second;
////            Hour.sprintf("%02d",MAIN_SYNC_HOUR_USINT);
////            Minute.sprintf("%02d",MAIN_SYNC_MINUTE_USINT);
////            Second.sprintf("%02d",MAIN_SYNC_SECOND_USINT);
////            time = Hour + QObject::trUtf8(":")+
////                  Minute+ QObject::trUtf8(":")+
////                  Second;
////            pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
////        }
//    }
    QPainter painter;
    painter.begin(this);
    painter.drawPixmap(0,0,*(pPage->GetPixmap()));
    painter.end();

}

void Dialog::keyPressEvent( QKeyEvent * event )
{
#ifdef DEBUG_MODE
    if(event->key() == Qt::Key_F) //(event->modifiers() & Qt::ControlModifier) &&
    {
        CDebugDialog dbgDlg;
        if(dbgDlg.exec() == QDialog::Accepted)
        {
            this->update();
        }
    }
    else if(event->key() == Qt::Key_S)
    {
        CSetCarsDirDlg dbgDlg;
        if(dbgDlg.exec() == QDialog::Accepted)
        {
            //this->update();
        }
    }
    else if(event->key() == Qt::Key_D)
    {
        CConfirmDialog dlg;
        dlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        dlg.SetConfirmStr("debug mode");
        dlg.exec();
    }
    else if(event->key() == Qt::Key_Escape)
    {
        this->close();
    }
#endif
}

void Dialog::mousePressEvent(QMouseEvent * event)
{
    if(event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(), WM_LBUTTONDOWN);
    }
}

void Dialog::mouseReleaseEvent(QMouseEvent* event)
{
    if(event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(),WM_LBUTTONUP);
        pPage->ResetButtonState();
        update();
        //if back light is off, then open back light
//        if(CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_SYSLOGIN)
//        {
//            BackLightCtrl(true);
//            m_nPreCLKtime = 0;
//        }
        if(CGlobal::m_nCurPageIndex == PAGE_ROM_INDEX_CURRENTFAULTLIST)
        {
            ((CCurrentFaultListPage*)(g_PageVec[PAGE_ROM_INDEX_CURRENTFAULTLIST]))->ResetAllLabelState();
        }
    }
}

void Dialog::closeEvent(QCloseEvent* e)
{
    //SaveFaultsHistory();

    system("killall cnr_idu");
}

void Dialog::globalDataInit()
{
    StationSettedSuccess_Cnt = 0;
    SkipStationSettedSuccess_Cnt = 0;
    Main_AccumulateKmSettedFlag_Cnt = 0;
    lightOn_Cnt = 0;
    g_Vehicle_CodeSet_enable_cnt = 0;
    InstructionTest11_Cnt = 0;
    InstructionTest12_Cnt = 0;
    InstructionTest13_Cnt = 0;
    InstructionTest14_Cnt = 0;
    InstructionTest15_Cnt = 0;
    InstructionTest18_Cnt = 0;
    InstructionTest19_Cnt = 0;
    systemTimeSet_Cnt = 0;
    g_3sTimeSetEn_cnt = 0;
    g_login_type = ENUM_LOGIN_TYPE_DRIVER;

    memset(receiveData, 0, D_RECEIVE_BUFFER_SIZE);
    memset(sendData, 0, D_SEND_BUFFER_SIZE);

    g_history_faults_pagenum = 1;
    g_current_faults_pagenum = 1;
    HistoryFaultsListInit();

    memset(&g_antiShakingVect0, 0, sizeof(g_antiShakingVect0));
    memset(&g_antiShakingVect1, 0, sizeof(g_antiShakingVect1));

    g_stationNameLine1.clear();
    g_stationNameLine2.clear();
    g_stationNameLine3.clear();
    g_stationNameLine4.clear();
    g_stationNameLine5.clear();

    // 1
    g_stationNameLine1 << QSTR( "Ayat" ) << QSTR( "Meri" ) << QSTR( "CMC" ) << QSTR( "St.Micheal" ) << QSTR( "CivilServiceCollege") << QSTR( "ManagementInstitute" ) << QSTR( "Gurd Shola 1" )
             << QSTR( "Gurd Shola 2" ) << QSTR( "Megenagna" ) << QSTR( "Lem Hotel" )
             << QSTR( "Hayahulet 1" ) << QSTR( "Hayahulet 2" ) << QSTR( "St.Urael" )
             << QSTR( "Bambis" ) << QSTR( "St. Estifanos" ) << QSTR( "Stadium" ) << QSTR( "Leghar" ) << QSTR( "Mexico" ) << QSTR( "Tegbared" )
              << QSTR( "St, Lideta" ) << QSTR( "Cocacola" ) << QSTR( "Torhailoch" );
    // 2
    g_stationNameLine2<< QSTR( "Kality" ) << QSTR( "Abo Junction" ) << QSTR( "Saris" ) << QSTR( "Adey Ababa" ) << QSTR( "Nefas Silk 1" ) << QSTR( "Nefas Silk 2" )
            << QSTR( "Lancha" ) << QSTR( "Temenja Yazh" ) << QSTR( "Riche " ) << QSTR( "Meshwlekya" ) << QSTR( "Stadium" )
             << QSTR( "Leghar" ) << QSTR( "Mexico" ) << QSTR( "Tegbared" ) << QSTR( "St,Lideta" )<< QSTR( "Darmar" ) << QSTR( "Abnet" )
              << QSTR( "Sebategna" ) << QSTR( "Autobus Tera" ) << QSTR( "Gojam Berenda" ) << QSTR( "Atikilt Tera" )<< QSTR( "Menilik II Square" );
    // 3
    g_stationNameLine3  << QSTR( "1" ) << QSTR( "2" ) << QSTR( "3" ) << QSTR( "4" )
            << QSTR( "5" ) << QSTR( "6" ) << QSTR( "7" )
            << QSTR( "8" ) << QSTR( "9" ) << QSTR( "10" )
            << QSTR( "11" ) << QSTR( "12" );
    // 4
    //g_stationNameLine4 << QSTR( "浑南四路站" ) << QSTR( "天元街站" ) << QSTR( "奥体北站" );
    // 5
    g_stationNameLine5 << QSTR( "1" ) << QSTR( "2" ) << QSTR( "3" ) << QSTR( "4" ) << QSTR( "5" )
            << QSTR( "6" ) << QSTR( "7" ) << QSTR( "8" ) << QSTR( "9" )
            << QSTR( "10" ) << QSTR( "11" ) << QSTR( "12" ) << QSTR( "13" ) << QSTR( "14" )
            << QSTR( "15" ) << QSTR( "16" ) << QSTR( "17" ) << QSTR( "18" ) << QSTR( "19" )
            << QSTR( "20" ) << QSTR( "21" ) << QSTR( "22" );

    //qDebug() << g_stationNameLine1 << "\n" << g_stationNameLine2 << "\n" << g_stationNameLine3 << "\n" << g_stationNameLine4 << "\n" << g_stationNameLine5;
    //qDebug() << g_stationNameLine1.size() << "\n" << g_stationNameLine2.size() << "\n" << g_stationNameLine3.size() << "\n" << g_stationNameLine4.size() << "\n" << g_stationNameLine5.size();



    return;
}

void Dialog::UpdateTimers()
{
    if(MAIN_SKIPSTATIONSETTEDSUCCESS_BOOL)
    {
        SkipStationSettedSuccess_Cnt = 0;
        Main_SkipStationInstruction_Bool = false;
    }

    if( Main_SkipStationInstruction_Bool )
    {
        if( SkipStationSettedSuccess_Cnt<25 )
        {
            SkipStationSettedSuccess_Cnt++;
        }
        else
        {
            SkipStationSettedSuccess_Cnt = 0;
            Main_SkipStationInstruction_Bool = false;
        }
    }//end

    if( StationSettedFlag_Bool )
    {
        if( StationSettedSuccess_Cnt<5 )
        {
            StationSettedSuccess_Cnt++;
        }
        else
        {
            StationSettedSuccess_Cnt = 0;
            StationSettedFlag_Bool = false;
            StationSettedFlagtemp_Bool = false;
        }
    }//end

    if(  Main_AccumulateKmSettedFlag_Bool )
    {
        if( Main_AccumulateKmSettedFlag_Cnt<5 )
        {
            Main_AccumulateKmSettedFlag_Cnt++;
        }
        else
        {
            Main_AccumulateKmSettedFlag_Cnt = 0;
            Main_AccumulateKmSettedFlag_Bool = false;
        }
    }//end

    if( g_Vehicle_CodeSet_enable )
    {
        if( g_Vehicle_CodeSet_enable_cnt<5 )
        {
            g_Vehicle_CodeSet_enable_cnt++;
        }
        else
        {
            g_Vehicle_CodeSet_enable_cnt = 0;
            g_Vehicle_CodeSet_enable = false;
        }
    }//end
    if( InstructionTest11_Bool )
    {
        if( InstructionTest11_Cnt<5 )
        {
            InstructionTest11_Cnt++;
        }
        else
        {
            InstructionTest11_Cnt = 0;
            InstructionTest11_Bool = false;
        }
    }//end
    if( InstructionTest12_Bool )
    {
        if( InstructionTest12_Cnt<5 )
        {
            InstructionTest12_Cnt++;
        }
        else
        {
            InstructionTest12_Cnt = 0;
            InstructionTest12_Bool = false;
        }
    }//end
    if( InstructionTest13_Bool )
    {
        if( InstructionTest13_Cnt<5 )
        {
            InstructionTest13_Cnt++;
        }
        else
        {
            InstructionTest13_Cnt = 0;
            InstructionTest13_Bool = false;
        }
    }//end
    if( InstructionTest14_Bool )
    {
        if( InstructionTest14_Cnt<5 )
        {
            InstructionTest14_Cnt++;
        }
        else
        {
            InstructionTest14_Cnt = 0;
            InstructionTest14_Bool = false;
        }
    }//end
    if( InstructionTest15_Bool )
    {
        if( InstructionTest15_Cnt<5 )
        {
            InstructionTest15_Cnt++;
        }
        else
        {
            InstructionTest15_Cnt = 0;
            InstructionTest15_Bool = false;
        }
    }//end
    if( InstructionTest18_Bool )
    {
        if( InstructionTest18_Cnt<5 )
        {
            InstructionTest18_Cnt++;
        }
        else
        {
            InstructionTest18_Cnt = 0;
            InstructionTest18_Bool = false;
        }
    }//end
    if( InstructionTest19_Bool )
    {
        if( InstructionTest19_Cnt<5 )
        {
            InstructionTest19_Cnt++;
        }
        else
        {
            InstructionTest19_Cnt = 0;
            InstructionTest19_Bool = false;
        }
    }//end
    if( LightOn_Bool )
    {
        if( lightOn_Cnt<5 )
        {
            lightOn_Cnt++;
        }
        else
        {
            lightOn_Cnt = 0;
            LightOn_Bool = false;
        }
    }//end


    // 20130121 modify
    if( g_SystemTimeSetEn_Bool )
    {

        if( systemTimeSet_Cnt<10 )
        {
            systemTimeSet_Cnt++;
        }
        else
        {
            systemTimeSet_Cnt = 0;
            g_SystemTimeSetEn_Bool = false;

        }
    }//end


}

void Dialog::ReadFaultsDef()
{
    QString path = qApp->applicationDirPath();
    QString fName = path + "/faultsdef.csv";
    QFile f(fName);

    if (!f.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        return;
    }

    QTextStream stream(&f);

    QString line;
    QStringList list;
    QString code, grade, position, name, advice, device;
    FAULTS_ROM_DATA *pdata;
    int i = 0;
    while (NULL != (line = stream.readLine(0)))
    {
        list = line.split(",", QString::SkipEmptyParts);
        code = list[0].simplified();
        grade = list[1].simplified();
        device = list[2].simplified();
        position = list[3].simplified();
        name = list[4].simplified();
        advice = list[5].simplified();

        pdata = &g_faultsrom[0];
        for (i=0; i<g_faultsRomLen; i++)
        {
            if (code.toInt() == pdata->code)
            {
                pdata->grade = GetGradeValFromStr(grade);
                pdata->device = GetDeviceValFromStr(device);
                pdata->position = GetPositionValFromStr(position);
                pdata->name = name;
                pdata->advice = advice;
            }
            pdata++;
        }
    }

    stream.flush();
    f.close();

    return;
}

void Dialog::getDefaultParameter()
{
    QString path = qApp->applicationDirPath();
    QString fileName = path + "/system.ini";
    QFile inifile( fileName );
    if( inifile.exists( fileName ) )
    {
        if( inifile.setPermissions( QFile::WriteOther | QFile::ReadOther ) )
        {
            QSettings *settings = new QSettings( fileName, QSettings::IniFormat );
            g_car1IDUint16 = settings->value( "CARCODE" ).toUInt();
            g_ParamSet_CarCode_Uint = g_car1IDUint16;
            g_ParamSet_WheelDiameter_Uchar = uchar( settings->value( "/WheelDiameter/Wheel" ).toInt() - 580 );

            delete settings;
        }
    }
    else
    {
        CWarningDialog wDlg;
        wDlg.SetWarningStr(QSTR("system.ini文件不存在！"));
        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        wDlg.exec();
    }
}

void Dialog::ShowWarnningDialog(int retVal)
{
    CWarningDialog wDlg;
    QString str = "";

//    if (D_FAULTS_SCANNING_CODE15 & retVal)
//    {
//        str = QSTR("两端司机室激活");
////        wDlg.SetWarningStr(str);
////        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
////        wDlg.exec();
//        m_CriticalWarningDlg.SetWarningStr(str);
//        //m_CriticalWarningDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
//        m_CriticalWarningDlg.move(this->x(),this->y());
//        if(!m_CriticalWarningDlg.isVisible())
//        {
//            m_CriticalWarningDlg.show();
//        }
//    }
//    else
//    {
//        if(m_CriticalWarningDlg.isVisible())
//        {
//            str = QSTR("通信中断");
//            m_CriticalWarningDlg.SetWarningStr(str);
//            m_CriticalWarningDlg.hide();
//        }
//    }
    if (D_FAULTS_SCANNING_CODE17 & retVal)
    {
        str = "Both Direction Actived!";
        wDlg.SetWarningStr(str);
        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        wDlg.exec();
    }
    if (D_FAULTS_SCANNING_CODE18 & retVal)
    {
        str = "Both Traction and Brake Actived!";
        wDlg.SetWarningStr(str);
        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        wDlg.exec();
    }
    if (D_FAULTS_SCANNING_CODE25 & retVal)
    {
        str = "Head&Tail switch confict!";
        wDlg.SetWarningStr(str);
        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        wDlg.exec();
    }
    if (D_FAULTS_SCANNING_CODE27 & retVal)
    {
        str = "Deadman event!";
        wDlg.SetWarningStr(str);
        wDlg.setGeometry(this->x()+int((this->width()-400)/2),this->y()+int((this->height()-120)/2),400,120);
        wDlg.exec();
    }
}

int Dialog::InitSerialPort()
{
    BAUDRATE = B9600;
    MODEMDEVICE = "/dev/ttyS2";
    DATABITS = CS8;
    PARITYTYPE = 0;
    STOPBITS = 1;

    if ((fd = ::open(MODEMDEVICE, O_RDWR | O_NOCTTY | O_NONBLOCK)) < 0)
    {
        return 1;
    }

    int status;
    struct termios Opt;
    tcgetattr(fd, &Opt);
    tcflush(fd, TCIOFLUSH);
    cfsetispeed(&Opt, BAUDRATE);
    cfsetospeed(&Opt, BAUDRATE);
    status =  tcsetattr(fd ,TCSANOW, &Opt);
    if (status != 0)
    {
        return 2;
    }
    tcflush(fd, TCIOFLUSH);

    struct termios options;
    if (tcgetattr( fd, &options ) != 0 )
    {
        return 3;
    }
    options.c_cflag &= ~CSIZE;
    options.c_cflag |= DATABITS;
    options.c_cflag &= ~PARENB;
    options.c_iflag &= ~INPCK;
    options.c_cflag &= ~CSTOPB;

    tcflush(fd, TCIFLUSH);

    options.c_lflag = 0;
    options.c_oflag = 0;
    options.c_iflag &= ~( ICRNL|IXON);
    options.c_cc[VTIME] = 1;
    options.c_cc[VMIN] = 0;
    if(tcsetattr(fd, TCSANOW,&options) != 0)
    {
        return 4;
    }
    isOpen = true;
    return 0;
}

void Dialog::CloseSerialPort()
{
    tcflush(fd, TCIOFLUSH);
    ::close(fd);
    isOpen = false;
}

int Dialog::ComWrite(char *writeData, int len)
{
    mutexWrite.lock();
    int result = 0;
    if (len > 0)
    {
        if (fd != -1)
        {
            result = write(fd, writeData, len);
        }
    }
    mutexWrite.unlock();
    return result;
}

int Dialog::ComRead(char *readData)
{
    mutexRead.lock();
    int nread = 0;
    if (fd != -1)
    {
        nread = read(fd, readData, 100);
    }
    mutexRead.unlock();
    return nread;
}

void Dialog::BackLightCtrl(bool bOpen)
{
    char open_cmd[] = {0x1B,0x23,0x30,0x32,0x2C,0x31,0x0D};
    char close_cmd[] = {0x1B,0x23,0x30,0x32,0x2C,0x30,0x0D};

    if(InitSerialPort() != 0 )
        return;

    if(bOpen)
        ComWrite(open_cmd, sizeof(open_cmd)/sizeof(char));
    else
        ComWrite(close_cmd, sizeof(close_cmd)/sizeof(char));
    usleep(200);
    CloseSerialPort();
}
void Dialog::SetWarningTemperature()
{
    char cmd[] = {0x1B,0x23,0x32,0x39,0x2C,0x38,0x30,0x0D}; // cmd 29,temperatue 80

    if(InitSerialPort() != 0 )
        return;
    ComWrite(cmd, sizeof(cmd)/sizeof(char));
    usleep(200);
    CloseSerialPort();
}
// set HMI in Tc1 or Tc2 ? and set IP address
void Dialog::HMI_Initial_Set()
{
        char cmd[20] ; // cmd 94,device address
        cmd[0] = 0x1B;
        cmd[1] = 0x23;
        cmd[2] = 0x39;
        cmd[3] = 0x34;
        cmd[4] = 0x0D;
        int len = 0;
        int timer1 = 0;
        int power_id_ok=0;

       // system("setserial /dev/ttyS2 irq 10");
        if(InitSerialPort() != 0 )
        {
            return;
        }
        //读电源ID编码3次，有返回值则跳出for循环
        for(int i=0;i<3;i++)
        {
                timer1=0;
                if( ComWrite( cmd, 5 ) == 5 )
                {
                    //发送读取电源编码命令成功，则进入循环等待h8返回的数据
                    while(1)
                    {
                        len = ComRead( cmd );
                        usleep(300);

                        if(timer1>180)
                        {
                            break;    //while
                        }
                        else
                        {
                            timer1++;
                        }
                        if( len==8 )
                        {
                            for(int j=0;j<len;j++)
                            {
                                test_tempdata[j]=cmd[j];
                            }
                            if( cmd[1]==0x01 && cmd[2]==0x23 && cmd[3]==0x39 && cmd[4]==0x34 && cmd[5]==0x2C )
                            {
                                if((cmd[6]==0x31)||(cmd[6]==0x30))
                                {
                                    if(cmd[6]==0x31)
                                    {
                                        TC1_HMI=0;
                                        TC2_HMI=1;
                                        SetINIInfo("/HMI/TC1_HMI", QString::number(TC1_HMI));
                                        SetINIInfo("/HMI/TC2_HMI", QString::number(TC2_HMI));

                                        power_id_ok=1;
                                    }
                                    if(cmd[6]==0x30)
                                    {
                                        TC1_HMI=1;
                                        TC2_HMI=0;
                                        SetINIInfo("/HMI/TC1_HMI", QString::number(TC1_HMI));
                                        SetINIInfo("/HMI/TC2_HMI", QString::number(TC2_HMI));

                                        power_id_ok=1;
                                    }
                                }

                            }
                            break;   //while
                        }

                    }

                    if(power_id_ok==1)
                    {
                        test_tempdata[64]=i;
                        test_tempdata[65]=power_id_ok;
                        test_tempdata[66]=timer1;
                        break;   //for
                    }
                }
                else
                {
                    usleep(300);
                    //continue;
                }
        }
        //没有正确读到电源编码，则使用上次正确读取编码时的数值
        if(power_id_ok==0)
        {
            if(TC1_HMI_ini==1)
            {
                TC1_HMI=1;
                TC2_HMI=0;
            }
            else
            {
                if(TC2_HMI_ini==1)
                {
                        TC2_HMI=1;
                        TC1_HMI=0;
                }
                else
                {
                    TC2_HMI=0;
                    TC1_HMI=0;
                }
            }

            //test_tempdata[64]=i;
            test_tempdata[65]=power_id_ok;
            test_tempdata[66]=timer1;

        }
        usleep(200);
        CloseSerialPort();
}
void Dialog::testRiomBoardOnLineSlot()
{
    if(!(m_Powerontiming_flg)&&g_communication_ok_flag)
    {

        if( ADJUSTTIME_YEAR_BYTE!=0 && ADJUSTTIME_MONTH_BYTE!=0 && ADJUSTTIME_DAY_BYTE!=0 )
        {
            if(QDate::isValid( ADJUSTTIME_YEAR_BYTE+2000, ADJUSTTIME_MONTH_BYTE, ADJUSTTIME_DAY_BYTE ) && QTime::isValid( ADJUSTTIME_HOUR_BYTE, ADJUSTTIME_MINUTE_BYTE, ADJUSTTIME_SECOND_BYTE ))
            {
                qDebug()<<"234";
                ///only 400ms
                SetSystemTime(ADJUSTTIME_YEAR_BYTE+2000,ADJUSTTIME_MONTH_BYTE,ADJUSTTIME_DAY_BYTE,ADJUSTTIME_HOUR_BYTE,ADJUSTTIME_MINUTE_BYTE,ADJUSTTIME_SECOND_BYTE);
            }
            else
            {
//                QMessageBox::warning(NULL,
//                                     QSTR("提示") ,
//                                     QSTR("后台时间同步格式异常！"),
//                                     QMessageBox::Ok,QMessageBox::Ok);

            }
        }
        else
        {
//            QMessageBox::warning(NULL,
//                                 QSTR("提示") ,
//                                 QSTR("后台时间同步格式异常=0！")+QString::number(ADJUSTTIME_YEAR_BYTE),
//                                 QMessageBox::Ok,QMessageBox::Ok);

        }

        m_Powerontiming_flg = true;
        //g_SystemTimeSetEn_Bool = true;
    }

    if(mc1_sgn_lifrsignal!=SGNLIFESIGNAL_MC1_RIOM_BYTE)
    {
        mc1_sgn_lifrsignal = SGNLIFESIGNAL_MC1_RIOM_BYTE;
        mc1_sgn_onLine = true;
    }
    else
    {
        mc1_sgn_onLine = false;
    }

    if(mc1_ax_lifrsignal!=AXLIFESIGNAL_MC1_RIOM_BYTE)
    {
        mc1_ax_lifrsignal = AXLIFESIGNAL_MC1_RIOM_BYTE;
        mc1_ax_onLine = true;
    }
    else
    {
        mc1_ax_onLine = false;
    }

    if(mc1_di1_lifrsignal!=DI1LIFESIGNAL_MC1_RIOM_BYTE)
    {
        mc1_di1_lifrsignal = DI1LIFESIGNAL_MC1_RIOM_BYTE;
        mc1_di1_onLine = true;
    }
    else
    {
        mc1_di1_onLine = false;
    }

    if(mc1_di2_lifrsignal!=DI2LIFESIGNAL_MC1_RIOM_BYTE)
    {
        mc1_di2_lifrsignal = DI2LIFESIGNAL_MC1_RIOM_BYTE;
        mc1_di2_onLine = true;
    }
    else
    {
        mc1_di2_onLine = false;
    }

    if(mc1_do1_lifrsignal!=DO1LIFESIGNAL_MC1_RIOM_BYTE)
    {
        mc1_do1_lifrsignal = DO1LIFESIGNAL_MC1_RIOM_BYTE;
        mc1_do1_onLine = true;
    }
    else
    {
        mc1_do1_onLine = false;
    }

    if(mc1_do2_lifrsignal!=DO2LIFESIGNAL_MC1_RIOM_BYTE)
    {
        mc1_do2_lifrsignal = DO2LIFESIGNAL_MC1_RIOM_BYTE;
        mc1_do2_onLine = true;
    }
    else
    {
        mc1_do2_onLine = false;
    }

    if(mc2_sgn_lifrsignal!=SGNLIFESIGNAL_MC2_RIOM_BYTE)
    {
        mc2_sgn_lifrsignal = SGNLIFESIGNAL_MC2_RIOM_BYTE;
        mc2_sgn_onLine = true;
    }
    else
    {
        mc2_sgn_onLine = false;
    }

    if(mc2_ax_lifrsignal!=AXLIFESIGNAL_MC2_RIOM_BYTE)
    {
        mc2_ax_lifrsignal = AXLIFESIGNAL_MC2_RIOM_BYTE;
        mc2_ax_onLine = true;
    }
    else
    {
        mc2_ax_onLine = false;
    }

    if(mc2_di1_lifrsignal!=DI1LIFESIGNAL_MC2_RIOM_BYTE)
    {
        mc2_di1_lifrsignal = DI1LIFESIGNAL_MC2_RIOM_BYTE;
        mc2_di1_onLine = true;
    }
    else
    {
        mc2_di1_onLine = false;
    }

    if(mc2_di2_lifrsignal!=DI2LIFESIGNAL_MC2_RIOM_BYTE)
    {
        mc2_di2_lifrsignal = DI2LIFESIGNAL_MC2_RIOM_BYTE;
        mc2_di2_onLine = true;
    }
    else
    {
        mc2_di2_onLine = false;
    }

    if(mc2_do1_lifrsignal!=DO1LIFESIGNAL_MC2_RIOM_BYTE)
    {
        mc2_do1_lifrsignal = DO1LIFESIGNAL_MC2_RIOM_BYTE;
        mc2_do1_onLine = true;
    }
    else
    {
        mc2_do1_onLine = false;
    }

    if(mc2_do2_lifrsignal!=DO2LIFESIGNAL_MC2_RIOM_BYTE)
    {
        mc2_do2_lifrsignal = DO2LIFESIGNAL_MC2_RIOM_BYTE;
        mc2_do2_onLine = true;
    }
    else
    {
        mc2_do2_onLine = false;
    }
}
void Dialog::restartScreenUptateSlot()
{
    screenUpdateCntBack = 0;
    screenUpdateCnt = 1;
    UpdateDataTimer.stop();
    UpdateDataTimer.start(400);
}

void Dialog::writeRecorder()
{

        if ( !(MAIN_EMGCBRAKESTATE_BOOL) )
        {
            gearLevel = 8;
        }
        else if( !(MAIN_BRAKESTATE_BOOL) )
        {// brake
            if( MAIN_BRAKECODE1_BOOL && MAIN_BRAKECODE2_BOOL && MAIN_BRAKECODE3_BOOL ) // 111
            {
                gearLevel = 7;
            }
            else if ( !(MAIN_BRAKECODE1_BOOL) && MAIN_BRAKECODE2_BOOL && MAIN_BRAKECODE3_BOOL ) // 011
            {
                gearLevel = 6;
            }
            else if ( MAIN_BRAKECODE1_BOOL && !(MAIN_BRAKECODE2_BOOL) && MAIN_BRAKECODE3_BOOL ) // 101
            {
                gearLevel = 5;
            }
            else if ( !(MAIN_BRAKECODE1_BOOL ) && !(MAIN_BRAKECODE2_BOOL) && MAIN_BRAKECODE3_BOOL ) // 001
            {
                gearLevel = 4;
            }
            else if ( MAIN_BRAKECODE1_BOOL && MAIN_BRAKECODE2_BOOL && !(MAIN_BRAKECODE3_BOOL) ) // 110
            {
                gearLevel = 3;
            }
            else if ( !(MAIN_BRAKECODE1_BOOL )&& MAIN_BRAKECODE2_BOOL && !(MAIN_BRAKECODE3_BOOL )) // 010
            {
                gearLevel = 2;
            }
            else if ( MAIN_BRAKECODE1_BOOL && !(MAIN_BRAKECODE2_BOOL) && !(MAIN_BRAKECODE3_BOOL )) // 100
            {
                gearLevel = 1;
            }
            else
            {
                gearLevel = 0;
            }
        }
        else if ( MAIN_TRACTIONSTATE_BOOL )
        {
            if ( MAIN_TRACTIONCODE1_BOOL && !(MAIN_TRACTIONCODE2_BOOL) && !(MAIN_TRACTIONCODE3_BOOL) && !(MAIN_TRACTIONCODE4_BOOL )) // 1000
            {
                gearLevel = 11;
            }
            else if ( MAIN_TRACTIONCODE1_BOOL && MAIN_TRACTIONCODE2_BOOL && !(MAIN_TRACTIONCODE3_BOOL) && !(MAIN_TRACTIONCODE4_BOOL )) // 1100
            {
                gearLevel = 12;
            }
            else if ( MAIN_TRACTIONCODE1_BOOL && MAIN_TRACTIONCODE2_BOOL && MAIN_TRACTIONCODE3_BOOL && !(MAIN_TRACTIONCODE4_BOOL )) // 1110
            {
                gearLevel = 13;
            }
            else if ( MAIN_TRACTIONCODE1_BOOL && MAIN_TRACTIONCODE2_BOOL && MAIN_TRACTIONCODE3_BOOL && MAIN_TRACTIONCODE4_BOOL ) // 1111
            {
                gearLevel = 14;
            }
            else
            {
                gearLevel = 0;
            }
        }
        else
        {
            gearLevel = 0;
        }

        //create csvFile

//         QString fileNameRunData = "./data/rundata" + currentDateTime.date().toString("yyyy_MM_dd") + ".csv";
//         QFile csvFileRunData( fileNameRunData );
//        //if(!(csvFileRunData.exists()))
//        {
//            if( !csvFileRunData.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append) )
//            {
//                return;
//            }
//            QTextStream inoutRunData( &csvFileRunData );
//            inoutRunData.setCodec("GB2312");
//        }

        QDateTime timeStr=QDateTime::currentDateTime();

        QDateTime currentCCUDateTime;
        currentCCUDateTime.setDate(QDate(ADJUSTTIME_YEAR_BYTE+2000,ADJUSTTIME_MONTH_BYTE,ADJUSTTIME_DAY_BYTE));
        currentCCUDateTime.setTime(QTime(ADJUSTTIME_HOUR_BYTE,ADJUSTTIME_MINUTE_BYTE,ADJUSTTIME_SECOND_BYTE));

        QString fileNameRunData = "./data/rundata" + timeStr.date().toString("yyyy_MM_dd") + ".csv";
         QFile csvFileRunData( fileNameRunData );

         //if(csvFileRunData.exists())

             if( (!csvFileRunData.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append)))
             {
                 return;
             }
             QTextStream inoutRunData( &csvFileRunData );
             inoutRunData.setCodec("GB2312");


        QString dateTimeStr = currentCCUDateTime.toString("yyyy_MM_dd,HH:mm:ss");

        QString newLine = dateTimeStr;
        QString str;
        BYTE tmpByte;
        int lineDataLen = 36;
        quint32 lineData[lineDataLen];
        for(int i=0;i<lineDataLen;i++)
            lineData[i] = 0;

        if(currentCCUDateTime.isValid())
        {
            // bool
            lineData[0] = receiveData[3]*256*256*256+receiveData[2]*256*256+receiveData[1]*256+receiveData[0];

            lineData[1] = receiveData[7]*256*256*256+receiveData[6]*256*256+receiveData[5]*256+receiveData[4];

            lineData[2] = receiveData[15]*256*256*256+receiveData[14]*256*256+receiveData[13]*256+receiveData[8];

            lineData[3] = receiveData[26]*256*256*256+receiveData[25]*256*256+receiveData[24]*256+receiveData[16];

            lineData[4] = receiveData[30]*256*256*256+receiveData[29]*256*256+receiveData[28]*256+receiveData[27];

            lineData[5] = receiveData[38]*256*256*256+receiveData[37]*256*256+receiveData[32]*256+receiveData[31];

            lineData[6] = (receiveData[62]>>4+receiveData[68]&0xf0)*256*256*256+receiveData[48]*256*256+receiveData[40]*256+receiveData[39];

            tmpByte = bitToByte( receiveData[150]&bit0, 0 ) + bitToByte( receiveData[150]&bit1, 1 ) +
                       bitToByte( receiveData[159]&bit0, 2 ) + bitToByte( receiveData[159]&bit1, 3 ) +
                       bitToByte( receiveData[172]&bit0, 4 ) + bitToByte( receiveData[172]&bit1, 5 ) +
                       bitToByte( receiveData[181]&bit0, 6 ) + bitToByte( receiveData[181]&bit1, 7 );
            lineData[7] += ( (quint32)tmpByte*256*256*256 );
            lineData[7] =(receiveData[98]>>4+receiveData[104]&0xf0)*256*256+(receiveData[92]>>4+receiveData[86]&0xf0)*256+(receiveData[74]>>4+receiveData[80]&0xf0);

            lineData[8] = receiveData[214]*256*256*256+receiveData[206]*256*256+receiveData[197]*256+receiveData[196];

            lineData[9] = receiveData[233]*256*256*256+receiveData[232]*256*256+receiveData[224]*256+receiveData[215];

            lineData[10] = receiveData[260]*256*256*256+receiveData[251]*256*256+receiveData[250]*256+receiveData[242];

            lineData[11] = receiveData[365]*256*256*256+receiveData[364]*256*256+receiveData[363]*256+receiveData[362];

            lineData[12] = receiveData[369]*256*256*256+receiveData[368]*256*256+receiveData[367]*256+receiveData[366];

            lineData[13] = receiveData[381]*256*256*256+receiveData[380]*256*256+receiveData[379]*256+receiveData[378];

            lineData[14] = receiveData[385]*256*256*256+receiveData[384]*256*256+receiveData[383]*256+receiveData[382];

            lineData[15] = receiveData[389]*256*256*256+receiveData[388]*256*256+receiveData[387]*256+receiveData[386];

            lineData[16] = 0;

            lineData[17] = receiveData[33]*256*256*256+receiveData[11]*256*256+receiveData[10]*256+receiveData[9];

            lineData[18] = receiveData[60]*256*256*256+receiveData[49]*256*256+receiveData[35]*256+receiveData[34];

            lineData[19] = receiveData[157]*256*256*256+receiveData[156]*256*256+receiveData[140]*256+receiveData[61];

            lineData[20] = receiveData[190]*256*256*256+receiveData[180]*256*256+receiveData[179]*256+receiveData[178];

            lineData[21] = receiveData[209]*256*256*256+receiveData[208]*256*256+receiveData[207]*256+receiveData[191];

            lineData[22] = receiveData[243]*256*256*256+receiveData[227]*256*256+receiveData[226]*256+receiveData[225];

            lineData[23] = receiveData[352]*256*256*256+receiveData[261]*256*256+receiveData[245]*256+receiveData[244];

            lineData[24] = receiveData[360]*256*256*256+receiveData[359]*256*256+receiveData[358]*256+receiveData[353];

            lineData[25] = 0;


            lineData[26] = receiveData[149]*256*256*256+receiveData[148]*256*256+receiveData[147]*256+receiveData[146];

            lineData[27] = receiveData[169]*256*256*256+receiveData[168]*256*256+receiveData[161]*256+receiveData[160];

            lineData[28] = receiveData[183]*256*256*256+receiveData[182]*256*256+receiveData[171]*256+receiveData[170];

            lineData[29] = receiveData[195]*256*256*256+receiveData[194]*256*256+receiveData[193]*256+receiveData[192];

            lineData[30] = receiveData[213]*256*256*256+receiveData[212]*256*256+receiveData[211]*256+receiveData[210];

            lineData[31] = receiveData[231]*256*256*256+receiveData[230]*256*256+receiveData[229]*256+receiveData[228];

            lineData[32] = receiveData[249]*256*256*256+receiveData[248]*256*256+receiveData[247]*256+receiveData[246];

            lineData[33] = receiveData[377]*256*256*256+receiveData[376]*256*256+receiveData[351]*256+receiveData[350];

            lineData[34] = receiveData[357]*256*256*256+receiveData[356]*256*256+receiveData[355]*256+receiveData[354];

            lineData[35] = sendData[3];
        }



        for(int i=0;i<lineDataLen;i++)
        {
            str.clear();
            newLine += ",";
            newLine += str.setNum(lineData[i],16);
        }

        inoutRunData << newLine << "\n";



        inoutRunData.flush();//clear

        csvFileRunData.close();
}

BYTE Dialog::bitToByte( bool bit, quint8 offset )
{
    BYTE result = 0;
    switch( offset )
    {
    case 0:
        result = BYTE(bit);
        break;
    case 1:
        result = BYTE(bit)*2;
        break;
    case 2:
        result = BYTE(bit)*4;
        break;
    case 3:
        result = BYTE(bit)*8;
        break;
    case 4:
        result = BYTE(bit)*16;
        break;
    case 5:
        result = BYTE(bit)*32;
        break;
    case 6:
        result = BYTE(bit)*64;
        break;
    case 7:
        result = BYTE(bit)*128;
        break;
    default:
        break;
    }
    return result;
}

void Dialog::delOldRecorder()
{
    QDir dir("./data");
    QStringList fileList;
    if(!dir.exists())
        return;

    dir.setFilter(QDir::Files);
    dir.setSorting(QDir::Name |QDir::Reversed);

    fileList = dir.entryList(QDir::NoDotAndDotDot | QDir::Files);

//    qDebug() << fileList.size();
    if(fileList.size()>7) // file number more than 7
    {
        for(int i=7; i<fileList.size(); i++)
        {
//            qDebug() << fileList.at(i);
            dir.remove(fileList.at(i));
        }
    }
//    qDebug() << "\n";
}

//  read hmi power id
void Dialog::OnTimer30s()
{
        {
            char cmd[20] ; // cmd 86,hmi内部温度
            for(int i=0;i<20;i++)
            {
                cmd[i]=0;
            }
            cmd[0] = 0x1B;
            cmd[1] = 0x23;
            cmd[2] = 0x38;
            cmd[3] = 0x36;
            cmd[4] = 0x0D;
            int len = 0;
            int timer1 = 0;
            int timer2 = 0;


            system("setserial /dev/ttyS2 irq 10");
            if(InitSerialPort() != 0 )
                return;
            if( ComWrite( cmd, 5 ) == 5 )
            {
                while(1)
                {
                    len = ComRead( cmd );

                    usleep(300);

                    if(timer1>180)
                    {
                        break;
                    }
                    else
                    {
                        timer1++;
                    }


                    if(len>0)
                    {
                        test_tempdata[28]=len;
                        for(int i=0;i<8;i++)
                        {
                                test_tempdata[16+i]=cmd[i];
                        }
                        while(1)
                        {
                            len = ComRead( cmd );
                            if(len>0)
                            {
                                        test_tempdata[29]=len;
                                        for(int i=0;i<len;i++)
                                        {
                                                test_tempdata[24+i]=cmd[i];
                                           if(test_tempdata[22]==43)
                                           {
                                               if(!Main_HMIFan_bool)
                                               {
                                                   if((test_tempdata[23]-48)*10+(test_tempdata[24]-48)>74)
                                                   {
                                                     Main_HMIFan_bool=true;
                                                   }

                                               }
                                               else
                                               {
                                                   if((test_tempdata[23]-48)*10+(test_tempdata[24]-48)<70)
                                                   {
                                                     Main_HMIFan_bool=false;
                                                   }

                                               }

                                           }



                                        }
                                        break;
                              }
                            usleep(300);
                            if(timer2>180)
                            {
                                break;
                            }
                            else
                            {
                                timer2++;
                            }

                            if(timer2%30==29)
                            {
                                #ifdef LOG_OPEN
                                    m_log.Begin();

                                    m_log.Log("Time:" + GetDateStr() + " " + GetTimeStr() + "\n");
                                    m_log.Log("timer2:" + QString::number(timer2) + "\n");

                                    m_log.End();
                                #endif
                            }

                        }
                        break;
                    }


                }//while

            }//if( ComWrite( cmd, 5 ) == 5 )

                usleep(50);
                CloseSerialPort();
        }


}
