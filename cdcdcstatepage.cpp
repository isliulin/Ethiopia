#include "cdcdcstatepage.h"

ROMDATA g_PicRom_DcdcStatePage[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
  {"down.png",           D_DEFAULT_FONT,      QRect( 50, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_DCDCSTATE_PAGEDOWN},
  {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 75, 60, 40),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_DCDCSTATE_PAGEUP},
  {"0000",               D_DEFAULT_FONT,      QRect(440, 70, 60, 19),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_TRAINNUM },
  {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(360, 95,220, 29),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                  },

  //H line
  {"",                   D_DEFAULT_FONT,      QRect( 50,125,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,150,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,175,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,200,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,225,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,250,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,275,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,300,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,325,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,350,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,375,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,400,530,  1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect( 50,425,530,  1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  //V line
  {"",                   D_DEFAULT_FONT,      QRect( 50,125,  1,300),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(360,125,  1,300),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(470,125,  1,300),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  {"",                   D_DEFAULT_FONT,      QRect(580,125,  1,300),                 Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
  //label
  {QSTR("信号名称"),                D_DEFAULT_FONT,      QRect( 55,126,300, 23),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {QSTR("超级电容电压"),            D_DEFAULT_FONT,      QRect( 55,151,300, 23),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_2_1    },
  {QSTR("超级电容电流"),            D_DEFAULT_FONT,      QRect( 55,176,300, 23),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_3_1     },
  {QSTR("电网电压"),                D_DEFAULT_FONT,      QRect( 55,201,300, 23),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_4_1     },
  {QSTR("母线电压"),                D_DEFAULT_FONT,      QRect( 55,226,300, 23),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_5_1     },
  {QSTR("网侧电流"),                D_DEFAULT_FONT,      QRect( 55,251,300, 23),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_6_1     },
  {QSTR("充电工作状态"),            D_DEFAULT_FONT,      QRect( 55,276,300, 23),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_7_1     },
  {QSTR("供电工作状态"),            D_DEFAULT_FONT,      QRect( 55,301,300, 23),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_8_1     },
  {QSTR("放电工作状态"),            D_DEFAULT_FONT,      QRect( 55,326,300, 23),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_9_1     },
  {QSTR("充电完成"),               D_DEFAULT_FONT,      QRect( 55,351,300, 23),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_10_1   },
  {QSTR("供电完成"),               D_DEFAULT_FONT,      QRect( 55,376,300, 23),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_11_1    },
  {QSTR("放电完成"),               D_DEFAULT_FONT,      QRect( 55,401,300, 23),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_12_1    },
  //label
  {"Mc1",           D_DEFAULT_FONT,      QRect(365,126,100, 23),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",              D_DEFAULT_FONT,      QRect(395,154, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_2_2    },
  {"",              D_DEFAULT_FONT,      QRect(395,179, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_3_2    },
  {"",              D_DEFAULT_FONT,      QRect(395,204, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_4_2    },
  {"",              D_DEFAULT_FONT,      QRect(395,229, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_5_2    },
  {"",              D_DEFAULT_FONT,      QRect(395,254, 40, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_6_2    },
  {"",              D_DEFAULT_FONT,      QRect(395,279, 40, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_7_2    },
  {"",              D_DEFAULT_FONT,      QRect(395,304, 40, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_8_2    },
  {"",              D_DEFAULT_FONT,      QRect(395,329, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_9_2    },
  {"",              D_DEFAULT_FONT,      QRect(395,354, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_10_2   },
  {"",              D_DEFAULT_FONT,      QRect(395,379, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_11_2   },
  {"",              D_DEFAULT_FONT,      QRect(395,404, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_12_2   },

  {"Mc2",           D_DEFAULT_FONT,      QRect(475,126,100, 23),                     Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_IGNORE                },
  {"",              D_DEFAULT_FONT,      QRect(505,154, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_2_3    },
  {"",              D_DEFAULT_FONT,      QRect(505,179, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_3_3    },
  {"",              D_DEFAULT_FONT,      QRect(505,204, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_4_3    },
  {"",              D_DEFAULT_FONT,      QRect(505,229, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_5_3    },
  {"",              D_DEFAULT_FONT,      QRect(505,254, 40, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_6_3    },
  {"",              D_DEFAULT_FONT,      QRect(505,279, 40, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_7_3    },
  {"",              D_DEFAULT_FONT,      QRect(505,304, 40, 19),                      Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            IDLABEL_DCDCSTATE_8_3    },
  {"",              D_DEFAULT_FONT,      QRect(505,329, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_9_3    },
  {"",              D_DEFAULT_FONT,      QRect(505,354, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_10_3   },
  {"",              D_DEFAULT_FONT,      QRect(505,379, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_11_3   },
  {"",              D_DEFAULT_FONT,      QRect(505,404, 40, 19),                      Qt::yellow,                  Qt::black,                   CONTROL_LABEL,            IDLABEL_DCDCSTATE_12_3   },

  D_LAYER1_NAVIGATION_BAR
};
int g_DcdcStatePageRomLen = sizeof(g_PicRom_DcdcStatePage)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CDcdcStatePage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_DCDCSTATE_PAGEDOWN, OnDownButtonDown)
        ON_LBUTTONUP(ID_DCDCSTATE_PAGEDOWN, OnDownButtonUp)
        ON_LBUTTONDOWN(ID_DCDCSTATE_PAGEUP, OnUpButtonDown)
        ON_LBUTTONUP(ID_DCDCSTATE_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()

CDcdcStatePage::CDcdcStatePage()
{
    pageNo = DCDC_MIN_PAGE;
    formerPageNo = 0;
}

void CDcdcStatePage::OnCommonQuitButtonDown()
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
void CDcdcStatePage::OnUpdatePage()
{
    GetDlgItem(IDLABEL_DCDCSTATE_TRAINNUM)->SetCtrlText(g_car1CodeStr);
    if( pageNo==DCDC_MAX_PAGE )
    {

        ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN))->SetCtrlText("downgray.png");
        ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP))->SetCtrlText("up.png");
    }
    else if( pageNo==DCDC_MIN_PAGE )
    {

        ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN))->SetCtrlText("down.png");
        ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP))->SetCtrlText("upgray.png");
    }
    else
    {

        ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN))->SetCtrlText("down.png");
        ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP))->SetCtrlText("up.png");
    }

    switch(pageNo)
    {
    case 1:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_1))->SetCtrlText(QSTR("超级电容电压"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_1))->SetCtrlText(QSTR("超级电容电流"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_1))->SetCtrlText(QSTR("电网电压"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_1))->SetCtrlText(QSTR("母线电压"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_1))->SetCtrlText(QSTR("网侧电流"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_1))->SetCtrlText(QSTR("充电工作状态"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_1))->SetCtrlText(QSTR("供电工作状态"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_1))->SetCtrlText(QSTR("放电工作状态"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_1))->SetCtrlText(QSTR("充电完成"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_1))->SetCtrlText(QSTR("供电完成"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_1))->SetCtrlText(QSTR("放电完成"));

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::black);
        }
        if(CHARGEWORKSTATE_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::gray);

        if(POWERSUPPLYWORKSTATE_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::gray);

        if(UNCHARGEWORKSTATE_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::gray);

        if(CHARGEFINISH_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::gray);

        if(POWERSUPPLYFINISH_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::gray);

        if(UNCHARGEFINISH_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::gray);

        if(CHARGEWORKSTATE_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::gray);

        if(POWERSUPPLYWORKSTATE_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::gray);

        if(UNCHARGEWORKSTATE_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::gray);

        if(CHARGEFINISH_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::gray);

        if(POWERSUPPLYFINISH_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::gray);

        if(UNCHARGEFINISH_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlText(QString::number(SUPERCAPVOLTAGE_MC1_DCDC_WORD));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlText(QString::number(SUPERCAPCURRENT_MC1_DCDC_WORD));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlText(QString::number(NETVOLTAGE_MC1_DCDC_WORD));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlText(QString::number(BUSVOLTAGE_MC1_DCDC_WORD));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlText(QString::number(NETSIDECURRENT_MC1_DCDC_WORD));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlText("");

        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlText(QString::number(SUPERCAPVOLTAGE_MC2_DCDC_WORD));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlText(QString::number(SUPERCAPCURRENT_MC2_DCDC_WORD));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlText(QString::number(NETVOLTAGE_MC2_DCDC_WORD));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlText(QString::number(BUSVOLTAGE_MC2_DCDC_WORD));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlText(QString::number(NETSIDECURRENT_MC2_DCDC_WORD));
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlText("");
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlText("");
        break;
    case 2:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_1))->SetCtrlText(QSTR("DC/DC报警"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_1))->SetCtrlText(QSTR("DC/DC故障"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_1))->SetCtrlText(QSTR("超级电容需充电"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_1))->SetCtrlText(QSTR("充电KM1"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_1))->SetCtrlText(QSTR("供/放电KM3"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_1))->SetCtrlText(QSTR("放电KM4"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_1))->SetCtrlText(QSTR("充电接触器故障"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_1))->SetCtrlText(QSTR("KM1主接触器故障"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_1))->SetCtrlText(QSTR("母线电压欠压"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_1))->SetCtrlText(QSTR("母线电压过压"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_1))->SetCtrlText(QSTR("母线电压过压（硬件）"));

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlText("");

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlText("");
        }
        if(DCDCWARNING_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::green);

        if(DCDCFAULT_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAPNEEDRECHARGE_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::green);

        if(CHARGEKM1_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::gray);

        if(SUPPLYORUNCHARGEKM3_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::gray);

        if(UNCHARGEKM4_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::gray);

        if(CHARGECONTACTFAULT_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::green);

        if(KM1FAULT_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::green);

        if(BUSVOLTAGEOWNVOL_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::green);

        if(BUSVOLTAGEOVERVOL_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::green);

        if(BUSVOLTAGEOVERVOL_HARD_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::green);


        if(DCDCWARNING_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::green);

        if(DCDCFAULT_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAPNEEDRECHARGE_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::green);

        if(CHARGEKM1_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::gray);

        if(SUPPLYORUNCHARGEKM3_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::gray);

        if(UNCHARGEKM4_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::gray);

        if(CHARGECONTACTFAULT_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::green);

        if(KM1FAULT_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::green);

        if(BUSVOLTAGEOWNVOL_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::green);

        if(BUSVOLTAGEOVERVOL_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::green);

        if(BUSVOLTAGEOVERVOL_HARD_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::green);

        break;
    case 3:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_1))->SetCtrlText(QSTR("电网电压过压"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_1))->SetCtrlText(QSTR("KM3主接触器故障"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_1))->SetCtrlText(QSTR("DC/DC装置过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_1))->SetCtrlText(QSTR("驱动板故障"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_1))->SetCtrlText(QSTR("超级电容1模块过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_1))->SetCtrlText(QSTR("超级电容5模块过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_1))->SetCtrlText(QSTR("超级电容20模块过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_1))->SetCtrlText(QSTR("超级电容24模块过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_1))->SetCtrlText(QSTR("电网侧快熔故障"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_1))->SetCtrlText(QSTR("超级电容快熔故障"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_1))->SetCtrlText(QSTR("供电输出电压过压"));

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlText("");

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlText("");
        }
        if(NETVOLTAGEOVERVBOL_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::green);

        if(KM3FAULT_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::green);

        if(DCDCOVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::green);

        if(DRIVERBOARDFAULT_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP1MODULEOVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP2MODULEOVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP3MODULEOVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP4MODULEOVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::green);

        if(NETSIDEFASTMELTFAULT_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAPFASTMELTFAULT_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::green);

        if(POWERSUPPLYOUTPUTVOLOVER_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::green);


        if(NETVOLTAGEOVERVBOL_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::green);

        if(KM3FAULT_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::green);

        if(DCDCOVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::green);

        if(DRIVERBOARDFAULT_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP1MODULEOVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP2MODULEOVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP3MODULEOVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP4MODULEOVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::green);

        if(NETSIDEFASTMELTFAULT_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAPFASTMELTFAULT_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::green);

        if(POWERSUPPLYOUTPUTVOLOVER_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::green);
        break;
    case 4:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_1))->SetCtrlText(QSTR("电网侧电流过流"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_1))->SetCtrlText(QSTR("电网侧电流过流（硬件）"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_1))->SetCtrlText(QSTR("超级电容电流过流"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_1))->SetCtrlText(QSTR("Boost输出电压过压（硬件）"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_1))->SetCtrlText(QSTR("超级电容总电压过压"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_1))->SetCtrlText(QSTR("超级电容总电压过压（硬件）"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_1))->SetCtrlText(QSTR("输出短路故障"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_1))->SetCtrlText(QSTR("CAN通信故障"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_1))->SetCtrlText(QSTR("超级电容过流（硬件）"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_1))->SetCtrlText(QSTR("超级电容1-6模块过压"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_1))->SetCtrlText(QSTR("超级电容7-12模块过压"));

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlText("");

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlText("");
        }
        if(NETSIDECURRENTOVER_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::green);

        if(NETSIDECURRENTOVER_HARD_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAPCURRENTOVERCURRENT_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::green);

        if(BOOSTOUTPUTVOLOVERHARD_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAPTOTALOVOLOVER_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAPTOTALOVOLOVER_HARD_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::green);

        if(OUTPUTSHORTCIRCUITFAULT_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::green);

        if(CANCOMMFAULT_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAPOVERCURRENT_HARD__MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP1MODULEOVERVOL_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP2MODULEOVERVOL_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::green);


        if(NETSIDECURRENTOVER_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::green);

        if(NETSIDECURRENTOVER_HARD_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAPCURRENTOVERCURRENT_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::green);

        if(BOOSTOUTPUTVOLOVERHARD_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAPTOTALOVOLOVER_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAPTOTALOVOLOVER_HARD_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::green);

        if(OUTPUTSHORTCIRCUITFAULT_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::green);

        if(CANCOMMFAULT_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAPOVERCURRENT_HARD__MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP1MODULEOVERVOL_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP2MODULEOVERVOL_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::green);

        break;
    case 5:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_1))->SetCtrlText(QSTR("超级电容13-18模块过压"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_1))->SetCtrlText(QSTR("超级电容19-24组模块过压"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_1))->SetCtrlText(QSTR("24V欠压"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_1))->SetCtrlText(QSTR("超级电容电压传感器故障"));// 超级电容1过温
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_1))->SetCtrlText(QSTR("KM4接触器故障")); // 超级电容2过温
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_1))->SetCtrlText(QSTR("超级电容3过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_1))->SetCtrlText(QSTR("超级电容4过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_1))->SetCtrlText(QSTR("超级电容5过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_1))->SetCtrlText(QSTR("超级电容6过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_1))->SetCtrlText(QSTR("超级电容7过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_1))->SetCtrlText(QSTR("超级电容8过温"));

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlText("");

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlText("");
        }
        if(SUPERCAP3MODULEOVERVOL_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP4MODULEOVERVOL_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::green);

        if(UNDERVOLTAGEOF24_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP1OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP2OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP3OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP4OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP5OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP6OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP7OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP8OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP3MODULEOVERVOL_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP4MODULEOVERVOL_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::green);

        if(UNDERVOLTAGEOF24_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP1OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP2OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP3OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP4OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP5OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP6OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP7OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP8OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::green);

        break;
    case 6:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_1))->SetCtrlText(QSTR("超级电容9过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_1))->SetCtrlText(QSTR("超级电容10过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_1))->SetCtrlText(QSTR("超级电容11过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_1))->SetCtrlText(QSTR("超级电容12过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_1))->SetCtrlText(QSTR("超级电容13过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_1))->SetCtrlText(QSTR("超级电容14过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_1))->SetCtrlText(QSTR("超级电容15过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_1))->SetCtrlText(QSTR("超级电容16过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_1))->SetCtrlText(QSTR("超级电容17过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_1))->SetCtrlText(QSTR("超级电容18过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_1))->SetCtrlText(QSTR("超级电容19过温"));

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlText("");

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlText("");
        }
        if(SUPERCAP9OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP10OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP11OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP12OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP13OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP14OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP15OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP16OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP17OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP18OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP19OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::green);


        if(SUPERCAP9OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP10OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP11OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP12OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP13OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP14OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP15OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP16OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP17OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP18OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP19OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::green);

        break;
    case 7:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_1))->SetCtrlText(QSTR("超级电容20过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_1))->SetCtrlText(QSTR("超级电容21过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_1))->SetCtrlText(QSTR("超级电容22过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_1))->SetCtrlText(QSTR("超级电容23过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_1))->SetCtrlText(QSTR("超级电容24过温"));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_1))->SetCtrlText(QSTR(""));

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlText("");

            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlText("");
        }
        if(SUPERCAP20OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP21OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP22OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP23OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_2))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP24OVERTEMP_MC1_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_2))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_2))->SetCtrlBKColor(Qt::black);


        if(SUPERCAP20OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP21OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP22OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP23OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_3))->SetCtrlBKColor(Qt::green);

        if(SUPERCAP24OVERTEMP_MC2_DCDC_BOOL)
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_3))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_3))->SetCtrlBKColor(Qt::black);

        break;
    default:
        break;
    }
}
void CDcdcStatePage::OnDownButtonDown()
{
    CBitmapButton *bitmapButton;

    if( pageNo<DCDC_MAX_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("downpress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
}

void CDcdcStatePage::OnDownButtonUp()
{
    CBitmapButton *bitmapButton;

    if( pageNo<DCDC_MAX_PAGE )
    {
        pageNo++;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("down.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    if( pageNo==DCDC_MAX_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
    ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP))->SetCtrlText("up.png");
}
void CDcdcStatePage::OnUpButtonDown()
{
    CBitmapButton *bitmapButton;

    if( pageNo>DCDC_MIN_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP);
        bitmapButton->SetCtrlText("uppress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP);
        bitmapButton->SetCtrlText("upgray.png");
    }
}

void CDcdcStatePage::OnUpButtonUp()
{
    CBitmapButton *bitmapButton;

    if( pageNo>DCDC_MIN_PAGE )
    {
        pageNo--;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP);
        bitmapButton->SetCtrlText("up.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    if( pageNo==DCDC_MIN_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEUP);
        bitmapButton->SetCtrlText("upgray.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    ((CBitmapButton *)GetDlgItem(ID_DCDCSTATE_PAGEDOWN))->SetCtrlText("down.png");
}
void CDcdcStatePage::OnInitPage()
{
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(IDLABEL_DCDCSTATE_12_1))->SetAlignment(Qt::AlignLeft);
}
