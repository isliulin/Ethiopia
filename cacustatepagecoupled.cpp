#include "cacustatepagecoupled.h"


ROMDATA g_PicRom_AcuStatePageCoupled[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER
    {"down.png",           D_DEFAULT_FONT,      QRect( 50, 75, 60,  40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_ACUSTATE_PAGEDOWN},
    {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60,  40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_ACUSTATE_PAGEUP},
    //{"0000",               D_DEFAULT_FONT,      QRect(440, 70, 60,  19),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_TRAINNUM },
    {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(330, 75,130,  29),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
    {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(460, 75,130,  29),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
    {"",              D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_ACUSTATEPAGE   },

    //H line
    {"",                   D_DEFAULT_FONT,      QRect( 50,125,540,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,147,540,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,169,540,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,191,540,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,213,540,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,235,540,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,257,540,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,279,540,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,301,540,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,323,540,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,345,540,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,367,540,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,389,540,  1),                  Qt::yellow,                  Qt::yellow,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect( 50,411,540,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },

    //V line
    {"",                   D_DEFAULT_FONT,      QRect( 50,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(330,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(395,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(460,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(525,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(590,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },


    //label
    {QSTR("Signal"),                D_FONT(14),      QRect( 55,126,270, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,148,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_2_1    },
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,170,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_3_1     },
    {QSTR(""),        D_DEFAULT_FONT,      QRect( 55,192,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_4_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,214,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_5_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,236,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,258,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_1     },
    {QSTR(""),              D_DEFAULT_FONT,      QRect( 55,280,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_1     },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,302,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_9_1     },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,324,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_10_1   },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,346,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_11_1    },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,368,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_12_1    },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,390,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_13_1    },
    //{QSTR(""),           D_DEFAULT_FONT,      QRect( 55,412,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_14_1    },

    //label
    {"Mc1",           D_DEFAULT_FONT,      QRect(331,126,64, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(345,149, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_2_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,171, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_3_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,193, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_4_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,215, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_5_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,237, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,259, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,281, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,303, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_9_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,325, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_10_2   },
    {"",              D_DEFAULT_FONT,      QRect(345,347, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_11_2   },
    {"",              D_DEFAULT_FONT,      QRect(345,369, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_12_2   },
    {"",              D_DEFAULT_FONT,      QRect(345,391, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_2   },
    //{"",              D_DEFAULT_FONT,      QRect(395,413, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_2   },

    {"Mc2",           D_DEFAULT_FONT,      QRect(396,126,64, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(410,149, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_2_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,171, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_3_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,193, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_4_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,215, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_5_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,237, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,259, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,281, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,303, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_9_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,325, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_10_3   },
    {"",              D_DEFAULT_FONT,      QRect(410,347, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_11_3   },
    {"",              D_DEFAULT_FONT,      QRect(410,369, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_12_3   },
    {"",              D_DEFAULT_FONT,      QRect(410,391, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_3   },
    //{"",              D_DEFAULT_FONT,      QRect(505,413, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_3   },
{"Mc1",           D_DEFAULT_FONT,      QRect(461,126,64, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",              D_DEFAULT_FONT,      QRect(475,149, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_2_4    },
{"",              D_DEFAULT_FONT,      QRect(475,171, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_3_4    },
{"",              D_DEFAULT_FONT,      QRect(475,193, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_4_4    },
{"",              D_DEFAULT_FONT,      QRect(475,215, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_5_4    },
{"",              D_DEFAULT_FONT,      QRect(475,237, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_4    },
{"",              D_DEFAULT_FONT,      QRect(475,259, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_4    },
{"",              D_DEFAULT_FONT,      QRect(475,281, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_4    },
{"",              D_DEFAULT_FONT,      QRect(475,303, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_9_4    },
{"",              D_DEFAULT_FONT,      QRect(475,325, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_10_4   },
{"",              D_DEFAULT_FONT,      QRect(475,347, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_11_4   },
{"",              D_DEFAULT_FONT,      QRect(475,369, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_12_4   },
{"",              D_DEFAULT_FONT,      QRect(475,391, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_4   },
//{"",              D_DEFAULT_FONT,      QRect(395,413, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_2   },

{"Mc2",           D_DEFAULT_FONT,      QRect(526,126,64, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",              D_DEFAULT_FONT,      QRect(540,149, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_2_5    },
{"",              D_DEFAULT_FONT,      QRect(540,171, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_3_5    },
{"",              D_DEFAULT_FONT,      QRect(540,193, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_4_5    },
{"",              D_DEFAULT_FONT,      QRect(540,215, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_5_5    },
{"",              D_DEFAULT_FONT,      QRect(540,237, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_6_5    },
{"",              D_DEFAULT_FONT,      QRect(540,259, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_7_5    },
{"",              D_DEFAULT_FONT,      QRect(540,281, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_8_5    },
{"",              D_DEFAULT_FONT,      QRect(540,303, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_9_5    },
{"",              D_DEFAULT_FONT,      QRect(540,325, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_10_5   },
{"",              D_DEFAULT_FONT,      QRect(540,347, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_11_5   },
{"",              D_DEFAULT_FONT,      QRect(540,369, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_12_5   },
{"",              D_DEFAULT_FONT,      QRect(540,391, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_5   },

//{"",              D_DEFAULT_FONT,      QRect(505,413, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_3   },

    D_LAYER1_NAVIGATION_BAR
};
int g_AcuStatePageCoupledRomLen = sizeof(g_PicRom_AcuStatePageCoupled)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CAcuStatePageCoupled,CPage)
ON_UPDATE_PAGE()
ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
ON_LBUTTONDOWN(ID_ACUSTATE_PAGEDOWN, OnDownButtonDown)
ON_LBUTTONUP(ID_ACUSTATE_PAGEDOWN, OnDownButtonUp)
ON_LBUTTONDOWN(ID_ACUSTATE_PAGEUP, OnUpButtonDown)
ON_LBUTTONUP(ID_ACUSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()


CAcuStatePageCoupled::CAcuStatePageCoupled()
{
    pageNo =ACU_MIN_PAGE;
    formerPageNo = 0;
}

void CAcuStatePageCoupled::OnCommonQuitButtonDown()
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
void CAcuStatePageCoupled::OnUpdatePage()
{

    if(!(MAIN_TRAINCOUPLED_BOOL&&MAIN_TRAIN_COUPLED_MS_BOOL))
    {
        ChangePage(PAGE_ROM_INDEX_ACUSTATE);
        return;
    }
    //GetDlgItem(IDLABEL_ACUSTATE_TRAINNUM)->SetCtrlText(g_car1CodeStr);
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
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_5))->SetCtrlText("");

            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_2))->SetCtrlBKColor(Qt::black);



            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_3))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_5))->SetCtrlBKColor(Qt::black);



            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_4))->SetCtrlBKColor(Qt::black);
        }

        /**/if(MODUL_OK_ACU_MC1_BOOL)
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

        /**/if(ACU_MC1_MODUL_OK_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_4))->SetCtrlBKColor(Qt::red);
        if(ACU_MC1_MODUL_STOP_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_4))->SetCtrlBKColor(Qt::gray);
        if(BCC_MC1_MODUL_OK_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_4))->SetCtrlBKColor(Qt::red);
        if(BCC_MC1_MODUL_STOP_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_4))->SetCtrlBKColor(Qt::gray);

        if(ACU_MC2_MODUL_OK_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_5))->SetCtrlBKColor(Qt::red);
        if(ACU_MC2_MODUL_STOP_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_5))->SetCtrlBKColor(Qt::gray);
        if(BCC_MC2_MODUL_OK_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_5))->SetCtrlBKColor(Qt::red);
        if(BCC_MC2_MODUL_STOP_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_5))->SetCtrlBKColor(Qt::gray);

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

        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_4))->SetCtrlText(QString::number(ACU_MC1_OUTPUTVOLTAGE_UINT_TBC));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_4))->SetCtrlText(QString::number(ACU_MC1_OUTPUTCURRENT_UINT_TBC));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_4))->SetCtrlText(QString::number(BCC_MC1_OUTPUTVOLTAGE_USINT_TBC));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_4))->SetCtrlText(QString::number(BCC_MC1_CHARGINGCURRENT_USINT_TBC));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_4))->SetCtrlText(QString::number(BCC_MC1_BATTERYTEMP_USINT_TBC-100));

        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_5))->SetCtrlText(QString::number(ACU_MC2_OUTPUTVOLTAGE_UINT_TBC));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_5))->SetCtrlText(QString::number(ACU_MC2_OUTPUTCURRENT_UINT_TBC));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_5))->SetCtrlText(QString::number(BCC_MC2_OUTPUTVOLTAGE_USINT_TBC));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_5))->SetCtrlText(QString::number(BCC_MC2_CHARGINGCURRENT_USINT_TBC));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_5))->SetCtrlText(QString::number(BCC_MC2_BATTERYTEMP_USINT_TBC-100));


        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_4))->SetCtrlText(QString::number(BCC_MC1_BATTCURRENT_UINT_TBC));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_5))->SetCtrlText(QString::number(BCC_MC2_BATTCURRENT_UINT_TBC));
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_4))->SetCtrlText(QString::number(ACU_MC1_IFAULTREG2_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_5))->SetCtrlText(QString::number(ACU_MC2_IFAULTREG2_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_4))->SetCtrlText(QString::number(ACU_MC1_IFAULTREG_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_5))->SetCtrlText(QString::number(ACU_MC2_IFAULTREG_WORD_TBC,16).toUpper());
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


            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_2))->SetCtrlBKColor(Qt::black);



            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_3))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_5))->SetCtrlBKColor(Qt::black);



            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_4))->SetCtrlBKColor(Qt::black);

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
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_6_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_7_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_8_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_9_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_10_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_11_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_12_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_13_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_4_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_5_5))->SetCtrlText("");
        }
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_2))->SetCtrlText(QString::number(BCC_IFAULTREG1_MC1_WORD,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_2))->SetCtrlText(QString::number(BCC_IFAULTREG2_MC1_WORD,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_3))->SetCtrlText(QString::number(BCC_IFAULTREG1_MC2_WORD,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_3))->SetCtrlText(QString::number(BCC_IFAULTREG2_MC2_WORD,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_4))->SetCtrlText(QString::number(BCC_MC1_IFAULTREG1_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_4))->SetCtrlText(QString::number(BCC_MC1_IFAULTREG2_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_2_5))->SetCtrlText(QString::number(BCC_MC2_IFAULTREG1_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_ACUSTATE_3_5))->SetCtrlText(QString::number(BCC_MC2_IFAULTREG2_WORD_TBC,16).toUpper());
        break;
    default:
        break;
    }
}
void CAcuStatePageCoupled::OnDownButtonDown()
{
    CBitmapButton *bitmapButton;

    if( pageNo<ACU_MAX_PAGE )
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

void CAcuStatePageCoupled::OnDownButtonUp()
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
    ((CBitmapButton *)GetDlgItem(ID_ACUSTATE_PAGEUP))->SetCtrlText("up.png");
}
void CAcuStatePageCoupled::OnUpButtonDown()
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
    }
}

void CAcuStatePageCoupled::OnUpButtonUp()
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
void CAcuStatePageCoupled::OnInitPage()
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
