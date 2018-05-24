#include "ctcustatepagecoupled.h"
int m = 170;

ROMDATA g_PicRom_TcuStatePageCoupled[] =
{
    /*string                font                            rc                       foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
  {"down.png",           D_DEFAULT_FONT,     QRect( 50, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_TCUSTATE_PAGEDOWN},
  {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_TCUSTATE_PAGEUP},
  //{"0000",               D_DEFAULT_FONT,      QRect(440, 70 ,60, 15),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_TCUSTATE_CARNUM},
  {"carheadlarge.png",    D_DEFAULT_FONT,      QRect(290, 95,170, 29),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE         },
  {"carheadlarge.png",    D_DEFAULT_FONT,      QRect(460, 95,170, 29),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE         },
  {"",                   D_FONT(14),      QRect(200,75, 40, 40),                      Qt::yellow,                  Qt::black,                    CONTROL_LABEL,            IDLABEL_TCUSTATEPAGE        },

  //H line
  {"",                   D_DEFAULT_FONT,      QRect( 50,125,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,165,580,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,189,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,213,580,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,237,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,261,580,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,285,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,309,580,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,333,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,357,580,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,381,580,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,405,580,  1),                  Qt::cyan,                    Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

  //V line
  {"",                   D_DEFAULT_FONT,      QRect( 50,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(290,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(375,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(460,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(545,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(630,125,  1,280),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

  //label
  {QSTR("Signal"),              D_FONT(14),      QRect( 55,126,235, 38),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,161+5,235, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_2_1                },
  {QSTR(""),           D_DEFAULT_FONT,      QRect( 55,185+5,235, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_3_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,209+5,235, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_4_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,233+5,235, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_5_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,257+5,235, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_6_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,281+5,235, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_7_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,305+5,235, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_8_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,329+5,235, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_9_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,353+5,235, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_10_1                },
  {QSTR(""),         D_DEFAULT_FONT,      QRect( 55,377+5,235, 23),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_TCUSTATE_11_1                },


  {"Mc1",                 D_DEFAULT_FONT,      QRect(291,126,84, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"Mc2",                 D_DEFAULT_FONT,      QRect(376,126,84, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MSR1",                 D_DEFAULT_FONT,      QRect(291,146,42, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MSR2",                 D_DEFAULT_FONT,      QRect(333,146,42, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MSR1",                 D_DEFAULT_FONT,      QRect(376,146,42, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"MSR2",                 D_DEFAULT_FONT,      QRect(418,146,42, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },

  {"",                 D_DEFAULT_FONT,      QRect(290,146,340, 1),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
  {"",                 D_DEFAULT_FONT,      QRect(332,146,1, 260),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
  {"",                 D_DEFAULT_FONT,      QRect(417,146,1, 260),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },

  //red area
  {"",                   D_DEFAULT_FONT,      QRect(296,169, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_2      },
  {"",                   D_DEFAULT_FONT,      QRect(338,169, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_2       },
  {"",                   D_DEFAULT_FONT,      QRect(296,193, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_3        },
  {"",                   D_DEFAULT_FONT,      QRect(338,193, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_3         },
  {"",                   D_DEFAULT_FONT,      QRect(296,217, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_4        },
  {"",                   D_DEFAULT_FONT,      QRect(338,217, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_4         },
  {"",                   D_DEFAULT_FONT,      QRect(296,241, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_5      },
  {"",                   D_DEFAULT_FONT,      QRect(338,241, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_5       },
  {"",                   D_DEFAULT_FONT,      QRect(296,265, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_6         },
  {"",                   D_DEFAULT_FONT,      QRect(338,265, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_6          },
  {"",                   D_DEFAULT_FONT,      QRect(296,289, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_7        },
  {"",                   D_DEFAULT_FONT,      QRect(338,289, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_7         },
  {"",                   D_DEFAULT_FONT,      QRect(296,313, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_8       },
  {"",                   D_DEFAULT_FONT,      QRect(338,313, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_8         },
  {"",                   D_DEFAULT_FONT,      QRect(296,337, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_9       },
  {"",                   D_DEFAULT_FONT,      QRect(338,337, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_9        },
  {"",                   D_DEFAULT_FONT,      QRect(296,361, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_10        },
  {"",                   D_DEFAULT_FONT,      QRect(338,361, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_10         },
  {"",                   D_DEFAULT_FONT,      QRect(296,385, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_11       },
  {"",                   D_DEFAULT_FONT,      QRect(338,385, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_11        },

{"",                   D_DEFAULT_FONT,      QRect(381,169, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_2      },
{"",                   D_DEFAULT_FONT,      QRect(423,169, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_2       },
{"",                   D_DEFAULT_FONT,      QRect(381,193, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_3        },
{"",                   D_DEFAULT_FONT,      QRect(423,193, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_3         },
{"",                   D_DEFAULT_FONT,      QRect(381,217, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_4        },
{"",                   D_DEFAULT_FONT,      QRect(423,217, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_4         },
{"",                   D_DEFAULT_FONT,      QRect(381,241, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_5      },
{"",                   D_DEFAULT_FONT,      QRect(423,241, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_5       },
{"",                   D_DEFAULT_FONT,      QRect(381,265, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_6         },
{"",                   D_DEFAULT_FONT,      QRect(423,265, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_6          },
{"",                   D_DEFAULT_FONT,      QRect(381,289, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_7        },
{"",                   D_DEFAULT_FONT,      QRect(423,289, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_7         },
{"",                   D_DEFAULT_FONT,      QRect(381,313, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_8       },
{"",                   D_DEFAULT_FONT,      QRect(423,313, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_8         },
{"",                   D_DEFAULT_FONT,      QRect(381,337, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_9       },
{"",                   D_DEFAULT_FONT,      QRect(423,337, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_9        },
{"",                   D_DEFAULT_FONT,      QRect(381,361, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_10        },
{"",                   D_DEFAULT_FONT,      QRect(423,361, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_10         },
{"",                   D_DEFAULT_FONT,      QRect(381,385, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_11       },
{"",                   D_DEFAULT_FONT,      QRect(423,385, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_11        },
  /**/
{"Mc1",                 D_DEFAULT_FONT,      QRect(291+m,126,84, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"Mc2",                 D_DEFAULT_FONT,      QRect(376+m,126,84, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"MSR1",                 D_DEFAULT_FONT,      QRect(291+m,146,42, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"MSR2",                 D_DEFAULT_FONT,      QRect(333+m,146,42, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"MSR1",                 D_DEFAULT_FONT,      QRect(376+m,146,42, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
{"MSR2",                 D_DEFAULT_FONT,      QRect(418+m,146,42, 18),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },

{"",                 D_DEFAULT_FONT,      QRect(290+m,146,170, 1),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
{"",                 D_DEFAULT_FONT,      QRect(332+m,146,1, 260),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },
{"",                 D_DEFAULT_FONT,      QRect(417+m,146,1, 260),                      Qt::yellow,                  Qt::black,                  CONTROL_LINE,            ID_IGNORE                },

//red area
{"",                   D_DEFAULT_FONT,      QRect(296+m,169, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_2_TBC      },
{"",                   D_DEFAULT_FONT,      QRect(338+m,169, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_2_TBC       },
{"",                   D_DEFAULT_FONT,      QRect(296+m,193, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_3_TBC        },
{"",                   D_DEFAULT_FONT,      QRect(338+m,193, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_3_TBC         },
{"",                   D_DEFAULT_FONT,      QRect(296+m,217, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_4_TBC        },
{"",                   D_DEFAULT_FONT,      QRect(338+m,217, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_4_TBC         },
{"",                   D_DEFAULT_FONT,      QRect(296+m,241, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_5_TBC      },
{"",                   D_DEFAULT_FONT,      QRect(338+m,241, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_5_TBC       },
{"",                   D_DEFAULT_FONT,      QRect(296+m,265, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_6_TBC         },
{"",                   D_DEFAULT_FONT,      QRect(338+m,265, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_6_TBC          },
{"",                   D_DEFAULT_FONT,      QRect(296+m,289, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_7_TBC        },
{"",                   D_DEFAULT_FONT,      QRect(338+m,289, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_7_TBC         },
{"",                   D_DEFAULT_FONT,      QRect(296+m,313, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_8_TBC       },
{"",                   D_DEFAULT_FONT,      QRect(338+m,313, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_8_TBC         },
{"",                   D_DEFAULT_FONT,      QRect(296+m,337, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_9_TBC       },
{"",                   D_DEFAULT_FONT,      QRect(338+m,337, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_9_TBC        },
{"",                   D_DEFAULT_FONT,      QRect(296+m,361, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_10_TBC        },
{"",                   D_DEFAULT_FONT,      QRect(338+m,361, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_10_TBC         },
{"",                   D_DEFAULT_FONT,      QRect(296+m,385, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR1_11_TBC       },
{"",                   D_DEFAULT_FONT,      QRect(338+m,385, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC1_MSR2_11_TBC        },

{"",                   D_DEFAULT_FONT,      QRect(381+m,169, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_2_TBC      },
{"",                   D_DEFAULT_FONT,      QRect(423+m,169, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_2_TBC       },
{"",                   D_DEFAULT_FONT,      QRect(381+m,193, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_3_TBC        },
{"",                   D_DEFAULT_FONT,      QRect(423+m,193, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_3_TBC         },
{"",                   D_DEFAULT_FONT,      QRect(381+m,217, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_4_TBC        },
{"",                   D_DEFAULT_FONT,      QRect(423+m,217, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_4_TBC         },
{"",                   D_DEFAULT_FONT,      QRect(381+m,241, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_5_TBC      },
{"",                   D_DEFAULT_FONT,      QRect(423+m,241, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_5_TBC       },
{"",                   D_DEFAULT_FONT,      QRect(381+m,265, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_6_TBC         },
{"",                   D_DEFAULT_FONT,      QRect(423+m,265, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_6_TBC          },
{"",                   D_DEFAULT_FONT,      QRect(381+m,289, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_7_TBC        },
{"",                   D_DEFAULT_FONT,      QRect(423+m,289, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_7_TBC         },
{"",                   D_DEFAULT_FONT,      QRect(381+m,313, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_8_TBC       },
{"",                   D_DEFAULT_FONT,      QRect(423+m,313, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_8_TBC         },
{"",                   D_DEFAULT_FONT,      QRect(381+m,337, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_9_TBC       },
{"",                   D_DEFAULT_FONT,      QRect(423+m,337, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_9_TBC        },
{"",                   D_DEFAULT_FONT,      QRect(381+m,361, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_10_TBC        },
{"",                   D_DEFAULT_FONT,      QRect(423+m,361, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_10_TBC         },
{"",                   D_DEFAULT_FONT,      QRect(381+m,385, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR1_11_TBC       },
{"",                   D_DEFAULT_FONT,      QRect(423+m,385, 30, 18),                      Qt::yellow,                  Qt::gray,                    CONTROL_LABEL,            ID_TCUSTATE_MC2_MSR2_11_TBC        },

  D_LAYER1_NAVIGATION_BAR
};
int g_TcuStatePageCoupledRomLen = sizeof(g_PicRom_TcuStatePageCoupled)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CTcuStatePageCoupled,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_TCUSTATE_PAGEDOWN, OnDownButtonDown)
        ON_LBUTTONUP(ID_TCUSTATE_PAGEDOWN, OnDownButtonUp)
        ON_LBUTTONDOWN(ID_TCUSTATE_PAGEUP, OnUpButtonDown)
        ON_LBUTTONUP(ID_TCUSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()
CTcuStatePageCoupled::CTcuStatePageCoupled()
{
    pageNo = TCU_MIN_PAGE;
    formerPageNo = 0;
}
void CTcuStatePageCoupled::OnInit()
{
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

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11_TBC))->SetCtrlBKColor(Qt::black);

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11_TBC))->SetCtrlBKColor(Qt::black);

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11_TBC))->SetCtrlBKColor(Qt::black);

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10_TBC))->SetCtrlBKColor(Qt::black);
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11_TBC))->SetCtrlBKColor(Qt::black);

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

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11_TBC))->SetCtrlText("");

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11_TBC))->SetCtrlText("");

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11_TBC))->SetCtrlText("");

    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10_TBC))->SetCtrlText("");
    ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11_TBC))->SetCtrlText("");
}
void CTcuStatePageCoupled::OnUpdatePage()
{


    if(!(MAIN_TRAINCOUPLED_BOOL)&&MAIN_TRAIN_COUPLED_MS_BOOL)
    {
        ChangePage(PAGE_ROM_INDEX_TCUSTATE);
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

            OnInit();

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
        /////////////TBC
        if(TCU_MC1_MSR1_SAFETYBRAKE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR1_TRACTIONENABLE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR1_ALLFRICTIONBRAKESRELEASED_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR1_BRAKEOVERTAKE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR1_FORCEDBRAKE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR1_CHARGINGCONTACTORSTATE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR1_MAINCONTACTORSTATE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR1_VVVFSTATE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR1_DRIVEENABLE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_10_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR1_SANDINGRECOMMEND_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_11_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR2_SAFETYBRAKE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR2_TRACTIONENABLE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR2_ALLFRICTIONBRAKESRELEASED_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR2_BRAKEOVERTAKE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR2_FORCEDBRAKE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR2_CHARGINGCONTACTORSTATE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR2_MAINCONTACTORSTATE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR2_VVVFSTATE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR2_DRIVEENABLE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_10_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1_MSR2_SANDINGRECOMMEND_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_11_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR1_SAFETYBRAKE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR1_TRACTIONENABLE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR1_ALLFRICTIONBRAKESRELEASED_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR1_BRAKEOVERTAKE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR1_FORCEDBRAKE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR1_CHARGINGCONTACTORSTATE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR1_MAINCONTACTORSTATE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR1_VVVFSTATE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR1_DRIVEENABLE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_10_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR1_SANDINGRECOMMEND_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_11_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR2_SAFETYBRAKE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR2_TRACTIONENABLE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR2_ALLFRICTIONBRAKESRELEASED_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR2_BRAKEOVERTAKE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR2_FORCEDBRAKE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR2_CHARGINGCONTACTORSTATE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR2_MAINCONTACTORSTATE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR2_VVVFSTATE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR2_DRIVEENABLE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_10_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2_MSR2_SANDINGRECOMMEND_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_11_TBC))->SetCtrlBKColor(Qt::gray);

        break;
    case 2:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;

            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_10_1))->SetCtrlText(QSTR(" "));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_11_1))->SetCtrlText(QSTR("   "));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_4_1))->SetCtrlText(QSTR("traction inverter 1 warning"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_5_1))->SetCtrlText(QSTR("traction inverter 1 fault"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_6_1))->SetCtrlText(QSTR("traction inverter 1 working"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_7_1))->SetCtrlText(QSTR("brake chopper 1 working"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_8_1))->SetCtrlText(QSTR("main contactor 1 closed"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_9_1))->SetCtrlText(QSTR("motor 1 slide"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_2_1))->SetCtrlText(QSTR("motor1 slip"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_3_1))->SetCtrlText(QSTR("cooling fan OK"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATEPAGE))->SetCtrlText("2/3");

            OnInit();
        }

//        if(HARDWAREOVERVOLTAGE_MC1_MSR1_BOOL)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlBKColor(Qt::gray);

//        if(HARDWAREOVERVOLTAGE_MC1_MSR2_BOOL)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlBKColor(Qt::gray);

//        if(HARDWAREOVERVOLTAGE_MC2_MSR1_BOOL)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlBKColor(Qt::gray);

//        if(HARDWAREOVERVOLTAGE_MC2_MSR2_BOOL)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlBKColor(Qt::gray);

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
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlBKColor(Qt::gray);

        if(MOTOR1SLIP_MC1_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlBKColor(Qt::gray);

        if(MOTOR1SLIP_MC2_MSR1_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlBKColor(Qt::gray);

        if(MOTOR1SLIP_MC2_MSR2_BOOL)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlBKColor(Qt::gray);

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
        ////TBC
        ///////////
        ////////////
        if(TCU_MC1MSR1_TRCINVERTER1WARNING_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR2_TRCINVERTER1WARNING_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR1_TRCINVERTER1WARNING_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR2_TRCINVERTER1WARNING_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR1_TRCINVERTER1FAULT_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR2_TRCINVERTER1FAULT_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR1_TRCINVERTER1FAULT_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR2_TRCINVERTER1FAULT_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR1_TRCINVERTER1WORKING_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR2_TRCINVERTER1WORKING_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR1_TRCINVERTER1WORKING_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR2_TRCINVERTER1WORKING_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR1_BRAKECHOPPER1WORKING_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR2_BRAKECHOPPER1WORKING_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR1_BRAKECHOPPER1WORKING_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR2_BRAKECHOPPER1WORKING_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR1_MAINCONTACTOR1CLOSED_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR2_MAINCONTACTOR1CLOSED_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR1_MAINCONTACTOR1CLOSED_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR2_MAINCONTACTOR1CLOSED_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR1_MOTOR1SLIDE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_9_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR2_MOTOR1SLIDE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_9_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR1_MOTOR1SLIDE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_9_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR2_MOTOR1SLIDE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_9_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR1_MOTOR1SLIP_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR2_MOTOR1SLIP_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR1_MOTOR1SLIP_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR2_MOTOR1SLIP_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR1_COOLINGFANOK_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC1MSR2_COOLINGFANOK_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR1_COOLINGFANOK_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3_TBC))->SetCtrlBKColor(Qt::gray);

        if(TCU_MC2MSR2_COOLINGFANOK_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3_TBC))->SetCtrlBKColor(Qt::gray);
//        if(TCU_MC1_MSR1_HARDWAREOVERVOLTAGE_BOOL_TBC)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2_TBC))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2_TBC))->SetCtrlBKColor(Qt::gray);

//        if(TCU_MC1_MSR1_HARDWARELINEOVERCURRENT_BOOL_TBC)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3_TBC))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3_TBC))->SetCtrlBKColor(Qt::gray);

//        if(TCU_MC1_MSR2_HARDWAREOVERVOLTAGE_BOOL_TBC)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2_TBC))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2_TBC))->SetCtrlBKColor(Qt::gray);

//        if(TCU_MC1_MSR2_HARDWARELINEOVERCURRENT_BOOL_TBC)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3_TBC))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3_TBC))->SetCtrlBKColor(Qt::gray);

//        if(TCU_MC2_MSR1_HARDWAREOVERVOLTAGE_BOOL_TBC)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2_TBC))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2_TBC))->SetCtrlBKColor(Qt::gray);

//        if(TCU_MC2_MSR1_HARDWARELINEOVERCURRENT_BOOL_TBC)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3_TBC))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3_TBC))->SetCtrlBKColor(Qt::gray);

//        if(TCU_MC2_MSR2_HARDWAREOVERVOLTAGE_BOOL_TBC)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2_TBC))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2_TBC))->SetCtrlBKColor(Qt::gray);

//        if(TCU_MC2_MSR2_HARDWARELINEOVERCURRENT_BOOL_TBC)
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3_TBC))->SetCtrlBKColor(Qt::green);
//        else
//            ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3_TBC))->SetCtrlBKColor(Qt::gray);



        break;
    case 3:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_2_1))->SetCtrlText(QSTR("slip frequency"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_3_1))->SetCtrlText(QSTR("stator frequency"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_4_1))->SetCtrlText(QSTR("DynaCurrent_TCU"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_5_1))->SetCtrlText(QSTR("InputVoltage_TCU"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_6_1))->SetCtrlText(QSTR("Net Current"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_7_1))->SetCtrlText(QSTR("iFaultReg1_TCU"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_8_1))->SetCtrlText(QSTR("iFaultReg2_TCU"));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_9_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_10_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATE_11_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_TCUSTATEPAGE))->SetCtrlText("3/3");

            OnInit();
        }


        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2))->SetCtrlText(QString::number(SLIPFREQUENCY_MC1_MSR1_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3))->SetCtrlText(QString::number(STATORFREQUENCY_MC1_MSR1_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4))->SetCtrlText(QString::number(DYNACURRENT_TCU_MC1_MSR1_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5))->SetCtrlText(QString::number(INPUTVOLTAGE_TCU_MC1_MSR1_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6))->SetCtrlText(QString::number(NETCURRENT_TCU_MC1_MSR1_UINT));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2))->SetCtrlText(QString::number(SLIPFREQUENCY_MC1_MSR2_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3))->SetCtrlText(QString::number(STATORFREQUENCY_MC1_MSR2_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4))->SetCtrlText(QString::number(DYNACURRENT_TCU_MC1_MSR2_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5))->SetCtrlText(QString::number(INPUTVOLTAGE_TCU_MC1_MSR2_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6))->SetCtrlText(QString::number(NETCURRENT_TCU_MC1_MSR2_UINT));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2))->SetCtrlText(QString::number(SLIPFREQUENCY_MC2_MSR1_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3))->SetCtrlText(QString::number(STATORFREQUENCY_MC2_MSR1_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4))->SetCtrlText(QString::number(DYNACURRENT_TCU_MC2_MSR1_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5))->SetCtrlText(QString::number(INPUTVOLTAGE_TCU_MC2_MSR1_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6))->SetCtrlText(QString::number(NETCURRENT_TCU_MC2_MSR1_UINT));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2))->SetCtrlText(QString::number(SLIPFREQUENCY_MC2_MSR2_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3))->SetCtrlText(QString::number(STATORFREQUENCY_MC2_MSR2_USINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4))->SetCtrlText(QString::number(DYNACURRENT_TCU_MC2_MSR2_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5))->SetCtrlText(QString::number(INPUTVOLTAGE_TCU_MC2_MSR2_UINT));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6))->SetCtrlText(QString::number(NETCURRENT_TCU_MC2_MSR2_UINT));


        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7))->SetCtrlText(QString::number(IFAULTREG1_TCU_MC1_MSR1,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7))->SetCtrlText(QString::number(IFAULTREG1_TCU_MC1_MSR2,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7))->SetCtrlText(QString::number(IFAULTREG1_TCU_MC2_MSR1,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7))->SetCtrlText(QString::number(IFAULTREG1_TCU_MC2_MSR2,16).toUpper());

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8))->SetCtrlText(QString::number(IFAULTREG2_TCU_MC1_MSR1,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8))->SetCtrlText(QString::number(IFAULTREG2_TCU_MC1_MSR2,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8))->SetCtrlText(QString::number(IFAULTREG2_TCU_MC2_MSR1,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8))->SetCtrlText(QString::number(IFAULTREG2_TCU_MC2_MSR2,16).toUpper());

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_2_TBC))->SetCtrlText(QString::number(TCU_MC1_MSR1_SLIPFREQUENCY_USINT_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_3_TBC))->SetCtrlText(QString::number(TCU_MC1_MSR1_STATORFREQUENCY_USINT_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_4_TBC))->SetCtrlText(QString::number(TCU_MC1_MSR1_DYNACURRENT_UINT_TBC));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_2_TBC))->SetCtrlText(QString::number(TCU_MC1_MSR2_SLIPFREQUENCY_USINT_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_3_TBC))->SetCtrlText(QString::number(TCU_MC1_MSR2_STATORFREQUENCY_USINT_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_4_TBC))->SetCtrlText(QString::number(TCU_MC1_MSR2_DYNACURRENT_UINT_TBC));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_2_TBC))->SetCtrlText(QString::number(TCU_MC2_MSR1_SLIPFREQUENCY_USINT_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_3_TBC))->SetCtrlText(QString::number(TCU_MC2_MSR1_STATORFREQUENCY_USINT_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_4_TBC))->SetCtrlText(QString::number(TCU_MC2_MSR1_DYNACURRENT_UINT_TBC));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_2_TBC))->SetCtrlText(QString::number(TCU_MC2_MSR2_SLIPFREQUENCY_USINT_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_3_TBC))->SetCtrlText(QString::number(TCU_MC2_MSR2_STATORFREQUENCY_USINT_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_4_TBC))->SetCtrlText(QString::number(TCU_MC2_MSR2_DYNACURRENT_UINT_TBC));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5_TBC))->SetCtrlText(QString::number(TCU_MC1MSR1_INPUTVOLTAGE_WORD_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6_TBC))->SetCtrlText(QString::number(TCU_MC1MSR1_NETCURRENT_WORD_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5_TBC))->SetCtrlText(QString::number(TCU_MC1MSR2_INPUTVOLTAGE_WORD_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6_TBC))->SetCtrlText(QString::number(TCU_MC1MSR2_NETCURRENT_WORD_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5_TBC))->SetCtrlText(QString::number(TCU_MC2MSR1_INPUTVOLTAGE_WORD_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6_TBC))->SetCtrlText(QString::number(TCU_MC2MSR1_NETCURRENT_WORD_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5_TBC))->SetCtrlText(QString::number(TCU_MC2MSR2_INPUTVOLTAGE_WORD_TBC));
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6_TBC))->SetCtrlText(QString::number(TCU_MC2MSR2_NETCURRENT_WORD_TBC));

        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7_TBC))->SetCtrlText(QString::number(TCU_MC1_MSR1_IFAULTREG1_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7_TBC))->SetCtrlText(QString::number(TCU_MC1_MSR2_IFAULTREG1_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7_TBC))->SetCtrlText(QString::number(TCU_MC2_MSR1_IFAULTREG1_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7_TBC))->SetCtrlText(QString::number(TCU_MC2_MSR2_IFAULTREG1_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8_TBC))->SetCtrlText(QString::number(TCU_MC1_MSR1_IFAULTREG2_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8_TBC))->SetCtrlText(QString::number(TCU_MC1_MSR2_IFAULTREG2_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8_TBC))->SetCtrlText(QString::number(TCU_MC2_MSR1_IFAULTREG2_WORD_TBC,16).toUpper());
        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8_TBC))->SetCtrlText(QString::number(TCU_MC2_MSR2_IFAULTREG2_WORD_TBC,16).toUpper());

//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_7_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_5_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_6_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_7_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_5_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_6_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_7_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_5_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_6_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_7_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_5_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_6_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR1_8_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC1_MSR2_8_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR1_8_TBC))->SetCtrlText("--");
//        ((CLabel*)GetDlgItem(ID_TCUSTATE_MC2_MSR2_8_TBC))->SetCtrlText("--");


        break;

    default:
        break;
    }

}

void CTcuStatePageCoupled::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
void CTcuStatePageCoupled::OnDownButtonDown()
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

void CTcuStatePageCoupled::OnDownButtonUp()
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
void CTcuStatePageCoupled::OnUpButtonDown()
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

void CTcuStatePageCoupled::OnUpButtonUp()
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
void CTcuStatePageCoupled::OnInitPage()
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
