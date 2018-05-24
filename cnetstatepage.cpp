#include "cnetstatepage.h"

ROMDATA g_PicRom_NetState[] =
{
    /*string                font                            rc                  foreground color              background color            control type          ID           */
    D_COMMON_PAGE_HEADER

    //{"0000",               D_COMMON_TITLE_FONT, QRect( 20, 70,600, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_NETSTATE_TRAINCODE       },
    {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(210, 95,220, 20),           Qt::yellow,                   Qt::black,                  CONTROL_IMAGE,        ID_IGNORE       },
    {"Mc1",                D_DEFAULT_FONT, QRect(250,70, 30, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },
    {"TP",                  D_DEFAULT_FONT, QRect(310,70, 30, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },
    {"Mc2",                D_DEFAULT_FONT, QRect(365,70, 30, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(290,130,  2,280),           QColor(250,250,250),          Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(350,130,  2,280),           QColor(250,250,250),          Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

  //  {"",                   D_DEFAULT_FONT,      QRect(125,220-60, 25,  2),           Qt::red,                      Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

  //  {"",                   D_DEFAULT_FONT,      QRect(490,220-60, 25,  2),           Qt::red,                      Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    /*{"",                   D_DEFAULT_FONT,      QRect(174,231-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(174,264-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(174,297-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(174,330-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(174,363-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(174,397-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(174,410-60, 77,  2),          Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(249,231-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(249,264-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(249,297-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(249,330-60,  2, 34),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(249,363-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(249,397-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(249,231-60, 66,  2),          Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(315,231-60,  2, 14),          Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(324,231-60, 66,  2),          Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(323,231-60,  2, 14),          Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(389,231-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(389,264-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(389,297-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(389,330-60,  2, 34),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(389,363-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(389,397-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(389,410-60, 77,  2),          Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(464,231-60,  2, 50),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(464,297-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(464,330-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(464,363-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(464,397-60,  2, 14),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect( 99,231-60,  2, 56),           Qt::yellow,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(539,231-60,  2, 56),           Qt::yellow,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect( 99,286-60, 52,  2),           Qt::yellow,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(490,286-60, 51,  2),           Qt::yellow,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
*/

{"",                   D_DEFAULT_FONT,      QRect(145,160,25, 2),           Qt::red,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(275,160,25, 2),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(340,160,25, 2),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(470,160,25, 2),           Qt::red,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(190,171,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(190,171,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(190,206,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(190,241,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(190,276,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(255,171,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(255,171,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(255,206,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(255,241,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(255,276,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(210,300,25, 2),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(385,171,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(385,171,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(385,206,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(385,241,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(385,276,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(450,171,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(450,171,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(450,206,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(450,241,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(450,276,2, 15),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(405,300,25, 2),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

{"HMI",                D_DEFAULT_FONT,      QRect(105,151, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_IDU1       },

{"RIOM",               D_DEFAULT_FONT,      QRect(170,186, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_RIOM1       },
{"PIS",                D_DEFAULT_FONT,      QRect(235,221, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_PIS1       },
{"VCU",                D_DEFAULT_FONT,      QRect(170,151, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_VCU1      },
{"DOOR2",              D_DEFAULT_FONT,      QRect(170,291, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DOOR2       },
{"DOOR4",              D_DEFAULT_FONT,      QRect(170,221, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DOOR4       },
{"DOOR3",              D_DEFAULT_FONT,      QRect(170,256, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DOOR3      },


{"HVAC",               D_DEFAULT_FONT,      QRect(235,256, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_HVAC1       },
{"ACU",                D_DEFAULT_FONT,      QRect(235,186, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_ACU1      },
{"TCU",                D_DEFAULT_FONT,      QRect(235,151, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_TCU1       },
//{"ATC",                D_DEFAULT_FONT,      QRect(225,343-60, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_ATC1       },
{"DOOR1",              D_DEFAULT_FONT,      QRect(235,291, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DOOR1      },


{"BCU",                D_DEFAULT_FONT,      QRect(300,151, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_BCU       },

{"HVAC",               D_DEFAULT_FONT,      QRect(365,256, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_HVAC2       },
{"ACU",                D_DEFAULT_FONT,      QRect(365,186, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_ACU2      },
{"TCU",                D_DEFAULT_FONT,      QRect(365,151, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_TCU2       },
//{"ATC",                D_DEFAULT_FONT,      QRect(365,343-60, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_ATC2       },
{"DOOR5",              D_DEFAULT_FONT,      QRect(365,291, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DOOR1      },

{"RIOM",               D_DEFAULT_FONT,      QRect(430,186, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_RIOM2       },
{"PIS",                D_DEFAULT_FONT,      QRect(365,221, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_PIS2       },
{"VCU",                D_DEFAULT_FONT,      QRect(430,151, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_VCU2      },
{"DOOR6",              D_DEFAULT_FONT,      QRect(430,291, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DOOR2       },
{"DOOR8",              D_DEFAULT_FONT,      QRect(430,221, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DOOR4       },
{"DOOR7",              D_DEFAULT_FONT,      QRect(430,256, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DOOR3      },

{"HMI",                D_DEFAULT_FONT,      QRect(495,151, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_IDU2      },

{"",                   D_COMMON_TITLE_FONT,      QRect(169,319,83, 96),           Qt::black,                    Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE      },
{"RIOM",               D_DEFAULT_FONT,      QRect(170,320,81, 18),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE      },
{"SGN",                D_DEFAULT_FONT,      QRect(211,339, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_SGN      },
{"DI1",                D_DEFAULT_FONT,      QRect(170,339, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DI1      },
{"DI2",                D_DEFAULT_FONT,      QRect(170,358, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DI2      },
{"AX",                 D_DEFAULT_FONT,      QRect(211,358, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_AX      },
{"DO1",                D_DEFAULT_FONT,      QRect(170,377, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DO1      },
{"ATP",                D_DEFAULT_FONT,      QRect(211,377, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_ATC      },
{"DO2",                D_DEFAULT_FONT,      QRect(170,396, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DO2      },
{"FC",                D_DEFAULT_FONT,      QRect(211,396, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_TKT      },
//{QSTR("Ticket"),         D_COMMON_TITLE_FONT,      QRect( 60,440-60, 50, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_TSS      },

{"",                   D_DEFAULT_FONT,      QRect(364,319,83, 96),           Qt::black,                    Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE      },
{"RIOM",               D_DEFAULT_FONT,      QRect(365,320,81, 18),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE      },
{"SGN",                D_DEFAULT_FONT,      QRect(406,339, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_SGN      },
{"DI1",                D_DEFAULT_FONT,      QRect(365,339, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DI1      },
{"DI2",                D_DEFAULT_FONT,      QRect(365,358, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DI2      },
{"AX",                 D_DEFAULT_FONT,      QRect(406,358, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_AX      },
{"DO1",                D_DEFAULT_FONT,      QRect(365,377, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DO1      },
{"DO2",                D_DEFAULT_FONT,      QRect(365,396, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DO2      },
{"ATP",                D_DEFAULT_FONT,      QRect(406,377, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_ATC      },
{"FC",                D_DEFAULT_FONT,      QRect(406,396, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_TKT      },
//{QSTR("Ticket"),         D_COMMON_TITLE_FONT,      QRect(531,440-60, 50, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_TSS      },



D_LAYER1_NAVIGATION_BAR
};
int g_NetStateRomLen = sizeof(g_PicRom_NetState)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CNetStatePage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        END_MESSAGE_MAP()

        CNetStatePage::CNetStatePage()
{
}

void CNetStatePage::OnUpdatePage()
{
    //GetDlgItem(ID_NETSTATE_TRAINCODE)->SetCtrlText(g_car1CodeStr);

    if((MAIN_TRAINCOUPLED_BOOL&&MAIN_TRAIN_COUPLED_MS_BOOL)&&((( MAIN_MC1KEYACTIVE_BOOL && !(MAIN_MC2KEYACTIVE_BOOL) )&&
                                                               (MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL)) )||  // mc1 key:true,mc2 key false
                                                            (( MAIN_MC2KEYACTIVE_BOOL && !(MAIN_MC1KEYACTIVE_BOOL) )&&
                                                             (MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL)))))
    {
        ChangePage(PAGE_ROM_INDEX_NETSTATECOUPLED);
        return;
    }

    if(MAIN_MC2_HMI_BOOL&&!(MAIN_MC1_HMI_BOOL)) // MC1 HMI
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_IDU1))->SetCtrlBKColor(Qt::green);
        if(g_communication_ok_flag)
        {
            ((CLabel*)GetDlgItem(ID_NETSTATE_VCU1))->SetCtrlBKColor(Qt::green);

            if(NET_OTHERIDUONLINE_BOOL)
                ((CLabel*)GetDlgItem(ID_NETSTATE_IDU2))->SetCtrlBKColor(Qt::green);
            else
                ((CLabel*)GetDlgItem(ID_NETSTATE_IDU2))->SetCtrlBKColor(Qt::gray);

            if(NET_OTHERVCUONLINE_BOOL)
                ((CLabel*)GetDlgItem(ID_NETSTATE_VCU2))->SetCtrlBKColor(Qt::green);
            else
                ((CLabel*)GetDlgItem(ID_NETSTATE_VCU2))->SetCtrlBKColor(Qt::gray);
        }
        else
        {
            ((CLabel*)GetDlgItem(ID_NETSTATE_VCU1))->SetCtrlBKColor(Qt::gray);
            ((CLabel*)GetDlgItem(ID_NETSTATE_IDU2))->SetCtrlBKColor(Qt::green);
            ((CLabel*)GetDlgItem(ID_NETSTATE_VCU2))->SetCtrlBKColor(Qt::green);
        }
    }
    else if(MAIN_MC1_HMI_BOOL&&!(MAIN_MC2_HMI_BOOL))  // MC2 HMI
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_IDU2))->SetCtrlBKColor(Qt::green);
        if(g_communication_ok_flag)
        {
            ((CLabel*)GetDlgItem(ID_NETSTATE_VCU2))->SetCtrlBKColor(Qt::green);
            if(NET_OTHERIDUONLINE_BOOL)
                ((CLabel*)GetDlgItem(ID_NETSTATE_IDU1))->SetCtrlBKColor(Qt::green);
            else
                ((CLabel*)GetDlgItem(ID_NETSTATE_IDU1))->SetCtrlBKColor(Qt::gray);
            if(NET_OTHERVCUONLINE_BOOL)
                ((CLabel*)GetDlgItem(ID_NETSTATE_VCU1))->SetCtrlBKColor(Qt::green);
            else
                ((CLabel*)GetDlgItem(ID_NETSTATE_VCU1))->SetCtrlBKColor(Qt::gray);
        }
        else
        {
            ((CLabel*)GetDlgItem(ID_NETSTATE_VCU2))->SetCtrlBKColor(Qt::gray);
            ((CLabel*)GetDlgItem(ID_NETSTATE_IDU1))->SetCtrlBKColor(Qt::green);
            ((CLabel*)GetDlgItem(ID_NETSTATE_VCU1))->SetCtrlBKColor(Qt::green);
        }
    }
    else // unknow whitch side
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_IDU1))->SetCtrlBKColor(Qt::gray);
        ((CLabel*)GetDlgItem(ID_NETSTATE_VCU1))->SetCtrlBKColor(Qt::gray);
        ((CLabel*)GetDlgItem(ID_NETSTATE_IDU2))->SetCtrlBKColor(Qt::gray);
        ((CLabel*)GetDlgItem(ID_NETSTATE_VCU2))->SetCtrlBKColor(Qt::gray);
    }

    if( NET_MC1_TCUONLINE_BOOL && CAN_OK_MC1_TCU_BOOL )
        ((CLabel*)GetDlgItem(ID_NETSTATE_TCU1))->SetCtrlBKColor(Qt::green);
    else if(NET_MC1_TCUONLINE_BOOL && (!(CAN_OK_MC1_TCU_BOOL)) )
        ((CLabel*)GetDlgItem(ID_NETSTATE_TCU1))->SetCtrlBKColor(Qt::yellow);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_TCU1))->SetCtrlBKColor(Qt::gray);

    if( NET_MC2_TCUONLINE_BOOL && CAN_OK_MC2_TCU_BOOL )
        ((CLabel*)GetDlgItem(ID_NETSTATE_TCU2))->SetCtrlBKColor(Qt::green);
    else if(NET_MC2_TCUONLINE_BOOL && (!(CAN_OK_MC2_TCU_BOOL)) )
        ((CLabel*)GetDlgItem(ID_NETSTATE_TCU2))->SetCtrlBKColor(Qt::yellow);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_TCU2))->SetCtrlBKColor(Qt::gray);

    if(NET_BCUONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU))->SetCtrlBKColor(Qt::gray);

    if( NET_MC1_ACUONLINE_BOOL && CAN_OK_MC1_ACU_BOOL )
        ((CLabel*)GetDlgItem(ID_NETSTATE_ACU1))->SetCtrlBKColor(Qt::green);
    else if(NET_MC1_ACUONLINE_BOOL && (!(CAN_OK_MC1_ACU_BOOL)) )
        ((CLabel*)GetDlgItem(ID_NETSTATE_ACU1))->SetCtrlBKColor(Qt::yellow);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_ACU1))->SetCtrlBKColor(Qt::gray);

    if( NET_MC2_ACUONLINE_BOOL && CAN_OK_MC2_ACU_BOOL )
        ((CLabel*)GetDlgItem(ID_NETSTATE_ACU2))->SetCtrlBKColor(Qt::green);
    else if(NET_MC2_ACUONLINE_BOOL && (!(CAN_OK_MC2_ACU_BOOL)) )
        ((CLabel*)GetDlgItem(ID_NETSTATE_ACU2))->SetCtrlBKColor(Qt::yellow);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_ACU2))->SetCtrlBKColor(Qt::gray);

    /*if( NET_MC1_ATCONLINE_BOOL )
        ((CLabel*)GetDlgItem(ID_NETSTATE_ATC1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_ATC1))->SetCtrlBKColor(Qt::gray);

    if( NET_MC2_ATCONLINE_BOOL )
        ((CLabel*)GetDlgItem(ID_NETSTATE_ATC2))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_ATC2))->SetCtrlBKColor(Qt::gray);*/

    if(NET_MC1_HVACONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_HVAC1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_HVAC1))->SetCtrlBKColor(Qt::gray);

    if(NET_MC2_HVACONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_HVAC2))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_HVAC2))->SetCtrlBKColor(Qt::gray);

    if(NET_MC1_DOOR1ONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR1))->SetCtrlBKColor(Qt::gray);

    if(NET_MC1_DOOR2ONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR2))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR2))->SetCtrlBKColor(Qt::gray);

    if(NET_MC1_DOOR3ONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR3))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR3))->SetCtrlBKColor(Qt::gray);

    if(NET_MC1_DOOR4ONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR4))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR4))->SetCtrlBKColor(Qt::gray);

    if(NET_MC2_DOOR5ONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR1))->SetCtrlBKColor(Qt::gray);

    if(NET_MC2_DOOR6ONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR2))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR2))->SetCtrlBKColor(Qt::gray);

    if(NET_MC2_DOOR7ONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR3))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR3))->SetCtrlBKColor(Qt::gray);

    if(NET_MC2_DOOR8ONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR4))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR4))->SetCtrlBKColor(Qt::gray);

    if(NET_PISONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_PIS1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_PIS1))->SetCtrlBKColor(Qt::gray);

    if(NET_PISONLINE2_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_PIS2))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_PIS2))->SetCtrlBKColor(Qt::gray);

    if(NET_MC1_RIOMONLINESTATE_BOOL)
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_RIOM1))->SetCtrlBKColor(Qt::green);

        if(NET_MC1_RIOM1_SGNONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_SGN))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_SGN))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_RIOM1_AXONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_AX))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_AX))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_RIOM1_DI1ONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DI1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DI1))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_RIOM1_DI2ONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DI2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DI2))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_RIOM1_DO1ONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DO1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DO1))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_RIOM1_DO2ONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DO2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DO2))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_ATCONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_ATC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_ATC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_TicketONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_TKT))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_TKT))->SetCtrlBKColor(Qt::gray);
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_RIOM1))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_SGN))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_AX))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DI1))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DI2))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DO1))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DO2))->SetCtrlBKColor(Qt::gray);
    }

    if(NET_MC2_RIOMONLINESTATE_BOOL)
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_RIOM2))->SetCtrlBKColor(Qt::green);

        if(NET_MC2_RIOM2_SGNONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_SGN))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_SGN))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_RIOM2_AXONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_AX))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_AX))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_RIOM2_DI1ONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DI1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DI1))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_RIOM2_DI2ONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DI2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DI2))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_RIOM2_DO1ONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DO1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DO1))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_RIOM2_DO2ONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DO2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DO2))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_ATCONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_ATC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_ATC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_TicketONLINE_BOOL)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_TKT))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_TKT))->SetCtrlBKColor(Qt::gray);
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_RIOM2))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_SGN))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_AX))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DI1))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DI2))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DO1))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DO2))->SetCtrlBKColor(Qt::gray);
    }

   /* if(NET_MC1_TicketONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_TSS))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_TSS))->SetCtrlBKColor(Qt::gray);

    if(NET_MC2_TicketONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_TSS))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_TSS))->SetCtrlBKColor(Qt::gray);*/

}

void CNetStatePage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
    if(MAIN_TRAINCOUPLED_BOOL)
    {
        ChangePage(PAGE_ROM_INDEX_NETSTATECOUPLED);
        return;
    }
}
