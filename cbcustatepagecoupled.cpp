#include "cbcustatepagecoupled.h"


ROMDATA g_PicRom_BcuStatePageCoupled[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
//  {"down.png",           D_DEFAULT_FONT,      QRect( 50, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICBCU_PAGEDOWN},
//  {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICBCU_PAGEUP},
//  //{"0000",               D_DEFAULT_FONT,      QRect(440, 70, 60, 19),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_TRAINNUM },
  {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(330, 75,130,  29),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
  {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(460, 75,130,  29),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },
  {"",              D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_PICBCUPAGE   },

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
  {"",                   D_DEFAULT_FONT,      QRect(460,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(590,125,  1,286),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  //label
  {QSTR("Signal"),                D_FONT(14),      QRect( 55,126,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,148,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_2_1    },
  {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,170,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_3_1     },
  {QSTR(""),             D_DEFAULT_FONT,      QRect( 55,192,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_4_1     },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,214,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_5_1     },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,236,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_1     },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,258,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_1     },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,280,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_1     },
  {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,302,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_9_1     },
  {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,324,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_10_1   },
  {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,346,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_11_1    },
  {QSTR(""),          D_DEFAULT_FONT,      QRect( 55,368,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_12_1    },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,390,275, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_13_1    },
  //{QSTR(""),           D_DEFAULT_FONT,      QRect( 55,412,300, 20),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_PICBCU_14_1    },
  //label
  {QSTR("Status"),         D_DEFAULT_FONT,      QRect(461,128, 128, 19),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",              D_DEFAULT_FONT,      QRect(376,149, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_2_2    },
  {"",              D_DEFAULT_FONT,      QRect(376,171, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_3_2    },
  {"",              D_DEFAULT_FONT,      QRect(376,193, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_4_2    },
  {"",              D_DEFAULT_FONT,      QRect(376,215, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_5_2    },
  {"",              D_DEFAULT_FONT,      QRect(376,237, 40, 18),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_2    },
  {"",              D_DEFAULT_FONT,      QRect(376,259, 40, 18),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_2    },
  {"",              D_DEFAULT_FONT,      QRect(376,281, 40, 18),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_2    },
  {"",              D_DEFAULT_FONT,      QRect(376,303, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_9_2    },
  {"",              D_DEFAULT_FONT,      QRect(376,325, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_10_2   },
  {"",              D_DEFAULT_FONT,      QRect(376,347, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_11_2   },
  {"",              D_DEFAULT_FONT,      QRect(376,369, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_12_2   },
  {"",              D_DEFAULT_FONT,      QRect(376,391, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_13_2   },

{QSTR("Status"),         D_DEFAULT_FONT,      QRect(331,128, 128, 19),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"",              D_DEFAULT_FONT,      QRect(506,149, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_2_3    },
{"",              D_DEFAULT_FONT,      QRect(506,171, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_3_3    },
{"",              D_DEFAULT_FONT,      QRect(506,193, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_4_3    },
{"",              D_DEFAULT_FONT,      QRect(506,215, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_5_3    },
{"",              D_DEFAULT_FONT,      QRect(506,237, 40, 18),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_PICBCU_6_3    },
{"",              D_DEFAULT_FONT,      QRect(506,259, 40, 18),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_PICBCU_7_3    },
{"",              D_DEFAULT_FONT,      QRect(506,281, 40, 18),                      Qt::yellow,                  Qt::gray,                  CONTROL_LABEL,            IDLABEL_PICBCU_8_3    },
{"",              D_DEFAULT_FONT,      QRect(506,303, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_9_3    },
{"",              D_DEFAULT_FONT,      QRect(506,325, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_10_3   },
{"",              D_DEFAULT_FONT,      QRect(506,347, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_11_3   },
{"",              D_DEFAULT_FONT,      QRect(506,369, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_12_3   },
{"",              D_DEFAULT_FONT,      QRect(506,391, 40, 18),                      Qt::yellow,                  Qt::gray,                   CONTROL_LABEL,            IDLABEL_PICBCU_13_3   },

D_LAYER1_NAVIGATION_BAR
};
int g_BcuStatePageCoupledRomLen = sizeof(g_PicRom_BcuStatePageCoupled)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CBcuStatePageCoupled,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_PICBCU_PAGEDOWN, OnDownButtonDown)
        ON_LBUTTONUP(ID_PICBCU_PAGEDOWN, OnDownButtonUp)
        ON_LBUTTONDOWN(ID_PICBCU_PAGEUP, OnUpButtonDown)
        ON_LBUTTONUP(ID_PICBCU_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()
CBcuStatePageCoupled::CBcuStatePageCoupled()
{
    pageNo = MIN_PAGE;
    formerPageNo = 0;
}



void CBcuStatePageCoupled::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
/*
bool parameter state:
0: green background color, black text->Ok or Applyed
3: gray background color, black text->Major/Minor event not occured or not ok or release
4: red background color, yellow text->Major/Minor event occured
*/
void CBcuStatePageCoupled::OnUpdatePage()
{
    if(!(MAIN_TRAINCOUPLED_BOOL) &&MAIN_TRAIN_COUPLED_MS_BOOL )
    {
        ChangePage(PAGE_ROM_INDEX_BCUSTATE);
        return;
    }
    //GetDlgItem(IDLABEL_PICBCU_TRAINNUM)->SetCtrlText(g_car1CodeStr);

//    if( pageNo==MAX_PAGE )
//    {

//        ((CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEDOWN))->SetCtrlText("downgray.png");
//        ((CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEUP))->SetCtrlText("up.png");
//    }
//    else if( pageNo==MIN_PAGE )
//    {

//        ((CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEDOWN))->SetCtrlText("down.png");
//        ((CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEUP))->SetCtrlText("upgray.png");
//    }
//    else
//    {

//        ((CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEDOWN))->SetCtrlText("down.png");
//        ((CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEUP))->SetCtrlText("up.png");
//    }

    switch(pageNo)
    {
    case 1:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_1))->SetCtrlText(QSTR("HW_BackupMode_BCU"));
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_1))->SetCtrlText(QSTR("BrakeReleased_CAN_BCU"));
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_1))->SetCtrlText(QSTR("BrakeApplied_CAN_BCU"));
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_1))->SetCtrlText(QSTR("HB_ON_CAN_BCU"));
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_1))->SetCtrlText(QSTR("WSP_TC_CAN_BCU"));
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_1))->SetCtrlText(QSTR("Major Event_CAN_BCU"));
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_1))->SetCtrlText(QSTR("Minor Event_CAN_BCU"));
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_1))->SetCtrlText(QSTR("iDiagnosisReg1_BCU"));
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_1))->SetCtrlText(QSTR("iDiagnosisReg2_BCU"));
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_1))->SetCtrlText(QSTR("iDiagnosisReg3_BCU"));
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_1))->SetCtrlText(QSTR("iDiagnosisReg4_BCU"));
            //((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_1))->SetCtrlText(QSTR("iDiagnosisReg2_BCU"));
            //((CLabel*)GetDlgItem(IDLABEL_PICBCUPAGE))->SetCtrlText("1/2");


            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_2))->SetCtrlText("");

            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_2))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_3))->SetCtrlText("");

            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_3))->SetCtrlBKColor(Qt::black);


        }

        if(BCU_HW_BACKUPMODE_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_2))->SetCtrlBKColor(Qt::gray);
        if(BCU_BRAKERELEASED_CAN_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_2))->SetCtrlBKColor(Qt::gray);
        if(BCU_BRAKEAPPLIED_CAN_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_2))->SetCtrlBKColor(Qt::gray);
        if(BCU_HB_ON_CAN_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetCtrlBKColor(Qt::gray);
        if(BCU_WSP_TC_CAN_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_2))->SetCtrlBKColor(Qt::gray);
        if(BCU_MAJOREVENT_CAN_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_2))->SetCtrlBKColor(Qt::green);
        if(BCU_MINOREVENT_CAN_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetCtrlBKColor(Qt::green);
//        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetCtrlText(mRound(BCU_LOAD_BYTE*0.01,2));
//        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetCtrlText(mRound(BCU_LOAD_SENSOR1_BYTE*0.01,2));
//        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetCtrlText(mRound(BCU_LOAD_SENSOR2_BYTE*0.01,2));
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetCtrlText(QString::number(BCU_IDIAGNOSISREG1_WORD,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetCtrlText(QString::number(BCU_IDIAGNOSISREG2_WORD,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetCtrlText(QString::number(BCU_IDIAGNOSISREG3_WORD,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_2))->SetCtrlText(QString::number(BCU_IDIAGNOSISREG4_WORD,16).toUpper());

        //TBC
        if(BCU_HW_BACKUPMODE_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_3))->SetCtrlBKColor(Qt::gray);
        if(BCU_BRAKERELEASED_CAN_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_3))->SetCtrlBKColor(Qt::gray);
        if(BCU_BRAKEAPPLIED_CAN_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_3))->SetCtrlBKColor(Qt::gray);
        if(BCU_HB_ON_CAN_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_3))->SetCtrlBKColor(Qt::gray);
        if(BCU_WSP_TC_CAN_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_3))->SetCtrlBKColor(Qt::gray);
        if(BCU_MAJOREVENT_CAN_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_3))->SetCtrlBKColor(Qt::green);
        if(BCU_MINOREVENT_CAN_BOOL_TBC)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_3))->SetCtrlBKColor(Qt::green);
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_3))->SetCtrlText(QString::number(BCU_IDIAGNOSISREG1_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_3))->SetCtrlText(QString::number(BCU_IDIAGNOSISREG2_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_3))->SetCtrlText(QString::number(BCU_IDIAGNOSISREG3_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_3))->SetCtrlText(QString::number(BCU_IDIAGNOSISREG4_WORD_TBC,16).toUpper());

        /*if(TRACKBRAKE_MC1_RIOM_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_2))->SetCtrlBKColor(Qt::gray);

        if(TTRACKBRAKE_MC1_RIOM_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetCtrlBKColor(Qt::gray);

        if(TRACKBRAKE_MC2_RIOM_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_2))->SetCtrlBKColor(Qt::gray);

        if(BRAKERELEASED_CAN_BCU_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_2))->SetCtrlBKColor(Qt::gray);

        if(BRAKEAPPLIED_CAN_BCU_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetCtrlBKColor(Qt::gray);

        if(HB_ON_CAN_BCU_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetCtrlBKColor(Qt::gray);

        if(WSP_TC_CAN_BCU_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetCtrlBKColor(Qt::gray);

        if(BSE_CAN_BCU_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetCtrlBKColor(Qt::green);

        if(BSW_CAN_BCU_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_2))->SetCtrlBKColor(Qt::green);
*/
        break;
    case 2:
//        if(formerPageNo!=pageNo)
//        {
//            formerPageNo = pageNo;
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_1))->SetCtrlText(QSTR("iDiagnosisReg3_BCU"));
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_1))->SetCtrlText(QSTR("iDiagnosisReg4_BCU"));
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_1))->SetCtrlText(QSTR(""));
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_1))->SetCtrlText(QSTR(""));
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_1))->SetCtrlText(QSTR(""));
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_1))->SetCtrlText(QSTR(""));
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_1))->SetCtrlText(QSTR(""));
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_1))->SetCtrlText(QSTR(""));
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_1))->SetCtrlText(QSTR(""));
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_1))->SetCtrlText(QSTR(""));
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_1))->SetCtrlText(QSTR(""));
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_1))->SetCtrlText(QSTR(""));
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCUPAGE))->SetCtrlText("2/2");


//           ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_2))->SetCtrlText("");
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_2))->SetCtrlText("");
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_2))->SetCtrlText("");
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetCtrlText("");
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_2))->SetCtrlText("");
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_2))->SetCtrlText("");
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetCtrlText("");
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetCtrlText("");
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetCtrlText("");
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetCtrlText("");
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_2))->SetCtrlText("");
//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_2))->SetCtrlText("");

//            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_3))->SetCtrlText("");
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_3))->SetCtrlText("");
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_3))->SetCtrlText("");
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_3))->SetCtrlText("");
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_3))->SetCtrlText("");
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_3))->SetCtrlText("");
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_3))->SetCtrlText("");
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_3))->SetCtrlText("");
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_3))->SetCtrlText("");
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_3))->SetCtrlText("");
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_3))->SetCtrlText("");
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_3))->SetCtrlText("");

//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_2))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_2))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_2))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_2))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_2))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_3))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_3))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_3))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_3))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_3))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_3))->SetCtrlBKColor(Qt::black);
//             ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_3))->SetCtrlBKColor(Qt::black);


//        }
//        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_2))->SetCtrlText(QString::number(BCU_IDIAGNOSISREG3_WORD,16).toUpper());
//        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_2))->SetCtrlText(QString::number(BCU_IDIAGNOSISREG4_WORD,16).toUpper());
//        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_3))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_3))->SetCtrlText("--");
        /* if(HW_EMGCBREAK_BCU_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_2))->SetCtrlBKColor(Qt::gray);

        if(HW_SERVICEBRAKE_BCU_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_2))->SetCtrlBKColor(Qt::gray);

        if(HW_SAFETYBRAKE_BCU_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_2))->SetCtrlBKColor(Qt::gray);

        if(HW_DRIVING_BCU_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_2))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_2))->SetCtrlBKColor(Qt::black);

        break;*/
    default:
        break;
    }
}
void CBcuStatePageCoupled::OnDownButtonDown()
{
    CBitmapButton *bitmapButton;

    if( pageNo<MAX_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEDOWN);
        bitmapButton->SetCtrlText("downpress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEDOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
}

void CBcuStatePageCoupled::OnDownButtonUp()
{
    CBitmapButton *bitmapButton;

    if( pageNo<MAX_PAGE )
    {
        pageNo++;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEDOWN);
        bitmapButton->SetCtrlText("down.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    if( pageNo==MAX_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEDOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
    ((CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEUP))->SetCtrlText("up.png");
}
void CBcuStatePageCoupled::OnUpButtonDown()
{
    CBitmapButton *bitmapButton;

    if( pageNo>MIN_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEUP);
        bitmapButton->SetCtrlText("uppress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEUP);
        bitmapButton->SetCtrlText("upgray.png");
    }
}

void CBcuStatePageCoupled::OnUpButtonUp()
{
    CBitmapButton *bitmapButton;

    if( pageNo>MIN_PAGE )
    {
        pageNo--;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEUP);
        bitmapButton->SetCtrlText("up.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    if( pageNo==MIN_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEUP);
        bitmapButton->SetCtrlText("upgray.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    ((CBitmapButton *)GetDlgItem(ID_PICBCU_PAGEDOWN))->SetCtrlText("down.png");
}
void CBcuStatePageCoupled::OnInitPage()
{
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_12_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_PICBCU_13_1))->SetAlignment(Qt::AlignLeft);
}
