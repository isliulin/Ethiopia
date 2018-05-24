#include <qdebug.h>

#include "cmainpage.h"
#include "faultcommonprocess.h"

static int g_timertick = 0;
static int g_2slasttick = -1;

void MainFaultTimerProc(void *args)
{
    g_timertick++;
//    if (0 == (g_timertick % 600))
//    {
//        if (!g_communication_ok_flag)
//        {
//            SaveFaultsHistory();
//        }
//    }
    if (0x7fffffff == g_timertick)
    {
        g_timertick = 0;
    }
}

ROMDATA g_PicRom_Main[] =
{
    /*string                                font            rc                       foreground color     background color                control type                   ID           */
  D_COMMON_PAGE_HEADER

  {"P4,P3,P2,P1,NP,B1,B2,B3,B4,B5,B6,B7,EB,", D_COMMON_TITLE_FONT, QRect( 10, 70, 40,312), Qt::yellow,     Qt::transparent,                CONTROL_LISTBOX,              ID_PICMAIN_BRAKETRACTION_STATE },
  {"",                        D_DEFAULT_FONT,      QRect(  0,390,640,  2),    QColor(250,250,250),           QColor(50, 50, 50),             CONTROL_LINE,                 ID_IGNORE              },
  {"",                        D_DEFAULT_FONT,      QRect(520,390,  2, 48),    QColor(250,250,250),           QColor(50, 50, 50),             CONTROL_LINE,                 ID_IGNORE              },

  {QSTR("降级通信模式！"),     D_FONT(10),          QRect(160, 65,150, 26),    Qt::red,                      Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_DEGREEMODE_TITLE     },

  {QSTR("init"),            D_COMMON_TITLE_FONT, QRect(535,396, 90, 36),    Qt::yellow,                    Qt::black,                      CONTROL_BUTTON,               ID_PICMAIN_BUTTON_CONTROLBUTTON },

//  {QSTR("进入小\n无电区"),     D_COMMON_TITLE_FONT,  QRect( 70, 65, 60, 60),        Qt::yellow,                   Qt::black,                 CONTROL_BUTTON,       ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA   },
//  {QSTR("进入大\n无电区"),     D_COMMON_TITLE_FONT,  QRect(570, 65, 60, 60),        Qt::yellow,                   Qt::black,                 CONTROL_BUTTON,       ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA   },

  {QSTR("◀"),         D_FONT_BOLD(18), QRect( 60,290, 36, 60),    Qt::yellow,                    Qt::black,                      CONTROL_BUTTON,                ID_PICMAIN_BUTTON_LEFTTURN },
  {QSTR("▶"),         D_FONT_BOLD(18), QRect(105,290, 36, 60),    Qt::yellow,                    Qt::black,                      CONTROL_BUTTON,                ID_PICMAIN_BUTTON_RIGHTTURN },
      
  {QSTR("Grade22"),           D_FONT(6),           QRect( 10,395, 50, 16),    Qt::cyan,                      Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_FAULTGRADE_TITLE    },
  {QSTR("Code"),           D_FONT(6),           QRect( 60,395, 50, 16),    Qt::cyan,                      Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_FAULTCODE_TITLE     },
  {QSTR("Device"),           D_FONT(6),           QRect(110,395, 50, 16),    Qt::cyan,                      Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_FAULTDEVICE_TITLE   },
  {QSTR("Position"),           D_FONT(6),           QRect(160,395, 50, 16),    Qt::cyan,                      Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_FAULTPOSITION_TITLE },
  {QSTR("Name"),           D_FONT(6),           QRect(210,395,250, 16),    Qt::cyan,                      Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_FAULTNAME_TITLE     },

  {QSTR(""),                  D_FONT(6),           QRect( 10,415, 50, 16),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_FAULTGRADE },
  {QSTR(""),                  D_FONT(6),           QRect( 60,415, 50, 16),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_FAULTCODE  },
  {QSTR(""),                  D_FONT(6),           QRect(110,415, 50, 16),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_FAULTDEVICE  },
  {QSTR(""),                  D_FONT(6),           QRect(160,415, 50, 16),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_FAULTPOSITION},
  {QSTR(""),                  D_FONT(6),           QRect(210,415,250, 16),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_FAULTNAME  },

  {"safecircle.png",          D_DEFAULT_FONT,      QRect(135,160, 80, 64),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_TRACTIONSAFE },

  {"main_brakerelease.png",   D_DEFAULT_FONT,      QRect( 60,134, 82, 48),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_BRAKERELEASE },
  {"main_safebrake.png",      D_DEFAULT_FONT,      QRect( 60,134, 72, 58),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_SAFEBRAKE },
  {"main_diapatchingmode.png",D_DEFAULT_FONT,      QRect(195, 90, 91, 38),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_DISPATCHINGMODE },
  {"main_washingmode.png",    D_DEFAULT_FONT,      QRect(195, 90, 97, 42),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_WASHINGMODE },
  {"main_couplingmode.png",    D_DEFAULT_FONT,      QRect(195, 90, 97, 42),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_COUPLINGMODE },
  {"main_ato.png",            D_DEFAULT_FONT,      QRect(75, 200, 50, 65),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_ATC},
  {"main_rescue.png",         D_DEFAULT_FONT,      QRect(220, 75, 60, 60),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_RESCUE},

  {"",                        D_COMMON_TITLE_FONT, QRect(331,210,120, 20),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_TOTALMILEAGE },
//  {"",                        D_COMMON_TITLE_FONT, QRect(455,210, 80, 20),    Qt::yellow,                    Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_NEXTDISTANCE },
  {"speed_limit_stop.png",    D_DEFAULT_FONT,      QRect(515,135, 80, 80),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_STOP },
  {"speed_limit_3.png",       D_DEFAULT_FONT,      QRect(515,135, 80, 80),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_3KM },
  {"speed_limit_10.png",      D_DEFAULT_FONT,      QRect(515,135, 80, 80),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_10KM },
  {"speed_limit_20.png",      D_DEFAULT_FONT,      QRect(515,135, 80, 80),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_20KM },
  {"speed_limit_40.png",      D_DEFAULT_FONT,      QRect(515,135, 80, 80),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_40KM },
  {"speed_limit_60.png",      D_DEFAULT_FONT,      QRect(515,135, 80, 80),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_60KM },
  {"speed_limit_30.png",      D_DEFAULT_FONT,      QRect(515,135, 80, 80),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_30KM },
  {"speed_limit_50.png",      D_DEFAULT_FONT,      QRect(515,135, 80, 80),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_50KM },
  {"newright.png",            D_DEFAULT_FONT,      QRect(142,225, 60, 40),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_RIGHT },
  {"newleft.png",             D_DEFAULT_FONT,      QRect(142,225, 60, 40),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_LEFT },
  {"newright.png",            D_DEFAULT_FONT,      QRect(573,225, 60, 40),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_MC2RIGHT},
  {"newleft.png",             D_DEFAULT_FONT,      QRect(573,225, 60, 40),    Qt::yellow,                    Qt::black,                      CONTROL_IMAGE,                ID_PICMAIN_IMAGE_MC2LEFT },

  D_LAYER1_NAVIGATION_BAR
  //{"",                        D_DEFAULT_FONT,      QRect( 60,210, 80, 60),      Qt::yellow,                  Qt::transparent,                CONTROL_CAPACITANCE,          ID_PICMAIN_CAPACITANCE1           },

  {"",                        D_DEFAULT_FONT,      QRect(265, 65,250,180),      Qt::yellow,                    Qt::transparent,                CONTROL_SPEED,                ID_PICMAIN_SPEEDCTRL           },
  {"",                        D_DEFAULT_FONT,      QRect(320,470,440,135),      QColor(250,250,250),           QColor(50, 50, 50),             CONTROL_TRAINDIAGRAM,         ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM },
  {"",                        D_FONT_BOLD(38),     QRect(220,150, 65, 65),      QColor(250,250,250),           QColor(50, 50, 50),             CONTROL_COUNTDOWN,            ID_PICMAIN_COUNTDOWN_COUNTDOWN },
  {QSTR(""),      D_FONT(10),          QRect(55, 65,135, 26),    Qt::red,                      Qt::black,                      CONTROL_LABEL,                ID_PICMAIN_LABEL_BACKUPMODE     },

};
int g_MainRomLen = sizeof(g_PicRom_Main)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CMainPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
      //  ON_LBUTTONDOWN(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA,OnButtonInLittleNoPowerAreaDown)
      //  ON_LBUTTONDOWN(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA,OnButtonInLargeNoPowerAreaDown)
        ON_LBUTTONDOWN(ID_COM_WARNING, OnWarningButtonDown)
        ON_LBUTTONUP(ID_COM_WARNING, OnWarningButtonUp)
        ON_LBUTTONDOWN(ID_PICMAIN_BUTTON_CONTROLBUTTON, OnControlButtonDown)
        ON_LBUTTONDOWN(ID_PICMAIN_BUTTON_LEFTTURN, OnLeftTurnButtonDown)
        ON_LBUTTONDOWN(ID_PICMAIN_BUTTON_RIGHTTURN, OnRightTurnButtonDown)

END_MESSAGE_MAP()

CMainPage::CMainPage()
{
    m_currentfaulttimerid = m_timer.add_timer("main_curfault_tmr", 1000, MainFaultTimerProc, this);
    m_turnlighton_bool = false;
    m_tcuoklighton_bool = false;
    m_tcuEBfaultlighton_bool = false;
}

CMainPage::~CMainPage()
{
    m_timer.del_timer(m_currentfaulttimerid);
}

void CMainPage::OnInitPage()
{
    m_currentfaulttimerid = -1;
//    ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->m_bAutoUpState = false;
//    ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->m_bAutoUpState = false;

    if( (MAIN_MC1KEYACTIVE_BOOL && MAIN_MC1_HMI_BOOL && !(MAIN_MC2_HMI_BOOL)) ||
        (MAIN_MC2KEYACTIVE_BOOL && MAIN_MC2_HMI_BOOL && !(MAIN_MC1_HMI_BOOL)) )
    {
        if(g_InLittleNopowerArea_Bool)
        {
//            if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->GetButtonState() != LBUTTON_DOWN )
//                ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
//            if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->GetButtonState() != LBUTTON_UP )
//                ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_UP);
        }

        if(g_InLargeNoPowerArea_Bool)
        {
//            if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->GetButtonState() != LBUTTON_DOWN )
//                ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
//            if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->GetButtonState() != LBUTTON_UP )
//                ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_UP);
        }
    }
    else
    {
        g_InLittleNopowerArea_Bool = false;
//        if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->GetButtonState() != LBUTTON_UP )
//            ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_UP);

        g_InLargeNoPowerArea_Bool = false;
//        if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->GetButtonState() != LBUTTON_UP )
//            ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_UP);
    }

    UpdateImage();
    ////2014-8-3 ADD controlbtn condition
    if( (( MAIN_MC1KEYACTIVE_BOOL && !(MAIN_MC2KEYACTIVE_BOOL) )&&
         (MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL)) )||  // mc1 key:true,mc2 key false
      (( MAIN_MC2KEYACTIVE_BOOL && !(MAIN_MC1KEYACTIVE_BOOL) )&&
       (MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL))) )
    {
        ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_CONTROLBUTTON))->SetCtrlText("Control");

    }else
    {
        ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_CONTROLBUTTON))->SetCtrlText("Disable");
    }

}

void CMainPage::OnUpdatePage()
{
    ////2014-8-3 ADD controlbtn condition
    if( (( MAIN_MC1KEYACTIVE_BOOL && !(MAIN_MC2KEYACTIVE_BOOL) )&&
         (MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL)) )||  // mc1 key:true,mc2 key false
      (( MAIN_MC2KEYACTIVE_BOOL && !(MAIN_MC1KEYACTIVE_BOOL) )&&
       (MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL))) )
    {
        ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_CONTROLBUTTON))->ChangeButtonState( LBUTTON_UP );
        ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_CONTROLBUTTON))->SetCtrlText("Control");

    }else
    {
        ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_CONTROLBUTTON))->SetCtrlText("Disable");
        ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_CONTROLBUTTON))->ChangeButtonState( LBUTTON_UP );
    }

    QVariant var;
    var = MAIN_DEADMANDECOUNTER_QUINT8;
    if( MAIN_BYPASSWARNING_BOOL )
    {
        var=-1;
    }
    GetDlgItem(ID_PICMAIN_COUNTDOWN_COUNTDOWN)->SetCtrlText( var.toString() );


//    ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAIN_CAPACITANCE1))->SetValue( MAIN_DCDCPERSENT_USINT,qMax( (uint)(SUPERCAPVOLTAGE_MC1_DCDC_WORD),(uint)(SUPERCAPVOLTAGE_MC2_DCDC_WORD)) );

//    if(MAIN_DCDCPERSENT_USINT>20)
//        ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAIN_CAPACITANCE1))->SetCtrlBKColor(Qt::green);
//    else if(MAIN_DCDCPERSENT_USINT>5)
//        ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAIN_CAPACITANCE1))->SetCtrlBKColor(Qt::yellow);
//    else
//        ((CCapacitanceCtrl*)GetDlgItem(ID_PICMAIN_CAPACITANCE1))->SetCtrlBKColor(Qt::red);

    
    ((CSpeedCtrl*)GetDlgItem(ID_PICMAIN_SPEEDCTRL))->SetValue(MAIN_TOP_SPEED_QUINT8);

    if(g_communication_ok_flag)
        ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_DEGREEMODE_TITLE))->SetCtrlText(QSTR(""));
    else
        //((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_DEGREEMODE_TITLE))->SetCtrlText(QSTR("降级通信模式！"));
        ((CLabel*)GetDlgItem(ID_PICMAIN_LABEL_DEGREEMODE_TITLE))->SetCtrlText(QSTR(""));


/////////2014-8-3 add BACKUP MODE

    if(MAIN_BACKUPMODE_BOOL)
    {
    ((CLabel *)GetDlgItem(ID_PICMAIN_LABEL_BACKUPMODE))->SetCtrlText("Back Up Mode");
    }else
    {
        ((CLabel *)GetDlgItem(ID_PICMAIN_LABEL_BACKUPMODE))->SetCtrlText("");

    }


    UpdateTrainDiagram();
    UpdateListBoxCtrl();
    UpdateCurrentFaultDisplay(false);
    UpdateTotalMileage();
    //UpdateNextDistance();
    UpdateSpeedLimit();
    UpdateDirection();
    UpdateImage();

//    if( (MAIN_MC1KEYACTIVE_BOOL && MAIN_MC1_HMI_BOOL && !(MAIN_MC2_HMI_BOOL)) ||
//        (MAIN_MC2KEYACTIVE_BOOL && MAIN_MC2_HMI_BOOL && !(MAIN_MC1_HMI_BOOL)) )
//    {
//        if(g_InLittleNopowerArea_Bool)
//        {
//            if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->GetButtonState() != LBUTTON_DOWN )
//                ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_DOWN);
//        }
//        else
//        {
//            if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->GetButtonState() != LBUTTON_UP )
//                ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_UP);
//        }

//        if(g_InLargeNoPowerArea_Bool)
//        {
//            if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->GetButtonState() != LBUTTON_DOWN )
//                ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_DOWN);
//        }
//        else
//        {
//            if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->GetButtonState() != LBUTTON_UP )
//                ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_UP);
//        }
//    }
//    else
//    {
//        g_InLittleNopowerArea_Bool = false;
//        if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->GetButtonState() != LBUTTON_UP )
//            ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_UP);

//        g_InLargeNoPowerArea_Bool = false;
//        if( ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->GetButtonState() != LBUTTON_UP )
//            ((CButton *)GetDlgItem(ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA))->ChangeButtonState(LBUTTON_UP);
//    }

}

void CMainPage::UpdateDirection()
{
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RIGHT))->HideImage();
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_LEFT))->HideImage();
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->HideImage();
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->HideImage();
    // back or forward

    // TODO
    if(MAIN_TRAINCOUPLED_BOOL)
    {
        if (MAIN_FORWARDDIRECTION_BOOL)
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_LEFT))->ShowImage();
        }
        else if (MAIN_BACKWARDDIRECTION_BOOL)
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RIGHT))->ShowImage();
        }
    }

    else if( ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getCar1Key1State() )// current state:mc1 key:true,mc2 key false
    {
        if (MAIN_FORWARDDIRECTION_BOOL)
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_LEFT))->ShowImage();
        }
        else if (MAIN_BACKWARDDIRECTION_BOOL)
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RIGHT))->ShowImage();
        }
    }
    else if( ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getCar1Key2State() )// current state:mc1 key:false,mc2 key true
    {
        if (MAIN_BACKWARDDIRECTION_BOOL)
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2LEFT))->ShowImage();
        }
        else if (MAIN_FORWARDDIRECTION_BOOL)
        {
            ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_MC2RIGHT))->ShowImage();
        }
    }
    else
    {
    }


//    if(LeftTurnCmd_Bool)
//    {
//        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->SetCtrlBKColor(Qt::yellow);
//        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->SetCtrlBKColor(Qt::black);
//    }
//    if(RightTurnCmd_Bool)
//    {
//        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->SetCtrlBKColor(Qt::black);
//        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->SetCtrlBKColor(Qt::yellow);
//    }

    // turn lingt 2HZ
    if(LeftTurnCmd_Bool|RightTurnCmd_Bool)
    {
        if(m_turnlighton_bool&LeftTurnCmd_Bool)
        {
          ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->ChangeButtonState( LBUTTON_DOWN );
        }
        else
        {
          ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->ChangeButtonState( LBUTTON_UP );
        }

        if(m_turnlighton_bool&RightTurnCmd_Bool)
        {
          ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->ChangeButtonState( LBUTTON_DOWN );
        }
        else
        {
          ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->ChangeButtonState( LBUTTON_UP );
        }

        m_turnlighton_bool = !m_turnlighton_bool;
    }
    else
    {
        m_turnlighton_bool = false;
        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->ChangeButtonState( LBUTTON_UP );
        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->ChangeButtonState( LBUTTON_UP );
    }
}

void CMainPage::OnButtonInLittleNoPowerAreaDown()
{

}
void CMainPage::OnButtonInLargeNoPowerAreaDown()
{

}
/*
if bypass:
    bypass:         9
else
on line:
    isolated:       8   black background,red cross
    emgc unlock :   2   red
    fully opened:   4   pink
    not closed:     6   blue
    closed:         5   green
not on line:
    not closed:     6
    closed:         5

*/
void CMainPage::checkDoorState(int car1Door[],int car2Door[])
{
    if(MAIN_DOOR_BYPASS_BOOL)
    {
        for(int i=0; i<8; i++)
        {
            car1Door[i]=9;
            car2Door[i]=9;
        }
    }
    else
    {
            if(!(NET_MC1_DOOR1ONLINE_BOOL)) car1Door [0] = 10;
            else if(DOOR1_ISOTX_BOOL) car1Door[0]=8; // isolated
            else if(DOOR1_EMERGENCYUNLOCKTX_BOOL) car1Door[0]=2; //emgc unlock
            else if(DOOR1_OPENEDTX_BOOL) car1Door[0]=4; // open
            else if(DOOR1_CLOSEDTX_BOOL) car1Door[0]=5; // close
            else car1Door[0]=6; // unknow state

            if(!(NET_MC1_DOOR2ONLINE_BOOL)) car1Door[1] = 10;
            else if(DOOR2_ISOTX_BOOL) car1Door[1]=8; // isolated
            else if(DOOR2_EMERGENCYUNLOCKTX_BOOL) car1Door[1]=2; //emgc unlock
            else if(DOOR2_OPENEDTX_BOOL) car1Door[1]=4; // open
            else if(DOOR2_CLOSEDTX_BOOL) car1Door[1]=5; // close
            else car1Door[1]=6; // unknow state

            if(!(NET_MC1_DOOR3ONLINE_BOOL)) car1Door[2] = 10;
            else if(DOOR3_ISOTX_BOOL) car1Door[2]=8; // isolated
            else if(DOOR3_EMERGENCYUNLOCKTX_BOOL) car1Door[2]=2; //emgc unlock
            else if(DOOR3_OPENEDTX_BOOL) car1Door[2]=4; // open
            else if(DOOR3_CLOSEDTX_BOOL) car1Door[2]=5; // close
            else car1Door[2]=6; // unknow state

            if(!(NET_MC1_DOOR4ONLINE_BOOL)) car1Door[3] = 10;
            else if(DOOR4_ISOTX_BOOL) car1Door[3]=8; // isolated
            else if(DOOR4_EMERGENCYUNLOCKTX_BOOL) car1Door[3]=2; //emgc unlock
            else if(DOOR4_OPENEDTX_BOOL) car1Door[3]=4; // open
            else if(DOOR4_CLOSEDTX_BOOL) car1Door[3]=5; // close
            else car1Door[3]=6; // unknow state

            if(!(NET_MC2_DOOR5ONLINE_BOOL)) car1Door[4] = 10;
            else if(DOOR5_ISOTX_BOOL) car1Door[4]=8; // isolated
            else if(DOOR5_EMERGENCYUNLOCKTX_BOOL) car1Door[4]=2; //emgc unlock
            else if(DOOR5_OPENEDTX_BOOL) car1Door[4]=4; // open
            else if(DOOR5_CLOSEDTX_BOOL) car1Door[4]=5; // close
            else car1Door[4]=6; // unknow state

            if(!(NET_MC2_DOOR6ONLINE_BOOL)) car1Door[5] = 10;
            else if(DOOR6_ISOTX_BOOL) car1Door[5]=8; // isolated
            else if(DOOR6_EMERGENCYUNLOCKTX_BOOL) car1Door[5]=2; //emgc unlock
            else if(DOOR6_OPENEDTX_BOOL) car1Door[5]=4; // open
            else if(DOOR6_CLOSEDTX_BOOL) car1Door[5]=5; // close
            else car1Door[5]=6; // unknow state

            if(!(NET_MC2_DOOR7ONLINE_BOOL)) car1Door[6] = 10;
            else if(DOOR7_ISOTX_BOOL) car1Door[6]=8; // isolated
            else if(DOOR7_EMERGENCYUNLOCKTX_BOOL) car1Door[6]=2; //emgc unlock
            else if(DOOR7_OPENEDTX_BOOL) car1Door[6]=4; // open
            else if(DOOR7_CLOSEDTX_BOOL) car1Door[6]=5; // close
            else car1Door[6]=6; // unknow state

            if(!(NET_MC2_DOOR8ONLINE_BOOL)) car1Door[7] = 10;
            else if(DOOR8_ISOTX_BOOL) car1Door[7]=8; // isolated
            else if(DOOR8_EMERGENCYUNLOCKTX_BOOL) car1Door[7]=2; //emgc unlock
            else if(DOOR8_OPENEDTX_BOOL) car1Door[7]=4; // open
            else if(DOOR8_CLOSEDTX_BOOL) car1Door[7]=5; // close
            else car1Door[7]=6; // unknow state


        //car2
        if(!(NET_MC1_DOOR1ONLINE_BOOL_TBC)) car2Door[0] = 10;
        else if(MAIN_CAR2DOOR1ISOTX_TBC_BOOL) car2Door[0]=8; // isolated
        else if(MAIN_CAR2DOOR1EMERGENCYUNLOCKTX_TBC_BOOL) car2Door[0]=2; //emgc unlock
        else if(MAIN_CAR2DOOR1OPENEDTX_TBC_BOOL) car2Door[0]=4; // open
        else if(MAIN_CAR2DOOR1CLOSEDTX_TBC_BOOL) car2Door[0]=5; // close
        else car2Door[0]=6;

        if(!(NET_MC1_DOOR2ONLINE_BOOL_TBC)) car2Door[1] = 10;
        else if(MAIN_CAR2DOOR2ISOTX_TBC_BOOL) car2Door[1]=8; // isolated
        else if(MAIN_CAR2DOOR2EMERGENCYUNLOCKTX_TBC_BOOL) car2Door[1]=2; //emgc unlock
        else if(MAIN_CAR2DOOR2OPENEDTX_TBC_BOOL) car2Door[1]=4; // open
        else if(MAIN_CAR2DOOR2CLOSEDTX_TBC_BOOL) car2Door[1]=5; // close
        else car2Door[1]=6;

        if(!(NET_MC1_DOOR3ONLINE_BOOL_TBC)) car2Door[2] = 10;
        else if(MAIN_CAR2DOOR3ISOTX_TBC_BOOL) car2Door[2]=8; // isolated
        else if(MAIN_CAR2DOOR3EMERGENCYUNLOCKTX_TBC_BOOL) car2Door[2]=2; //emgc unlock
        else if(MAIN_CAR2DOOR3OPENEDTX_TBC_BOOL) car2Door[2]=4; // open
        else if(MAIN_CAR2DOOR3CLOSEDTX_TBC_BOOL) car2Door[2]=5; // close
        else car2Door[2]=6;

        if(!(NET_MC1_DOOR4ONLINE_BOOL_TBC)) car2Door[3] = 10;
        else if(MAIN_CAR2DOOR4ISOTX_TBC_BOOL) car2Door[3]=8; // isolated
        else if(MAIN_CAR2DOOR4EMERGENCYUNLOCKTX_TBC_BOOL) car2Door[3]=2; //emgc unlock
        else if(MAIN_CAR2DOOR4OPENEDTX_TBC_BOOL) car2Door[3]=4; // open
        else if(MAIN_CAR2DOOR4CLOSEDTX_TBC_BOOL) car2Door[3]=5; // close
        else car2Door[3]=6;

        if(!(NET_MC2_DOOR5ONLINE_BOOL_TBC)) car2Door[4] = 10;
        else if(MAIN_CAR2DOOR5ISOTX_TBC_BOOL) car2Door[4]=8; // isolated
        else if(MAIN_CAR2DOOR5EMERGENCYUNLOCKTX_TBC_BOOL) car2Door[4]=2; //emgc unlock
        else if(MAIN_CAR2DOOR5OPENEDTX_TBC_BOOL) car2Door[4]=4; // open
        else if(MAIN_CAR2DOOR5CLOSEDTX_TBC_BOOL) car2Door[4]=5; // close
        else car2Door[4]=6;

        if(!(NET_MC2_DOOR6ONLINE_BOOL_TBC)) car2Door[5] = 10;
        else if(MAIN_CAR2DOOR6ISOTX_TBC_BOOL) car2Door[5]=8; // isolated
        else if(MAIN_CAR2DOOR6EMERGENCYUNLOCKTX_TBC_BOOL) car2Door[5]=2; //emgc unlock
        else if(MAIN_CAR2DOOR6OPENEDTX_TBC_BOOL) car2Door[5]=4; // open
        else if(MAIN_CAR2DOOR6CLOSEDTX_TBC_BOOL) car2Door[5]=5; // close
        else car2Door[5]=6;

        if(!(NET_MC2_DOOR7ONLINE_BOOL_TBC)) car2Door[6] = 10;
        else if(MAIN_CAR2DOOR7ISOTX_TBC_BOOL) car2Door[6]=8; // isolated
        else if(MAIN_CAR2DOOR7EMERGENCYUNLOCKTX_TBC_BOOL) car2Door[6]=2; //emgc unlock
        else if(MAIN_CAR2DOOR7OPENEDTX_TBC_BOOL) car2Door[6]=4; // open
        else if(MAIN_CAR2DOOR7CLOSEDTX_TBC_BOOL) car2Door[6]=5; // close
        else car2Door[6]=6;

        if(!(NET_MC2_DOOR8ONLINE_BOOL_TBC)) car2Door[7] = 10;
        else if(MAIN_CAR2DOOR8ISOTX_TBC_BOOL) car2Door[7]=8; // isolated
        else if(MAIN_CAR2DOOR8EMERGENCYUNLOCKTX_TBC_BOOL) car2Door[7]=2; //emgc unlock
        else if(MAIN_CAR2DOOR8OPENEDTX_TBC_BOOL) car2Door[7]=4; // open
        else if(MAIN_CAR2DOOR8CLOSEDTX_TBC_BOOL) car2Door[7]=5; // close
        else car2Door[7]=6;
    }
}

void CMainPage::UpdateTrainDiagram()
{
    int car1Door[8],car2Door[8];
    checkDoorState(car1Door,car2Door);

    ///whether coupled
    int TrainCoupledStaus;
    if(!(MAIN_TRAINCOUPLED_BOOL))
    {
           TrainCoupledStaus = 1;
           if( MAIN_MC1KEYACTIVE_BOOL && !(MAIN_MC2KEYACTIVE_BOOL) ) // mc1 key:true,mc2 key false
           {
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State(true);
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key2State(false);
           }
           else if( !(MAIN_MC1KEYACTIVE_BOOL) && MAIN_MC2KEYACTIVE_BOOL ) // mc1 key:false,mc2 key true
           {

               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State(false);
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key2State(true);
           }
           else if( !(MAIN_MC1KEYACTIVE_BOOL) && !(MAIN_MC2KEYACTIVE_BOOL) ) // mc1 key:false,mc2 key false
           {

               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State(false);
               ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key2State(false);
           }
    }
    else
    {
        if( MAIN_MC1KEYACTIVE_BOOL && !(MAIN_MC2KEYACTIVE_BOOL) ) // mc1 key:true,mc2 key false
        {
           if(MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL))// MC1 HMI
           {
               if(!(MAIN_TRAINCOUPLEDMODE_BOOL))
               {
                     TrainCoupledStaus = 2;  //1212
               }else
               {
                   TrainCoupledStaus = 3;//1221
               }
           }else if(MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL))
           {
               TrainCoupledStaus = 1;
           }



            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State(true);
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key2State(false);
        }
        else if( !(MAIN_MC1KEYACTIVE_BOOL) && MAIN_MC2KEYACTIVE_BOOL ) // mc1 key:false,mc2 key true
        {

            if(MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL))// MC1 HMI
            {
                if(!(MAIN_TRAINCOUPLEDMODE_BOOL))
                {
                      TrainCoupledStaus = 4;  //2112
                }else
                {
                    TrainCoupledStaus = 5;//2121
                }
            }else if(MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL))// MC1 HMI
            {
                TrainCoupledStaus = 1;
            }



            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State(false);
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key2State(true);
        }
        else if( !(MAIN_MC1KEYACTIVE_BOOL) && !(MAIN_MC2KEYACTIVE_BOOL) ) // mc1 key:false,mc2 key false
        {
            TrainCoupledStaus = 6;//only slave car info
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key1State(false);
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Key2State(false);
        }


    }

    switch(TrainCoupledStaus)
    {
    case 1:
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TrainCode(g_car1CodeStr);
        //key
        //TP State
        if( MAIN_PANTOGRAPHUPOK_BOOL&&(!(MAIN_PANTOGRAPHDOWNOK_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_UP);
        }
        else if( MAIN_PANTOGRAPHDOWNOK_BOOL&&(!(MAIN_PANTOGRAPHUPOK_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_DOWN);
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_MIDDLE);
        }
//end

//        if( MAIN_PANTO_UP_TBC_BOOL&&(!(MAIN_PANTO_DOWN_TBC_BOOL)) )
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_UP);
//        }
//        else if( MAIN_PANTO_DOWN_TBC_BOOL&&(!(MAIN_PANTO_UP_TBC_BOOL)) )
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_DOWN);
//        }
//end

        //TCU State
        if(MAIN_TCU1OK_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(2);

        if(MAIN_TCU2OK_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(2);

        //BCU State
        if( MAIN_MC1BRAKEFAULT_BOOL ) // MC1 制动故障
        {
            if( MAIN_MC1BRAKERELEASE_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(3);
        }
        else
        {
            if( MAIN_MC1BRAKERELEASE_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(1);
        }//end

        if( MAIN_MC2BRAKEFAULT_BOOL ) // MC2 制动故障
        {
            if( MAIN_MC2BRAKERELEASE_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(3);
        }
        else
        {
            if( MAIN_MC2BRAKERELEASE_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(1);
        }//end

        if( MAIN_TPBRAKEFAULT_BOOL ) // TP    制动故障
        {
            if( MAIN_TPBRAKERELEASE_BOOL ) // TP   制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(3);
        }
        else
        {
            if( MAIN_TPBRAKERELEASE_BOOL )
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(1);
        }//end

        //ACU State
        if(MAIN_ACU1OK_BOOL)
        {
 //           if(MAIN_ACU1STOP_BOOL)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(1);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(5);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(2);

        if(MAIN_ACU2OK_BOOL)
        {
 //           if(MAIN_ACU2STOP_BOOL)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(1);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(5);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(2);


        //HSCB State
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerState(MAIN_HSCBSTATE_BOOL);

        // 20140115 add Battery Contactor State
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Mc1BatteryContactorState(BATTERYCONTACTOR_MC1_RIOM_BOOL);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Mc2BatteryContactorState(BATTERYCONTACTOR_MC2_RIOM_BOOL);

        //Door state
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1DoorState(car1Door);

        // tcu state light
        if(MAIN_TCU1_TRACTIONREADY_BOOL&&MAIN_TCU2_TRACTIONREADY_BOOL)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(true);
            m_tcuoklighton_bool = false;
        }
        else if(MAIN_TCU1_TRACTIONREADY_BOOL||MAIN_TCU2_TRACTIONREADY_BOOL)
        {
            if(m_tcuoklighton_bool)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(true);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(false);
            m_tcuoklighton_bool = !m_tcuoklighton_bool;
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(false);
            m_tcuoklighton_bool = false;
        }

        // tcu EB state light
        if(MAIN_TCU_EB1FAULT_BOOL&&MAIN_TCU_EB2FAULT_BOOL)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(true);
            m_tcuEBfaultlighton_bool = false;
        }
        else if(MAIN_TCU_EB1FAULT_BOOL||MAIN_TCU_EB2FAULT_BOOL)
        {
            if(m_tcuEBfaultlighton_bool)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(true);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(false);
            m_tcuEBfaultlighton_bool = !m_tcuEBfaultlighton_bool;
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(false);
            m_tcuEBfaultlighton_bool = false;
        }
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getTrainCoupledMode(TrainCoupledStaus);

        //2014-4-24
        //ADD BCC STATE
        if(MAIN_BCC1_OK_BOOL)
        {
 //           if(MAIN_BCC1_STOP_BOOL)///STOP = WORK
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(1);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(5);
        }
        else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(2);

        if(MAIN_BCC2_OK_BOOL)
        {
//            if(MAIN_BCC2_STOP_BOOL)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(1);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(5);

        }else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(2);

        break;
        /////tbc judge main or slave based on the cabdrivekey state
    case 2:
        //g_car2CodeStr = "002";
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TrainCode(g_car1CodeStr);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TrainCode(g_car2CodeStr);

        //TP STATE HIGH DOWN
        if( MAIN_PANTOGRAPHUPOK_BOOL&&(!(MAIN_PANTOGRAPHDOWNOK_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_UP);
        }
        else if( MAIN_PANTOGRAPHDOWNOK_BOOL&&(!(MAIN_PANTOGRAPHUPOK_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_DOWN);
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_MIDDLE);
        }


        if( MAIN_PANTO_UP_TBC_BOOL&&(!(MAIN_PANTO_DOWN_TBC_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TPState(PANTOGRAPH_LEFT_UP);
        }
        else if( MAIN_PANTO_DOWN_TBC_BOOL&&(!(MAIN_PANTO_UP_TBC_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TPState(PANTOGRAPH_LEFT_DOWN);
        }else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TPState(PANTOGRAPH_LEFT_MIDDLE);

        }
        //end
        //TCU STATE
        if(MAIN_TCU1OK_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(2);

        if(MAIN_TCU2OK_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(2);
        if(MAIN_TCU1OK_TBC_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU1State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU1State(2);

        if(MAIN_TCU2OK_TBC_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU2State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU2State(2);

        //BCU STATE

        if( MAIN_MC1BRAKEFAULT_BOOL ) // MC1 制动故障
        {
            if( MAIN_MC1BRAKERELEASE_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(3);
        }
        else
        {
            if( MAIN_MC1BRAKERELEASE_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(1);
        }//end

        if( MAIN_MC2BRAKEFAULT_BOOL ) // MC2 制动故障
        {
            if( MAIN_MC2BRAKERELEASE_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(3);
        }
        else
        {
            if( MAIN_MC2BRAKERELEASE_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(1);
        }//end

        if( MAIN_MC1FRICTIONBRAKEERR_TBC_BOOL ) // MC1 制动故障
        {
            if( MAIN_MC1FRICTIONBRAKERELEASED_TBC_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(3);
        }
        else
        {
            if( MAIN_MC1FRICTIONBRAKERELEASED_TBC_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(1);
        }//end

        if( MAIN_MC2FRICTIONBRAKEERR_TBC_BOOL ) // MC2 制动故障
        {
            if( MAIN_MC2FRICTIONBRAKERELEASED_TBC_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(3);
        }
        else
        {
            if( MAIN_MC2FRICTIONBRAKERELEASED_TBC_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(1);
        }//end

        if( MAIN_TPBRAKEFAULT_BOOL ) // TP    制动故障
        {
            if( MAIN_TPBRAKERELEASE_BOOL ) // TP   制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(3);
        }
        else
        {
            if( MAIN_TPBRAKERELEASE_BOOL )
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(1);
        }//end

        if( MAIN_TPFRICTIONBRAKEERR_TBC_BOOL ) // TP    制动故障
        {
            if( MAIN_TPFRICTIONBRAKERELEASED_TBC_BOOL ) // TP   制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(3);
        }
        else
        {
            if( MAIN_TPFRICTIONBRAKERELEASED_TBC_BOOL )
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(1);
        }//end
        //ACU State
        if(MAIN_ACU1OK_BOOL)
        {
//            if(MAIN_ACU1STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(2);

        if(MAIN_ACU2OK_BOOL)
        {
//            if(MAIN_ACU2STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(2);
        //ACU State
        if(MAIN_ACU1OK_TBC_BOOL)
        {
//            if(MAIN_ACU1STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU1State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU1State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU1State(2);

        if(MAIN_ACU2OK_TBC_BOOL)
        {
//            if(MAIN_ACU2STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU2State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU2State(2);

        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1DoorState(car1Door);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2DoorState(car2Door);

        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getTrainCoupledMode(TrainCoupledStaus);
//BCC_TBC
        if(MAIN_BCC1_OK_BOOL)
        {
//            if(MAIN_BCC1_STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(5);
//            else

                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(1);
        }
        else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(2);
        }
        if(MAIN_BCC2_OK_BOOL)
        {
//            if(MAIN_BCC2_STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(1);
        }else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(2);
        }

        if(MAIN_BCC1_OK_TBC_BOOL)
        {
//            if(MAIN_BCC1_STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC1State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC1State(1);
        }
        else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC1State(2);
        }
        if(MAIN_BCC2_OK_TBC_BOOL)
        {
//            if(MAIN_BCC2_STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC2State(1);
        }
        else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC2State(2);
        }
        //TCU READY
        if(MAIN_TCU1_TRACTIONREADY_BOOL&&MAIN_TCU2_TRACTIONREADY_BOOL)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(true);
            m_tcuoklighton_bool = false;
        }
        else if(MAIN_TCU1_TRACTIONREADY_BOOL||MAIN_TCU2_TRACTIONREADY_BOOL)
        {
            if(m_tcuoklighton_bool)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(true);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(false);
            m_tcuoklighton_bool = !m_tcuoklighton_bool;
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(false);
            m_tcuoklighton_bool = false;
        }

        // tcu EB state light
        if(MAIN_TCU_EB1FAULT_BOOL&&MAIN_TCU_EB2FAULT_BOOL)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(true);
            m_tcuEBfaultlighton_bool = false;
        }
        else if(MAIN_TCU_EB1FAULT_BOOL||MAIN_TCU_EB2FAULT_BOOL)
        {
            if(m_tcuEBfaultlighton_bool)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(true);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(false);
            m_tcuEBfaultlighton_bool = !m_tcuEBfaultlighton_bool;
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(false);
            m_tcuEBfaultlighton_bool = false;
        }

        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerState(MAIN_HSCBSTATE_BOOL);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BreakerState(MAIN_HSCBSTATE_BOOL_TBC);

        break;
        ////tbc1221
    case 3:
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TrainCode(g_car1CodeStr);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TrainCode(g_car2CodeStr);

        //TP STATE HIGH DOWN
        if( MAIN_PANTOGRAPHUPOK_BOOL&&(!(MAIN_PANTOGRAPHDOWNOK_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_UP);
        }
        else if( MAIN_PANTOGRAPHDOWNOK_BOOL&&(!(MAIN_PANTOGRAPHUPOK_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_DOWN);
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_MIDDLE);
        }


        if( MAIN_PANTO_UP_TBC_BOOL&&(!(MAIN_PANTO_DOWN_TBC_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TPState(PANTOGRAPH_LEFT_UP);
        }
        else if( MAIN_PANTO_DOWN_TBC_BOOL&&(!(MAIN_PANTO_UP_TBC_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TPState(PANTOGRAPH_LEFT_DOWN);
        }else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TPState(PANTOGRAPH_LEFT_MIDDLE);

        }
        //end
        //TCU STATE
        if(MAIN_TCU1OK_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(2);

        if(MAIN_TCU2OK_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(2);
        if(MAIN_TCU1OK_TBC_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU1State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU1State(2);

        if(MAIN_TCU2OK_TBC_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU2State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU2State(2);

        //BCU STATE

        if( MAIN_MC1BRAKEFAULT_BOOL ) // MC1 制动故障
        {
            if( MAIN_MC1BRAKERELEASE_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(3);
        }
        else
        {
            if( MAIN_MC1BRAKERELEASE_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(1);
        }//end

        if( MAIN_MC2BRAKEFAULT_BOOL ) // MC2 制动故障
        {
            if( MAIN_MC2BRAKERELEASE_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(3);
        }
        else
        {
            if( MAIN_MC2BRAKERELEASE_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(1);
        }//end

        if( MAIN_MC1FRICTIONBRAKEERR_TBC_BOOL ) // MC1 制动故障
        {
            if( MAIN_MC1FRICTIONBRAKERELEASED_TBC_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(3);
        }
        else
        {
            if( MAIN_MC1FRICTIONBRAKERELEASED_TBC_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(1);
        }//end

        if( MAIN_MC2FRICTIONBRAKEERR_TBC_BOOL ) // MC2 制动故障
        {
            if( MAIN_MC2FRICTIONBRAKERELEASED_TBC_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(3);
        }
        else
        {
            if( MAIN_MC2FRICTIONBRAKERELEASED_TBC_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(1);
        }//end

        if( MAIN_TPBRAKEFAULT_BOOL ) // TP    制动故障
        {
            if( MAIN_TPBRAKERELEASE_BOOL ) // TP   制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(3);
        }
        else
        {
            if( MAIN_TPBRAKERELEASE_BOOL )
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(1);
        }//end

        if( MAIN_TPFRICTIONBRAKEERR_TBC_BOOL ) // TP    制动故障
        {
            if( MAIN_TPFRICTIONBRAKERELEASED_TBC_BOOL ) // TP   制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(3);
        }
        else
        {
            if( MAIN_TPFRICTIONBRAKERELEASED_TBC_BOOL )
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(1);
        }//end
        //ACU State
        if(MAIN_ACU1OK_BOOL)
        {
//            if(MAIN_ACU1STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(2);

        if(MAIN_ACU2OK_BOOL)
        {
//            if(MAIN_ACU2STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(2);
        //ACU State
        if(MAIN_ACU1OK_TBC_BOOL)
        {
//            if(MAIN_ACU1STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU1State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU1State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU1State(2);

        if(MAIN_ACU2OK_TBC_BOOL)
        {
//            if(MAIN_ACU2STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU2State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU2State(2);

        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1DoorState(car1Door);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2DoorState(car2Door);

        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getTrainCoupledMode(TrainCoupledStaus);
//BCC_TBC
        if(MAIN_BCC1_OK_BOOL)
        {
//            if(MAIN_BCC1_STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(5);
//            else

                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(1);
        }
        else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(2);
        }
        if(MAIN_BCC2_OK_BOOL)
        {
//            if(MAIN_BCC2_STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(1);
        }else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(2);
        }

        if(MAIN_BCC1_OK_TBC_BOOL)
        {
//            if(MAIN_BCC1_STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC1State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC1State(1);
        }
        else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC1State(2);
        }
        if(MAIN_BCC2_OK_TBC_BOOL)
        {
//            if(MAIN_BCC2_STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC2State(1);
        }
        else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC2State(2);
        }

        //TCU READY
        if(MAIN_TCU1_TRACTIONREADY_BOOL&&MAIN_TCU2_TRACTIONREADY_BOOL)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(true);
            m_tcuoklighton_bool = false;
        }
        else if(MAIN_TCU1_TRACTIONREADY_BOOL||MAIN_TCU2_TRACTIONREADY_BOOL)
        {
            if(m_tcuoklighton_bool)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(true);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(false);
            m_tcuoklighton_bool = !m_tcuoklighton_bool;
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(false);
            m_tcuoklighton_bool = false;
        }

        // tcu EB state light
        if(MAIN_TCU_EB1FAULT_BOOL&&MAIN_TCU_EB2FAULT_BOOL)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(true);
            m_tcuEBfaultlighton_bool = false;
        }
        else if(MAIN_TCU_EB1FAULT_BOOL||MAIN_TCU_EB2FAULT_BOOL)
        {
            if(m_tcuEBfaultlighton_bool)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(true);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(false);
            m_tcuEBfaultlighton_bool = !m_tcuEBfaultlighton_bool;
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(false);
            m_tcuEBfaultlighton_bool = false;
        }
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerState(MAIN_HSCBSTATE_BOOL);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BreakerState(MAIN_HSCBSTATE_BOOL_TBC);
        break;

    case 4:
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TrainCode(g_car1CodeStr);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TrainCode(g_car2CodeStr);

        //TP STATE HIGH DOWN
        if( MAIN_PANTOGRAPHUPOK_BOOL&&(!(MAIN_PANTOGRAPHDOWNOK_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_UP);
        }
        else if( MAIN_PANTOGRAPHDOWNOK_BOOL&&(!(MAIN_PANTOGRAPHUPOK_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_DOWN);
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_MIDDLE);
        }


        if( MAIN_PANTO_UP_TBC_BOOL&&(!(MAIN_PANTO_DOWN_TBC_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TPState(PANTOGRAPH_LEFT_UP);
        }
        else if( MAIN_PANTO_DOWN_TBC_BOOL&&(!(MAIN_PANTO_UP_TBC_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TPState(PANTOGRAPH_LEFT_DOWN);
        }else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TPState(PANTOGRAPH_LEFT_MIDDLE);

        }
        //end
        //TCU STATE
        if(MAIN_TCU1OK_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(2);

        if(MAIN_TCU2OK_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(2);
        if(MAIN_TCU1OK_TBC_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU1State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU1State(2);

        if(MAIN_TCU2OK_TBC_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU2State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU2State(2);

        //BCU STATE

        if( MAIN_MC1BRAKEFAULT_BOOL ) // MC1 制动故障
        {
            if( MAIN_MC1BRAKERELEASE_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(3);
        }
        else
        {
            if( MAIN_MC1BRAKERELEASE_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(1);
        }//end

        if( MAIN_MC2BRAKEFAULT_BOOL ) // MC2 制动故障
        {
            if( MAIN_MC2BRAKERELEASE_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(3);
        }
        else
        {
            if( MAIN_MC2BRAKERELEASE_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(1);
        }//end

        if( MAIN_MC1FRICTIONBRAKEERR_TBC_BOOL ) // MC1 制动故障
        {
            if( MAIN_MC1FRICTIONBRAKERELEASED_TBC_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(3);
        }
        else
        {
            if( MAIN_MC1FRICTIONBRAKERELEASED_TBC_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(1);
        }//end

        if( MAIN_MC2FRICTIONBRAKEERR_TBC_BOOL ) // MC2 制动故障
        {
            if( MAIN_MC2FRICTIONBRAKERELEASED_TBC_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(3);
        }
        else
        {
            if( MAIN_MC2FRICTIONBRAKERELEASED_TBC_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(1);
        }//end

        if( MAIN_TPBRAKEFAULT_BOOL ) // TP    制动故障
        {
            if( MAIN_TPBRAKERELEASE_BOOL ) // TP   制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(3);
        }
        else
        {
            if( MAIN_TPBRAKERELEASE_BOOL )
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(1);
        }//end

        if( MAIN_TPFRICTIONBRAKEERR_TBC_BOOL ) // TP    制动故障
        {
            if( MAIN_TPFRICTIONBRAKERELEASED_TBC_BOOL ) // TP   制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(3);
        }
        else
        {
            if( MAIN_TPFRICTIONBRAKERELEASED_TBC_BOOL )
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(1);
        }//end
        //ACU State
        if(MAIN_ACU1OK_BOOL)
        {
//            if(MAIN_ACU1STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(2);

        if(MAIN_ACU2OK_BOOL)
        {
//            if(MAIN_ACU2STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(2);
        //ACU State
        if(MAIN_ACU1OK_TBC_BOOL)
        {
//            if(MAIN_ACU1STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU1State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU1State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU1State(2);

        if(MAIN_ACU2OK_TBC_BOOL)
        {
//            if(MAIN_ACU2STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU2State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU2State(2);

        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1DoorState(car1Door);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2DoorState(car2Door);

        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getTrainCoupledMode(TrainCoupledStaus);
//BCC_TBC
        if(MAIN_BCC1_OK_BOOL)
        {
//            if(MAIN_BCC1_STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(5);
//            else

                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(1);
        }
        else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(2);
        }
        if(MAIN_BCC2_OK_BOOL)
        {
//            if(MAIN_BCC2_STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(1);
        }else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(2);
        }

        if(MAIN_BCC1_OK_TBC_BOOL)
        {
//            if(MAIN_BCC1_STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC1State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC1State(1);
        }
        else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC1State(2);
        }
        if(MAIN_BCC2_OK_TBC_BOOL)
        {
//            if(MAIN_BCC2_STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC2State(1);
        }
        else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC2State(2);
        }

        //TCU READY
        if(MAIN_TCU1_TRACTIONREADY_BOOL&&MAIN_TCU2_TRACTIONREADY_BOOL)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(true);
            m_tcuoklighton_bool = false;
        }
        else if(MAIN_TCU1_TRACTIONREADY_BOOL||MAIN_TCU2_TRACTIONREADY_BOOL)
        {
            if(m_tcuoklighton_bool)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(true);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(false);
            m_tcuoklighton_bool = !m_tcuoklighton_bool;
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(false);
            m_tcuoklighton_bool = false;
        }

        // tcu EB state light
        if(MAIN_TCU_EB1FAULT_BOOL&&MAIN_TCU_EB2FAULT_BOOL)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(true);
            m_tcuEBfaultlighton_bool = false;
        }
        else if(MAIN_TCU_EB1FAULT_BOOL||MAIN_TCU_EB2FAULT_BOOL)
        {
            if(m_tcuEBfaultlighton_bool)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(true);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(false);
            m_tcuEBfaultlighton_bool = !m_tcuEBfaultlighton_bool;
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(false);
            m_tcuEBfaultlighton_bool = false;
        }
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerState(MAIN_HSCBSTATE_BOOL);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BreakerState(MAIN_HSCBSTATE_BOOL_TBC);
        break;
        //////////tbc 2121
    case 5:
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TrainCode(g_car1CodeStr);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TrainCode(g_car2CodeStr);

        //TP STATE HIGH DOWN
        if( MAIN_PANTOGRAPHUPOK_BOOL&&(!(MAIN_PANTOGRAPHDOWNOK_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_UP);
        }
        else if( MAIN_PANTOGRAPHDOWNOK_BOOL&&(!(MAIN_PANTOGRAPHUPOK_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_DOWN);
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_MIDDLE);
        }


        if( MAIN_PANTO_UP_TBC_BOOL&&(!(MAIN_PANTO_DOWN_TBC_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TPState(PANTOGRAPH_LEFT_UP);
        }
        else if( MAIN_PANTO_DOWN_TBC_BOOL&&(!(MAIN_PANTO_UP_TBC_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TPState(PANTOGRAPH_LEFT_DOWN);
        }else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TPState(PANTOGRAPH_LEFT_MIDDLE);

        }
        //end
        //TCU STATE
        if(MAIN_TCU1OK_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(2);

        if(MAIN_TCU2OK_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(2);
        if(MAIN_TCU1OK_TBC_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU1State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU1State(2);

        if(MAIN_TCU2OK_TBC_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU2State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TCU2State(2);

        //BCU STATE

        if( MAIN_MC1BRAKEFAULT_BOOL ) // MC1 制动故障
        {
            if( MAIN_MC1BRAKERELEASE_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(3);
        }
        else
        {
            if( MAIN_MC1BRAKERELEASE_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(1);
        }//end

        if( MAIN_MC2BRAKEFAULT_BOOL ) // MC2 制动故障
        {
            if( MAIN_MC2BRAKERELEASE_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(3);
        }
        else
        {
            if( MAIN_MC2BRAKERELEASE_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(1);
        }//end

        if( MAIN_MC1FRICTIONBRAKEERR_TBC_BOOL ) // MC1 制动故障
        {
            if( MAIN_MC1FRICTIONBRAKERELEASED_TBC_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(3);
        }
        else
        {
            if( MAIN_MC1FRICTIONBRAKERELEASED_TBC_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake1State(1);
        }//end

        if( MAIN_MC2FRICTIONBRAKEERR_TBC_BOOL ) // MC2 制动故障
        {
            if( MAIN_MC2FRICTIONBRAKERELEASED_TBC_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(3);
        }
        else
        {
            if( MAIN_MC2FRICTIONBRAKERELEASED_TBC_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake3State(1);
        }//end

        if( MAIN_TPBRAKEFAULT_BOOL ) // TP    制动故障
        {
            if( MAIN_TPBRAKERELEASE_BOOL ) // TP   制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(3);
        }
        else
        {
            if( MAIN_TPBRAKERELEASE_BOOL )
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(1);
        }//end

        if( MAIN_TPFRICTIONBRAKEERR_TBC_BOOL ) // TP    制动故障
        {
            if( MAIN_TPFRICTIONBRAKERELEASED_TBC_BOOL ) // TP   制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(3);
        }
        else
        {
            if( MAIN_TPFRICTIONBRAKERELEASED_TBC_BOOL )
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2Brake2State(1);
        }//end
        //ACU State
        if(MAIN_ACU1OK_BOOL)
        {
//            if(MAIN_ACU1STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(2);

        if(MAIN_ACU2OK_BOOL)
        {
//            if(MAIN_ACU2STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(2);
        //ACU State
        if(MAIN_ACU1OK_TBC_BOOL)
        {
//            if(MAIN_ACU1STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU1State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU1State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU1State(2);

        if(MAIN_ACU2OK_TBC_BOOL)
        {
//            if(MAIN_ACU2STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU2State(1);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2ACU2State(2);

        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1DoorState(car1Door);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2DoorState(car2Door);

        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getTrainCoupledMode(TrainCoupledStaus);
//BCC_TBC
        if(MAIN_BCC1_OK_BOOL)
        {
//            if(MAIN_BCC1_STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(5);
//            else

                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(1);
        }
        else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(2);
        }
        if(MAIN_BCC2_OK_BOOL)
        {
//            if(MAIN_BCC2_STOP_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(1);
        }else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(2);
        }

        if(MAIN_BCC1_OK_TBC_BOOL)
        {
//            if(MAIN_BCC1_STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC1State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC1State(1);
        }
        else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC1State(2);
        }
        if(MAIN_BCC2_OK_TBC_BOOL)
        {
//            if(MAIN_BCC2_STOP_TBC_BOOL)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC2State(5);
//            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC2State(1);
        }
        else
        {
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BCC2State(2);
        }

        //TCU READY
        if(MAIN_TCU1_TRACTIONREADY_BOOL&&MAIN_TCU2_TRACTIONREADY_BOOL)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(true);
            m_tcuoklighton_bool = false;
        }
        else if(MAIN_TCU1_TRACTIONREADY_BOOL||MAIN_TCU2_TRACTIONREADY_BOOL)
        {
            if(m_tcuoklighton_bool)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(true);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(false);
            m_tcuoklighton_bool = !m_tcuoklighton_bool;
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(false);
            m_tcuoklighton_bool = false;
        }

        // tcu EB state light
        if(MAIN_TCU_EB1FAULT_BOOL&&MAIN_TCU_EB2FAULT_BOOL)
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(true);
            m_tcuEBfaultlighton_bool = false;
        }
        else if(MAIN_TCU_EB1FAULT_BOOL||MAIN_TCU_EB2FAULT_BOOL)
        {
            if(m_tcuEBfaultlighton_bool)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(true);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(false);
            m_tcuEBfaultlighton_bool = !m_tcuEBfaultlighton_bool;
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(false);
            m_tcuEBfaultlighton_bool = false;
        }
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerState(MAIN_HSCBSTATE_BOOL);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BreakerState(MAIN_HSCBSTATE_BOOL_TBC);
        break;

    ////tbc slave car state
    case 6:
//        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2TrainCode(g_car2CodeStr);

//        //TP STATE HIGH DOWN
//        if( MAIN_PANTOGRAPHUPOK_BOOL&&(!(MAIN_PANTOGRAPHDOWNOK_BOOL)) )
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_UP);
//        }
//        else if( MAIN_PANTOGRAPHDOWNOK_BOOL&&(!(MAIN_PANTOGRAPHUPOK_BOOL)) )
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_DOWN);
//        }
//        //end
//        //TCU STATE

//        if(MAIN_TCU1OK_BOOL)
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(1);
//        else
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(2);

//        if(MAIN_TCU2OK_BOOL)
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(1);
//        else
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(2);

//        //BCU STATE



//        if( MAIN_MC1FRICTIONBRAKEERR_BOOL ) // MC1 制动故障
//        {
//            if( MAIN_MC1FRICTIONBRAKERELEASED_BOOL ) // MC1 制动缓解
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(4);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(3);
//        }
//        else
//        {
//            if( MAIN_MC1FRICTIONBRAKERELEASED_BOOL ) // MC1 制动缓解
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(2);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(1);
//        }//end

//        if( MAIN_MC2FRICTIONBRAKEERR_BOOL ) // MC2 制动故障
//        {
//            if( MAIN_MC2FRICTIONBRAKERELEASED_BOOL ) // MC2 制动缓解
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(4);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(3);
//        }
//        else
//        {
//            if( MAIN_MC2FRICTIONBRAKERELEASED_BOOL ) // MC2 制动缓解
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(2);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(1);
//        }//end


//        if( MAIN_TPFRICTIONBRAKEERR_BOOL ) // TP    制动故障
//        {
//            if( MAIN_TPFRICTIONBRAKERELEASED_BOOL ) // TP   制动缓解
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(4);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(3);
//        }
//        else
//        {
//            if( MAIN_TPFRICTIONBRAKERELEASED_BOOL )
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(2);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(1);
//        }//end

//        //ACU State
//        if(MAIN_ACU1OK_BOOL)
//        {
////            if(MAIN_ACU1STOP_TBC_BOOL)
////                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(5);
////            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(1);
//        }
//        else
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(2);

//        if(MAIN_ACU2OK_BOOL)
//        {
////            if(MAIN_ACU2STOP_TBC_BOOL)
////                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(5);
////            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(1);
//        }
//        else
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(2);

//        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1DoorState(car1Door);

//        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getTrainCoupledMode(1);///
////BCC_TBC

//        if(MAIN_BCC1_OK_BOOL)
//        {
////            if(MAIN_BCC1_STOP_TBC_BOOL)
////                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(5);
////            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(1);
//        }
//        else
//        {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(2);
//        }
//        if(MAIN_BCC2_OK_BOOL)
//        {
////            if(MAIN_BCC2_STOP_TBC_BOOL)
////                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(5);
////            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(1);
//        }
//        else
//        {
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(2);
//        }
//        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerState(MAIN_HSCBSTATE_BOOL);
//       // ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar2BreakerState(MAIN_HSCBSTATE_BOOL_TBC);
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TrainCode(g_car1CodeStr);
        if( MAIN_PANTOGRAPHUPOK_BOOL&&(!(MAIN_PANTOGRAPHDOWNOK_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_UP);
        }
        else if( MAIN_PANTOGRAPHDOWNOK_BOOL&&(!(MAIN_PANTOGRAPHUPOK_BOOL)) )
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_DOWN);
        }
        else
        {
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_MIDDLE);
        }
//end

//        if( MAIN_PANTO_UP_TBC_BOOL&&(!(MAIN_PANTO_DOWN_TBC_BOOL)) )
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_UP);
//        }
//        else if( MAIN_PANTO_DOWN_TBC_BOOL&&(!(MAIN_PANTO_UP_TBC_BOOL)) )
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TPState(PANTOGRAPH_LEFT_DOWN);
//        }
//end

        //TCU State
        if(MAIN_TCU1OK_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU1State(2);

        if(MAIN_TCU2OK_BOOL)
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(1);
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TCU2State(2);

        //BCU State
        if( MAIN_MC1BRAKEFAULT_BOOL ) // MC1 制动故障
        {
            if( MAIN_MC1BRAKERELEASE_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(3);
        }
        else
        {
            if( MAIN_MC1BRAKERELEASE_BOOL ) // MC1 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake1State(1);
        }//end

        if( MAIN_MC2BRAKEFAULT_BOOL ) // MC2 制动故障
        {
            if( MAIN_MC2BRAKERELEASE_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(3);
        }
        else
        {
            if( MAIN_MC2BRAKERELEASE_BOOL ) // MC2 制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake3State(1);
        }//end

        if( MAIN_TPBRAKEFAULT_BOOL ) // TP    制动故障
        {
            if( MAIN_TPBRAKERELEASE_BOOL ) // TP   制动缓解
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(4);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(3);
        }
        else
        {
            if( MAIN_TPBRAKERELEASE_BOOL )
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(2);
            else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Brake2State(1);
        }//end

        //ACU State
        if(MAIN_ACU1OK_BOOL)
        {
 //           if(MAIN_ACU1STOP_BOOL)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(1);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(5);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU1State(2);

        if(MAIN_ACU2OK_BOOL)
        {
 //           if(MAIN_ACU2STOP_BOOL)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(1);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(5);
        }
        else
            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1ACU2State(2);


        //HSCB State
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BreakerState(MAIN_HSCBSTATE_BOOL);

        // 20140115 add Battery Contactor State
//        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Mc1BatteryContactorState(BATTERYCONTACTOR_MC1_RIOM_BOOL);
//        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1Mc2BatteryContactorState(BATTERYCONTACTOR_MC2_RIOM_BOOL);

        //Door state
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1DoorState(car1Door);

        // tcu state light
//        if(MAIN_TCU1_TRACTIONREADY_BOOL&&MAIN_TCU2_TRACTIONREADY_BOOL)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(true);
//            m_tcuoklighton_bool = false;
//        }
//        else if(MAIN_TCU1_TRACTIONREADY_BOOL||MAIN_TCU2_TRACTIONREADY_BOOL)
//        {
//            if(m_tcuoklighton_bool)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(true);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(false);
//            m_tcuoklighton_bool = !m_tcuoklighton_bool;
//        }
//        else
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1TcuReadyLight(false);
//            m_tcuoklighton_bool = false;
//        }

//        // tcu EB state light
//        if(MAIN_TCU_EB1FAULT_BOOL&&MAIN_TCU_EB2FAULT_BOOL)
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(true);
//            m_tcuEBfaultlighton_bool = false;
//        }
//        else if(MAIN_TCU_EB1FAULT_BOOL||MAIN_TCU_EB2FAULT_BOOL)
//        {
//            if(m_tcuEBfaultlighton_bool)
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(true);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(false);
//            m_tcuEBfaultlighton_bool = !m_tcuEBfaultlighton_bool;
//        }
//        else
//        {
//            ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1EBFaultLight(false);
//            m_tcuEBfaultlighton_bool = false;
//        }
        ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->getTrainCoupledMode(1);

        //2014-4-24
        //ADD BCC STATE
        if(MAIN_BCC1_OK_BOOL)
        {
 //           if(MAIN_BCC1_STOP_BOOL)///STOP = WORK
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(1);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(5);
        }
        else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC1State(2);

        if(MAIN_BCC2_OK_BOOL)
        {
//            if(MAIN_BCC2_STOP_BOOL)
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(1);
//            else
//                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(5);

        }else
                ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCar1BCC2State(2);

        break;

        default:break;

    }

//    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCHARGEFINISH_MC1_DCDC( CHARGEWORKSTATE_MC1_DCDC_BOOL );
//    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setCHARGEFINISH_MC2_DCDC( CHARGEWORKSTATE_MC2_DCDC_BOOL );
//    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setPOWERSUPPLYFINISH_MC1_DCDC( POWERSUPPLYWORKSTATE_MC1_DCDC_BOOL );
//    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setPOWERSUPPLYFINISH_MC2_DCDC( POWERSUPPLYWORKSTATE_MC2_DCDC_BOOL );
//    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setUNCHARGEWORKSTATE_MC1_DCDC( UNCHARGEWORKSTATE_MC1_DCDC_BOOL );
//    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->setUNCHARGEWORKSTATE_MC2_DCDC( UNCHARGEWORKSTATE_MC2_DCDC_BOOL );

    ((CTrainDiagramCtrl*)GetDlgItem(ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM))->DrawTrainDiagramCtrl();
}

void CMainPage::UpdateImage()
{

    // edited by Deng Ran on the 11th of May 2015.
    if(MAIN_ATC_BOOL)
    {
        // ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_ATC))->ShowImage();
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_ATC))->HideImage();
    }
    else
    {
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_ATC))->HideImage();
    }


    // when car1 safe traction circle signal is 1 show traction safe circle icon or hide this icon
    if( MAIN_SAFECIRCLESTATE_BOOL ) ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_TRACTIONSAFE))->ShowImage();
    else ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_TRACTIONSAFE))->HideImage();

    // when Mc or M safe brake is valid(0 is valid) show safe brake icon
    // or BCU all brake release signal is 1 show brake all release icon
    // or hide both
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RESCUE))->HideImage();
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_SAFEBRAKE))->HideImage();
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_BRAKERELEASE))->HideImage();
    if( (MAIN_SAFEBRAKESTATE_BOOL) )
    {
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_SAFEBRAKE))->ShowImage();
    }
    else if( MAIN_BRAKEALLRELEASE_BOOL )
    {
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_BRAKERELEASE))->ShowImage();
    }
    else
    {
    }//end*/

    if(MAIN_RESCUE_BOOL)
    {
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_RESCUE))->ShowImage();
    }
    if( DispatchMode_Bool )
    {
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_WASHINGMODE))->HideImage();
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_COUPLINGMODE))->HideImage();
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_DISPATCHINGMODE))->ShowImage();

    }
    else if( WashingMode_Bool)
    {
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_DISPATCHINGMODE))->HideImage();
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_COUPLINGMODE))->HideImage();
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_WASHINGMODE))->ShowImage();
    }
    else if( Coupling_Bool )
    {

        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_DISPATCHINGMODE))->HideImage();

        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_WASHINGMODE))->HideImage();
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_COUPLINGMODE))->ShowImage();
    }
    else
    {
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_WASHINGMODE))->HideImage();
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_DISPATCHINGMODE))->HideImage();
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_COUPLINGMODE))->HideImage();

    }//end
}

void CMainPage::UpdateSpeedLimit()
{
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_STOP))->HideImage();
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_3KM))->HideImage();
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_10KM))->HideImage();
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_20KM))->HideImage();
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_40KM))->HideImage();
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_60KM))->HideImage();
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_30KM))->HideImage();
    ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_50KM))->HideImage();

    int val = TCMS_SPEED_LIMIT_QUINT8;
    switch(val)
    {
    case 3://D_SPEED_LIMIT_3KM:
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_3KM))->ShowImage();
        break;
    case 10://D_SPEED_LIMIT_10KM:
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_10KM))->ShowImage();
        break;
    case 20://D_SPEED_LIMIT_20KM:
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_20KM))->ShowImage();
        break;
    case 30:
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_30KM))->ShowImage();
        break;
    case 40://D_SPEED_LIMIT_40KM:
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_40KM))->ShowImage();
        break;
    case 50:
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_50KM))->ShowImage();
        break;
    case 60://D_SPEED_LIMIT_60KM:
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_60KM))->ShowImage();
        break;
    case 0://D_SPEED_LIMIT_STOP:
        ((CImageCtrl*)GetDlgItem(ID_PICMAIN_IMAGE_STOP))->ShowImage();
        break;
    default:
        break;
    }

    return;
}

void CMainPage::UpdateTotalMileage()
{
    QString str;

    str.sprintf("%ukm", MAIN_TOP_ACCUMULATEDKMS_QUINT32);
    //str.sprintf("%u", MAIN_TOP_ACCUMULATEDKMS_QUINT32);

    // Changed by Deng Ran on the 01st of September 2015.
    ((CLabel *)GetDlgItem(ID_PICMAIN_LABEL_TOTALMILEAGE))->SetCtrlText(str);
    // if (TOTAL_MILEAGE_AFTER_POINT == 0)
    // {
    //    ((CLabel *)GetDlgItem(ID_PICMAIN_LABEL_TOTALMILEAGE))->SetCtrlText(str + QString("km"));
    // }
    // else
    // {
    //     ((CLabel *)GetDlgItem(ID_PICMAIN_LABEL_TOTALMILEAGE))->SetCtrlText(str + QString(".")
    //                                                         + QString::number(TOTAL_MILEAGE_AFTER_POINT) + QString("km"));
    // }
}

//void CMainPage::UpdateNextDistance()
//{
//    QString str;
//    qint16 distanceInt16 = TWOSTATIONDISTANCE_QINT16;
//    str.sprintf("%dm", distanceInt16);
//    ((CLabel *)GetDlgItem(ID_PICMAIN_LABEL_NEXTDISTANCE))->SetCtrlText(str);
//}

void CMainPage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_SYSLOGIN);
}

static int romIdx = 0;
static int confirmRomIdx = -1;

void CMainPage::UpdateCurrentFaultDisplay(bool flg)
{
    QString str;
    int i=0;
    if (((0 == (g_timertick % 2)) && (g_2slasttick != g_timertick)) || flg)
    {
        g_2slasttick = g_timertick;
        FAULTS_ROM_DATA *pdata = &g_faultsrom[romIdx];
        bool find = false;
        for (i=0; i<g_faultsRomLen; i++)
        {
            if ((pdata->flg) && (!pdata->confirm))
            {
                str.sprintf("%d", pdata->grade);
                GetDlgItem(ID_PICMAIN_LABEL_FAULTGRADE)->SetCtrlText(str);
                str.sprintf("%04d", pdata->code);
                GetDlgItem(ID_PICMAIN_LABEL_FAULTCODE)->SetCtrlText(str);
                GetDlgItem(ID_PICMAIN_LABEL_FAULTDEVICE)->SetCtrlText(GetDeviceStr(pdata->device,pdata->deviceNo));
                GetDlgItem(ID_PICMAIN_LABEL_FAULTPOSITION)->SetCtrlText(GetPositionStr(pdata->position));
                if (pdata->name.length() > 36)
                {
                    ((CLabel *)GetDlgItem(ID_PICMAIN_LABEL_FAULTNAME))->SetAlignment(Qt::AlignLeft);
                }
                else
                {
                    ((CLabel *)GetDlgItem(ID_PICMAIN_LABEL_FAULTNAME))->SetAlignment(Qt::AlignCenter);
                }
                GetDlgItem(ID_PICMAIN_LABEL_FAULTNAME)->SetCtrlText(pdata->name);
                confirmRomIdx = romIdx;
                find = true;
            }
            if (g_faultsRomLen - 1 == romIdx)
            {
                romIdx = 0;
                pdata = &g_faultsrom[romIdx];
            }
            else
            {
                romIdx++;
                pdata++;
            }
            if (find)
            {
                break;
            }
            else
            {
                confirmRomIdx = -1;
            }
        }

        if (g_faultsRomLen == i)
        {
            GetDlgItem(ID_PICMAIN_LABEL_FAULTGRADE)->SetCtrlText("");
            GetDlgItem(ID_PICMAIN_LABEL_FAULTCODE)->SetCtrlText("");
            GetDlgItem(ID_PICMAIN_LABEL_FAULTNAME)->SetCtrlText("");
            GetDlgItem(ID_PICMAIN_LABEL_FAULTDEVICE)->SetCtrlText("");
            GetDlgItem(ID_PICMAIN_LABEL_FAULTPOSITION)->SetCtrlText("");
        }
    }
}
/*
handle position set:
when BCU EMGC brake is valid(0)
    EMGC position
or when on braking state
    BCU code3,2,1(111)
        B7
    BCU code3,2,1(110)
        B6
    BCU code3,2,1(101)
        B5
    BCU code3,2,1(100)
        B4
    BCU code3,2,1(011)
        B3
    BCU code3,2,1(010)
        B2
    BCU code3,2,1(001)
        B1
    BCU code3,2,1(000)
        0
or when on traction state
    TCU code4,3,2,1(0001)
        T1
    TCU code4,3,2,1(0011)
        T2
    TCU code4,3,2,1(0111)
        T3
    TCU code4,3,2,1(1111)
        T4
    TCU code4,3,2,1(others)
        0
others
    0
*/
void CMainPage::UpdateListBoxCtrl()
{
    CListBox *iconBrakeTractionState = (CListBox*)GetDlgItem(ID_PICMAIN_BRAKETRACTION_STATE);

    if ( (MAIN_EMGCBRAKESTATE_BOOL) )
    {
        iconBrakeTractionState->SetSelected( 8 + 4 ); //emgc brake
    }
    else if( (char) MAIN_CONTROLLER_LEVEL<0 )
    {// brake
        if( (char)MAIN_CONTROLLER_LEVEL==-7) // 111
        {
            iconBrakeTractionState->SetSelected( 7 + 4 );
        }
        else if ((char)MAIN_CONTROLLER_LEVEL==-6) // 011
        {
            iconBrakeTractionState->SetSelected( 6 + 4 );
        }
        else if ( (char)MAIN_CONTROLLER_LEVEL==-5 ) // 101
        {
            iconBrakeTractionState->SetSelected( 5 + 4 );
        }
        else if ( (char)MAIN_CONTROLLER_LEVEL==-4 ) // 001
        {
            iconBrakeTractionState->SetSelected( 4 + 4 );
        }
        else if ((char)MAIN_CONTROLLER_LEVEL==-3) // 110
        {
            iconBrakeTractionState->SetSelected( 3 + 4 );
        }
        else if ((char)MAIN_CONTROLLER_LEVEL==-2) // 010
        {
            iconBrakeTractionState->SetSelected( 2 + 4 );
        }
        else if ( (char)MAIN_CONTROLLER_LEVEL==-1) // 100
        {
            iconBrakeTractionState->SetSelected( 1 + 4 );
        }
        else
        {
            iconBrakeTractionState->SetSelected( 0 + 4 );
        }
    }
    else if ( (char) MAIN_CONTROLLER_LEVEL>0 )
    {
        if ( (char)MAIN_CONTROLLER_LEVEL==1) // 1000
        {
            iconBrakeTractionState->SetSelected( -1 + 4 );
        }
        else if ( (char)MAIN_CONTROLLER_LEVEL==2) // 1100
        {
            iconBrakeTractionState->SetSelected( -2 + 4 );
        }
        else if ( (char)MAIN_CONTROLLER_LEVEL==3) // 1110
        {
            iconBrakeTractionState->SetSelected( -3 + 4 );
        }
        else if ( (char)MAIN_CONTROLLER_LEVEL==4 ) // 1111
        {
            iconBrakeTractionState->SetSelected( -4 + 4 );
        }
        else
        {
            iconBrakeTractionState->SetSelected( 0 + 4 );
        }
    }
    else
    {
        iconBrakeTractionState->SetSelected( 0 + 4 );    // end
    }

}

void CMainPage::OnWarningButtonDown()
{
    if (0 == g_unconfirmed_faults_num)
    {
        return;
    }
    if (-1 == confirmRomIdx)
    {
        return;
    }
    g_faultsrom[confirmRomIdx].confirm = true;

    GetDlgItem(ID_PICMAIN_LABEL_FAULTGRADE)->SetCtrlBKColor(Qt::yellow);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTCODE)->SetCtrlBKColor(Qt::yellow);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTDEVICE)->SetCtrlBKColor(Qt::yellow);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTPOSITION)->SetCtrlBKColor(Qt::yellow);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTNAME)->SetCtrlBKColor(Qt::yellow);

    GetDlgItem(ID_PICMAIN_LABEL_FAULTGRADE)->SetTxtColor(Qt::black);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTCODE)->SetTxtColor(Qt::black);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTDEVICE)->SetTxtColor(Qt::black);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTPOSITION)->SetTxtColor(Qt::black);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTNAME)->SetTxtColor(Qt::black);
}

void CMainPage::OnWarningButtonUp()
{
    if (0 == g_unconfirmed_faults_num)
    {
        return;
    }

    GetDlgItem(ID_PICMAIN_LABEL_FAULTGRADE)->SetCtrlBKColor(Qt::black);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTCODE)->SetCtrlBKColor(Qt::black);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTDEVICE)->SetCtrlBKColor(Qt::black);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTPOSITION)->SetCtrlBKColor(Qt::black);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTNAME)->SetCtrlBKColor(Qt::black);

    GetDlgItem(ID_PICMAIN_LABEL_FAULTGRADE)->SetTxtColor(Qt::yellow);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTCODE)->SetTxtColor(Qt::yellow);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTDEVICE)->SetTxtColor(Qt::yellow);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTPOSITION)->SetTxtColor(Qt::yellow);
    GetDlgItem(ID_PICMAIN_LABEL_FAULTNAME)->SetTxtColor(Qt::yellow);

    UpdateCurrentFaultDisplay(true);
}


void CMainPage::OnControlButtonDown()
{
    if( MAIN_MC1KEYACTIVE_BOOL && !(MAIN_MC2KEYACTIVE_BOOL) ) // mc1 key:true,mc2 key false
    {
       if(MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL))// MC1 HMI
       {
           ChangePage(PAGE_ROM_INDEX_MAINCONTROLCMD);
       }
       else if(MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL))
       {
           return;
       }
    }
    if( MAIN_MC2KEYACTIVE_BOOL && !(MAIN_MC1KEYACTIVE_BOOL) ) // mc1 key:true,mc2 key false
    {
       if(MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL))// MC1 HMI
       {
           ChangePage(PAGE_ROM_INDEX_MAINCONTROLCMD);
       }
       else if(MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL))
       {
           return;
       }
    }
}
void CMainPage::OnLeftTurnButtonDown()
{
    LeftTurnCmd_Bool = !LeftTurnCmd_Bool;
    if(LeftTurnCmd_Bool)
    {
        //RightTurnCmd_Bool =  false; // 20131015 cancel
        //((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->SetCtrlBKColor(Qt::yellow);
        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->ChangeButtonState( LBUTTON_UP );
    }
}

void CMainPage::OnRightTurnButtonDown()
{
    RightTurnCmd_Bool = !RightTurnCmd_Bool;
    if(RightTurnCmd_Bool)
    {
        //LeftTurnCmd_Bool =  false; // 20131015 cancel
        ((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_LEFTTURN))->ChangeButtonState( LBUTTON_UP );
        //((CButton*)GetDlgItem(ID_PICMAIN_BUTTON_RIGHTTURN))->SetCtrlBKColor(Qt::yellow);
    }
}
