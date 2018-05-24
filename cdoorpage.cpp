#include "cdoorpage.h"

ROMDATA g_PicRom_Door[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //{"0000",               D_DEFAULT_FONT,      QRect(440, 15, 60, 15),                   Qt::yellow,                  Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_CARNO },
    {"carheadlarge.png",   D_DEFAULT_FONT,      QRect(360, 17,220, 30),                   Qt::yellow,                  Qt::black,                  CONTROL_IMAGE,            ID_IGNORE                   },
    {"down.png",           D_DEFAULT_FONT,      QRect( 50, 17, 60, 30),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICDOOR_PAGEDOWN},
    {"upgray.png",         D_DEFAULT_FONT,      QRect(120, 17, 60, 30),                   Qt::yellow,                  Qt::black,                  CONTROL_BMPBUTTON,        ID_PICDOOR_PAGEUP},

    //H line
    {"",                   D_DEFAULT_FONT,      QRect(50,  55, 550, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  75, 550, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  95, 550, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  115, 550, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  135, 550, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  155, 550, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  175, 550, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  195, 550, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  215, 550, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  235, 550, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  255, 550, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  275, 550, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  295, 550, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  315, 550, 1),                  Qt::cyan,                    Qt::gray,                   CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  335, 550, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  355, 550, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  375, 550, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },
    {"",                   D_DEFAULT_FONT,      QRect(50,  395, 550, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },


    //    {"",                   D_DEFAULT_FONT,      QRect(50,  435-15, 530, 1),                  Qt::yellow,                  Qt::yellow,                 CONTROL_LINE,             ID_IGNORE                },

    // V line
    {" ",                   D_DEFAULT_FONT,     QRect( 50, 55,1,340),                     Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
    {" ",                   D_DEFAULT_FONT,     QRect(340, 55,1,340),                     Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
    {" ",                   D_DEFAULT_FONT,     QRect(470, 55,1,340),                     Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},
    {" ",                   D_DEFAULT_FONT,     QRect(600, 55,1,340),                     Qt::yellow,                    Qt::black,                    CONTROL_LINE,                    ID_IGNORE},

    {QSTR("Signal"),        D_DEFAULT_FONT,     QRect(51,56,288,18),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},
    {"Mc1",                 D_DEFAULT_FONT,     QRect(341,56,128,18),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},
    {"Mc2",                 D_DEFAULT_FONT,     QRect(471,56,128,18),                    Qt::yellow,                    Qt::black,                    CONTROL_LABEL,                    ID_IGNORE},

    {QSTR("drDoorZeroSpeedtx"),             D_FONT(6),           QRect(55, 76, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_2_1                },
    {QSTR("drDoorClosetx"),                 D_FONT(6),           QRect(55, 96, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_3_1                 },
    {QSTR("drDoorReopentx"),                D_FONT(6),           QRect(55, 116, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_4_1                 },
    {QSTR("drDoorOpentx"),                  D_FONT(6),           QRect(55, 136, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_5_1                 },
    {QSTR("drDoorClsedtx"),                  D_FONT(6),           QRect(55, 156, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_6_1                 },
    {QSTR("drDoorOpnedtx"),                  D_FONT(6),           QRect(55, 176, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_7_1                 },
    {QSTR("drDoorEmergencyUnlocktx"),        D_FONT(6),           QRect(55, 196, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_8_1                 },
    {QSTR("drDoorIsotx"),                    D_FONT(6),           QRect(55, 216, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_9_1                 },
    {QSTR("drDoorObstructetx"),            D_FONT(6),           QRect(55, 236, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_10_1                 },
    {QSTR("drDoorMaintenancePushbuttontx"),  D_FONT(6),           QRect(55, 256, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_11_1                 },
    {QSTR("drDoorSafeLoopOutputtx"),        D_FONT(6),           QRect(55, 276, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_12_1                 },
    {QSTR("drDoorSafeLoopInputtx"),         D_FONT(6),           QRect(55, 296, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_13_1                 },
    {QSTR("drDoorDynamoErrtx"),              D_FONT(6),           QRect(55, 316, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_14_1                 },
    {QSTR("drDoorLockSWErrtx"),             D_FONT(6),           QRect(55, 336, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_15_1                 },
    {QSTR("drDoorCloseSWErrtx"),            D_FONT(6),           QRect(55, 356, 283,  18),                  Qt::yellow,                 Qt::black,                  CONTROL_LABEL,            ID_PICDOOR_LABEL_16_1                 },

    {"",                   D_DEFAULT_FONT,           QRect(346, 76,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_2_2_1    },
    {"",                   D_DEFAULT_FONT,           QRect(346, 96,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_3_2_1    },
    {"",                   D_DEFAULT_FONT,           QRect(346, 116,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_4_2_1    },
    {"",                   D_DEFAULT_FONT,           QRect(346, 136,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_5_2_1    },
    {"",                   D_DEFAULT_FONT,           QRect(346, 156,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_6_2_1    },
    {"",                   D_DEFAULT_FONT,           QRect(346, 176,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_7_2_1    },
    {"",                   D_DEFAULT_FONT,           QRect(346, 196,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_8_2_1    },
    {"",                   D_DEFAULT_FONT,           QRect(346, 216,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_9_2_1     },
    {"",                   D_DEFAULT_FONT,           QRect(346, 236,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_10_2_1     },
    {"",                   D_DEFAULT_FONT,           QRect(346, 256,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_11_2_1     },
    {"",                   D_DEFAULT_FONT,           QRect(346, 276,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_12_2_1     },
    {"",                   D_DEFAULT_FONT,           QRect(346, 296,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_13_2_1     },
    {"",                   D_DEFAULT_FONT,           QRect(346, 316,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_14_2_1     },
    {"",                   D_DEFAULT_FONT,           QRect(346, 336,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_15_2_1     },
    {"",                   D_DEFAULT_FONT,           QRect(346, 356,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_16_2_1     },


    {"",                   D_DEFAULT_FONT,           QRect(377,  76,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_2_2_2    },
    {"",                   D_DEFAULT_FONT,           QRect(377, 96,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_3_2_2    },
    {"",                   D_DEFAULT_FONT,           QRect(377, 116,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_4_2_2    },
    {"",                   D_DEFAULT_FONT,           QRect(377, 136,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_5_2_2    },
    {"",                   D_DEFAULT_FONT,           QRect(377, 156,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_6_2_2    },
    {"",                   D_DEFAULT_FONT,           QRect(377, 176,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_7_2_2    },
    {"",                   D_DEFAULT_FONT,           QRect(377, 196,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_8_2_2    },
    {"",                   D_DEFAULT_FONT,           QRect(377, 216,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_9_2_2     },
    {"",                   D_DEFAULT_FONT,           QRect(377, 236,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_10_2_2     },
    {"",                   D_DEFAULT_FONT,           QRect(377, 256,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_11_2_2     },
    {"",                   D_DEFAULT_FONT,           QRect(377, 276,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_12_2_2     },
    {"",                   D_DEFAULT_FONT,           QRect(377, 296,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_13_2_2     },
    {"",                   D_DEFAULT_FONT,           QRect(377, 316,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_14_2_2     },
    {"",                   D_DEFAULT_FONT,           QRect(377, 336,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_15_2_2     },
    {"",                   D_DEFAULT_FONT,           QRect(377, 356,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_16_2_2     },

    {"",                   D_DEFAULT_FONT,           QRect(408,  76,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_2_2_3    },
    {"",                   D_DEFAULT_FONT,           QRect(408, 96,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_3_2_3    },
    {"",                   D_DEFAULT_FONT,           QRect(408, 116,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_4_2_3    },
    {"",                   D_DEFAULT_FONT,           QRect(408, 136,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_5_2_3    },
    {"",                   D_DEFAULT_FONT,           QRect(408, 156,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_6_2_3    },
    {"",                   D_DEFAULT_FONT,           QRect(408, 176,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_7_2_3    },
    {"",                   D_DEFAULT_FONT,           QRect(408, 196,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_8_2_3    },
    {"",                   D_DEFAULT_FONT,           QRect(408, 216,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_9_2_3     },
    {"",                   D_DEFAULT_FONT,           QRect(408, 236,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_10_2_3     },
    {"",                   D_DEFAULT_FONT,           QRect(408, 256,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_11_2_3     },
    {"",                   D_DEFAULT_FONT,           QRect(408, 276,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_12_2_3     },
    {"",                   D_DEFAULT_FONT,           QRect(408, 296,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_13_2_3     },
    {"",                   D_DEFAULT_FONT,           QRect(408, 316,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_14_2_3     },
    {"",                   D_DEFAULT_FONT,           QRect(408, 336,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_15_2_3     },
    {"",                   D_DEFAULT_FONT,           QRect(408, 356,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_16_2_3     },

    {"",                   D_DEFAULT_FONT,           QRect(439,  76,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_2_2_4    },
    {"",                   D_DEFAULT_FONT,           QRect(439, 96,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_3_2_4   },
    {"",                   D_DEFAULT_FONT,           QRect(439, 116,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_4_2_4    },
    {"",                   D_DEFAULT_FONT,           QRect(439, 136,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_5_2_4    },
    {"",                   D_DEFAULT_FONT,           QRect(439, 156,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_6_2_4    },
    {"",                   D_DEFAULT_FONT,           QRect(439, 176,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_7_2_4    },
    {"",                   D_DEFAULT_FONT,           QRect(439, 196,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_8_2_4    },
    {"",                   D_DEFAULT_FONT,           QRect(439, 216,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_9_2_4     },
    {"",                   D_DEFAULT_FONT,           QRect(439, 236,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_10_2_4     },
    {"",                   D_DEFAULT_FONT,           QRect(439, 256,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_11_2_4     },
    {"",                   D_DEFAULT_FONT,           QRect(439, 276,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_12_2_4     },
    {"",                   D_DEFAULT_FONT,           QRect(439, 296,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_13_2_4     },
    {"",                   D_DEFAULT_FONT,           QRect(439, 316,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_14_2_4     },
    {"",                   D_DEFAULT_FONT,           QRect(439, 336,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_15_2_4     },
    {"",                   D_DEFAULT_FONT,           QRect(439, 356,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_16_2_4     },

{"",                   D_DEFAULT_FONT,           QRect(476, 76,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_2_3_1    },
{"",                   D_DEFAULT_FONT,           QRect(476, 96,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_3_3_1    },
{"",                   D_DEFAULT_FONT,           QRect(476, 116,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_4_3_1    },
{"",                   D_DEFAULT_FONT,           QRect(476, 136,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_5_3_1    },
{"",                   D_DEFAULT_FONT,           QRect(476, 156,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_6_3_1    },
{"",                   D_DEFAULT_FONT,           QRect(476, 176,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_7_3_1    },
{"",                   D_DEFAULT_FONT,           QRect(476, 196,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_8_3_1    },
{"",                   D_DEFAULT_FONT,           QRect(476, 216,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_9_3_1     },
{"",                   D_DEFAULT_FONT,           QRect(476, 236,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_10_3_1     },
{"",                   D_DEFAULT_FONT,           QRect(476, 256,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_11_3_1     },
{"",                   D_DEFAULT_FONT,           QRect(476, 276,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_12_3_1     },
{"",                   D_DEFAULT_FONT,           QRect(476, 296,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_13_3_1     },
{"",                   D_DEFAULT_FONT,           QRect(476, 316,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_14_3_1     },
{"",                   D_DEFAULT_FONT,           QRect(476, 336,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_15_3_1     },
{"",                   D_DEFAULT_FONT,           QRect(476, 356,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_16_3_1     },


{"",                   D_DEFAULT_FONT,           QRect(507,  76,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_2_3_2    },
{"",                   D_DEFAULT_FONT,           QRect(507, 96,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_3_3_2    },
{"",                   D_DEFAULT_FONT,           QRect(507, 116,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_4_3_2    },
{"",                   D_DEFAULT_FONT,           QRect(507, 136,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_5_3_2    },
{"",                   D_DEFAULT_FONT,           QRect(507, 156,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_6_3_2    },
{"",                   D_DEFAULT_FONT,           QRect(507, 176,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_7_3_2    },
{"",                   D_DEFAULT_FONT,           QRect(507, 196,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_8_3_2    },
{"",                   D_DEFAULT_FONT,           QRect(507, 216,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_9_3_2     },
{"",                   D_DEFAULT_FONT,           QRect(507, 236,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_10_3_2     },
{"",                   D_DEFAULT_FONT,           QRect(507, 256,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_11_3_2     },
{"",                   D_DEFAULT_FONT,           QRect(507, 276,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_12_3_2     },
{"",                   D_DEFAULT_FONT,           QRect(507, 296,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_13_3_2     },
{"",                   D_DEFAULT_FONT,           QRect(507, 316,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_14_3_2     },
{"",                   D_DEFAULT_FONT,           QRect(507, 336,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_15_3_2     },
{"",                   D_DEFAULT_FONT,           QRect(507, 356,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_16_3_2     },

{"",                   D_DEFAULT_FONT,           QRect(538,  76,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_2_3_3    },
{"",                   D_DEFAULT_FONT,           QRect(538, 96,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_3_3_3    },
{"",                   D_DEFAULT_FONT,           QRect(538, 116,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_4_3_3    },
{"",                   D_DEFAULT_FONT,           QRect(538, 136,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_5_3_3    },
{"",                   D_DEFAULT_FONT,           QRect(538, 156,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_6_3_3    },
{"",                   D_DEFAULT_FONT,           QRect(538, 176,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_7_3_3    },
{"",                   D_DEFAULT_FONT,           QRect(538, 196,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_8_3_3    },
{"",                   D_DEFAULT_FONT,           QRect(538, 216,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_9_3_3     },
{"",                   D_DEFAULT_FONT,           QRect(538, 236,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_10_3_3     },
{"",                   D_DEFAULT_FONT,           QRect(538, 256,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_11_3_3     },
{"",                   D_DEFAULT_FONT,           QRect(538, 276,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_12_3_3     },
{"",                   D_DEFAULT_FONT,           QRect(538, 296,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_13_3_3     },
{"",                   D_DEFAULT_FONT,           QRect(538, 316,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_14_3_3     },
{"",                   D_DEFAULT_FONT,           QRect(538, 336,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_15_3_3     },
{"",                   D_DEFAULT_FONT,           QRect(538, 356,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_16_3_3     },

{"",                   D_DEFAULT_FONT,           QRect(569,  76,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_2_3_4    },
{"",                   D_DEFAULT_FONT,           QRect(569, 96,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_3_3_4   },
{"",                   D_DEFAULT_FONT,           QRect(569, 116,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_4_3_4    },
{"",                   D_DEFAULT_FONT,           QRect(569, 136,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_5_3_4    },
{"",                   D_DEFAULT_FONT,           QRect(569, 156,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_6_3_4    },
{"",                   D_DEFAULT_FONT,           QRect(569, 176,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_7_3_4    },
{"",                   D_DEFAULT_FONT,           QRect(569, 196,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_8_3_4    },
{"",                   D_DEFAULT_FONT,           QRect(569, 216,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_9_3_4     },
{"",                   D_DEFAULT_FONT,           QRect(569, 236,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_10_3_4     },
{"",                   D_DEFAULT_FONT,           QRect(569, 256,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_11_3_4     },
{"",                   D_DEFAULT_FONT,           QRect(569, 276,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_12_3_4     },
{"",                   D_DEFAULT_FONT,           QRect(569, 296,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_13_3_4     },
{"",                   D_DEFAULT_FONT,           QRect(569, 316,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_14_3_4     },
{"",                   D_DEFAULT_FONT,           QRect(569, 336,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_15_3_4     },
{"",                   D_DEFAULT_FONT,           QRect(569, 356,  25,  18),                  Qt::black,                  Qt::black,                    CONTROL_LABEL,            ID_PICDOOR_LABEL_16_3_4     },

  D_LAYER2_NAVIGATION_BAR_MAINTAIN
};
int g_DoorRomLen = sizeof(g_PicRom_Door)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CDoorPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_PICDOOR_PAGEDOWN, OnDownButtonDown)
        ON_LBUTTONUP(ID_PICDOOR_PAGEDOWN, OnDownButtonUp)
        ON_LBUTTONDOWN(ID_PICDOOR_PAGEUP, OnUpButtonDown)
        ON_LBUTTONUP(ID_PICDOOR_PAGEUP, OnUpButtonUp)
END_MESSAGE_MAP()

CDoorPage::CDoorPage()
{
    pageNo = DOOR_MIN_PAGE;
    formerPageNo = 0;
}

void CDoorPage::OnUpdatePage()
{
    //GetDlgItem(ID_PICDOOR_LABEL_CARNO)->SetCtrlText(g_car1CodeStr);
    if( pageNo==DOOR_MAX_PAGE )
    {

        ((CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEDOWN))->SetCtrlText("downgray.png");
        ((CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEUP))->SetCtrlText("up.png");
    }
    else if( pageNo==DOOR_MIN_PAGE )
    {

        ((CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEDOWN))->SetCtrlText("down.png");
        ((CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEUP))->SetCtrlText("upgray.png");
    }
    else
    {

        ((CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEDOWN))->SetCtrlText("down.png");
        ((CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEUP))->SetCtrlText("up.png");
    }

    switch(pageNo)
    {
    case 1:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_1))->SetCtrlText(QSTR("drDoorZeroSpeedtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_1))->SetCtrlText(QSTR("drDoorClosetx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_1))->SetCtrlText(QSTR("drDoorReopentx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_1))->SetCtrlText(QSTR("drDoorOpentx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_1))->SetCtrlText(QSTR("drDoorClsedtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_1))->SetCtrlText(QSTR("drDoorOpnedtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_1))->SetCtrlText(QSTR("drDoorEmergencyUnlocktx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_1))->SetCtrlText(QSTR("drDoorIsotx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_1))->SetCtrlText(QSTR("drDoorMaintenancePushbuttontx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_1))->SetCtrlText(QSTR("drDoorSafeLoopOutputtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_1))->SetCtrlText(QSTR("drDoorSafeLoopInputtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_1))->SetCtrlText(QSTR(""));

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_1))->SetCtrlText("1");


            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_2))->SetCtrlText("2");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_3))->SetCtrlText("3");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_4))->SetCtrlText("4");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_1))->SetCtrlText("5");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_2))->SetCtrlText("6");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_3))->SetCtrlText("7");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_4))->SetCtrlText("8");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_1))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_1))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_1))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_2))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_2))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_2))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_3))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_3))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_3))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_4))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_4))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_4))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_1))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_1))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_1))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_2))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_2))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_2))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_3))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_3))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_3))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_4))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_4))->SetCtrlText(" ");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_4))->SetCtrlText(" ");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_1))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_1))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_1))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_1))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_1))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_1))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_4))->SetCtrlBKColor(Qt::black);

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_1))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_4))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_1))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_2))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_3))->SetCtrlBKColor(Qt::black);
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_4))->SetCtrlBKColor(Qt::black);


        }

        if(DOOR1_ZREOSPEEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR1_CLOSETX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR1_REOPENTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR1_OPENTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR1_CLOSEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR1_OPENEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR1_EMERGENCYUNLOCKTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR1_ISOTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR1_MAINTENANCEPUSHBUTTONTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR1_SAFELOOPOUTPUTTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR1_SAFELOOPINPUTTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_1))->SetCtrlBKColor(Qt::gray);

       ///door2

        if(DOOR2_ZREOSPEEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR2_CLOSETX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR2_REOPENTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR2_OPENTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR2_CLOSEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR2_OPENEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR2_EMERGENCYUNLOCKTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR2_ISOTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR2_MAINTENANCEPUSHBUTTONTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR2_SAFELOOPOUTPUTTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR2_SAFELOOPINPUTTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_2))->SetCtrlBKColor(Qt::gray);


        //door3
        if(DOOR3_ZREOSPEEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_3))->SetCtrlBKColor(Qt::gray);

        if(DOOR3_CLOSETX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_3))->SetCtrlBKColor(Qt::gray);
        if(DOOR3_REOPENTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_3))->SetCtrlBKColor(Qt::gray);

        if(DOOR3_OPENTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_3))->SetCtrlBKColor(Qt::gray);

        if(DOOR3_CLOSEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_3))->SetCtrlBKColor(Qt::gray);

        if(DOOR3_OPENEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_3))->SetCtrlBKColor(Qt::gray);

        if(DOOR3_EMERGENCYUNLOCKTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_3))->SetCtrlBKColor(Qt::gray);

        if(DOOR3_ISOTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_3))->SetCtrlBKColor(Qt::gray);

        if(DOOR3_MAINTENANCEPUSHBUTTONTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_3))->SetCtrlBKColor(Qt::gray);

        if(DOOR3_SAFELOOPOUTPUTTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_3))->SetCtrlBKColor(Qt::gray);

        if(DOOR3_SAFELOOPINPUTTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_3))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_3))->SetCtrlBKColor(Qt::gray);

        ///door4
        if(DOOR4_ZREOSPEEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_4))->SetCtrlBKColor(Qt::gray);

        if(DOOR4_CLOSETX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_4))->SetCtrlBKColor(Qt::gray);
        if(DOOR4_REOPENTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_4))->SetCtrlBKColor(Qt::gray);

        if(DOOR4_OPENTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_4))->SetCtrlBKColor(Qt::gray);

        if(DOOR4_CLOSEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_4))->SetCtrlBKColor(Qt::gray);

        if(DOOR4_OPENEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_4))->SetCtrlBKColor(Qt::gray);

        if(DOOR4_EMERGENCYUNLOCKTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_4))->SetCtrlBKColor(Qt::gray);

        if(DOOR4_ISOTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_4))->SetCtrlBKColor(Qt::gray);

        if(DOOR4_MAINTENANCEPUSHBUTTONTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_4))->SetCtrlBKColor(Qt::gray);

        if(DOOR4_SAFELOOPOUTPUTTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_4))->SetCtrlBKColor(Qt::gray);

        if(DOOR4_SAFELOOPINPUTTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_4))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_4))->SetCtrlBKColor(Qt::gray);



        //door5
        if(DOOR5_ZREOSPEEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR5_CLOSETX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR5_REOPENTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR5_OPENTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR5_CLOSEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR5_OPENEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR5_EMERGENCYUNLOCKTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR5_ISOTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR5_MAINTENANCEPUSHBUTTONTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR5_SAFELOOPOUTPUTTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_1))->SetCtrlBKColor(Qt::gray);

        if(DOOR5_SAFELOOPINPUTTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_1))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_1))->SetCtrlBKColor(Qt::gray);


        ///door6
        if(DOOR6_ZREOSPEEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR6_CLOSETX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR6_REOPENTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR6_OPENTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR6_CLOSEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR6_OPENEDTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR6_EMERGENCYUNLOCKTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR6_ISOTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR6_MAINTENANCEPUSHBUTTONTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR6_SAFELOOPOUTPUTTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_2))->SetCtrlBKColor(Qt::gray);

        if(DOOR6_SAFELOOPINPUTTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_2))->SetCtrlBKColor(Qt::green);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_2))->SetCtrlBKColor(Qt::gray);



        ///door7
        if(DOOR7_ZREOSPEEDTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_3))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_3))->SetCtrlBKColor(Qt::gray);

                if(DOOR7_CLOSETX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_3))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_3))->SetCtrlBKColor(Qt::gray);

                if(DOOR7_REOPENTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_3))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_3))->SetCtrlBKColor(Qt::gray);

                if(DOOR7_OPENTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_3))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_3))->SetCtrlBKColor(Qt::gray);

                if(DOOR7_CLOSEDTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_3))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_3))->SetCtrlBKColor(Qt::gray);

                if(DOOR7_OPENEDTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_3))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_3))->SetCtrlBKColor(Qt::gray);

                if(DOOR7_EMERGENCYUNLOCKTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_3))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_3))->SetCtrlBKColor(Qt::gray);

                if(DOOR7_ISOTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_3))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_3))->SetCtrlBKColor(Qt::gray);

                if(DOOR7_MAINTENANCEPUSHBUTTONTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_3))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_3))->SetCtrlBKColor(Qt::gray);

                if(DOOR7_SAFELOOPOUTPUTTX_BOOL )
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_3))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_3))->SetCtrlBKColor(Qt::gray);

                if(DOOR7_SAFELOOPINPUTTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_3))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_3))->SetCtrlBKColor(Qt::gray);

            ////door8
                if(DOOR8_ZREOSPEEDTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_4))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_4))->SetCtrlBKColor(Qt::gray);

                if(DOOR8_CLOSETX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_4))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_4))->SetCtrlBKColor(Qt::gray);

                if(DOOR8_REOPENTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_4))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_4))->SetCtrlBKColor(Qt::gray);

                if(DOOR8_OPENTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_4))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_4))->SetCtrlBKColor(Qt::gray);

                if(DOOR8_CLOSEDTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_4))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_4))->SetCtrlBKColor(Qt::gray);

                if(DOOR8_OPENEDTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_4))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_4))->SetCtrlBKColor(Qt::gray);

                if(DOOR8_EMERGENCYUNLOCKTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_4))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_4))->SetCtrlBKColor(Qt::gray);

                if(DOOR8_ISOTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_4))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_4))->SetCtrlBKColor(Qt::gray);

                if(DOOR8_MAINTENANCEPUSHBUTTONTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_4))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_4))->SetCtrlBKColor(Qt::gray);

                if(DOOR8_SAFELOOPOUTPUTTX_BOOL )
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_4))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_4))->SetCtrlBKColor(Qt::gray);

                if(DOOR8_SAFELOOPINPUTTX_BOOL)
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_4))->SetCtrlBKColor(Qt::green);
                else
                    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_4))->SetCtrlBKColor(Qt::gray);

         break;
    case 2:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_1))->SetCtrlText(QSTR("drDoorUnlock3sErrtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_1))->SetCtrlText(QSTR("drDoorPositionSencerErrtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_1))->SetCtrlText(QSTR("drDoorCloseTimesErrtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_1))->SetCtrlText(QSTR("drDoorOpenTimesErrtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_1))->SetCtrlText(QSTR("drDoorSafeRelayErrtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_1))->SetCtrlText(QSTR("drDoorNoOpnCMDtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_1))->SetCtrlText(QSTR("drDoorBelockErrtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_1))->SetCtrlText(QSTR("drDoorSafeLoopErrtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_1))->SetCtrlText(QSTR("drDoorO0ShortErrtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_1))->SetCtrlText(QSTR("drDoorO1ShortErrtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_1))->SetCtrlText(QSTR("drDoorO2ShortErrtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_1))->SetCtrlText(QSTR("drDoorO3ShortErrtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_1))->SetCtrlText(QSTR("drDoorDynamoErrtx "));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_1))->SetCtrlText(QSTR("drDoorLockSWErrtx"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_1))->SetCtrlText(QSTR("drDoorCloseSWErrtx"));

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_1))->SetCtrlText("1");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_2))->SetCtrlText("2");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_3))->SetCtrlText("3");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_4))->SetCtrlText("4");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_1))->SetCtrlText("5");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_2))->SetCtrlText("6");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_3))->SetCtrlText("7");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_4))->SetCtrlText("8");

            //change page


        }
        if(DOOR1_UNLOCK3SERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_1))->SetCtrlBKColor(Qt::green);

        if(DOOR1_POSITIONSENSERERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_1))->SetCtrlBKColor(Qt::green);

        if(DOOR1_CLOSETIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_1))->SetCtrlBKColor(Qt::green);

        if(DOOR1_OPENTIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_1))->SetCtrlBKColor(Qt::green);

        if(DOOR1_SAFERELAYERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_1))->SetCtrlBKColor(Qt::green);

        if(DOOR1_NOOPENCMDERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_1))->SetCtrlBKColor(Qt::green);

        if(DOOR1_BELOCKERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_1))->SetCtrlBKColor(Qt::green);

        if(DOOR1_SAFELOOPERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_1))->SetCtrlBKColor(Qt::green);

        if(DOOR1_O0SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_1))->SetCtrlBKColor(Qt::green);

        if(DOOR1_O1SHORTERRTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_1))->SetCtrlBKColor(Qt::green);

        if(DOOR1_O2SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_1))->SetCtrlBKColor(Qt::green);
        if(DOOR1_O3SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_1))->SetCtrlBKColor(Qt::green);
        if(DOOR1_DYNAMOERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_1))->SetCtrlBKColor(Qt::green);
        if(DOOR1_LOCKSWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_1))->SetCtrlBKColor(Qt::green);
        if(DOOR1_CLOSESWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_1))->SetCtrlBKColor(Qt::green);
///////door2
        if(DOOR2_UNLOCK3SERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_2))->SetCtrlBKColor(Qt::green);

        if(DOOR2_POSITIONSENSERERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_2))->SetCtrlBKColor(Qt::green);

        if(DOOR2_CLOSETIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_2))->SetCtrlBKColor(Qt::green);

        if(DOOR2_OPENTIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_2))->SetCtrlBKColor(Qt::green);

        if(DOOR2_SAFERELAYERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_2))->SetCtrlBKColor(Qt::green);

        if(DOOR2_NOOPENCMDERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_2))->SetCtrlBKColor(Qt::green);

        if(DOOR2_BELOCKERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_2))->SetCtrlBKColor(Qt::green);

        if(DOOR2_SAFELOOPERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_2))->SetCtrlBKColor(Qt::green);

        if(DOOR2_O0SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_2))->SetCtrlBKColor(Qt::green);

        if(DOOR2_O1SHORTERRTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_2))->SetCtrlBKColor(Qt::green);

        if(DOOR2_O2SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_2))->SetCtrlBKColor(Qt::green);
        if(DOOR2_O3SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_2))->SetCtrlBKColor(Qt::green);
        if(DOOR2_DYNAMOERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_2))->SetCtrlBKColor(Qt::green);
        if(DOOR2_LOCKSWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_2))->SetCtrlBKColor(Qt::green);
        if(DOOR2_CLOSESWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_2))->SetCtrlBKColor(Qt::green);
////door3
        if(DOOR3_UNLOCK3SERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_3))->SetCtrlBKColor(Qt::green);

        if(DOOR3_POSITIONSENSERERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_3))->SetCtrlBKColor(Qt::green);

        if(DOOR3_CLOSETIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_3))->SetCtrlBKColor(Qt::green);

        if(DOOR3_OPENTIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_3))->SetCtrlBKColor(Qt::green);

        if(DOOR3_SAFERELAYERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_3))->SetCtrlBKColor(Qt::green);

        if(DOOR3_NOOPENCMDERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_3))->SetCtrlBKColor(Qt::green);

        if(DOOR3_BELOCKERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_3))->SetCtrlBKColor(Qt::green);

        if(DOOR3_SAFELOOPERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_3))->SetCtrlBKColor(Qt::green);

        if(DOOR3_O0SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_3))->SetCtrlBKColor(Qt::green);

        if(DOOR3_O1SHORTERRTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_3))->SetCtrlBKColor(Qt::green);

        if(DOOR3_O2SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_3))->SetCtrlBKColor(Qt::green);
        if(DOOR3_O3SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_3))->SetCtrlBKColor(Qt::green);
        if(DOOR3_DYNAMOERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_3))->SetCtrlBKColor(Qt::green);
        if(DOOR3_LOCKSWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_3))->SetCtrlBKColor(Qt::green);
        if(DOOR3_CLOSESWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_3))->SetCtrlBKColor(Qt::green);
        ///door4
        if(DOOR4_UNLOCK3SERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_4))->SetCtrlBKColor(Qt::green);

        if(DOOR4_POSITIONSENSERERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_4))->SetCtrlBKColor(Qt::green);

        if(DOOR4_CLOSETIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_4))->SetCtrlBKColor(Qt::green);

        if(DOOR4_OPENTIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_4))->SetCtrlBKColor(Qt::green);

        if(DOOR4_SAFERELAYERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_4))->SetCtrlBKColor(Qt::green);

        if(DOOR4_NOOPENCMDERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_4))->SetCtrlBKColor(Qt::green);

        if(DOOR4_BELOCKERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_4))->SetCtrlBKColor(Qt::green);

        if(DOOR4_SAFELOOPERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_4))->SetCtrlBKColor(Qt::green);

        if(DOOR4_O0SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_4))->SetCtrlBKColor(Qt::green);

        if(DOOR4_O1SHORTERRTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_4))->SetCtrlBKColor(Qt::green);

        if(DOOR4_O2SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_4))->SetCtrlBKColor(Qt::green);
        if(DOOR4_O3SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_4))->SetCtrlBKColor(Qt::green);
        if(DOOR4_DYNAMOERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_2_4))->SetCtrlBKColor(Qt::green);
        if(DOOR4_LOCKSWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_2_4))->SetCtrlBKColor(Qt::green);
        if(DOOR4_CLOSESWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_2_4))->SetCtrlBKColor(Qt::green);

        ///door5
        if(DOOR5_UNLOCK3SERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_1))->SetCtrlBKColor(Qt::green);

        if(DOOR5_POSITIONSENSERERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_1))->SetCtrlBKColor(Qt::green);

        if(DOOR5_CLOSETIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_1))->SetCtrlBKColor(Qt::green);

        if(DOOR5_OPENTIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_1))->SetCtrlBKColor(Qt::green);

        if(DOOR5_SAFERELAYERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_1))->SetCtrlBKColor(Qt::green);

        if(DOOR5_NOOPENCMDERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_1))->SetCtrlBKColor(Qt::green);

        if(DOOR5_BELOCKERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_1))->SetCtrlBKColor(Qt::green);

        if(DOOR5_SAFELOOPERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_1))->SetCtrlBKColor(Qt::green);

        if(DOOR5_O0SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_1))->SetCtrlBKColor(Qt::green);

        if(DOOR5_O1SHORTERRTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_1))->SetCtrlBKColor(Qt::green);

        if(DOOR5_O2SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_1))->SetCtrlBKColor(Qt::green);
        if(DOOR5_O3SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_1))->SetCtrlBKColor(Qt::green);
        if(DOOR5_DYNAMOERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_1))->SetCtrlBKColor(Qt::green);
        if(DOOR5_LOCKSWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_1))->SetCtrlBKColor(Qt::green);
        if(DOOR5_CLOSESWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_1))->SetCtrlBKColor(Qt::green);
        ///door6

        if(DOOR6_UNLOCK3SERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_2))->SetCtrlBKColor(Qt::green);

        if(DOOR6_POSITIONSENSERERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_2))->SetCtrlBKColor(Qt::green);

        if(DOOR6_CLOSETIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_2))->SetCtrlBKColor(Qt::green);

        if(DOOR6_OPENTIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_2))->SetCtrlBKColor(Qt::green);

        if(DOOR6_SAFERELAYERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_2))->SetCtrlBKColor(Qt::green);

        if(DOOR6_NOOPENCMDERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_2))->SetCtrlBKColor(Qt::green);

        if(DOOR6_BELOCKERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_2))->SetCtrlBKColor(Qt::green);

        if(DOOR6_SAFELOOPERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_2))->SetCtrlBKColor(Qt::green);

        if(DOOR6_O0SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_2))->SetCtrlBKColor(Qt::green);

        if(DOOR6_O1SHORTERRTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_2))->SetCtrlBKColor(Qt::green);

        if(DOOR6_O2SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_2))->SetCtrlBKColor(Qt::green);
        if(DOOR6_O3SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_2))->SetCtrlBKColor(Qt::green);
        if(DOOR6_DYNAMOERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_2))->SetCtrlBKColor(Qt::green);
        if(DOOR6_LOCKSWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_2))->SetCtrlBKColor(Qt::green);
        if(DOOR6_CLOSESWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_2))->SetCtrlBKColor(Qt::green);

        /////door7
        if(DOOR7_UNLOCK3SERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_3))->SetCtrlBKColor(Qt::green);

        if(DOOR7_POSITIONSENSERERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_3))->SetCtrlBKColor(Qt::green);

        if(DOOR7_CLOSETIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_3))->SetCtrlBKColor(Qt::green);

        if(DOOR7_OPENTIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_3))->SetCtrlBKColor(Qt::green);

        if(DOOR7_SAFERELAYERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_3))->SetCtrlBKColor(Qt::green);

        if(DOOR7_NOOPENCMDERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_3))->SetCtrlBKColor(Qt::green);

        if(DOOR7_BELOCKERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_3))->SetCtrlBKColor(Qt::green);

        if(DOOR7_SAFELOOPERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_3))->SetCtrlBKColor(Qt::green);

        if(DOOR7_O0SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_3))->SetCtrlBKColor(Qt::green);

        if(DOOR7_O1SHORTERRTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_3))->SetCtrlBKColor(Qt::green);

        if(DOOR7_O2SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_3))->SetCtrlBKColor(Qt::green);
        if(DOOR7_O3SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_3))->SetCtrlBKColor(Qt::green);
        if(DOOR7_DYNAMOERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_3))->SetCtrlBKColor(Qt::green);
        if(DOOR7_LOCKSWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_3))->SetCtrlBKColor(Qt::green);
        if(DOOR7_CLOSESWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_3))->SetCtrlBKColor(Qt::green);
        //door8
        if(DOOR8_UNLOCK3SERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_4))->SetCtrlBKColor(Qt::green);

        if(DOOR8_POSITIONSENSERERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_4))->SetCtrlBKColor(Qt::green);

        if(DOOR8_CLOSETIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_4))->SetCtrlBKColor(Qt::green);

        if(DOOR8_OPENTIMESERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_4))->SetCtrlBKColor(Qt::green);

        if(DOOR8_SAFERELAYERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_4))->SetCtrlBKColor(Qt::green);

        if(DOOR8_NOOPENCMDERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_4))->SetCtrlBKColor(Qt::green);

        if(DOOR8_BELOCKERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_4))->SetCtrlBKColor(Qt::green);

        if(DOOR8_SAFELOOPERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_4))->SetCtrlBKColor(Qt::green);

        if(DOOR8_O0SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_4))->SetCtrlBKColor(Qt::green);

        if(DOOR8_O1SHORTERRTX_BOOL )
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_4))->SetCtrlBKColor(Qt::green);

        if(DOOR8_O2SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_4))->SetCtrlBKColor(Qt::green);
        if(DOOR8_O3SHORTERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_4))->SetCtrlBKColor(Qt::green);
        if(DOOR8_DYNAMOERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_3_4))->SetCtrlBKColor(Qt::green);
        if(DOOR8_LOCKSWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_3_4))->SetCtrlBKColor(Qt::green);
        if(DOOR8_CLOSESWERRTX_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_3_4))->SetCtrlBKColor(Qt::green);

                break;
    /*case 3:
        if(formerPageNo!=pageNo)
        {
            formerPageNo = pageNo;

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_1))->SetCtrlText(QSTR("EDCU O2输出短路故障"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_1))->SetCtrlText(QSTR("EDCU O3输出短路故障"));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_1))->SetCtrlText(QSTR(""));
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_1))->SetCtrlText(QSTR(""));

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_1))->SetCtrlText("1");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_1))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_2))->SetCtrlText("2");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_2))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_3))->SetCtrlText("3");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_3))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_4))->SetCtrlText("4");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_4))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_1))->SetCtrlText("5");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_1))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_1))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_2))->SetCtrlText("6");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_2))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_2))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_3))->SetCtrlText("7");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_3))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_3))->SetCtrlText("");

            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_4))->SetCtrlText("8");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_4))->SetCtrlText("");
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_4))->SetCtrlText("");
        }


        if(EDCUO2UOTPUTSHORTCIRCUITFAULT_MC1_DOOR1_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_1))->SetCtrlBKColor(Qt::green);

        if(EDCUO3UOTPUTSHORTCIRCUITFAULT_MC1_DOOR1_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_1))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_1))->SetCtrlBKColor(Qt::black);

        if(EDCUO2UOTPUTSHORTCIRCUITFAULT_MC1_DOOR2_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_2))->SetCtrlBKColor(Qt::green);

        if(EDCUO3UOTPUTSHORTCIRCUITFAULT_MC1_DOOR2_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_2))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_2))->SetCtrlBKColor(Qt::black);

        if(EDCUO2UOTPUTSHORTCIRCUITFAULT_MC1_DOOR3_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_3))->SetCtrlBKColor(Qt::green);

        if(EDCUO3UOTPUTSHORTCIRCUITFAULT_MC1_DOOR3_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_3))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_3))->SetCtrlBKColor(Qt::black);

        if(EDCUO2UOTPUTSHORTCIRCUITFAULT_MC1_DOOR4_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_2_4))->SetCtrlBKColor(Qt::green);

        if(EDCUO3UOTPUTSHORTCIRCUITFAULT_MC1_DOOR4_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_2_4))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_2_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_2_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_2_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_2_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_2_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_2_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_2_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_2_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_2_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_2_4))->SetCtrlBKColor(Qt::black);

        if(EDCUO2UOTPUTSHORTCIRCUITFAULT_MC2_DOOR1_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_1))->SetCtrlBKColor(Qt::green);

        if(EDCUO3UOTPUTSHORTCIRCUITFAULT_MC2_DOOR1_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_1))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_1))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_1))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_1))->SetCtrlBKColor(Qt::black);

        if(EDCUO2UOTPUTSHORTCIRCUITFAULT_MC2_DOOR2_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_2))->SetCtrlBKColor(Qt::green);

        if(EDCUO3UOTPUTSHORTCIRCUITFAULT_MC2_DOOR2_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_2))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_2))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_2))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_2))->SetCtrlBKColor(Qt::black);

        if(EDCUO2UOTPUTSHORTCIRCUITFAULT_MC2_DOOR3_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_3))->SetCtrlBKColor(Qt::green);

        if(EDCUO3UOTPUTSHORTCIRCUITFAULT_MC2_DOOR3_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_3))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_3))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_3))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_3))->SetCtrlBKColor(Qt::black);

        if(EDCUO2UOTPUTSHORTCIRCUITFAULT_MC2_DOOR4_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_3_4))->SetCtrlBKColor(Qt::green);

        if(EDCUO3UOTPUTSHORTCIRCUITFAULT_MC2_DOOR4_BOOL)
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_4))->SetCtrlBKColor(Qt::red);
        else
            ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_3_4))->SetCtrlBKColor(Qt::green);

        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_3_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_3_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_3_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_3_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_3_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_3_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_3_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_3_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_3_4))->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_3_4))->SetCtrlBKColor(Qt::black);

        break;*/
    default:
        break;
    }

}
void CDoorPage::OnDownButtonDown()
{
    CBitmapButton *bitmapButton;

    if( pageNo<DOOR_MAX_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEDOWN);
        bitmapButton->SetCtrlText("downpress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEDOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
}

void CDoorPage::OnDownButtonUp()
{
    CBitmapButton *bitmapButton;

    if( pageNo<DOOR_MAX_PAGE )
    {
        pageNo++;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEDOWN);
        bitmapButton->SetCtrlText("down.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    if( pageNo==DOOR_MAX_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEDOWN);
        bitmapButton->SetCtrlText("downgray.png");
    }
    ((CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEUP))->SetCtrlText("up.png");
}
void CDoorPage::OnUpButtonDown()
{
    CBitmapButton *bitmapButton;

    if( pageNo>DOOR_MIN_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEUP);
        bitmapButton->SetCtrlText("uppress.png");
        bitmapButton->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEUP);
        bitmapButton->SetCtrlText("upgray.png");
    }
}

void CDoorPage::OnUpButtonUp()
{
    CBitmapButton *bitmapButton;

    if( pageNo>DOOR_MIN_PAGE )
    {
        pageNo--;
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEUP);
        bitmapButton->SetCtrlText("up.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    if( pageNo==DOOR_MIN_PAGE )
    {
        bitmapButton = (CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEUP);
        bitmapButton->SetCtrlText("upgray.png");
        bitmapButton->ChangeButtonState(LBUTTON_UP);
    }
    ((CBitmapButton *)GetDlgItem(ID_PICDOOR_PAGEDOWN))->SetCtrlText("down.png");
}
void CDoorPage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}

void CDoorPage::OnInitPage()
{
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_2_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_3_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_4_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_5_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_6_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_7_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_8_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_9_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_10_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_11_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_12_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_13_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_14_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_15_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICDOOR_LABEL_16_1))->SetAlignment(Qt::AlignLeft);

}


