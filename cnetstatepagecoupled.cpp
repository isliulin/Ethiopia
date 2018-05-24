#include "cnetstatepagecoupled.h"

int pos1=300;

ROMDATA g_PicRom_NetStateCoupled[] =
{
    /*string                font                            rc                  foreground color              background color            control type          ID           */
    D_COMMON_PAGE_HEADER

    //{"0000",               D_COMMON_TITLE_FONT, QRect( 20, 70,600, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_NETSTATE_TRAINCODE       },
    {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(50, 95,220, 20),           Qt::yellow,                   Qt::black,                  CONTROL_IMAGE,        ID_IGNORE       },
    //{"Mc1",                D_DEFAULT_FONT, QRect(100,70, 30, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },
    //{"T",                  D_DEFAULT_FONT, QRect(140,70, 30, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },
    //{"Mc2",                D_DEFAULT_FONT, QRect(180,70, 30, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(135,120,  2,280),           QColor(250,250,250),          Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(180,120,  2,280),           QColor(250,250,250),          Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(20,130,40, 2),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(90,130,270, 2),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(390,130,200, 2),           Qt::blue,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },


    {"TBC",                D_FONT(4),      QRect(60,123, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_TBC1      },
    {"TBC",                D_FONT(4),      QRect(60+pos1,123, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_TBC2      },

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

{"",                   D_DEFAULT_FONT,      QRect(50,158,10, 2),           Qt::red,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(130,158,15, 2),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(175,158,15, 2),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(260,158,10, 2),           Qt::red,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(75,166,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(75,201,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(75,236,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(75,271,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(75,138,2, 13),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(115,166,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(115,201,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(115,236,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(115,271,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(90,297,12, 2),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(205,166,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(205,201,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(205,236,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(205,271,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

    {"",                   D_DEFAULT_FONT,      QRect(245,166,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(245,201,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(245,236,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(245,271,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
    {"",                   D_DEFAULT_FONT,      QRect(220,297,12, 2),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

{"HMI",                D_FONT(4),      QRect(20,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_IDU1       },
{"RIOM",               D_FONT(4),      QRect(60,186, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_RIOM1       },
{"PIS",                D_FONT(4),      QRect(100,221, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_PIS1       },
{"VCU",                D_FONT(4),      QRect(60,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_VCU1      },
{"DOOR2",              D_FONT(4),      QRect(60,291, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DOOR2       },
{"DOOR4",              D_FONT(4),      QRect(60,221, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DOOR4       },
{"DOOR3",              D_FONT(4),      QRect(60,256, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DOOR3      },


{"HVAC",               D_FONT(4),      QRect(100,256, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_HVAC1       },
{"ACU",                D_FONT(4),      QRect(100,186, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_ACU1      },
{"TCU",                D_FONT(4),      QRect(100,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_TCU1       },
//{"ATC",                D_DEFULT_FONT,      QRect(225,343-60, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_ATC1       },
{"DOOR1",              D_FONT(4),      QRect(100,291, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DOOR1      },


{"BCU",                D_FONT(4),      QRect(145,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_BCU       },

{"HVAC",               D_FONT(4),      QRect(190,256, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_HVAC2       },
{"ACU",                D_FONT(4),      QRect(190,186, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_ACU2      },
{"TCU",                D_FONT(4),      QRect(190,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_TCU2       },
//{"ATC",                D_DEFAULT_FONT,      QRect(365,343-60, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_ATC2       },
{"DOOR5",              D_FONT(4),      QRect(190,291, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DOOR1      },

{"RIOM",               D_FONT(4),      QRect(230,186, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_RIOM2       },
{"PIS",                D_FONT(4),      QRect(190,221, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_PIS2       },
{"VCU",                D_FONT(4),      QRect(230,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_VCU2      },
{"DOOR6",              D_FONT(4),      QRect(230,291, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DOOR2       },
{"DOOR8",              D_FONT(4),      QRect(230,221, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DOOR4       },
{"DOOR7",              D_FONT(4),      QRect(230,256, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DOOR3      },

{"HMI",                D_FONT(4),      QRect(270,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_IDU2      },

{"",                   D_COMMON_TITLE_FONT,      QRect(59-13,319,84, 96),           Qt::black,                    Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE      },
{"RIOM",               D_FONT(4),      QRect(60-13,320,81, 18),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE      },
{"SGN",                D_FONT(4),      QRect(101-13,339, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_SGN      },
{"DI1",                D_FONT(4),      QRect(60-13,339, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DI1      },
{"DI2",                D_FONT(4),      QRect(60-13,358, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DI2      },
{"AX",                 D_FONT(4),      QRect(101-13,358, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_AX      },
{"DO1",                D_FONT(4),      QRect(60-13,377, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DO1      },
{"ATP",                D_FONT(4),      QRect(101-13,377, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_ATC      },
{"DO2",                D_FONT(4),      QRect(60-13,396, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DO2      },
{"FC",                D_FONT(4),      QRect(101-13,396, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_TKT      },
//{QSTR("Ticket"),         D_COMMON_TITLE_FONT,      QRect( 60,440-60, 50, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_TSS      },

{"",                   D_DEFAULT_FONT,      QRect(189,319,83, 96),           Qt::black,                    Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE      },
{"RIOM",               D_FONT(4),      QRect(190,320,81, 18),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE      },
{"SGN",                D_FONT(4),      QRect(231,339, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_SGN      },
{"DI1",                D_FONT(4),      QRect(190,339, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DI1      },
{"DI2",                D_FONT(4),      QRect(190,358, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DI2      },
{"AX",                 D_FONT(4),      QRect(231,358, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_AX      },
{"DO1",                D_FONT(4),      QRect(190,377, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DO1      },
{"DO2",                D_FONT(4),      QRect(190,396, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DO2      },
{"ATP",                D_FONT(4),      QRect(231,377, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_ATC      },
{"FC",                D_FONT(4),      QRect(231,396, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_TKT      },
//{QSTR("Ticket"),         D_COMMON_TITLE_FONT,      QRect(531,440-60, 50, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_TSS      },

{"carheadlarge.png",   D_DEFAULT_FONT,      QRect(50+pos1, 95,220, 20),           Qt::yellow,                   Qt::black,                  CONTROL_IMAGE,        ID_IGNORE       },
//{"Mc1",                D_DEFAULT_FONT, QRect(100+pos1,70, 30, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },
//{"T",                  D_DEFAULT_FONT, QRect(140+pos1,70, 30, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },
//{"Mc2",                D_DEFAULT_FONT, QRect(180+pos1,70, 30, 20),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(135+pos1,120,  2,280),           QColor(250,250,250),          Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(180+pos1,120,  2,280),           QColor(250,250,250),          Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

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

{"",                   D_DEFAULT_FONT,      QRect(50+pos1,158,10, 2),           Qt::red,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(130+pos1,158,15, 2),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(175+pos1,158,15, 2),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(260+pos1,158,10, 2),           Qt::red,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(75+pos1,166,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(75+pos1,201,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(75+pos1,236,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(75+pos1,271,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(75+pos1,138,2, 13),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

{"",                   D_DEFAULT_FONT,      QRect(115+pos1,166,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(115+pos1,201,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(115+pos1,236,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(115+pos1,271,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(90+pos1,297,12, 2),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

{"",                   D_DEFAULT_FONT,      QRect(205+pos1,166,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(205+pos1,201,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(205+pos1,236,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(205+pos1,271,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

{"",                   D_DEFAULT_FONT,      QRect(245+pos1,166,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(245+pos1,201,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(245+pos1,236,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(245+pos1,271,2, 20),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },
{"",                   D_DEFAULT_FONT,      QRect(220+pos1,297,12, 2),           Qt::green,                     Qt::black,                  CONTROL_LINE,         ID_IGNORE       },

{"HMI",                D_FONT(4),      QRect(20+pos1,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_IDU1_TBC       },
{"RIOM",               D_FONT(4),      QRect(60+pos1,186, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_RIOM1_TBC       },
{"PIS",                D_FONT(4),      QRect(100+pos1,221, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_PIS1_TBC       },
{"VCU",                D_FONT(4),      QRect(60+pos1,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_VCU1_TBC      },
{"DOOR2",              D_FONT(4),      QRect(60+pos1,291, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DOOR2_TBC       },
{"DOOR4",              D_FONT(4),      QRect(60+pos1,221, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DOOR4_TBC       },
{"DOOR3",              D_FONT(4),      QRect(60+pos1,256, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DOOR3_TBC      },


{"HVAC",               D_FONT(4),      QRect(100+pos1,256, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_HVAC1_TBC       },
{"ACU",                D_FONT(4),      QRect(100+pos1,186, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_ACU1_TBC      },
{"TCU",                D_FONT(4),      QRect(100+pos1,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_TCU1_TBC       },
//{"ATC",                D_DEFULT_FONT,      QRect(225,343-60, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_ATC1       },
{"DOOR1",              D_FONT(4),      QRect(100+pos1,291, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DOOR1_TBC      },


{"BCU",                D_FONT(4),      QRect(145+pos1,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_BCU_TBC       },

{"HVAC",               D_FONT(4),      QRect(190+pos1,256, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_HVAC2_TBC       },
{"ACU",                D_FONT(4),      QRect(190+pos1,186, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_ACU2_TBC      },
{"TCU",                D_FONT(4),      QRect(190+pos1,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_TCU2_TBC       },
//{"ATC",                D_DEFAULT_FONT,      QRect(365,343-60, 40, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_ATC2       },
{"DOOR5",              D_FONT(4),      QRect(190+pos1,291, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DOOR1_TBC      },

{"RIOM",               D_FONT(4),      QRect(230+pos1,186, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_RIOM2_TBC       },
{"PIS",                D_FONT(4),      QRect(190+pos1,221, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_PIS2_TBC       },
{"VCU",                D_FONT(4),      QRect(230+pos1,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_VCU2_TBC      },
{"DOOR6",              D_FONT(4),      QRect(230+pos1,291, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DOOR2_TBC       },
{"DOOR8",              D_FONT(4),      QRect(230+pos1,221, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DOOR4_TBC       },
{"DOOR7",              D_FONT(4),      QRect(230+pos1,256, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DOOR3_TBC      },

{"HMI",                D_FONT(4),      QRect(270+pos1,151, 30, 15),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_IDU2_TBC      },

{"",                   D_COMMON_TITLE_FONT,      QRect(59-13+pos1,319,84, 96),           Qt::black,                    Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE      },
{"RIOM",               D_FONT(4),      QRect(60-13+pos1,320,81, 18),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE      },
{"SGN",                D_FONT(4),      QRect(101-13+pos1,339, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_SGN_TBC      },
{"DI1",                D_FONT(4),      QRect(60-13+pos1,339, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DI1_TBC      },
{"DI2",                D_FONT(4),      QRect(60-13+pos1,358, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DI2_TBC      },
{"AX",                 D_FONT(4),      QRect(101-13+pos1,358, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_AX_TBC      },
{"DO1",                D_FONT(4),      QRect(60-13+pos1,377, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DO1_TBC      },
{"ATP",                D_FONT(4),      QRect(101-13+pos1,377, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_ATC_TBC      },
{"DO2",                D_FONT(4),      QRect(60-13+pos1,396, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_DO2_TBC      },
{"FC",                D_FONT(4),      QRect(101-13+pos1,396, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_TKT_TBC      },
//{QSTR("Ticket"),         D_COMMON_TITLE_FONT,      QRect( 60,440-60, 50, 20),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC1_TSS      },

{"",                   D_DEFAULT_FONT,      QRect(189+pos1,319,83, 96),           Qt::black,                    Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE      },
{"RIOM",               D_FONT(4),      QRect(190+pos1,320,81, 18),           Qt::yellow,                   Qt::black,                  CONTROL_LABEL,        ID_IGNORE      },
{"SGN",                D_FONT(4),      QRect(231+pos1,339, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_SGN_TBC      },
{"DI1",                D_FONT(4),      QRect(190+pos1,339, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DI1_TBC      },
{"DI2",                D_FONT(4),      QRect(190+pos1,358, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DI2_TBC      },
{"AX",                 D_FONT(4),      QRect(231+pos1,358, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_AX_TBC      },
{"DO1",                D_FONT(4),      QRect(190+pos1,377, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DO1_TBC      },
{"DO2",                D_FONT(4),      QRect(190+pos1,396, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_DO2_TBC      },
{"ATP",                D_FONT(4),      QRect(231+pos1,377, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_ATC_TBC      },
{"FC",                D_FONT(4),      QRect(231+pos1,396, 40, 18),           Qt::black,                    Qt::gray,                   CONTROL_LABEL,        ID_NETSTATE_MC2_TKT_TBC      },

D_LAYER1_NAVIGATION_BAR
};
int g_NetStateCoupledRomLen = sizeof(g_PicRom_NetStateCoupled)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(cnetstatepagecoupled,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        END_MESSAGE_MAP()

cnetstatepagecoupled::cnetstatepagecoupled()
{
}

void cnetstatepagecoupled::OnUpdatePage()
{


    if(!(MAIN_TRAINCOUPLED_BOOL)&& MAIN_TRAIN_COUPLED_MS_BOOL)
    {

        ChangePage(PAGE_ROM_INDEX_NETSTATE);
        return;
    }
    //GetDlgItem(ID_NETSTATE_TRAINCODE)->SetCtrlText(g_car1CodeStr);
    GetDlgItem(ID_NETSTATE_TBC1)->SetCtrlBKColor(Qt::green);
    GetDlgItem(ID_NETSTATE_TBC2)->SetCtrlBKColor(Qt::green);

    //GetDlgItem(ID_NETSTATE_TRAINCODE)->SetCtrlText(g_car1CodeStr);


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

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_TKT))->SetCtrlBKColor(Qt::gray);

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

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_TKT))->SetCtrlBKColor(Qt::gray);

    }

   /* if(NET_MC1_TicketONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_TSS))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_TSS))->SetCtrlBKColor(Qt::gray);

    if(NET_MC2_TicketONLINE_BOOL)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_TSS))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_TSS))->SetCtrlBKColor(Qt::gray);*/


    /*if( NET_MC1_ATCONLINE_BOOL )
        ((CLabel*)GetDlgItem(ID_NETSTATE_ATC1))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_ATC1))->SetCtrlBKColor(Qt::gray);

    if( NET_MC2_ATCONLINE_BOOL )
        ((CLabel*)GetDlgItem(ID_NETSTATE_ATC2))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_ATC2))->SetCtrlBKColor(Qt::gray);*/



//////////////


    if(MAIN_MC1_HMI_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_IDU1_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_IDU1_TBC))->SetCtrlBKColor(Qt::gray);

    if(MAIN_MC2_HMI_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_IDU2_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_IDU2_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_MC1_VCU_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_VCU1_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_VCU1_TBC))->SetCtrlBKColor(Qt::gray);
    if(NET_MC2_VCU_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_VCU2_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_VCU2_TBC))->SetCtrlBKColor(Qt::gray);

    if( NET_MC1_TCUONLINE_BOOL_TBC && CAN_OK_MC1_TCU_BOOL_TBC )
        ((CLabel*)GetDlgItem(ID_NETSTATE_TCU1_TBC))->SetCtrlBKColor(Qt::green);
    else if(NET_MC1_TCUONLINE_BOOL_TBC && (!(CAN_OK_MC1_TCU_BOOL_TBC)) )
        ((CLabel*)GetDlgItem(ID_NETSTATE_TCU1_TBC))->SetCtrlBKColor(Qt::yellow);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_TCU1_TBC))->SetCtrlBKColor(Qt::gray);

    if( NET_MC2_TCUONLINE_BOOL_TBC && CAN_OK_MC2_TCU_BOOL_TBC )
        ((CLabel*)GetDlgItem(ID_NETSTATE_TCU2_TBC))->SetCtrlBKColor(Qt::green);
    else if(NET_MC2_TCUONLINE_BOOL_TBC && (!(CAN_OK_MC2_TCU_BOOL_TBC)) )
        ((CLabel*)GetDlgItem(ID_NETSTATE_TCU2_TBC))->SetCtrlBKColor(Qt::yellow);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_TCU2_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_BCUONLINE_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_BCU_TBC))->SetCtrlBKColor(Qt::gray);

    if( NET_MC1_ACUONLINE_BOOL_TBC && CAN_OK_MC1_ACU_BOOL_TBC )
        ((CLabel*)GetDlgItem(ID_NETSTATE_ACU1_TBC))->SetCtrlBKColor(Qt::green);
    else if(NET_MC1_ACUONLINE_BOOL_TBC && (!(CAN_OK_MC1_ACU_BOOL_TBC)) )
        ((CLabel*)GetDlgItem(ID_NETSTATE_ACU1_TBC))->SetCtrlBKColor(Qt::yellow);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_ACU1_TBC))->SetCtrlBKColor(Qt::gray);

    if( NET_MC2_ACUONLINE_BOOL_TBC && CAN_OK_MC2_ACU_BOOL_TBC )
        ((CLabel*)GetDlgItem(ID_NETSTATE_ACU2_TBC))->SetCtrlBKColor(Qt::green);
    else if(NET_MC2_ACUONLINE_BOOL_TBC && (!(CAN_OK_MC2_ACU_BOOL_TBC)) )
        ((CLabel*)GetDlgItem(ID_NETSTATE_ACU2_TBC))->SetCtrlBKColor(Qt::yellow);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_ACU2_TBC))->SetCtrlBKColor(Qt::gray);


    if(NET_MC1_HVACONLINE_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_HVAC1_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_HVAC1_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_MC2_HVACONLINE_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_HVAC2_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_HVAC2_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_MC1_DOOR1ONLINE_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR1_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR1_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_MC1_DOOR2ONLINE_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR2_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR2_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_MC1_DOOR3ONLINE_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR3_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR3_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_MC1_DOOR4ONLINE_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR4_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DOOR4_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_MC2_DOOR5ONLINE_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR1_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR1_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_MC2_DOOR6ONLINE_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR2_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR2_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_MC2_DOOR7ONLINE_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR3_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR3_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_MC2_DOOR8ONLINE_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR4_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DOOR4_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_PISONLINE_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_PIS1_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_PIS1_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_PISONLINE2_BOOL_TBC)
        ((CLabel*)GetDlgItem(ID_NETSTATE_PIS2_TBC))->SetCtrlBKColor(Qt::green);
    else
        ((CLabel*)GetDlgItem(ID_NETSTATE_PIS2_TBC))->SetCtrlBKColor(Qt::gray);

    if(NET_MC1_RIOMONLINESTATE_BOOL_TBC)
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_RIOM1_TBC))->SetCtrlBKColor(Qt::green);

        if(NET_MC1_RIOM1_SGNONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_SGN_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_SGN_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_RIOM1_AXONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_AX_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_AX_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_RIOM1_DI1ONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DI1_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DI1_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_RIOM1_DI2ONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DI2_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DI2_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_RIOM1_DO1ONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DO1_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DO1_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_RIOM1_DO2ONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DO2_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DO2_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_ATCONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_ATC_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_ATC_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC1_TicketONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_TKT_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_TKT_TBC))->SetCtrlBKColor(Qt::gray);
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_RIOM1_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_SGN_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_AX_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DI1_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DI2_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DO1_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_DO2_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC1_TKT_TBC))->SetCtrlBKColor(Qt::gray);

    }

    if(NET_MC2_RIOMONLINESTATE_BOOL_TBC)
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_RIOM2_TBC))->SetCtrlBKColor(Qt::green);

        if(NET_MC2_RIOM2_SGNONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_SGN_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_SGN_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_RIOM2_AXONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_AX_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_AX_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_RIOM2_DI1ONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DI1_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DI1_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_RIOM2_DI2ONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DI2_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DI2_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_RIOM2_DO1ONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DO1_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DO1_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_RIOM2_DO2ONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DO2_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DO2_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_ATCONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_ATC_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_ATC_TBC))->SetCtrlBKColor(Qt::gray);

        if(NET_MC2_TicketONLINE_BOOL_TBC)
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_TKT_TBC))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_TKT_TBC))->SetCtrlBKColor(Qt::gray);
    }
    else
    {
        ((CLabel*)GetDlgItem(ID_NETSTATE_RIOM2_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_SGN_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_AX_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DI1_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DI2_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DO1_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_DO2_TBC))->SetCtrlBKColor(Qt::gray);

        ((CLabel*)GetDlgItem(ID_NETSTATE_MC2_TKT_TBC))->SetCtrlBKColor(Qt::gray);

    }

}

void cnetstatepagecoupled::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}
