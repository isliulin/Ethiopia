#ifndef ROM_H
#define ROM_H

#include <qcolor.h>
#include <qstring.h>
#include <qrect.h>
#include <qmessagebox.h>

#include "cglobal.h"
#include "ui_dialog.h"

//rom data
struct ROMDATA
{
    QString showStr;
    QFont   font;
    QRect   rc;
    QColor  fgColor;
    QColor  bkColor;
    int     nControlType;
    int     nID;
    ROMDATA* operator ->()
    {
        return this;
    }
};

//rom info
struct ROMINFO
{
  ROMDATA* pRom;
  int      nRomSize;
};

extern int g_nTotalRomNum;
extern ROMINFO g_PicRom[];

extern ROMDATA g_PicRom_Login[];
extern int g_LoginRomLen;
extern ROMDATA g_PicRom_Main[];
extern int g_MainRomLen;
extern ROMDATA g_PicRom_NetState[];
extern int g_NetStateRomLen;
extern ROMDATA g_PicRom_TcuState[];
extern int g_TcuStateRomLen;
extern ROMDATA g_PicRom_AcuStatePage[];
extern int g_AcuStatePageRomLen;
extern ROMDATA g_PicRom_BcuStatePage[];
extern int g_BcuStatePageRomLen;
extern ROMDATA g_PicRom_DcdcStatePage[];
extern int g_DcdcStatePageRomLen;
extern ROMDATA g_PicRom_Pis[];
extern int g_PisRomLen;
extern ROMDATA g_PicRom_StartStationSet[];
extern int  g_StartStationSetRomLen;
extern ROMDATA g_PicRom_EndStationSet[];
extern int  g_EndStationSetRomLen;
//extern ROMDATA g_PicRom_CurrentStationSet[];
//extern int  g_CurrentStationSetRomLen;
extern ROMDATA g_PicRom_HvacStatePage[];
extern int  g_HvacStatePageRomLen;
extern ROMDATA g_PicRom_HvacParameterSet[];
extern int  g_HvacParameterSetRomLen;
extern ROMDATA g_PicRom_HvacTest[];
extern int  g_HvacTestRomLen;
extern ROMDATA g_PicRom_ParameterSet[];
extern int  g_ParameterSetRomLen;
extern ROMDATA g_PicRom_SysTimeSet[];
extern int  g_SysTimeSetRomLen;
extern ROMDATA g_PicRom_CarCodeSet[];
extern int  g_CarCodeSetRomLen;
extern ROMDATA g_PicRom_WheelDiameterSet[];
extern int  g_WheelDiameterSetRomLen;
extern ROMDATA g_PicRom_LuminanceSet[];
extern int  g_LuminanceSetRomLen;
extern ROMDATA g_PicRom_DriverCodeManage[];
extern int  g_DriverCodeManageRomLen;
extern ROMDATA g_PicRom_DriverCodeList[];
extern int  g_DriverCodeListRomLen;
extern ROMDATA g_PicRom_MaintainerManage[];
extern int  g_MaintainerManageRomLen;
extern ROMDATA g_PicRom_MaintainerIDList[];
extern int  g_MaintainerIDListRomLen;
extern ROMDATA g_PicRom_ModifyAccumulateMileage[];
extern int  g_ModifyAccumulateMileageRomLen;
extern ROMDATA g_PicRom_InstructionTest[];
extern int  g_InstructionTestRomLen;
extern ROMDATA g_PicRom_CurrentFaultList[];
extern int  g_CurrentFaultListRomLen;
extern ROMDATA g_PicRom_HistoryFaultList[];
extern int  g_HistoryFaultListRomLen;
extern ROMDATA g_PicRom_DeviceSelect[];
extern int  g_DeviceSelectRomLen;
extern ROMDATA g_PicRom_GradeSelect[];
extern int  g_GradeSelectRomLen;
extern ROMDATA g_PicRom_StartTimeSet[];
extern int  g_StartTimeSetRomLen;
extern ROMDATA g_PicRom_EndTimeSet[];
extern int  g_EndTimeSetRomLen;
extern ROMDATA g_PicRom_Door[];
extern int  g_DoorRomLen;
extern ROMDATA g_PicRom_FaultAlarm[];
extern int  g_FaultAlarmRomLen;
extern ROMDATA g_PicRom_SerialData[];
extern int g_SerialDataLen;
extern ROMDATA g_PicRom_Version[];
extern int g_VersionRomLen;
extern ROMDATA g_PicRom_LocalIO[];
extern int g_LocalIORomLen;
extern ROMDATA g_PicRom_MainControlCmd[];
extern int  g_PicRom_MainControlCmdLen;
//2014-4-28 add coupled netstate
extern ROMDATA g_PicRom_NetStateCoupled[];
extern int g_NetStateCoupledRomLen;

extern ROMDATA g_PicRom_AcuStatePageCoupled[];
extern int g_AcuStatePageCoupledRomLen;
extern ROMDATA g_PicRom_TcuStatePageCoupled[];
extern int g_TcuStatePageCoupledRomLen;
extern ROMDATA g_PicRom_BcuStatePageCoupled[];
extern int g_BcuStatePageCoupledRomLen;
extern ROMDATA g_PicRom_HvacStatePageCoupled[];
extern int g_HvacStatePageCoupledRomLen;

extern ROMDATA g_PicRom_MyStatePage[];
extern int g_MyStatePageRomLen;
extern ROMDATA g_PicRom_EmergencyBroadcastCmd[];
extern int g_PicRom_EmergencyBroadcastCmdLen;
extern ROMDATA g_PicRom_InstructionTestTBC[];
extern int g_InstructionTestTBCRomLen;

extern ROMDATA g_PicRom_mCurrentStationSet[];
extern int g_mCurrentStationSetRomLen;

//Control id:
//2014-5-28 add fault domodel page
//extern ROMDATA g_PicRom_FaultDoModelDlgPage[];
//extern int g_PicRom_FaultDoModelDlgRomLen;
// common page header control id
//
#define ID_IGNORE                           0xFFFF
//
#define IDBTN_NAVIBAR_MAIN                  0xFF01
#define IDBTN_NAVIBAR_NET                   0xFF02
#define IDBTN_NAVIBAR_TCU                   0xFF03
#define IDBTN_NAVIBAR_APS                   0xFF04
#define IDBTN_NAVIBAR_BRAKE                 0xFF05
#define IDBTN_NAVIBAR_DCDC                  0xFF06
#define IDBTN_NAVIBAR_PIS                   0xFF07
#define IDBTN_NAVIBAR_HVAC                  0xFF08
#define IDBTN_NAVIBAR_MAINTAIN              0xFF09
#define IDBTN_NAVIBAR_QUIT                  0xFF0A
#define IDBTN_NAVIBAR_HVACSTATE             0xFF0B
#define IDBTN_NAVIBAR_HVACPARAMSET          0xFF0C
#define IDBTN_NAVIBAR_PARAMSET              0xFF0D
#define IDBTN_NAVIBAR_INSTRUCTIONTEST       0xFF0E
#define IDBTN_NAVIBAR_CURRENTFAULTLIST      0xFF0F
#define IDBTN_NAVIBAR_HISTROYFAULTLIST      0xFF10
#define IDBTN_NAVIBAR_DOOR                  0xFF11
#define IDLB_COM_NETVOLTAGE                 0xFF12
#define IDLB_COM_BATTERYVOLTAGE             0xFF13
#define IDLB_COM_CURRENTSTATION             0xFF14
#define IDLB_COM_NEXTSTATION                0xFF15
#define IDLB_COM_DATE                       0xFF16
#define IDLB_COM_TIME                       0xFF17
#define ID_COM_HELP                         0xFF18
#define ID_COM_WARNING                      0xFF19
#define IDBTN_NAVIBAR_HVACTEST              0xFF1A

//common rom macro
#define D_FONT(T)               QFont("SimHei",  T+6, QFont::Normal, FALSE)// T+10
#define D_FONT_BOLD(T)          QFont("SimHei",  T+6, QFont::Normal, FALSE)
#define D_DEFAULT_FONT          D_FONT(8)
#define D_COMMON_TITLE_FONT     D_FONT_BOLD(10)

#define D_COMMON_PAGE_HEADER    \
    /*string                font                       rc                  foreground color              background color                control type                   ID           */         \
    {"",                   D_DEFAULT_FONT,      QRect(  0, 60,640,  2),      QColor(250,250,250)  ,          QColor(50, 50, 50)  ,           CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(  0, 30,530,  2),      QColor(250,250,250)  ,          QColor(50, 50, 50)  ,           CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(170,  0,  2, 60),      QColor(250,250,250)  ,          QColor(50, 50, 50)  ,           CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(430,  0,  2, 60),      QColor(250,250,250)  ,          QColor(50, 50, 50)  ,           CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(530,  0,  2, 60),      QColor(250,250,250)  ,          QColor(50, 50, 50)  ,           CONTROL_LINE,           ID_IGNORE           },     \
    {"",                   D_DEFAULT_FONT,      QRect(585,  0,  2, 60),      QColor(250,250,250)  ,          QColor(50, 50, 50)  ,           CONTROL_LINE,           ID_IGNORE           },     \
    {QSTR("NetVoltage：0V"),      D_COMMON_TITLE_FONT, QRect(  4,  6,166, 20),      Qt::yellow,                     Qt::black,                      CONTROL_LABEL,          IDLB_COM_NETVOLTAGE },     \
    {QSTR("BatteryVoltage：0V"), D_COMMON_TITLE_FONT, QRect(  4, 37,166, 20),      Qt::yellow,                     Qt::black,                      CONTROL_LABEL,      IDLB_COM_BATTERYVOLTAGE },     \
    {QSTR("CurrentStation："),      D_COMMON_TITLE_FONT, QRect(176,  6,250, 20),      Qt::yellow,                     Qt::black,                      CONTROL_LABEL,      IDLB_COM_CURRENTSTATION },     \
    {QSTR("NextStation："),      D_COMMON_TITLE_FONT, QRect(176, 37,250, 20),      Qt::yellow,                     Qt::black,                      CONTROL_LABEL,         IDLB_COM_NEXTSTATION },     \
    {"",                   D_COMMON_TITLE_FONT, QRect(439,  6, 90, 20),      Qt::yellow,                     Qt::black,                      CONTROL_LABEL,          IDLB_COM_DATE       },     \
    {"",                   D_COMMON_TITLE_FONT, QRect(448, 37, 80, 20),      Qt::yellow,                     Qt::black,                      CONTROL_LABEL,          IDLB_COM_TIME       },     \
    {"help_icon.png" ,     D_DEFAULT_FONT,      QRect(540, 13, 40, 40),      Qt::yellow,                     Qt::black,                      CONTROL_IMAGE,          ID_COM_HELP         },     \
    {"warning_icon.png" ,  D_DEFAULT_FONT,      QRect(590, 10, 45, 45),      Qt::yellow,                     Qt::black,                      CONTROL_IMAGE,          ID_COM_WARNING      },



#define D_LAYER1_NAVIGATION_BAR    \
    /*string                font                       rc                  foreground color              background color                control type                   ID           */         \
    {"",                   D_COMMON_TITLE_FONT,      QRect(  0, 438,640,  2),    QColor(250,250,250),            QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE              },   \
    {QSTR("Main"),         D_COMMON_TITLE_FONT,      QRect(  6, 445, 67, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_MAIN     },   \
    {QSTR("Net"),         D_COMMON_TITLE_FONT,      QRect( 82, 445, 67, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_NET      },   \
    {QSTR("TCU"),         D_COMMON_TITLE_FONT,      QRect(158, 445, 67, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_TCU      },   \
    {QSTR("ACU"),         D_COMMON_TITLE_FONT,      QRect(234, 445, 67, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_APS      },   \
    {QSTR("BCU"),         D_COMMON_TITLE_FONT,      QRect(310, 445, 67, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_BRAKE    },   \
    {QSTR("PIS"),         D_COMMON_TITLE_FONT,      QRect(386, 445, 67, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_PIS      },   \
    {QSTR("HVAC"),        D_COMMON_TITLE_FONT,      QRect(462, 445, 67, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_HVAC     },   \
    {QSTR("Maintenance"),    D_FONT(9),      QRect(538, 445, 90, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_MAINTAIN },   \



#define D_LAYER2_NAVIGATION_BAR_HVAC    \
    /*string                           font                       rc                  foreground color              background color                control type                   ID           */           \
    {"",                       D_COMMON_TITLE_FONT,      QRect(  0, 438,640,  2),    QColor(250,250,250),            QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE                  },   \
    {QSTR("HVAC"),           D_COMMON_TITLE_FONT,      QRect(  6, 445,120, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_HVACSTATE    },   \
    {QSTR("HVAC Parameter"),        D_COMMON_TITLE_FONT,      QRect(136, 445,180, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_HVACPARAMSET },   \
    {QSTR("HVAC Test"),           D_COMMON_TITLE_FONT,      QRect(326, 445,120, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_HVACTEST     },   \
    {QSTR("Quit"),              D_COMMON_TITLE_FONT,      QRect(578, 445, 53, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_QUIT         },



#define D_LAYER2_NAVIGATION_BAR_MAINTAIN    \
    /*string                font                                    rc                  foreground color              background color                control type                   ID           */                 \
    {"",                   D_COMMON_TITLE_FONT,            QRect(  0, 438,640,  2),    QColor(250,250,250),            QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE                     },   \
    {QSTR("Parametersetting"),      D_FONT(7),            QRect(  6, 445, 120, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_PARAMSET        },   \
    {QSTR("InstructionTest"),      D_FONT(7),            QRect( 131, 445,120, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_INSTRUCTIONTEST },   \
    {QSTR("CurrentFaultList"),   D_FONT(7),            QRect(256, 445,120, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_CURRENTFAULTLIST},   \
    {QSTR("Historical Fault"),   D_FONT(7),            QRect(381, 445,120, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_HISTROYFAULTLIST},   \
    {QSTR("Doors"),      D_FONT(8),            QRect(506, 445, 66, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_DOOR       },   \
    {QSTR("Quit"),          D_FONT(8),            QRect(578, 445, 53, 30),    Qt::black,                      Qt::yellow,                     CONTROL_BUTTON,         IDBTN_NAVIBAR_QUIT            },

#endif // ROM_H
