#include "cversionpage.h"

ROMDATA g_PicRom_Version[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
  {QSTR("Software Version")  ,    D_FONT(13),            QRect(  0, 65,640, 50),                  Qt::black,                   Qt::yellow,                 CONTROL_LABEL,            ID_IGNORE                },
  //H line
  {"",                   D_DEFAULT_FONT,      QRect( 50,140,540,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,160,540,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,180,540,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,200,540,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,220,540,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,240,540,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,260,540,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,280,540,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,300,540,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,320,540,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,340,540,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,360,540,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,380,540,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,400,540,  1),              Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,420,540,  1),              Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  //V line
  {"",                   D_DEFAULT_FONT,      QRect( 50,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(160,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(230,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(340,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(410,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(520,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(590,140,  1,280),             Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

  //label
  {QSTR("Device"),          D_COMMON_TITLE_FONT,   QRect( 51,141,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"VCU",                D_COMMON_TITLE_FONT,   QRect( 51,161,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"BCU",                D_COMMON_TITLE_FONT,   QRect( 51,181,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MC1_PIS",                D_COMMON_TITLE_FONT,   QRect( 51,201,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MC2_PIS",                D_COMMON_TITLE_FONT,   QRect( 51,221,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MC1_ACU",            D_COMMON_TITLE_FONT,   QRect( 51,241,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MC2_ACU",            D_COMMON_TITLE_FONT,   QRect( 51,261,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MC1_HVAC",           D_COMMON_TITLE_FONT,   QRect( 51,281,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MC2_HVAC",           D_COMMON_TITLE_FONT,   QRect( 51,301,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR("MC1_TCU_MSR1"),    D_COMMON_TITLE_FONT,   QRect( 51,321,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR("MC1_TCU_MSR2"),    D_COMMON_TITLE_FONT,   QRect( 51,341,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR("MC2_TCU_MSR1"),    D_COMMON_TITLE_FONT,   QRect( 51,361,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR("MC2_TCU_MSR2"),    D_COMMON_TITLE_FONT,   QRect( 51,381,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MC1_BCC",            D_COMMON_TITLE_FONT,   QRect( 51,401,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR("Version"),        D_COMMON_TITLE_FONT,   QRect(161,141, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,161, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_VCU  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,181, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_BCU  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,201, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC1_PIS  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,221, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_PIS  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,241, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC1_ACU},
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,261, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_ACU},
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,281, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC1_HVAC},
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,301, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_HVAC},
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,321, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC1_TCU_MODULE1},
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,341, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC1_TCU_MODULE2},
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,361, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_TCU_MODULE1},
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,381, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_TCU_MODULE2},
  {"",                   D_COMMON_TITLE_FONT,   QRect(161,401, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC1_BCC},

  {QSTR("Device2"),          D_COMMON_TITLE_FONT,   QRect(231,141,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"DOOR1",              D_COMMON_TITLE_FONT,   QRect(231,161,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"DOOR2",              D_COMMON_TITLE_FONT,   QRect(231,181,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"DOOR3",              D_COMMON_TITLE_FONT,   QRect(231,201,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"DOOR4",              D_COMMON_TITLE_FONT,   QRect(231,221,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"DOOR5",              D_COMMON_TITLE_FONT,   QRect(231,241,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"DOOR6",              D_COMMON_TITLE_FONT,   QRect(231,261,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"DOOR7",              D_COMMON_TITLE_FONT,   QRect(231,281,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"DOOR8",              D_COMMON_TITLE_FONT,   QRect(231,301,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"RIOM1DIM",           D_COMMON_TITLE_FONT,   QRect(231,321,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"RIOM1DOM",           D_COMMON_TITLE_FONT,   QRect(231,341,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"RIOM1AIOM",            D_COMMON_TITLE_FONT,   QRect(231,361,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"RIOM2DIM",            D_COMMON_TITLE_FONT,   QRect(231,381,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"RIOM2DOM",            D_COMMON_TITLE_FONT,   QRect(231,401,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR("Version"),        D_COMMON_TITLE_FONT,   QRect(341,141, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,161, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC1_DOOR1},
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,181, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC1_DOOR2},
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,201, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC1_DOOR3},
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,221, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC1_DOOR4},
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,241, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_DOOR1},
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,261, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_DOOR2},
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,281, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_DOOR3},
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,301, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_DOOR4},
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,321, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_RIOM1_DIM},
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,341, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_RIOM1_DOM},
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,361, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_RIOM1_AIOM},
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,381, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_RIOM2_DIM},
  {"",                   D_COMMON_TITLE_FONT,   QRect(341,401, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_RIOM2_DOM},

  {QSTR("Device3"),          D_COMMON_TITLE_FONT,   QRect(411,141,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"RIOM2AIOM",            D_COMMON_TITLE_FONT,   QRect(411,161,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MC2_BCC",            D_COMMON_TITLE_FONT,   QRect(411,181,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"HMI",            D_COMMON_TITLE_FONT,   QRect(411,201,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"RIOM1PWM",            D_COMMON_TITLE_FONT,   QRect(411,221,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"RIOM1GWM",             D_COMMON_TITLE_FONT,   QRect(411,241,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"RIOM2PWM",             D_COMMON_TITLE_FONT,   QRect(411,261,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"RIOM2GWM",            D_COMMON_TITLE_FONT,   QRect(411,281,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",            D_COMMON_TITLE_FONT,   QRect(411,301,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
//  {"MC1_DO2",            D_COMMON_TITLE_FONT,   QRect(411,321,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
//  {"MC2_DO2",            D_COMMON_TITLE_FONT,   QRect(411,341,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  //{"MC1_DCDC",           D_COMMON_TITLE_FONT,   QRect(411,361,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  //{"MC2_DCDC",           D_COMMON_TITLE_FONT,   QRect(411,381,108, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR("Version"),        D_COMMON_TITLE_FONT,   QRect(521,141, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",                   D_COMMON_TITLE_FONT,   QRect(521,161, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_RIOM2_AIOM  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(521,181, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_BCC  },
  {"1.21",               D_COMMON_TITLE_FONT,   QRect(521,201, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_HMIVISION  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(521,221, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_RIOM1PWM  },
  {"",                   D_COMMON_TITLE_FONT,   QRect(521,241, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_RIOM1GWM},
  {"",                   D_COMMON_TITLE_FONT,   QRect(521,261, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_RIOM2PWM},
  {"",                   D_COMMON_TITLE_FONT,   QRect(521,281, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_RIOM2GWM},
//  {"",                   D_COMMON_TITLE_FONT,   QRect(521,301, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_DO1},
//  {"",                   D_COMMON_TITLE_FONT,   QRect(521,321, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC1_DO2},
//  {"",                   D_COMMON_TITLE_FONT,   QRect(521,341, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_DO2},
//  {"",                   D_COMMON_TITLE_FONT,   QRect(521,361, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC1_DCDC},
//  {"",                   D_COMMON_TITLE_FONT,   QRect(521,381, 68, 18),                 Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICVERSION_LABEL_MC2_DCDC},

  {QSTR("Quit"),          D_COMMON_TITLE_FONT,   QRect(275,430, 90, 40),                Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICVERSION_BUTTON_QUIT},

};
int g_VersionRomLen = sizeof(g_PicRom_Version)/sizeof(ROMDATA);

CVersionPage::CVersionPage()
{

}


BEGIN_MESSAGE_MAP(CVersionPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PICVERSION_BUTTON_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(ID_PICVERSION_BUTTON_QUIT, OnQuitButtonUp)
END_MESSAGE_MAP()
void CVersionPage::OnInitPage()
{
}
void CVersionPage::OnUpdatePage()
{
    double vision_vcu = 0;
    double vision_bcu = 0;
    double vision_mc1_pis = 0;
    double vision_mc2_pis = 0;
    double vision_mc1_acu = 0;
    double vision_mc2_acu = 0;
    double vision_mc1_hvac = 0;
    double vision_mc2_hvac = 0;
    double vision_door1 = 0;
    double vision_door2 = 0;
    double vision_door3 = 0;
    double vision_door4 = 0;
    double vision_door5 = 0;
    double vision_door6 = 0;
    double vision_door7 = 0;
    double vision_door8 = 0;
    double vision_mc1_bcc = 0;
    double vision_mc2_bcc = 0;
    double vision_mc1msr1_tcu = 0;
    double vision_mc1msr2_tcu = 0;
    double vision_mc2msr1_tcu = 0;
    double vision_mc2msr2_tcu = 0;
    double vision_riom1dim = 0;
    double vision_riom1dom = 0;
    double vision_riom1aiom = 0;
    double vision_riom2dim = 0;
    double vision_riom2dom = 0;
    double vision_riom2aiom = 0;
    double vision_riom1pwm = 0;
    double vision_riom1gwm = 0;
    double vision_riom2pwm = 0;
    double vision_riom2gwm = 0;
    vision_vcu = double(VISION_VCU_UINT)/100;
    vision_bcu = double(VISION_BCU_UINT)/100;
    vision_mc1_pis = double(VISION_MC1_PIS_UINT)/100;
    vision_mc2_pis = double(VISION_MC2_PIS_UINT)/100;
    vision_mc1_acu = double(VISION_MC1_ACU_BYTE)/100;
    vision_mc2_acu = double(VISION_MC2_ACU_BYTE)/100;
    vision_mc1_hvac = double(VISION_MC1_HVAC_UINT)/100;
    vision_mc2_hvac = double(VISION_MC2_HVAC_UINT)/100;
    vision_door1 = double(VISION_DOOR1_UINT)/100;
    vision_door2 = double(VISION_DOOR2_UINT)/100;
    vision_door3 = double(VISION_DOOR3_UINT)/100;
    vision_door4 = double(VISION_DOOR4_UINT)/100;
    vision_door5 = double(VISION_DOOR5_UINT)/100;
    vision_door6 = double(VISION_DOOR6_UINT)/100;
    vision_door7 = double(VISION_DOOR7_UINT)/100;
    vision_door8 = double(VISION_DOOR8_UINT)/100;
    vision_mc1_bcc = double(VISION_MC1_BCC_BYTE)/100;
    vision_mc2_bcc = double(VISION_MC2_BCC_BYTE)/100;
    vision_mc1msr1_tcu = double(VISION_MC1_MSR1_TCU_BYTE)/100;
    vision_mc1msr2_tcu = double(VISION_MC1_MSR2_TCU_BYTE)/100;
    vision_mc2msr1_tcu = double(VISION_MC2_MSR1_TCU_BYTE)/100;
    vision_mc2msr2_tcu = double(VISION_MC2_MSR2_TCU_BYTE)/100;
    vision_riom1pwm = double(VISION_RIOM1_PWM_BYTE)/10;
    vision_riom1gwm = double(VISION_RIOM1_GWM_BYTE)/10;
    vision_riom2pwm = double(VISION_RIOM2_PWM_BYTE)/10;
    vision_riom2gwm = double(VISION_RIOM2_GWM_BYTE)/10;
    vision_riom1dim = double(VISION_RIOM1_DIM_BYTE)/10;
    vision_riom1dom = double(VISION_RIOM1_DOM_BYTE)/10;
    vision_riom1aiom = double(VISION_RIOM1_AIOM_BYTE)/10;
    vision_riom2dim = double(VISION_RIOM2_DIM_BYTE)/10;
    vision_riom2dom = double(VISION_RIOM2_DOM_BYTE)/10;
    vision_riom2aiom = double(VISION_RIOM2_AIOM_BYTE)/10;

    GetDlgItem(ID_PICVERSION_LABEL_VCU)->SetCtrlText( QString::number(vision_vcu,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_BCU)->SetCtrlText( QString::number(vision_bcu,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_PIS)->SetCtrlText( QString::number(vision_mc1_pis,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_PIS)->SetCtrlText( QString::number(vision_mc2_pis,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_ACU)->SetCtrlText( QString::number(vision_mc1_acu,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_ACU)->SetCtrlText( QString::number(vision_mc2_acu,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_HVAC)->SetCtrlText( QString::number(vision_mc1_hvac,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_HVAC)->SetCtrlText( QString::number(vision_mc2_hvac,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DOOR1)->SetCtrlText( QString::number(vision_door1,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DOOR2)->SetCtrlText( QString::number(vision_door2,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DOOR3)->SetCtrlText( QString::number(vision_door3,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DOOR4)->SetCtrlText( QString::number(vision_door4,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DOOR1)->SetCtrlText( QString::number(vision_door5,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DOOR2)->SetCtrlText( QString::number(vision_door6,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DOOR3)->SetCtrlText( QString::number(vision_door7,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DOOR4)->SetCtrlText( QString::number(vision_door8,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_BCC)->SetCtrlText( QString::number(vision_mc1_bcc,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_BCC)->SetCtrlText( QString::number(vision_mc2_bcc,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_TCU_MODULE1)->SetCtrlText( QString::number(vision_mc1msr1_tcu,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_TCU_MODULE2)->SetCtrlText( QString::number(vision_mc1msr2_tcu,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_TCU_MODULE1)->SetCtrlText( QString::number(vision_mc2msr1_tcu,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_TCU_MODULE2)->SetCtrlText( QString::number(vision_mc2msr2_tcu,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_RIOM1_DIM)->SetCtrlText( QString::number(vision_riom1dim,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_RIOM1_DOM)->SetCtrlText( QString::number(vision_riom1dom,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_RIOM1_AIOM)->SetCtrlText( QString::number(vision_riom1aiom,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_RIOM2_DIM)->SetCtrlText( QString::number(vision_riom2dim,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_RIOM2_DOM)->SetCtrlText( QString::number(vision_riom2dom,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_RIOM2_AIOM)->SetCtrlText( QString::number(vision_riom2aiom,'f',2) );/**/

    GetDlgItem(ID_PICVERSION_LABEL_RIOM1PWM)->SetCtrlText( QString::number(vision_riom1pwm,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_RIOM1GWM)->SetCtrlText( QString::number(vision_riom1gwm,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_RIOM2PWM)->SetCtrlText( QString::number(vision_riom2pwm,'f',2) );
    GetDlgItem(ID_PICVERSION_LABEL_RIOM2GWM)->SetCtrlText( QString::number(vision_riom2gwm,'f',2) );/**/

    /*
*/
    /*double vcu_version=0;
    vcu_version=(double)VERSION_VCU_WORD;
    GetDlgItem(ID_PICVERSION_LABEL_VCU)->SetCtrlText( QString::number(vcu_version,'f',2) );
    //GetDlgItem(ID_PICVERSION_LABEL_VCU)->SetCtrlText( QString::number(VERSIONHIGH_VCU_BYTE) + "." + QString::number(VERSIONLOW_VCU_BYTE) );

    // 20130301 modify BCU : uint16*0.01
    //GetDlgItem(ID_PICVERSION_LABEL_BCU)->SetCtrlText( QString::number(VERSION_HB_BCU_BYTE) + "." + QString::number(VERSION_LB_BCU_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_BCU)->SetCtrlText( mRound( (VERSION_HB_BCU_BYTE*256+VERSION_LB_BCU_BYTE)*0.01,2 ) );

    GetDlgItem(ID_PICVERSION_LABEL_IDU)->SetCtrlText( "4.26" );

    // 20130301 modify PIS : VERSIONHIGH_PIS_BYTE.VERSIONLOW_PIS_BYTE*0.01=(VERSIONHIGH_PIS_BYTE*100+VERSIONLOW_PIS_BYTE)*0.01
    //GetDlgItem(ID_PICVERSION_LABEL_PIS)->SetCtrlText( QString::number(VERSIONHIGH_PIS_BYTE) + "." + QString::number(VERSIONLOW_PIS_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_PIS)->SetCtrlText( mRound((VERSIONHIGH_PIS_BYTE*100+VERSIONLOW_PIS_BYTE)*0.01,2) );

    GetDlgItem(ID_PICVERSION_LABEL_MC1_ACU)->SetCtrlText( QString::number(VERSIONHIGH_MC1_ACU_BYTE) + "." + QString::number(VERSIONLOW_MC1_ACU_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_ACU)->SetCtrlText( QString::number(VERSIONHIGH_MC2_ACU_BYTE) + "." + QString::number(VERSIONLOW_MC2_ACU_BYTE) );

    // 20130301 modify HVAC : VERSION_HB_MC1_HVAC_BYTE.VERSION_LB_MC1_HVAC_BYTE*0.01=(VERSION_HB_MC1_HVAC_BYTE*100+VERSION_LB_MC1_HVAC_BYTE)*0.01
//    GetDlgItem(ID_PICVERSION_LABEL_MC1_HVAC)->SetCtrlText( QString::number(VERSION_HB_MC1_HVAC_BYTE) + "." + QString::number(VERSION_LB_MC1_HVAC_BYTE) );
//    GetDlgItem(ID_PICVERSION_LABEL_MC2_HVAC)->SetCtrlText( QString::number(VERSION_HB_MC2_HVAC_BYTE) + "." + QString::number(VERSION_LB_MC2_HVAC_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_HVAC)->SetCtrlText( mRound((VERSION_HB_MC1_HVAC_BYTE*100+VERSION_LB_MC1_HVAC_BYTE)*0.01,2) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_HVAC)->SetCtrlText( mRound((VERSION_HB_MC2_HVAC_BYTE*100+VERSION_LB_MC2_HVAC_BYTE)*0.01,2) );

    GetDlgItem(ID_PICVERSION_LABEL_MC1_TCU_MODULE1)->SetCtrlText( QString::number(VERSIONHIGH_MODULE1_MC1_TCU_BYTE) + "." + QString::number(VERSIONLOW_MODULE1_MC1_TCU_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_TCU_MODULE2)->SetCtrlText( QString::number(VERSIONHIGH_MODULE2_MC1_TCU_BYTE) + "." + QString::number(VERSIONLOW_MODULE2_MC1_TCU_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_TCU_MODULE1)->SetCtrlText( QString::number(VERSIONHIGH_MODULE1_MC2_TCU_BYTE) + "." + QString::number(VERSIONLOW_MODULE1_MC2_TCU_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_TCU_MODULE2)->SetCtrlText( QString::number(VERSIONHIGH_MODULE2_MC2_TCU_BYTE) + "." + QString::number(VERSIONLOW_MODULE2_MC2_TCU_BYTE) );

    GetDlgItem(ID_PICVERSION_LABEL_MC1_BCC)->SetCtrlText( QString::number(VERSIONHIGH_MC1_ACU_BCC_BYTE) + "." + QString::number(VERSIONLOW_MC1_ACU_BCC_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_BCC)->SetCtrlText( QString::number(VERSIONHIGH_MC2_ACU_BCC_BYTE) + "." + QString::number(VERSIONLOW_MC2_ACU_BCC_BYTE) );
    // door version 0.0--9.9
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DOOR1)->SetCtrlText( QString::number(VERSION_HB_MC1_DOOR1_BYTE) + "." + QString::number(VERSION_LB_MC1_DOOR1_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DOOR2)->SetCtrlText( QString::number(VERSION_HB_MC1_DOOR2_BYTE) + "." + QString::number(VERSION_LB_MC1_DOOR2_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DOOR3)->SetCtrlText( QString::number(VERSION_HB_MC1_DOOR3_BYTE) + "." + QString::number(VERSION_LB_MC1_DOOR3_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DOOR4)->SetCtrlText( QString::number(VERSION_HB_MC1_DOOR4_BYTE) + "." + QString::number(VERSION_LB_MC1_DOOR4_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DOOR1)->SetCtrlText( QString::number(VERSION_HB_MC2_DOOR1_BYTE) + "." + QString::number(VERSION_LB_MC2_DOOR1_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DOOR2)->SetCtrlText( QString::number(VERSION_HB_MC2_DOOR2_BYTE) + "." + QString::number(VERSION_LB_MC2_DOOR2_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DOOR3)->SetCtrlText( QString::number(VERSION_HB_MC2_DOOR3_BYTE) + "." + QString::number(VERSION_LB_MC2_DOOR3_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DOOR4)->SetCtrlText( QString::number(VERSION_HB_MC2_DOOR4_BYTE) + "." + QString::number(VERSION_LB_MC2_DOOR4_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_RIOM)->SetCtrlText( QString::number(VERSION_MC1_RIOM_BYTE/10) + "." + QString::number(VERSION_MC1_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_RIOM)->SetCtrlText( QString::number(VERSION_MC2_RIOM_BYTE/10) + "." + QString::number(VERSION_MC2_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_SGN)->SetCtrlText( QString::number(SGNVERSION_MC1_RIOM_BYTE/10) + "." + QString::number(SGNVERSION_MC1_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_SGN)->SetCtrlText( QString::number(SGNVERSION_MC2_RIOM_BYTE/10) + "." + QString::number(SGNVERSION_MC2_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DI1)->SetCtrlText( QString::number(DI1VERSION_MC1_RIOM_BYTE/10) + "." + QString::number(DI1VERSION_MC1_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DI1)->SetCtrlText( QString::number(DI1VERSION_MC2_RIOM_BYTE/10) + "." + QString::number(DI1VERSION_MC2_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DI2)->SetCtrlText( QString::number(DI2VERSION_MC1_RIOM_BYTE/10) + "." + QString::number(DI2VERSION_MC1_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DI2)->SetCtrlText( QString::number(DI2VERSION_MC2_RIOM_BYTE/10) + "." + QString::number(DI2VERSION_MC2_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_AX)->SetCtrlText( QString::number(AXVERSION_MC1_RIOM_BYTE/10) + "." + QString::number(AXVERSION_MC1_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_AX)->SetCtrlText( QString::number(AXVERSION_MC2_RIOM_BYTE/10) + "." + QString::number(AXVERSION_MC2_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DO1)->SetCtrlText( QString::number(DO1VERSION_MC1_RIOM_BYTE/10) + "." + QString::number(DO1VERSION_MC1_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DO1)->SetCtrlText( QString::number(DO1VERSION_MC2_RIOM_BYTE/10) + "." + QString::number(DO1VERSION_MC2_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DO2)->SetCtrlText( QString::number(DO2VERSION_MC1_RIOM_BYTE/10) + "." + QString::number(DO2VERSION_MC1_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DO2)->SetCtrlText( QString::number(DO2VERSION_MC2_RIOM_BYTE/10) + "." + QString::number(DO2VERSION_MC2_RIOM_BYTE%10) );
    GetDlgItem(ID_PICVERSION_LABEL_MC1_DCDC)->SetCtrlText( QString::number(VERSIONHIGH_MC1_DCDC_BYTE) + "." + QString::number(VERSIONLOW_MC1_DCDC_BYTE) );
    GetDlgItem(ID_PICVERSION_LABEL_MC2_DCDC)->SetCtrlText( QString::number(VERSIONHIGH_MC2_DCDC_BYTE) + "." + QString::number(VERSIONLOW_MC2_DCDC_BYTE) );
*/
}
void CVersionPage::OnQuitButtonDown()
{
    ((CButton *)GetDlgItem(ID_PICVERSION_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CVersionPage::OnQuitButtonUp()
{
    ((CButton *)GetDlgItem(ID_PICVERSION_BUTTON_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}
