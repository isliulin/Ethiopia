#include "chvacparametersetpage.h"

ROMDATA g_PicRom_HvacParameterSet[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
  {"carheadlarge.png",          D_DEFAULT_FONT,      QRect(250,100+20,160, 30),                     Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                            },
  {"0000"            ,          D_DEFAULT_FONT,      QRect(250, 70+20,160, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICHPS_LABEL_MC_CARNUM          },

  {  QSTR("Temperature\n Set"),             D_COMMON_TITLE_FONT,      QRect( 250,170, 100, 32),               Qt::yellow,                   Qt::black,                 CONTROL_LABEL,           ID_PICHPS_LABEL_SETTEDTEMP          },
  {  QSTR("23℃"),                 D_COMMON_TITLE_FONT,      QRect( 350,170, 50, 32),                Qt::yellow,                   Qt::black,                 CONTROL_LABEL,           ID_PICHPS_LABEL_TEMP           },
  {  "upgray.png",                     D_COMMON_TITLE_FONT,      QRect(400,153, 30, 30),                Qt::yellow,                   Qt::black,                 CONTROL_BMPBUTTON,       ID_PICHPS_BUTTON_UP           },
  {  "downgray.png",                   D_COMMON_TITLE_FONT,      QRect( 400,189, 30, 30),                Qt::yellow,                   Qt::black,                 CONTROL_BMPBUTTON,       ID_PICHPS_BUTTON_DOWN           },

  {  QSTR("Auto warm"),             D_COMMON_TITLE_FONT,      QRect(  65,240,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHPS_BUTTON_AUTOWARM            },
  {  QSTR("Auto cold"),             D_COMMON_TITLE_FONT,      QRect( 190,240,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHPS_BUTTON_AUTOCOLD   },
  {  QSTR("Ventilation"),               D_COMMON_TITLE_FONT,      QRect( 315,240,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHPS_BUTTON_VENTILATION     },
  {  QSTR("Stop"),               D_COMMON_TITLE_FONT,      QRect( 440,240,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHPS_BUTTON_STOP     },

  {"",                           D_DEFAULT_FONT,           QRect(0,  310, 800, 2),                  QColor(250,250,250)  ,         QColor(50, 50, 50),          CONTROL_LINE,             ID_IGNORE                },

  {  QSTR("UIC"),             D_COMMON_TITLE_FONT,      QRect(  65,340,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHPS_BUTTON_UIC   },
  //{  QSTR("客室全暖"),             D_COMMON_TITLE_FONT,      QRect( 190,340,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHPS_BUTTON_FULLWARM   },
  {  QSTR("CabEB"),           D_COMMON_TITLE_FONT,      QRect( 190,340,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHPS_BUTTON_CABED       },
  {  QSTR("EBGlass"),             D_COMMON_TITLE_FONT,      QRect( 315,340,115, 40),                  Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,           ID_PICHPS_BUTTON_EDGLASS     },

  D_LAYER2_NAVIGATION_BAR_HVAC
};
int g_HvacParameterSetRomLen = sizeof(g_PicRom_HvacParameterSet)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CHvacParameterSetPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_PICHPS_BUTTON_AUTOWARM, OnAutoWarmDown)
        ON_LBUTTONDOWN(ID_PICHPS_BUTTON_AUTOCOLD, OnAutoColdDown)
        ON_LBUTTONDOWN(ID_PICHPS_BUTTON_VENTILATION, OnVentilationDown)
        ON_LBUTTONDOWN(ID_PICHPS_BUTTON_STOP, OnStopDown)
        ON_LBUTTONDOWN(ID_PICHPS_BUTTON_UIC, OnUICDown)
        //ON_LBUTTONDOWN(ID_PICHPS_BUTTON_FULLWARM, OnFullWarmDown)
        ON_LBUTTONDOWN(ID_PICHPS_BUTTON_CABED, OnCabEDDown)
        ON_LBUTTONDOWN(ID_PICHPS_BUTTON_EDGLASS, OnEDGlassDown)
        ON_LBUTTONDOWN(ID_PICHPS_BUTTON_DOWN, OnDownButtonDown)
        ON_LBUTTONUP(ID_PICHPS_BUTTON_DOWN, OnDownButtonUp)
        ON_LBUTTONDOWN(ID_PICHPS_BUTTON_UP, OnUpButtonDown)
        ON_LBUTTONUP(ID_PICHPS_BUTTON_UP, OnUpButtonUp)
END_MESSAGE_MAP()

CHvacParameterSetPage::CHvacParameterSetPage()
{

    m_UICOK = false;

}

void CHvacParameterSetPage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
void CHvacParameterSetPage::OnInitPage()
{
    CButton* pButton;
    int nIDArray[] =
    {
        ID_PICHPS_BUTTON_AUTOWARM,
        ID_PICHPS_BUTTON_AUTOCOLD,
        ID_PICHPS_BUTTON_VENTILATION,
        ID_PICHPS_BUTTON_STOP,
        ID_PICHPS_BUTTON_UIC,
        //ID_PICHPS_BUTTON_FULLWARM,
        ID_PICHPS_BUTTON_CABED,
        ID_PICHPS_BUTTON_EDGLASS
    };

    for(int i = 0; i < int(sizeof(nIDArray)/sizeof(int)); i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        pButton->m_bAutoUpState = false;
    }

    SetUpBtnDown();
    //SetDownBtnDown();

    if( Hvac_AutoWarm_Bool )
    {
        if( Hvac_TempSet_Char==MIN_WARM )
        {
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("uppress.png");
        }
        else if( Hvac_TempSet_Char==MAX_WARM )
        {
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downpress.png");
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
        }
        else
        {
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downpress.png");
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("uppress.png");
        }
    }
    else if( Hvac_AutoCold_Bool )
    {
        if( Hvac_TempSet_Char==MIN_COLD )
        {
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("uppress.png");
        }
        else if( Hvac_TempSet_Char==MAX_COLD )
        {
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downpress.png");
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
        }
        else
        {
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downpress.png");
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("uppress.png");
        }
    }
    else
    {
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
    }
}

void CHvacParameterSetPage::SetUpBtnDown(int btnId)
{
    CButton* pButton;
    int nIDArray[] =
    {
        ID_PICHPS_BUTTON_AUTOWARM,
        ID_PICHPS_BUTTON_AUTOCOLD,
        ID_PICHPS_BUTTON_VENTILATION,
        ID_PICHPS_BUTTON_STOP
    };

    for(int i = 0; i < int(sizeof(nIDArray)/sizeof(int)); i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        if(nIDArray[i] == btnId)
        {
            pButton->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            pButton->ChangeButtonState(LBUTTON_UP);
        }
    }
}
void CHvacParameterSetPage::SetUpBtnDown()
{
    if(Hvac_AutoWarm_Bool)
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_AUTOWARM))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_AUTOWARM))->ChangeButtonState(LBUTTON_UP);

    if(Hvac_AutoCold_Bool)
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_AUTOCOLD))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_AUTOCOLD))->ChangeButtonState(LBUTTON_UP);

    if(Hvac_Ventilation_Bool)
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_VENTILATION))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_VENTILATION))->ChangeButtonState(LBUTTON_UP);

    if(Hvac_Stop_Bool)
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_STOP))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_STOP))->ChangeButtonState(LBUTTON_UP);
}
void CHvacParameterSetPage::SetDownBtnDown(int btnId)
{
    CButton* pButton;
    int nIDArray[] =
    {
        //ID_PICHPS_BUTTON_HALFWARM,
        //ID_PICHPS_BUTTON_FULLWARM
    };

    for(int i = 0; i < int(sizeof(nIDArray)/sizeof(int)); i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        if(nIDArray[i] == btnId)
        {
            pButton->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            pButton->ChangeButtonState(LBUTTON_UP);
        }
    }
}
void CHvacParameterSetPage::SetDownBtnDown()
{
    /*if(CarHalfWarm_Bool)
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_HALFWARM))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_HALFWARM))->ChangeButtonState(LBUTTON_UP);

    if(CarFullWarm_Bool)
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_FULLWARM))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_FULLWARM))->ChangeButtonState(LBUTTON_UP);

*/
    if(HVAC_UICCmd_bool)
          ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_UIC))->ChangeButtonState(LBUTTON_DOWN);
      else
          ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_UIC))->ChangeButtonState(LBUTTON_UP);

    if(CabEB_Bool)
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_CABED))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_CABED))->ChangeButtonState(LBUTTON_UP);

    if(EBGlass_Bool)
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_EDGLASS))->ChangeButtonState(LBUTTON_DOWN);
    else
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_EDGLASS))->ChangeButtonState(LBUTTON_UP);
    if(!HVAC_UICCmd_bool||(!(m_UICOK)))
    {      ((CButton*)GetDlgItem(ID_PICHPS_BUTTON_UIC))->SetCtrlText("UIC DISEABLE");
        ((CButton *)GetDlgItem(ID_PICHPS_BUTTON_UIC))->ChangeButtonState(LBUTTON_UP);

    }else if(m_UICOK)
    {
        ((CButton*)GetDlgItem(ID_PICHPS_BUTTON_UIC))->SetCtrlText("UIC");
    }
}
void CHvacParameterSetPage::OnAutoWarmDown()
{
    if(!Hvac_AutoWarm_Bool)
    {
        Hvac_TempSet_Char = (MIN_WARM+MAX_WARM)/2;// 20140122 modify

        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downpress.png");
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("uppress.png");
        HVAC_UICCmd_bool = false;
        Hvac_AutoWarm_Bool = true;
        Hvac_AutoCold_Bool = false;
        Hvac_Ventilation_Bool = false;
        Hvac_Stop_Bool = false;
        Hvac_HalfColdTest_Bool = false;
        Hvac_FullColdTest_Bool = false;
        Hvac_HalfWarmTest_Bool = false;
        Hvac_FullWarmTest_Bool = false;
        Hvac_EmgcVentilation_Bool = false;

        SetUpBtnDown();
    }
}

void CHvacParameterSetPage::OnAutoColdDown()
{

    if(!Hvac_AutoCold_Bool)
    {
        m_UICOK = true;

        if(m_UICOK)
        {
             Hvac_TempSet_Char = 0;
             ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
             ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
        }
        else
        {
            Hvac_TempSet_Char = 22;
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("uppress.png");
        }

        HVAC_UICCmd_bool = true;
        Hvac_AutoWarm_Bool = false;
        Hvac_AutoCold_Bool = true;
        Hvac_Ventilation_Bool = false;
        Hvac_Stop_Bool = false;
        Hvac_HalfColdTest_Bool = false;
        Hvac_FullColdTest_Bool = false;
        Hvac_HalfWarmTest_Bool = false;
        Hvac_FullWarmTest_Bool = false;
        Hvac_EmgcVentilation_Bool = false;

        SetUpBtnDown();
        if(m_UICOK)
        {
//            HVAC_UICCmd_bool = false;
            Hvac_TempSet_Char = 0;
            SetDownBtnDown();
            return;
        }
        else if(!firstSetHvacSomethingCoolBool)
        {
            firstSetHvacSomethingCoolBool = true;

            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("to protect compressor，\nplease make sure compressor's \nrunning time is longer than 3mins"));
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
        }

        Hvac_TempSet_Char = (MIN_COLD+MAX_COLD)/2; // 20140122 modify

//        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downpress.png");
//        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("uppress.png");

    }
}

void CHvacParameterSetPage::OnVentilationDown()
{
    if(!Hvac_Ventilation_Bool)
    {
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
        HVAC_UICCmd_bool = false;
        Hvac_AutoWarm_Bool = false;
        Hvac_AutoCold_Bool = false;
        Hvac_Ventilation_Bool = true;
        Hvac_Stop_Bool = false;
        Hvac_HalfColdTest_Bool = false;
        Hvac_FullColdTest_Bool = false;
        Hvac_HalfWarmTest_Bool = false;
        Hvac_FullWarmTest_Bool = false;
        Hvac_EmgcVentilation_Bool = false;

        SetUpBtnDown();
    }
}


void CHvacParameterSetPage::OnStopDown()
{
    if(!Hvac_Stop_Bool)
    {
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
        HVAC_UICCmd_bool = false;
        Hvac_AutoWarm_Bool = false;
        Hvac_AutoCold_Bool = false;
        Hvac_Ventilation_Bool = false;
        Hvac_Stop_Bool = true;
        Hvac_HalfColdTest_Bool = false;
        Hvac_FullColdTest_Bool = false;
        Hvac_HalfWarmTest_Bool = false;
        Hvac_FullWarmTest_Bool = false;
        Hvac_EmgcVentilation_Bool = false;

        SetUpBtnDown();
    }
}

void CHvacParameterSetPage::OnUICDown()
{
    if(HVAC_UICCmd_bool)
    {
        m_UICOK = !m_UICOK;
        if(m_UICOK)
        {
             Hvac_TempSet_Char = 0;
             ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
             ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
        }
        else
        {
            Hvac_TempSet_Char = 22;
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("uppress.png");
        }
        SetDownBtnDown();
    }

}
void CHvacParameterSetPage::OnFullWarmDown()
{
    CarFullWarm_Bool = !CarFullWarm_Bool;
    if(CarFullWarm_Bool)
        CarHalfWarm_Bool = false;

    SetDownBtnDown();
}
void CHvacParameterSetPage::OnCabEDDown()
{
    CabEB_Bool = !CabEB_Bool;
    SetDownBtnDown();
}
void CHvacParameterSetPage::OnEDGlassDown()
{
    EBGlass_Bool = !EBGlass_Bool;
    SetDownBtnDown();
}
void CHvacParameterSetPage::OnUpdatePage()
{
    GetDlgItem(ID_PICHPS_LABEL_MC_CARNUM)->SetCtrlText(g_car1CodeStr);
    GetDlgItem(ID_PICHPS_LABEL_TEMP)->SetCtrlText(QString::number(Hvac_TempSet_Char));
    SetUpBtnDown();
    SetDownBtnDown();
}
void CHvacParameterSetPage::OnDownButtonDown()
{
    if(Hvac_AutoWarm_Bool)
    {
        if( Hvac_TempSet_Char>MIN_WARM )
        {
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downpress.png");
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
        }
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("up.png");
    }
    else if(Hvac_AutoCold_Bool)
    {
        if(!m_UICOK)
        {
            if( Hvac_TempSet_Char>MIN_COLD )
            {
                ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downpress.png");
                ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
            }
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("up.png");
        }

    }
    else
    {
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
    }
}

void CHvacParameterSetPage::OnDownButtonUp()
{
    if(Hvac_AutoWarm_Bool)
    {

        if( Hvac_TempSet_Char>(MIN_WARM+1) )
        {
            Hvac_TempSet_Char--;
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("down.png");
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->ChangeButtonState(LBUTTON_UP);
        }
        else if( Hvac_TempSet_Char==(MIN_WARM+1) )
        {
            Hvac_TempSet_Char--;
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
        }
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("up.png");
    }
    else if(Hvac_AutoCold_Bool)
    {
        if(!m_UICOK)
        {
            if( Hvac_TempSet_Char>(MIN_COLD+1) )
            {
                Hvac_TempSet_Char--;
                ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("down.png");
                ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->ChangeButtonState(LBUTTON_UP);
            }
            else if( Hvac_TempSet_Char==(MIN_COLD+1) )
            {
                Hvac_TempSet_Char--;
                ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
            }
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("up.png");

        }

    }
    else
    {
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
    }
}
void CHvacParameterSetPage::OnUpButtonDown()
{
    if(Hvac_AutoWarm_Bool)
    {
        if( Hvac_TempSet_Char<MAX_WARM )
        {
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("uppress.png");
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
        }
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("down.png");
    }
    else if(Hvac_AutoCold_Bool)
    {
        if(!m_UICOK)
        {
            if( Hvac_TempSet_Char<MAX_COLD )
            {
                ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("uppress.png");
                ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->ChangeButtonState(LBUTTON_DOWN);
            }
            else
            {
                ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
            }
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("down.png");

        }

    }
    else
    {
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
    }
}

void CHvacParameterSetPage::OnUpButtonUp()
{
    if(Hvac_AutoWarm_Bool)
    {
        if( Hvac_TempSet_Char<(MAX_WARM-1) )
        {
            Hvac_TempSet_Char++;
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("up.png");
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->ChangeButtonState(LBUTTON_UP);
        }
        else if( Hvac_TempSet_Char==(MAX_WARM-1) )
        {
            Hvac_TempSet_Char++;
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
        }
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("down.png");
    }
    else if(Hvac_AutoCold_Bool)
    {
        if(!m_UICOK)
        {
            if( Hvac_TempSet_Char<(MAX_COLD-1) )
            {
                Hvac_TempSet_Char++;
                ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("up.png");
                ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->ChangeButtonState(LBUTTON_UP);
            }
            else if( Hvac_TempSet_Char==(MAX_COLD-1) )
            {
                Hvac_TempSet_Char++;
                ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
            }
            ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("down.png");

        }


    }
    else
    {
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_DOWN))->SetCtrlText("downgray.png");
        ((CBitmapButton *)GetDlgItem(ID_PICHPS_BUTTON_UP))->SetCtrlText("upgray.png");
    }
}
