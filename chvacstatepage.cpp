#include "chvacstatepage.h"

ROMDATA g_PicRom_HvacStatePage[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER
    {"down.png",           D_DEFAULT_FONT,      QRect( 50, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_HVACSTATE_PAGEDOWN},
    {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_HVACSTATE_PAGEUP},
    {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(360, 75,220,  29),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
    {"",                     D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATEPAGE   },

    //H line
    {"",                   D_DEFAULT_FONT,      QRect( 50,125,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,147,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,169,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,191,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,213,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,235,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,257,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,279,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,301,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,323,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,345,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,367,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,389,530,  1),                  Qt::yellow,                  Qt::yellow,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,411,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },

    //V line
    {"",                   D_DEFAULT_FONT,      QRect( 50,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(360,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(470,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(580,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    //label
    {QSTR("Signal"),                D_FONT(14),      QRect( 55,126,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,148,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_2_1    },
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,170,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_3_1     },
    {QSTR(""),        D_DEFAULT_FONT,      QRect( 55,192,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_4_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,214,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_5_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,236,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,258,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_1     },
    {QSTR(""),              D_DEFAULT_FONT,      QRect( 55,280,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_1     },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,302,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_9_1     },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,324,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_10_1   },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,346,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_11_1    },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,368,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_12_1    },
    //{QSTR(""),           D_DEFAULT_FONT,      QRect( 55,390,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_13_1    },
    //{QSTR(""),           D_DEFAULT_FONT,      QRect( 55,412,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_14_1    },

    //label
    {"Mc1",           D_DEFAULT_FONT,      QRect(365,126,100, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(395,149, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_2_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,171, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_3_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,193, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_4_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,215, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_5_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,237, 40, 18),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,259, 40, 18),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,281, 40, 18),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,303, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_9_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,325, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_10_2   },
    {"",              D_DEFAULT_FONT,      QRect(395,347, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_11_2   },
    {"",              D_DEFAULT_FONT,      QRect(395,369, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_12_2   },
    //{"",              D_DEFAULT_FONT,      QRect(395,391, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_13_2   },
    //{"",              D_DEFAULT_FONT,      QRect(395,413, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_2   },

    {"Mc2",           D_DEFAULT_FONT,      QRect(475,126,100, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(505,149, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_2_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,171, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_3_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,193, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_4_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,215, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_5_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,237, 40, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,259, 40, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,281, 40, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,303, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_9_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,325, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_10_3   },
    {"",              D_DEFAULT_FONT,      QRect(505,347, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_11_3   },
    {"",              D_DEFAULT_FONT,      QRect(505,369, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_12_3   },


    D_LAYER2_NAVIGATION_BAR_HVAC
};
int g_HvacStatePageRomLen = sizeof(g_PicRom_HvacStatePage)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CHvacStatePage,CPage)
ON_UPDATE_PAGE()
ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
ON_LBUTTONDOWN(ID_HVACSTATE_PAGEDOWN, OnDownButtonDown)
ON_LBUTTONUP(ID_HVACSTATE_PAGEDOWN, OnDownButtonUp)
ON_LBUTTONDOWN(ID_HVACSTATE_PAGEUP, OnUpButtonDown)
ON_LBUTTONUP(ID_HVACSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()

CHvacStatePage::CHvacStatePage()
{
    pageNo = HVAC_MIN_PAGE;
}

void CHvacStatePage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}

/*
bool parameter state:
    yellow border color
    0: green background color, black text
    3: gray background color, black text
380V output voltage:
    -2000~2000,**.*
battery temperature:
    received value - 50,**.*
*/
void CHvacStatePage::OnUpdatePage()
{
    if((MAIN_TRAINCOUPLED_BOOL&&MAIN_TRAIN_COUPLED_MS_BOOL)&&((( MAIN_MC1KEYACTIVE_BOOL && !(MAIN_MC2KEYACTIVE_BOOL) )&&
                                                            (MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL)) )||  // mc1 key:true,mc2 key false
                                                         (( MAIN_MC2KEYACTIVE_BOOL && !(MAIN_MC1KEYACTIVE_BOOL) )&&
                                                          (MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL)))))
    {
        ChangePage(PAGE_ROM_INDEX_HVACSTATEPAGECOUPLED);
        return;
    }
    //GetDlgItem(IDLABEL_HVACSTATE_TRAINNUM)->SetCtrlText(g_car1CodeStr);
    if( pageNo==HVAC_MAX_PAGE )
    {

        ((CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEDOWN))->SetCtrlText("downgray.png");
        ((CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEUP))->SetCtrlText("up.png");
    }
    else if( pageNo==HVAC_MIN_PAGE )
    {

        ((CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEDOWN))->SetCtrlText("down.png");
        ((CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEUP))->SetCtrlText("upgray.png");
    }
    else
    {

        ((CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEDOWN))->SetCtrlText("down.png");
        ((CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEUP))->SetCtrlText("up.png");
    }

    switch(pageNo)
    {
    case 1:
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_1))->SetCtrlText(QSTR("evapraor fan status"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_1))->SetCtrlText(QSTR("condenser fan status"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_1))->SetCtrlText(QSTR("compressor1 status"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_1))->SetCtrlText(QSTR("compressor2 status"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_1))->SetCtrlText(QSTR("heater1 status"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_1))->SetCtrlText(QSTR("heater2 status"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_1))->SetCtrlText(QSTR("auto-Warm mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_1))->SetCtrlText(QSTR("auto-Cold mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_1))->SetCtrlText(QSTR("ventilation mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_1))->SetCtrlText(QSTR("emergency ventilation mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_1))->SetCtrlText(QSTR("stop mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATEPAGE))->SetCtrlText("1/2");


        // havc1
        if(HVAC_MC1_EVAPRAORFANSTATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_CONDENSERFANSTATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_COMPRESSOR1STATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_COMPRESSOR2STATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_HEATER1STATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_HEATER2STATUS_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_AUTOWARMMODE_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_AUTOCOLDMODE_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_VENTILATIONMODE_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlBKColor(Qt::gray);

        if( HVAC_MC1_EMERGENCYVENTILATIONMODE_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_STOPMODE_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlBKColor(Qt::gray);
        // hvac2
        if(HVAC_MC2_EVAPRAORFANSTATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_CONDENSERFANSTATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_COMPRESSOR1STATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_COMPRESSOR2STATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_HEATER1STATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_HEATER2STATUS_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_AUTOWARMMODE_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_AUTOCOLDMODE_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_VENTILATIONMODE_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlBKColor(Qt::gray);

        if( HVAC_MC2_EMERGENCYVENTILATIONMODE_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_STOPMODE_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlBKColor(Qt::gray);


        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText("");

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlText("");
        // hvac2
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText(QString::number(((qint16)(INDOORTEMP_MC2_HVAC_INT16))/10) + "." + QString::number(((qint16)(INDOORTEMP_MC2_HVAC_INT16))%10));
//        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText(QString::number(((qint16)(OUTDOORTEMP_MC2_HVAC_INT16))/10) + "." + QString::number(((qint16)(OUTDOORTEMP_MC2_HVAC_INT16))%10));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlText("");
        break;
    case 2:
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_1))->SetCtrlText(QSTR("Reduce_Load_FB"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_1))->SetCtrlText(QSTR("Pre-Cold"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_1))->SetCtrlText(QSTR("Pre-Warm"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_1))->SetCtrlText(QSTR("fresh air damper status"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_1))->SetCtrlText(QSTR("return air damper status"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_1))->SetCtrlText(QSTR("Half Cold Mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_1))->SetCtrlText(QSTR("Full Cold Mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_1))->SetCtrlText(QSTR("Half Warm Mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_1))->SetCtrlText(QSTR("Full Warm Mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_1))->SetCtrlText(QSTR("Temp_Outside"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_1))->SetCtrlText(QSTR("Temp_Inside"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATEPAGE))->SetCtrlText("2/2");

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlBKColor(Qt::black);

        if(HVAC_MC1_REDUCELOADFBMODE_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_PRECOLD_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_PREWARM_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_FRESHAIRDAMPERSTATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_RETURNAIRDAMPERSTATUS_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_HALFCOLDMODE_BOOL  )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_FULLCOLDMODE_BOOL  )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_HALFWARMMODE_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_FULLWARMMODE_BOOL  )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlBKColor(Qt::gray);

/////hvac2
        if(HVAC_MC2_REDUCELOADFBMODE_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_PRECOLD_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_PREWARM_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_FRESHAIRDAMPERSTATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_RETURNAIRDAMPERSTATUS_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_HALFCOLDMODE_BOOL  )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_FULLCOLDMODE_BOOL  )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_HALFWARMMODE_BOOL )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_FULLWARMMODE_BOOL  )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlBKColor(Qt::gray);



        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlText(QString::number(HVAC_MC1_TEMPOUTSIDE_BYTE-40));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlText(QString::number(HVAC_MC1_TEMPINSIDE_BYTE-40));

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlText(QString::number(HVAC_MC2_TEMPOUTSIDE_BYTE-40));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlText(QString::number(HVAC_MC2_TEMPINSIDE_BYTE-40));
        break;
    /*case 3:
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_1))->SetCtrlText(QSTR("网控状态"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_1))->SetCtrlText(QSTR("半冷测试状态"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_1))->SetCtrlText(QSTR("全冷测试状态"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_1))->SetCtrlText(QSTR("半暖测试状态"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_1))->SetCtrlText(QSTR("全暖测试状态"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_1))->SetCtrlText(QSTR("通风机1过载故障"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_1))->SetCtrlText(QSTR("冷凝风机1过载故障"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_1))->SetCtrlText(QSTR("压缩机1过流保护"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_1))->SetCtrlText(QSTR("压缩机1高压保护"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_1))->SetCtrlText(QSTR("压缩机1低压保护"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_1))->SetCtrlText(QSTR("通风机2过载故障"));

        if(NETCONTROL_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlBKColor(Qt::gray);

        if(HALFCOLDTESTSTATE_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlBKColor(Qt::gray);

        if(FULLCOLDTESTSTATE_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::gray);

        if(HALFWRAMTESTSTATE_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::gray);

        if(FULLWARMTESTSTATE_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2))->SetCtrlBKColor(Qt::gray);

        if(FAN1OVERLOADFAULT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2))->SetCtrlBKColor(Qt::green);

        if(CONDENSERFAN1OVERLOADFAULT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlBKColor(Qt::green);

        if(COMPRESSOR1OVERIPROTECT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlBKColor(Qt::green);

        if(COMPRESSOR1HIGHVPROTECT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlBKColor(Qt::green);

        if(COMPRESSOR1LOWVPROTECT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlBKColor(Qt::green);

        if(FAN2OVERLOADFAULT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlBKColor(Qt::green);

        if(NETCONTROL_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlBKColor(Qt::gray);

        if(HALFCOLDTESTSTATE_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlBKColor(Qt::gray);

        if(FULLCOLDTESTSTATE_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::gray);

        if(HALFWRAMTESTSTATE_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::gray);

        if(FULLWARMTESTSTATE_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3))->SetCtrlBKColor(Qt::gray);

        if(FAN1OVERLOADFAULT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3))->SetCtrlBKColor(Qt::green);

        if(CONDENSERFAN1OVERLOADFAULT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlBKColor(Qt::green);

        if(COMPRESSOR1OVERIPROTECT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlBKColor(Qt::green);

        if(COMPRESSOR1HIGHVPROTECT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlBKColor(Qt::green);

        if(COMPRESSOR1LOWVPROTECT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlBKColor(Qt::green);

        if(FAN2OVERLOADFAULT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlText("");

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlText("");
        break;
    case 4:
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_1))->SetCtrlText(QSTR("冷凝风机2过载故障"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_1))->SetCtrlText(QSTR("压缩机2过流保护"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_1))->SetCtrlText(QSTR("压缩机2高压保护"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_1))->SetCtrlText(QSTR("压缩机2低压保护"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_1))->SetCtrlText(QSTR("电加热过流故障"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_1))->SetCtrlText(QSTR("电加热过热故障"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_1))->SetCtrlText(QSTR("空调过流"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_1))->SetCtrlText(QSTR("新风温度传感器故障"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_1))->SetCtrlText(QSTR("回风温度传感器故障"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_1))->SetCtrlText(QSTR("三相电源故障"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_1))->SetCtrlText(QSTR(""));

        if(CONDENSERFAN2OVERLOADFAULT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlBKColor(Qt::green);

        if(COMPRESSOR2OVERIPROTECT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlBKColor(Qt::green);

        if(COMPRESSOR2HIGHVPROTECT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlBKColor(Qt::green);

        if(COMPRESSOR2LOWVPROTECT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::green);

        if(ELECTRICHEATOVERIFAULT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2))->SetCtrlBKColor(Qt::green);

        if(ELECTRICHEATOVERHEATFAULT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2))->SetCtrlBKColor(Qt::green);

        if(HVACOVERCURRENT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlBKColor(Qt::green);

        if(NEWAIRTEMPSENSORFAULT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlBKColor(Qt::green);

        if(BACKAIRTEMPSENSORFAULT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlBKColor(Qt::green);

        if(THREEPHASEPOWERFAULT_MC1_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlBKColor(Qt::black);

        if(CONDENSERFAN2OVERLOADFAULT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlBKColor(Qt::green);

        if(COMPRESSOR2OVERIPROTECT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlBKColor(Qt::green);

        if(COMPRESSOR2HIGHVPROTECT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlBKColor(Qt::green);

        if(COMPRESSOR2LOWVPROTECT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::green);

        if(ELECTRICHEATOVERIFAULT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3))->SetCtrlBKColor(Qt::green);

        if(ELECTRICHEATOVERHEATFAULT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3))->SetCtrlBKColor(Qt::green);

        if(HVACOVERCURRENT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlBKColor(Qt::green);

        if(NEWAIRTEMPSENSORFAULT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlBKColor(Qt::green);

        if(BACKAIRTEMPSENSORFAULT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlBKColor(Qt::green);

        if(THREEPHASEPOWERFAULT_MC2_HVAC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlBKColor(Qt::black);

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlText("");

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlText("");
        break;*/
    default:
        break;
    }
}
void CHvacStatePage::OnDownButtonDown()
{
    CBitmapButton *bitmapButton;

    if( pageNo<HVAC_MAX_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("downpress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
}

void CHvacStatePage::OnDownButtonUp()
{
    CBitmapButton *bitmapButton;

    if( pageNo<HVAC_MAX_PAGE )
    {
        pageNo++;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("down.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    if( pageNo==HVAC_MAX_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
    ((CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEUP))->SetCtrlText("up.png");
}
void CHvacStatePage::OnUpButtonDown()
{
    CBitmapButton *bitmapButton;

    if( pageNo>HVAC_MIN_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEUP);
        bitmapButton->SetCtrlText("uppress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEUP);
        bitmapButton->SetCtrlText("upgray.png");
    }
}

void CHvacStatePage::OnUpButtonUp()
{
    CBitmapButton *bitmapButton;

    if( pageNo>HVAC_MIN_PAGE )
    {
        pageNo--;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEUP);
        bitmapButton->SetCtrlText("up.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    if( pageNo==HVAC_MIN_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEUP);
        bitmapButton->SetCtrlText("upgray.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    ((CBitmapButton *)GetDlgItem(ID_HVACSTATE_PAGEDOWN))->SetCtrlText("down.png");
}
void CHvacStatePage::OnInitPage()
{
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_1))->SetAlignment(Qt::AlignLeft);
}
