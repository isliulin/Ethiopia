#include "chvacstatepagecoupled.h"

ROMDATA g_PicRom_HvacStatePageCoupled[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER
    {"down.png",           D_DEFAULT_FONT,      QRect( 50, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_HVACSTATE_PAGEDOWN},
    {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_HVACSTATE_PAGEUP},
    {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(330, 75,130,  29),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
    {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(460, 75,130,  29),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
    {"",              D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_HVACSTATEPAGE   },

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
    //V LINE
    {"",                   D_DEFAULT_FONT,      QRect( 50,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(330,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(395,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(460,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(525,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(590,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },


    //label
    {QSTR("Signal"),                D_FONT(14),      QRect( 55,126,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,148,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_2_1    },
    {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,170,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_3_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,192,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_4_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,214,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_5_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,236,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_1     },
    {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,258,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_1     },
    {QSTR(""),              D_DEFAULT_FONT,      QRect( 55,280,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_1     },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,302,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_9_1     },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,324,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_10_1   },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,346,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_11_1    },
    {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,368,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_12_1    },
    //{QSTR(""),           D_DEFAULT_FONT,      QRect( 55,390,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_13_1    },
    //{QSTR(""),           D_DEFAULT_FONT,      QRect( 55,412,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_ACUSTATE_14_1    },

    //label

    //label
    {"Mc1",           D_DEFAULT_FONT,      QRect(331,126,64, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(345,149, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_2_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,171, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_3_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,193, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_4_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,215, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_5_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,237, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,             IDLABEL_HVACSTATE_6_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,259, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,             IDLABEL_HVACSTATE_7_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,281, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,             IDLABEL_HVACSTATE_8_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,303, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_9_2    },
    {"",              D_DEFAULT_FONT,      QRect(345,325, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_10_2   },
    {"",              D_DEFAULT_FONT,      QRect(345,347, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_11_2   },
    {"",              D_DEFAULT_FONT,      QRect(345,369, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_12_2   },
    //{"",              D_DEFAULT_FONT,      QRect(345,391, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_2   },
    //{"",              D_DEFAULT_FONT,      QRect(395,413, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_2   },

    {"Mc2",           D_DEFAULT_FONT,      QRect(396,126,64, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
    {"",              D_DEFAULT_FONT,      QRect(410,149, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_2_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,171, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_3_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,193, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_4_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,215, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_5_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,237, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,             IDLABEL_HVACSTATE_6_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,259, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,             IDLABEL_HVACSTATE_7_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,281, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,             IDLABEL_HVACSTATE_8_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,303, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_9_3    },
    {"",              D_DEFAULT_FONT,      QRect(410,325, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_10_3   },
    {"",              D_DEFAULT_FONT,      QRect(410,347, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_11_3   },
    {"",              D_DEFAULT_FONT,      QRect(410,369, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_12_3   },
    //{"",              D_DEFAULT_FONT,      QRect(410,391, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_3   },
    //{"",              D_DEFAULT_FONT,      QRect(505,413, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_3   },
{"Mc1",           D_DEFAULT_FONT,      QRect(461,126,64, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",              D_DEFAULT_FONT,      QRect(475,149, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_2_4    },
{"",              D_DEFAULT_FONT,      QRect(475,171, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_3_4    },
{"",              D_DEFAULT_FONT,      QRect(475,193, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_4_4    },
{"",              D_DEFAULT_FONT,      QRect(475,215, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_5_4    },
{"",              D_DEFAULT_FONT,      QRect(475,237, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_6_4    },
{"",              D_DEFAULT_FONT,      QRect(475,259, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_7_4    },
{"",              D_DEFAULT_FONT,      QRect(475,281, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_HVACSTATE_8_4    },
{"",              D_DEFAULT_FONT,      QRect(475,303, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_9_4    },
{"",              D_DEFAULT_FONT,      QRect(475,325, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_10_4   },
{"",              D_DEFAULT_FONT,      QRect(475,347, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_11_4   },
{"",              D_DEFAULT_FONT,      QRect(475,369, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_12_4   },
//{"",              D_DEFAULT_FONT,      QRect(475,391, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_4   },
//{"",              D_DEFAULT_FONT,      QRect(395,413, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_14_2   },

{"Mc2",           D_DEFAULT_FONT,      QRect(526,126,64, 20),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",              D_DEFAULT_FONT,      QRect(540,149, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_2_5    },
{"",              D_DEFAULT_FONT,      QRect(540,171, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_3_5    },
{"",              D_DEFAULT_FONT,      QRect(540,193, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_4_5    },
{"",              D_DEFAULT_FONT,      QRect(540,215, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_5_5    },
{"",              D_DEFAULT_FONT,      QRect(540,237, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,             IDLABEL_HVACSTATE_6_5    },
{"",              D_DEFAULT_FONT,      QRect(540,259, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,             IDLABEL_HVACSTATE_7_5    },
{"",              D_DEFAULT_FONT,      QRect(540,281, 35, 19),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,             IDLABEL_HVACSTATE_8_5    },
{"",              D_DEFAULT_FONT,      QRect(540,303, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_9_5    },
{"",              D_DEFAULT_FONT,      QRect(540,325, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_10_5   },
{"",              D_DEFAULT_FONT,      QRect(540,347, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_11_5   },
{"",              D_DEFAULT_FONT,      QRect(540,369, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_HVACSTATE_12_5   },
//{"",              D_DEFAULT_FONT,      QRect(540,391, 35, 19),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_ACUSTATE_13_5   },


    D_LAYER2_NAVIGATION_BAR_HVAC
};
int g_HvacStatePageCoupledRomLen = sizeof(g_PicRom_HvacStatePageCoupled)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CHvacStatePageCoupled,CPage)
ON_UPDATE_PAGE()
ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
ON_LBUTTONDOWN(ID_HVACSTATE_PAGEDOWN, OnDownButtonDown)
ON_LBUTTONUP(ID_HVACSTATE_PAGEDOWN, OnDownButtonUp)
ON_LBUTTONDOWN(ID_HVACSTATE_PAGEUP, OnUpButtonDown)
ON_LBUTTONUP(ID_HVACSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()

CHvacStatePageCoupled::CHvacStatePageCoupled()
{
    pageNo = HVAC_MIN_PAGE;
}


void CHvacStatePageCoupled::OnCommonQuitButtonDown()
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
void CHvacStatePageCoupled::OnInit()
{
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

    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlBKColor(Qt::black);

    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_4))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_4))->SetCtrlText("");

    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_5))->SetCtrlText("");
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_5))->SetCtrlText("");

    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_4))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_4))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_5))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_5))->SetCtrlBKColor(Qt::black);

}
void CHvacStatePageCoupled::OnUpdatePage()
{
    if(!(MAIN_TRAINCOUPLED_BOOL)&&MAIN_TRAIN_COUPLED_MS_BOOL)
    {
        ChangePage(PAGE_ROM_INDEX_HVACSTATE);
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
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_1))->SetCtrlText(QSTR("heater1 status"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_1))->SetCtrlText(QSTR("compressor2 status"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_1))->SetCtrlText(QSTR("heater2 status"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_1))->SetCtrlText(QSTR("auto-Warm mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_1))->SetCtrlText(QSTR("auto-Cold mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_1))->SetCtrlText(QSTR("ventilation mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_1))->SetCtrlText(QSTR("emergency ventilation mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_1))->SetCtrlText(QSTR("stop mode"));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATEPAGE))->SetCtrlText("1/2");

        OnInit();

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

        if(HVAC_MC1_HEATER1STATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_2))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_COMPRESSOR2STATUS_BOOL)
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

        if(HVAC_MC2_HEATER1STATUS_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_3))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_COMPRESSOR2STATUS_BOOL)
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
        ////tbc
        if(HVAC_MC1_EVAPRAORFANSTATUS_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_CONDENSERFANSTATUS_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_COMPRESSOR1STATUS_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_HEATER1STATUS_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_COMPRESSOR2STATUS_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_HEATER2STATUS_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_AUTOWARMMODE_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_AUTOCOLDMODE_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_VENTILATIONMODE_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_4))->SetCtrlBKColor(Qt::gray);

        if( HVAC_MC1_EMERGENCYVENTILATIONMODE_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_STOPMODE_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_4))->SetCtrlBKColor(Qt::gray);
        // hvac2
        if(HVAC_MC2_EVAPRAORFANSTATUS_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_CONDENSERFANSTATUS_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_COMPRESSOR1STATUS_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_HEATER1STATUS_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_COMPRESSOR2STATUS_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_HEATER2STATUS_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_AUTOWARMMODE_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_AUTOCOLDMODE_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_VENTILATIONMODE_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_5))->SetCtrlBKColor(Qt::gray);

        if( HVAC_MC2_EMERGENCYVENTILATIONMODE_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_STOPMODE_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_5))->SetCtrlBKColor(Qt::gray);

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

        OnInit();



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
        ////TBC
        if(HVAC_MC1_REDUCELOADFBMODE_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_PRECOLD_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_PREWARM_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_FRESHAIRDAMPERSTATUS_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_RETURNAIRDAMPERSTATUS_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_HALFCOLDMODE_BOOL_TBC  )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_FULLCOLDMODE_BOOL_TBC  )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_HALFWARMMODE_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_4))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC1_FULLWARMMODE_BOOL_TBC  )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_4))->SetCtrlBKColor(Qt::gray);

/////hvac2
        if(HVAC_MC2_REDUCELOADFBMODE_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_2_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_PRECOLD_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_3_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_PREWARM_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_4_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_FRESHAIRDAMPERSTATUS_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_5_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_RETURNAIRDAMPERSTATUS_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_6_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_HALFCOLDMODE_BOOL_TBC  )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_7_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_FULLCOLDMODE_BOOL_TBC  )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_8_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_HALFWARMMODE_BOOL_TBC )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_9_5))->SetCtrlBKColor(Qt::gray);

        if(HVAC_MC2_FULLWARMMODE_BOOL_TBC  )
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_10_5))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_2))->SetCtrlText(QString::number(HVAC_MC1_TEMPOUTSIDE_BYTE-40));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_2))->SetCtrlText(QString::number(HVAC_MC1_TEMPINSIDE_BYTE-40));

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_3))->SetCtrlText(QString::number(HVAC_MC2_TEMPOUTSIDE_BYTE-40));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_3))->SetCtrlText(QString::number(HVAC_MC2_TEMPINSIDE_BYTE-40));

        //TBC
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_4))->SetCtrlText(QString::number(HVAC_MC1_TEMPOUTSIDE_BYTE_TBC-40));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_4))->SetCtrlText(QString::number(HVAC_MC1_TEMPINSIDE_BYTE_TBC-40));

        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_11_5))->SetCtrlText(QString::number(HVAC_MC2_TEMPOUTSIDE_BYTE_TBC-40));
        ((CLabel*)GetDlgItem(IDLABEL_HVACSTATE_12_5))->SetCtrlText(QString::number(HVAC_MC2_TEMPINSIDE_BYTE_TBC-40));
        break;

    default:
        break;
    }
}
void CHvacStatePageCoupled::OnDownButtonDown()
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

void CHvacStatePageCoupled::OnDownButtonUp()
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
void CHvacStatePageCoupled::OnUpButtonDown()
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

void CHvacStatePageCoupled::OnUpButtonUp()
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
void CHvacStatePageCoupled::OnInitPage()
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
