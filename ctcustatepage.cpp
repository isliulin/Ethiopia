#include "ctcustatepage.h"

ROMDATA g_PicRom_TcuState[] =
{
    /*string                font                            rc                       foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
  {"down.png",           D_DEFAULT_FONT,     QRect( 50, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_TCUSTATE_PAGEDOWN},
  {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_TCUSTATE_PAGEUP},
  //{"0000",               D_DEFAULT_FONT,      QRect(440, 70 ,60, 15),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_CARNUM},
  {"carheadlarge.png",    D_DEFAULT_FONT,      QRect(320, 95,300, 29),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE         },
  {"",                   D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            IDLABEL_TCUSTATEPAGE        },

  //H line
  {"",                   D_DEFAULT_FONT,      QRect( 50,125,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,165,570,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,189,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,213,570,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,237,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,261,570,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,285,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,309,570,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,333,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,357,570,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,381,570,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,405,570,  1),                  Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

  //V line
  {"",                   D_DEFAULT_FONT,      QRect( 50,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(320,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(470,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(620,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

  //label
  {QSTR("Signal"),              D_FONT(14),      QRect( 55,126,264, 38),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,161+5,264, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_2_1                },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,185+5,264, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_3_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,209+5,264, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_4_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,233+5,264, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_5_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,257+5,264, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_6_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,281+5,264, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_7_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,305+5,264, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_8_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,329+5,264, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_9_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,353+5,264, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_10_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,377+5,264, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_11_1                },


  {"Mc1",                 D_DEFAULT_FONT,      QRect(321,126,148, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"Mc2",                 D_DEFAULT_FONT,      QRect(471,126,148, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MSR1",                 D_DEFAULT_FONT,      QRect(321,146,74, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MSR2",                 D_DEFAULT_FONT,      QRect(396,146,74, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MSR1",                 D_DEFAULT_FONT,      QRect(471,146,74, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MSR2",                 D_DEFAULT_FONT,      QRect(546,146,74, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },

  {"",                 D_DEFAULT_FONT,      QRect(320,146,300, 1),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
  {"",                 D_DEFAULT_FONT,      QRect(395,146,1, 260),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
  {"",                 D_DEFAULT_FONT,      QRect(545,146,1, 260),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },

  //red area
  {"",                   D_DEFAULT_FONT,      QRect(338,169, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_2      },
  {"",                   D_DEFAULT_FONT,      QRect(488,169, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_2       },
  {"",                   D_DEFAULT_FONT,      QRect(338,193, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_3        },
  {"",                   D_DEFAULT_FONT,      QRect(488,193, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_3         },
  {"",                   D_DEFAULT_FONT,      QRect(338,217, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_4        },
  {"",                   D_DEFAULT_FONT,      QRect(488,217, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_4         },
  {"",                   D_DEFAULT_FONT,      QRect(338,241, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_5      },
  {"",                   D_DEFAULT_FONT,      QRect(488,241, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_5       },
  {"",                   D_DEFAULT_FONT,      QRect(338,265, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_6         },
  {"",                   D_DEFAULT_FONT,      QRect(488,265, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_6          },
  {"",                   D_DEFAULT_FONT,      QRect(338,289, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_7        },
  {"",                   D_DEFAULT_FONT,      QRect(488,289, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_7         },
  {"",                   D_DEFAULT_FONT,      QRect(338,313, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_8       },
  {"",                   D_DEFAULT_FONT,      QRect(488,313, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_8         },
  {"",                   D_DEFAULT_FONT,      QRect(338,337, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_9       },
  {"",                   D_DEFAULT_FONT,      QRect(488,337, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_9        },
  {"",                   D_DEFAULT_FONT,      QRect(338,361, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_10        },
  {"",                   D_DEFAULT_FONT,      QRect(488,361, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_10         },
  {"",                   D_DEFAULT_FONT,      QRect(338,385, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_11       },
  {"",                   D_DEFAULT_FONT,      QRect(488,385, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_11        },

{"",                   D_DEFAULT_FONT,      QRect(413,169, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_2      },
{"",                   D_DEFAULT_FONT,      QRect(563,169, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_2       },
{"",                   D_DEFAULT_FONT,      QRect(413,193, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_3        },
{"",                   D_DEFAULT_FONT,      QRect(563,193, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_3         },
{"",                   D_DEFAULT_FONT,      QRect(413,217, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_4        },
{"",                   D_DEFAULT_FONT,      QRect(563,217, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_4         },
{"",                   D_DEFAULT_FONT,      QRect(413,241, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_5      },
{"",                   D_DEFAULT_FONT,      QRect(563,241, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_5       },
{"",                   D_DEFAULT_FONT,      QRect(413,265, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_6         },
{"",                   D_DEFAULT_FONT,      QRect(563,265, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_6          },
{"",                   D_DEFAULT_FONT,      QRect(413,289, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_7        },
{"",                   D_DEFAULT_FONT,      QRect(563,289, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_7         },
{"",                   D_DEFAULT_FONT,      QRect(413,313, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_8       },
{"",                   D_DEFAULT_FONT,      QRect(563,313, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_8         },
{"",                   D_DEFAULT_FONT,      QRect(413,337, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_9       },
{"",                   D_DEFAULT_FONT,      QRect(563,337, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_9        },
{"",                   D_DEFAULT_FONT,      QRect(413,361, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_10        },
{"",                   D_DEFAULT_FONT,      QRect(563,361, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_10         },
{"",                   D_DEFAULT_FONT,      QRect(413,385, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_11       },
{"",                   D_DEFAULT_FONT,      QRect(563,385, 40, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_11        },

/**/
  D_LAYER1_NAVIGATION_BAR
};
int g_TcuStateRomLen = sizeof(g_PicRom_TcuState)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CTcuStatePage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_TCUSTATE_PAGEDOWN, OnDownButtonDown)
        ON_LBUTTONUP(ID_TCUSTATE_PAGEDOWN, OnDownButtonUp)
        ON_LBUTTONDOWN(ID_TCUSTATE_PAGEUP, OnUpButtonDown)
        ON_LBUTTONUP(ID_TCUSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()

CTcuStatePage::CTcuStatePage()
{
  pageNo = TCU_MIN_PAGE;
  formerPageNo = 0;
}

void CTcuStatePage::OnUpdatePage()
{
    if(((MAIN_TRAINCOUPLED_BOOL)&&MAIN_TRAIN_COUPLED_MS_BOOL)&&((( MAIN_MC1KEYACTIVE_BOOL && !(MAIN_MC2KEYACTIVE_BOOL) )&&
                                                            (MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL)) )||  // mc1 key:true,mc2 key false
                                                         (( MAIN_MC2KEYACTIVE_BOOL && !(MAIN_MC1KEYACTIVE_BOOL) )&&
                                                          (MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL)))))
    {
        ChangePage(PAGE_ROM_INDEX_TCUSTATEPAGECOUPLED);
        return;
    }


    //GetDlgItem(ID_TCUSTATE_CARNUM)->SetCtrlText(g_car1CodeStr);
    if( pageNo==TCU_MAX_PAGE )
    {

        ((CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN))->SetCtrlText("downgray.png");
        ((CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP))->SetCtrlText("up.png");
    }
        else if( pageNo==TCU_MIN_PAGE )
    {

        ((CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN))->SetCtrlText("down.png");
        ((CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP))->SetCtrlText("upgray.png");
    }
    else
    {

        ((CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN))->SetCtrlText("down.png");
        ((CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP))->SetCtrlText("up.png");
    }

    switch(pageNo)
    {
    case 1:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_2_1))->SetCtrlText(QSTR("safety brake"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_3_1))->SetCtrlText(QSTR("traction enable"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_4_1))->SetCtrlText(QSTR("all friction brakes released"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_5_1))->SetCtrlText(QSTR("brake overtake"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_6_1))->SetCtrlText(QSTR("forced brake"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_7_1))->SetCtrlText(QSTR("charging contactor state"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_8_1))->SetCtrlText(QSTR("main contactor state"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_9_1))->SetCtrlText(QSTR("VVVF state"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_10_1))->SetCtrlText(QSTR("drive enable"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_11_1))->SetCtrlText(QSTR("sanding recommend"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATEPAGE))->SetCtrlText("1/3");


            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11))->SetCtrlText("");
}
        if(SAFETYBRAKE_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlBKColor(Qt::gray);

        if(SAFETYBRAKE_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlBKColor(Qt::gray);

        if(SAFETYBRAKE_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlBKColor(Qt::gray);

        if(SAFETYBRAKE_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONENABLE_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONENABLE_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONENABLE_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONENABLE_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlBKColor(Qt::gray);

        if(ALLFRICTIONBRAKESRELEASED_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlBKColor(Qt::gray);

        if(ALLFRICTIONBRAKESRELEASED_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlBKColor(Qt::gray);

        if(ALLFRICTIONBRAKESRELEASED_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlBKColor(Qt::gray);

        if(ALLFRICTIONBRAKESRELEASED_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlBKColor(Qt::gray);

        if(BRAKEOVERTAKE_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlBKColor(Qt::gray);

        if(BRAKEOVERTAKE_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlBKColor(Qt::gray);

        if(BRAKEOVERTAKE_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlBKColor(Qt::gray);

        if(BRAKEOVERTAKE_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlBKColor(Qt::gray);

        if(FORCEDBRAKE_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlBKColor(Qt::gray);

        if(FORCEDBRAKE_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlBKColor(Qt::gray);

        if(FORCEDBRAKE_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlBKColor(Qt::gray);

        if(FORCEDBRAKE_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlBKColor(Qt::gray);

        if(CHARGINGCONTACTORSTATE_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlBKColor(Qt::gray);

        if(CHARGINGCONTACTORSTATE_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlBKColor(Qt::gray);

        if(CHARGINGCONTACTORSTATE_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlBKColor(Qt::gray);

        if(CHARGINGCONTACTORSTATE_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlBKColor(Qt::gray);

        if(MAINCONTACTORSTATE_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlBKColor(Qt::gray);

        if(MAINCONTACTORSTATE_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlBKColor(Qt::gray);

        if(MAINCONTACTORSTATE_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlBKColor(Qt::gray);

        if(MAINCONTACTORSTATE_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlBKColor(Qt::gray);

        if(VVVFSTATE_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlBKColor(Qt::gray);

        if(VVVFSTATE_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlBKColor(Qt::gray);

        if(VVVFSTATE_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlBKColor(Qt::gray);

        if(VVVFSTATE_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlBKColor(Qt::gray);

        if(DRIVEENABLE_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlBKColor(Qt::gray);

        if(DRIVEENABLE_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlBKColor(Qt::gray);

        if(DRIVEENABLE_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlBKColor(Qt::gray);

        if(DRIVEENABLE_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlBKColor(Qt::gray);

        if(SANDINGRECOMMEND_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11))->SetCtrlBKColor(Qt::gray);

        if(SANDINGRECOMMEND_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11))->SetCtrlBKColor(Qt::gray);

        if(SANDINGRECOMMEND_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11))->SetCtrlBKColor(Qt::gray);

        if(SANDINGRECOMMEND_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11))->SetCtrlBKColor(Qt::gray);
       /* ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_2))->SetCtrlText(QString::number(TRACTION_MC1_TCU_MODULE1_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_3))->SetCtrlText(QString::number(TRACTION_MC1_TCU_MODULE2_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_4))->SetCtrlText(QString::number(MOTORCURRENT_MC1_TCU_MODULE1_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_5))->SetCtrlText(QString::number(MOTORCURRENT_MC1_TCU_MODULE2_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_6))->SetCtrlText(QString::number(OUTPUTVOLTAGE_MC1_TCU_MODULE1_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_7))->SetCtrlText(QString::number(OUTPUTVOLTAGE_MC1_TCU_MODULE2_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_8))->SetCtrlText(QString::number(MOTORSPEED_MC1_TCU_MODULE1_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_9))->SetCtrlText(QString::number(MOTORSPEED_MC1_TCU_MODULE2_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_10))->SetCtrlText(QString::number(INPUTVOLTAGE_MC1_TCU_MODULE1_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_11))->SetCtrlText(QString::number(INPUTVOLTAGE_MC1_TCU_MODULE2_WORD));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_2))->SetCtrlText(QString::number(TRACTION_MC2_TCU_MODULE1_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_3))->SetCtrlText(QString::number(TRACTION_MC2_TCU_MODULE2_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_4))->SetCtrlText(QString::number(MOTORCURRENT_MC2_TCU_MODULE1_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_5))->SetCtrlText(QString::number(MOTORCURRENT_MC2_TCU_MODULE2_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_6))->SetCtrlText(QString::number(OUTPUTVOLTAGE_MC2_TCU_MODULE1_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_7))->SetCtrlText(QString::number(OUTPUTVOLTAGE_MC2_TCU_MODULE2_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_8))->SetCtrlText(QString::number(MOTORSPEED_MC2_TCU_MODULE1_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_9))->SetCtrlText(QString::number(MOTORSPEED_MC2_TCU_MODULE2_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_10))->SetCtrlText(QString::number(INPUTVOLTAGE_MC2_TCU_MODULE1_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_11))->SetCtrlText(QString::number(INPUTVOLTAGE_MC2_TCU_MODULE2_WORD));*/
        break;
    case 2:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;

            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_2_1))->SetCtrlText(QSTR("zero lock flag"));
            //((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_3_1))->SetCtrlText(QSTR("hardware  line overcurrent"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_4_1))->SetCtrlText(QSTR("traction inverter 1 warning"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_5_1))->SetCtrlText(QSTR("traction inverter 1 fault"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_6_1))->SetCtrlText(QSTR("traction inverter 1 working"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_7_1))->SetCtrlText(QSTR("brake chopper 1 working"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_8_1))->SetCtrlText(QSTR("main contactor 1 closed"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_9_1))->SetCtrlText(QSTR("motor 1 slide"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_10_1))->SetCtrlText(QSTR("motor1 slip"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_3_1))->SetCtrlText(QSTR("cooling fan OK"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_11_1))->SetCtrlText(QSTR(" "));

            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATEPAGE))->SetCtrlText("2/3");

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11))->SetCtrlText("");

}
        if(ZEROLOCKFLAG_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlBKColor(Qt::gray);

        if(ZEROLOCKFLAG_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlBKColor(Qt::gray);

        if(ZEROLOCKFLAG_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlBKColor(Qt::gray);

        if(ZEROLOCKFLAG_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlBKColor(Qt::gray);

//        if(HARDWARELINEOVERCURRENT_MC1_MSR1_BOOL)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlBKColor(Qt::gray);

//        if(HARDWARELINEOVERCURRENT_MC1_MSR2_BOOL)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlBKColor(Qt::gray);

//        if(HARDWARELINEOVERCURRENT_MC2_MSR1_BOOL)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlBKColor(Qt::gray);

//        if(HARDWARELINEOVERCURRENT_MC2_MSR2_BOOL)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONINVERTER1WARNING_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONINVERTER1WARNING_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONINVERTER1WARNING_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONINVERTER1WARNING_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONINVERTER1FAULT_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONINVERTER1FAULT_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONINVERTER1FAULT_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONINVERTER1FAULT_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONINVERTER1WORKING_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONINVERTER1WORKING_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONINVERTER1WORKING_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlBKColor(Qt::gray);

        if(TRACTIONINVERTER1WORKING_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlBKColor(Qt::gray);

        if(BRAKECHOPPER1WORKING_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlBKColor(Qt::gray);

        if(BRAKECHOPPER1WORKING_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlBKColor(Qt::gray);

        if(BRAKECHOPPER1WORKING_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlBKColor(Qt::gray);

        if(BRAKECHOPPER1WORKING_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlBKColor(Qt::gray);

        if(MAINCONTACTOR1CLOSED_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlBKColor(Qt::gray);

        if(MAINCONTACTOR1CLOSED_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlBKColor(Qt::gray);

        if(MAINCONTACTOR1CLOSED_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlBKColor(Qt::gray);

        if(MAINCONTACTOR1CLOSED_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlBKColor(Qt::gray);

        if(MOTOR1SLIDE_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlBKColor(Qt::gray);

        if(MOTOR1SLIDE_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlBKColor(Qt::gray);

        if(MOTOR1SLIDE_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlBKColor(Qt::gray);

        if(MOTOR1SLIDE_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlBKColor(Qt::gray);

        if(MOTOR1SLIP_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlBKColor(Qt::gray);

        if(MOTOR1SLIP_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlBKColor(Qt::gray);

        if(MOTOR1SLIP_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlBKColor(Qt::gray);

        if(MOTOR1SLIP_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlBKColor(Qt::gray);

        if(COOLINGFANOK_MC1_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlBKColor(Qt::gray);

        if(COOLINGFANOK_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlBKColor(Qt::gray);

        if(COOLINGFANOK_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlBKColor(Qt::gray);

        if(COOLINGFANOK_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlBKColor(Qt::gray);
       /* ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_2))->SetCtrlText(QString::number(NETCURRENT_MC1_TCU_MODULE1_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_3))->SetCtrlText(QString::number(NETCURRENT_MC1_TCU_MODULE2_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_4))->SetCtrlText(QString::number(LIFESIGNAL_MC1_TCU_MODULE1_BYTE));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_5))->SetCtrlText(QString::number(LIFESIGNAL_MC1_TCU_MODULE2_BYTE));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_6))->SetCtrlText("");
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_7))->SetCtrlText("");
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_8))->SetCtrlText("");
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_9))->SetCtrlText("");
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_10))->SetCtrlText("");
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_11))->SetCtrlText("");

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_2))->SetCtrlText(QString::number(NETCURRENT_MC2_TCU_MODULE1_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_3))->SetCtrlText(QString::number(NETCURRENT_MC2_TCU_MODULE2_WORD));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_4))->SetCtrlText(QString::number(LIFESIGNAL_MC2_TCU_MODULE1_BYTE));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_5))->SetCtrlText(QString::number(LIFESIGNAL_MC2_TCU_MODULE2_BYTE));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_6))->SetCtrlText("");
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_7))->SetCtrlText("");
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_8))->SetCtrlText("");
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_9))->SetCtrlText("");
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_10))->SetCtrlText("");
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_11))->SetCtrlText("");*/
        break;
    case 3:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_2_1))->SetCtrlText(QSTR("slip frequency"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_3_1))->SetCtrlText(QSTR("stator frequency"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_4_1))->SetCtrlText(QSTR("DynaCurrent_TCU"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_5_1))->SetCtrlText(QSTR("OutputVoltage_TCU"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_6_1))->SetCtrlText(QSTR("InputVoltage_TCU"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_7_1))->SetCtrlText(QSTR("output_Freq"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_8_1))->SetCtrlText(QSTR("Net Current"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_9_1))->SetCtrlText(QSTR("iFaultReg1_TCU"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_10_1))->SetCtrlText(QSTR("iFaultReg2_TCU"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_11_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATEPAGE))->SetCtrlText("3/3");

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11))->SetCtrlText("");


            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11))->SetCtrlBKColor(Qt::black);
        }


        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlText(QString::number(SLIPFREQUENCY_MC1_MSR1_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlText(QString::number(STATORFREQUENCY_MC1_MSR1_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlText(QString::number(OUTPUTFREQ_TCU_MC1_MSR1_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlText(QString::number(DYNACURRENT_TCU_MC1_MSR1_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlText(QString::number(OUTPUTVOLTAGE_TCU_MC1_MSR1_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlText(QString::number(INPUTVOLTAGE_TCU_MC1_MSR1_UINT));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlText(QString::number(SLIPFREQUENCY_MC1_MSR2_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlText(QString::number(STATORFREQUENCY_MC1_MSR2_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlText(QString::number(OUTPUTFREQ_TCU_MC1_MSR2_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlText(QString::number(DYNACURRENT_TCU_MC1_MSR2_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlText(QString::number(OUTPUTVOLTAGE_TCU_MC1_MSR2_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlText(QString::number(INPUTVOLTAGE_TCU_MC1_MSR2_UINT));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlText(QString::number(SLIPFREQUENCY_MC2_MSR1_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlText(QString::number(STATORFREQUENCY_MC2_MSR1_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlText(QString::number(OUTPUTFREQ_TCU_MC2_MSR1_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlText(QString::number(DYNACURRENT_TCU_MC2_MSR1_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlText(QString::number(OUTPUTVOLTAGE_TCU_MC2_MSR1_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlText(QString::number(INPUTVOLTAGE_TCU_MC2_MSR1_UINT));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlText(QString::number(SLIPFREQUENCY_MC2_MSR2_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlText(QString::number(STATORFREQUENCY_MC2_MSR2_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlText(QString::number(OUTPUTFREQ_TCU_MC2_MSR2_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlText(QString::number(DYNACURRENT_TCU_MC2_MSR2_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlText(QString::number(OUTPUTVOLTAGE_TCU_MC2_MSR2_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlText(QString::number(INPUTVOLTAGE_TCU_MC2_MSR2_UINT));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlText(QString::number(NETCURRENT_TCU_MC1_MSR1_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlText(QString::number(NETCURRENT_TCU_MC1_MSR2_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlText(QString::number(NETCURRENT_TCU_MC2_MSR1_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlText(QString::number(NETCURRENT_TCU_MC2_MSR2_UINT));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9))->SetCtrlText(QString::number(IFAULTREG1_TCU_MC1_MSR1,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9))->SetCtrlText(QString::number(IFAULTREG1_TCU_MC1_MSR2,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9))->SetCtrlText(QString::number(IFAULTREG1_TCU_MC2_MSR1,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9))->SetCtrlText(QString::number(IFAULTREG1_TCU_MC2_MSR2,16).toUpper());

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10))->SetCtrlText(QString::number(IFAULTREG2_TCU_MC1_MSR1,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10))->SetCtrlText(QString::number(IFAULTREG2_TCU_MC1_MSR2,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10))->SetCtrlText(QString::number(IFAULTREG2_TCU_MC2_MSR1,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10))->SetCtrlText(QString::number(IFAULTREG2_TCU_MC2_MSR2,16).toUpper());

        break;

    default:
        break;
    }

}

void CTcuStatePage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
void CTcuStatePage::OnDownButtonDown()
{
    CBitmapButton *bitmapButton;

    if( pageNo<TCU_MAX_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("downpress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
}

void CTcuStatePage::OnDownButtonUp()
{
    CBitmapButton *bitmapButton;

    if( pageNo<TCU_MAX_PAGE )
    {
        pageNo++;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("down.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    if( pageNo==TCU_MAX_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
    ((CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP))->SetCtrlText("up.png");
}
void CTcuStatePage::OnUpButtonDown()
{
    CBitmapButton *bitmapButton;

    if( pageNo>TCU_MIN_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP);
        bitmapButton->SetCtrlText("uppress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP);
        bitmapButton->SetCtrlText("upgray.png");
    }
}

void CTcuStatePage::OnUpButtonUp()
{
    CBitmapButton *bitmapButton;

    if( pageNo>TCU_MIN_PAGE )
    {
        pageNo--;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP);
        bitmapButton->SetCtrlText("up.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    if( pageNo==TCU_MIN_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEUP);
        bitmapButton->SetCtrlText("upgray.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    ((CBitmapButton *)GetDlgItem(ID_TCUSTATE_PAGEDOWN))->SetCtrlText("down.png");
}
void CTcuStatePage::OnInitPage()
{
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(IDLABEL_TCUSTATE_11_1))->SetAlignment(Qt::AlignLeft);
}

