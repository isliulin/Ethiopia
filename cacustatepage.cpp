#include "cacustatepage.h"

ROMDATA g_PicRom_AcuStatePage[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER
    {"down.png",           D_DEFAULT_FONT,      QRect( 50, 75, 60,  40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_ACUSTATE_PAGEDOWN},
    {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60,  40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_ACUSTATE_PAGEUP},
    //{"0000",               D_DEFAULT_FONT,      QRect(440, 70, 60,  19),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_TRAINNUM },
    {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(360, 75,220,  29),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
    {"",              D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATEPAGE   },

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
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,148,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_2_1    },
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,170,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_3_1     },
    {QSTR(""),        D_DEFAULT_FONT,      QRect( 55,192,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_4_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,214,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_5_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,236,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,258,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_1     },
    {QSTR(""),              D_DEFAULT_FONT,      QRect( 55,280,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_1     },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,302,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_9_1     },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,324,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_10_1   },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,346,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_11_1    },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,368,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_12_1    },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,390,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_13_1    },
    //{QSTR(""),           D_DEFAULT_FONT,      QRect( 55,412,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_14_1    },

    //label
    {"Mc1",           D_DEFAULT_FONT,      QRect(365,126,100, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(395,149, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_2_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,171, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_3_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,193, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_4_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,215, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_5_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,237, 40, 18),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,259, 40, 18),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,281, 40, 18),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,303, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_9_2    },
    {"",              D_DEFAULT_FONT,      QRect(395,325, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_10_2   },
    {"",              D_DEFAULT_FONT,      QRect(395,347, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_11_2   },
    {"",              D_DEFAULT_FONT,      QRect(395,369, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_12_2   },
    {"",              D_DEFAULT_FONT,      QRect(395,391, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_2   },
    //{"",              D_DEFAULT_FONT,      QRect(395,413, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_2   },

    {"Mc2",           D_DEFAULT_FONT,      QRect(475,126,100, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(505,149, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_2_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,171, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_3_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,193, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_4_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,215, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_5_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,237, 40, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,259, 40, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,281, 40, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,303, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_9_3    },
    {"",              D_DEFAULT_FONT,      QRect(505,325, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_10_3   },
    {"",              D_DEFAULT_FONT,      QRect(505,347, 40, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_11_3   },
    {"",              D_DEFAULT_FONT,      QRect(505,369, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_12_3   },
    {"",              D_DEFAULT_FONT,      QRect(505,391, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_3   },

    //{"",              D_DEFAULT_FONT,      QRect(505,413, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_3   },

    D_LAYER1_NAVIGATION_BAR
};
int g_AcuStatePageRomLen = sizeof(g_PicRom_AcuStatePage)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CAcuStatePage,CPage)
ON_UPDATE_PAGE()
ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
ON_LBUTTONDOWN(ID_ACUSTATE_PAGEDOWN, OnDownButtonDown)
ON_LBUTTONUP(ID_ACUSTATE_PAGEDOWN, OnDownButtonUp)
ON_LBUTTONDOWN(ID_ACUSTATE_PAGEUP, OnUpButtonDown)
ON_LBUTTONUP(ID_ACUSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()

CAcuStatePage::CAcuStatePage()
{
    pageNo =ACU_MIN_PAGE;
    formerPageNo = 0;
}

void CAcuStatePage::OnCommonQuitButtonDown()
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
void CAcuStatePage::OnUpdatePage()
{
    if((MAIN_TRAINCOUPLED_BOOL&&MAIN_TRAIN_COUPLED_MS_BOOL)&&((( MAIN_MC1KEYACTIVE_BOOL && !(MAIN_MC2KEYACTIVE_BOOL) )&&
                                                            (MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL)) )||  // mc1 key:true,mc2 key false
                                                         (( MAIN_MC2KEYACTIVE_BOOL && !(MAIN_MC1KEYACTIVE_BOOL) )&&
                                                          (MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL)))))
    {
        ChangePage(PAGE_ROM_INDEX_ACUSTATEPAGECOUPLED);
        return;
    }
    //GetDlgItem(IDLABEL_PICBCU_TRAINNUM)->SetCtrlText(g_car1CodeStr);

  if( pageNo==ACU_MAX_PAGE )
    {

        ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEDOWN))->SetCtrlText("downgray.png");
        ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEUP))->SetCtrlText("up.png");
    }
    else if( pageNo==ACU_MIN_PAGE )
    {

        ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEDOWN))->SetCtrlText("down.png");
        ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEUP))->SetCtrlText("upgray.png");
    }
    else
    {

        ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEDOWN))->SetCtrlText("down.png");
        ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEUP))->SetCtrlText("up.png");
    }
    switch(pageNo)
    {
    case 1:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_1))->SetCtrlText(QSTR("MODUL_OK_ACU"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_1))->SetCtrlText(QSTR("MODUL_Work_ACU"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_1))->SetCtrlText(QSTR("MODUL_OK_BCC"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_1))->SetCtrlText(QSTR("MODUL_Work_BCC"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_1))->SetCtrlText(QSTR("OutputVoltage_ACU"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_1))->SetCtrlText(QSTR("OutputCurrent_ACU"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_1))->SetCtrlText(QSTR("OutputVoltage_BCC"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_1))->SetCtrlText(QSTR("ChargingCurrent_BCC"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_1))->SetCtrlText(QSTR("BattTemp_BCC"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_1))->SetCtrlText(QSTR("battCurrent_BCC"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_1))->SetCtrlText(QSTR("iFaultReg1_ACU"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_1))->SetCtrlText(QSTR("iFaultReg2_ACU"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATEPAGE))->SetCtrlText("1/2");


            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_3))->SetCtrlText("");

            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_2))->SetCtrlText("");


            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_3))->SetCtrlText("");


            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_2))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_2))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_3))->SetCtrlBKColor(Qt::black);
        }

        if(MODUL_OK_ACU_MC1_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_2))->SetCtrlBKColor(Qt::red);
        if(MODUL_STOP_ACU_MC1_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_2))->SetCtrlBKColor(Qt::gray);
        if(MODUL_OK_BCC_MC1_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_2))->SetCtrlBKColor(Qt::red);
        if(MODUL_STOP_BCC_MC1_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_2))->SetCtrlBKColor(Qt::gray);

        if(MODUL_OK_ACU_MC2_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_3))->SetCtrlBKColor(Qt::red);
        if(MODUL_STOP_ACU_MC2_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_3))->SetCtrlBKColor(Qt::gray);
        if(MODUL_OK_BCC_MC2_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_3))->SetCtrlBKColor(Qt::red);
        if(MODUL_STOP_BCC_MC2_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_3))->SetCtrlBKColor(Qt::gray);



        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_2))->SetCtrlText(QString::number(OUTPUTVOLTAGE_ACU_MC1_UINT));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_2))->SetCtrlText(QString::number(OUTPUTCURRENT_ACU_MC1_UINT));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_2))->SetCtrlText(QString::number(OUTPUTVOLTAGE_BCC_MC1_USINT));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_2))->SetCtrlText(QString::number(CHARGINGCURRENT_BCC_MC1_USINT));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_2))->SetCtrlText(QString::number(BATTTEMP_BCC_MC1_USINT-100));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_2))->SetCtrlText(QString::number(BATTCURRENT_BCC_MC1_UINT));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_2))->SetCtrlText(QString::number(ACU_IFAULTREG1_MC1_WORD,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_2))->SetCtrlText(QString::number(ACU_IFAULTREG2_MC1_WORD,16).toUpper());


        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_3))->SetCtrlText(QString::number(OUTPUTVOLTAGE_ACU_MC2_UINT));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_3))->SetCtrlText(QString::number(OUTPUTCURRENT_ACU_MC2_UINT));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_3))->SetCtrlText(QString::number(OUTPUTVOLTAGE_BCC_MC2_USINT));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_3))->SetCtrlText(QString::number(CHARGINGCURRENT_BCC_MC2_USINT));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_3))->SetCtrlText(QString::number(BATTTEMP_BCC_MC2_USINT-100));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_3))->SetCtrlText(QString::number(BATTCURRENT_BCC_MC2_UINT));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_3))->SetCtrlText(QString::number(ACU_IFAULTREG1_MC2_WORD,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_3))->SetCtrlText(QString::number(ACU_IFAULTREG2_MC2_WORD,16).toUpper());

        break;
  case 2:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_1))->SetCtrlText(QSTR("iFaultReg1_BCC"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_1))->SetCtrlText(QSTR("iFaultReg2_BCC"));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATEPAGE))->SetCtrlText("2/2");


            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_2))->SetCtrlText("");


            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_3))->SetCtrlText("");

            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_2))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_3))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_2))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_2))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_3))->SetCtrlBKColor(Qt::black);

        }
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_2))->SetCtrlText(QString::number(BCC_IFAULTREG1_MC1_WORD,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_2))->SetCtrlText(QString::number(BCC_IFAULTREG2_MC1_WORD,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_3))->SetCtrlText(QString::number(BCC_IFAULTREG1_MC2_WORD,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_3))->SetCtrlText(QString::number(BCC_IFAULTREG2_MC2_WORD,16).toUpper());
        break;

    default:
        break;
    }
}
void CAcuStatePage::OnDownButtonDown()
{
    CBitmapButton *bitmapButton;

    /**/if( pageNo<ACU_MAX_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("downpress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
}

void CAcuStatePage::OnDownButtonUp()
{
    CBitmapButton *bitmapButton;

    if( pageNo<ACU_MAX_PAGE )
    {
        pageNo++;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("down.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    if( pageNo==ACU_MAX_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
    ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEUP))->SetCtrlText("up.png");/**/
}
void CAcuStatePage::OnUpButtonDown()
{
    CBitmapButton *bitmapButton;

    if( pageNo>ACU_MIN_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEUP);
        bitmapButton->SetCtrlText("uppress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEUP);
        bitmapButton->SetCtrlText("upgray.png");
    }/**/
}

void CAcuStatePage::OnUpButtonUp()
{
    CBitmapButton *bitmapButton;

    if( pageNo>ACU_MIN_PAGE )
    {
        pageNo--;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEUP);
        bitmapButton->SetCtrlText("up.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    if( pageNo==ACU_MIN_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEUP);
        bitmapButton->SetCtrlText("upgray.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEDOWN))->SetCtrlText("down.png");/**/
}
void CAcuStatePage::OnInitPage()
{
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_1))->SetAlignment(Qt::AlignLeft);
    //((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_1))->SetAlignment(Qt::AlignLeft);
}
