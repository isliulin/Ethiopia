#include "clocaliopage.h"
#include "QDebug"
LOCAL_IO_ROMDATA g_LocalIoRom_MC1_RIOM1[] =
{
/*   Connector                Signal                          LineNo      Byte   Bit  */
    {"SGN-1-X1-S(IN1)",       QSTR("Deadman Button"),                "",      6,     0},
    {"SGN-1-X1-M(IN2)",       QSTR("Driver Key"),                "",      6,     1},
    {"SGN-1-X1-P(IN3)",       QSTR("Door Bypass"),              "",      6,     2},
    {"SGN-1-X1-K(IN4)",       QSTR("Brake Release(MC)"),            "",     6,     3},
    {"SGN-1-X1-H(IN5)",       QSTR("Safety Brake"),                "",      6,     4},
    {"SGN-1-X1-C(IN6)",       QSTR("Magnet Track Brake(MC)"),            "",    6,     5},
    {"SGN-1-X1-E(IN7)",       QSTR("Brake Manually Release(MC)"),       "",       6,     6},
    {"SGN-1-X1-A(IN8)",       QSTR("Deadman Bypass"),            "",      6,     7},
    {"SGN-1-X1-N(IN9)",       QSTR("All Doors Closed"),                "",      7,     0},
    {"SGN-1-X1-J(IN10)",      QSTR("Battery Contactor"),            "",      7,     1},
    {"SGN-1-X1-D(IN11)",      QSTR("Brake Release Bypass"),            "",      7,     2},
    {"SGN-1-X1-T(IN12)",      QSTR("AC Output Contactor"),          "",       7,     3},
    {"SGN-1-X1-BB(IN13)",     QSTR("Magnet Track Brake(Tp)"),        "",     7,     4},
    {"SGN-1-X1-LL(IN14)",     QSTR("Brake Release(Tp)"),         "",    7,     5},
    {"SGN-1-X1-FF(IN15)",     QSTR("Not Used"),                    "",      7,     6},
    {"SGN-1-X1-X(IN16)",      QSTR("Not Used"),                    "",      7,     7},
    {"SGN-1-X1-MM(IN17)",     QSTR("Not Used"),                    "",      8,     0},
    {"SGN-1-X1-HH(IN18)",     QSTR("Not Used"),                    "",      8,     1},
    {"SGN-1-X1-KK(IN19)",     QSTR("Not Used"),                    "",      8,     2},
    {"SGN-1-X1-EE(IN20)",     QSTR("Not Used"),                    "",      8,     3},
//    {"",                    QSTR("备用"),                    "*****",      2,     4},
//    {"",                    QSTR("备用"),                    "*****",      2,     5},
//    {"",                    QSTR("备用"),                    "*****",      2,     6},
//    {"",                    QSTR("备用"),                    "*****",      2,     7},
//    {"",                    QSTR("备用"),                    "*****",      3,     0},
//    {"",                    QSTR("备用"),                    "*****",      3,     1},
//    {"",                    QSTR("备用"),                    "*****",      3,     2},
//    {"",                    QSTR("备用"),                    "*****",      3,     3},
//    {"",                    QSTR("备用"),                    "*****",      3,     4},
//    {"",                    QSTR("备用"),                    "*****",      3,     5},
//    {"",                    QSTR("备用"),                    "*****",      3,     6},
//    {"",                    QSTR("备用"),                    "*****",      3,     7}
};
int g_LocalIoRomMC1_RIOM1Len = sizeof(g_LocalIoRom_MC1_RIOM1)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC1_RIOM2[] =
{
/*   Connector                 Signal                          LineNo      Byte   Bit  */
    {"DI-1-X1-S(IN1)",        QSTR("Power"),                "",      0,     0},
    {"DI-1-X1-M(IN2)",        QSTR("Brake"),                "",       0,     1},
    {"DI-1-X1-P(IN3)",        QSTR("Emergency Brake"),             "",       0,     2},
    {"DI-1-X1-K(IN4)",        QSTR("Forword"),                "",       0,     3},
    {"DI-1-X1-H(IN5)",        QSTR("Back"),                "",       0,     4},
    {"DI-1-X1-C(IN6)",        QSTR("Brake 1"),                "",       0,     5},
    {"DI-1-X1-E(IN7)",        QSTR("Brake 2"),                "",       0,     6},
    {"DI-1-X1-A(IN8)",        QSTR("Brake 3"),                "",      0,     7},
    {"DI-1-X1-N(IN9)",        QSTR("Power 1"),                "",      1,     0},
    {"DI-1-X1-J(IN10)",       QSTR("Power 2"),                "",      1,     1},
    {"DI-1-X1-D(IN11)",       QSTR("Power 3"),                "",      1,     2},
    {"DI-1-X1-T(IN12)",       QSTR("Power 4"),                "",      1,     3},
    {"DI-1-X1-BB(IN13)",      QSTR("Sanding Button"),                "",       1,     4},
    {"DI-1-X1-LL(IN14)",      QSTR("Lamp Test"),                "",       1,     5},
    {"DI-1-X1-FF(IN15)",      QSTR("Propulsion OK"),             "",      1,     6},
    {"DI-1-X1-X(IN16)",       QSTR("EDB1 OK"),             "",       1,     7},
    {"DI-1-X1-MM(IN17)",      QSTR("EDB2 OK"),             "",      2,     0},
    {"DI-1-X1-HH(IN18)",      QSTR("Holding Brake Applied"),             "",     2,     1},
    {"DI-1-X1-KK(IN19)",      QSTR("Slip Indication"),             "",     2,     2},
    {"DI-1-X1-EE(IN20)",      QSTR("APS OK"),           "",     2,     3},
    {"DI-1-X1-CC(IN21)",      QSTR("Brake No Fault(MC)"),         "",     2,     4},
    {"DI-1-X1-Y(IN22)",       QSTR("Backup Mode"),                   "",     2,     5},
    {"DI-1-X1-AA(IN23)",      QSTR("Coupled"),          "",    2,     6},
    {"DI-1-X1-W(IN24)",       QSTR("Not Used"),                     "",     2,     7},
//    {"",                      QSTR("备用"),                     "*****",     11,     0},
//    {"",                      QSTR("备用"),                     "*****",     11,     1},
//    {"",                      QSTR("备用"),                     "*****",     11,     2},
//    {"",                      QSTR("备用"),                     "*****",     11,     3},
//    {"",                      QSTR("备用"),                     "*****",     11,     4},
//    {"",                      QSTR("备用"),                     "*****",     11,     5},
//    {"",                      QSTR("备用"),                     "*****",     11,     6},
//    {"",                      QSTR("备用"),                     "*****",     11,     7}
};
int g_LocalIoRomMC1_RIOM2Len = sizeof(g_LocalIoRom_MC1_RIOM2)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC1_RIOM3[] =
{
    /*   Connector                              Signal                          LineNo      Byte   Bit  */
    {"DI-2-X1-S(IN1)",                      QSTR("Emergency INV Fault"),          "",      3,     0},
    {"DI-2-X1-M(IN2)",                      QSTR("Emergency INV Breaker Closed"),       "",      3,     1},
    {"DI-2-X1-P(IN3)",                      QSTR("Emergency INV Working"),           "",     3,     2},
    {"DI-2-X1-K(IN4)",                      QSTR("H&R Selected R"),            "",     3,     3},
    {"DI-2-X1-H(IN5)",                      QSTR("H&R Selected H"),            "",     3,     4},
    {"DI-2-X1-C(IN6)",                      QSTR("Rescue"),        "",      3,     5},
    {"DI-2-X1-E(IN7)",                      QSTR("ATP Bypass"),                "",      3,     6},
    {"DI-2-X1-A(IN8)",                      QSTR("Zero Bypass"),                "",      3,     7},
    {"DI-2-X1-N(IN9)",                      QSTR("All Brake Released"),             "",      4,     0},
    {"DI-2-X1-J(IN10)",                     QSTR("VVVF Cooling FAN Breaker"),      "",      4,     1},
    {"DI-2-X1-D(IN11)",                     QSTR("Pantograph Up Button"),                "",      4,     2},
    {"DI-2-X1-T(IN12)",                     QSTR("Pantograph Down Button "),                "",      4,     3},
    {"DI-2-X1-BB(IN13)",                    QSTR("Door Permit(L)"),           "",      4,     4},
    {"DI-2-X1-LL(IN14)",                    QSTR("Door Permit(R)"),           "",      4,     5},
    {"DI-2-X1-FF(IN15)",                    QSTR("Door Open Button(L)"),           "",      4,     6},
    {"DI-2-X1-X(IN16)",                     QSTR("Door Open Button(R)"),           "",      4,     7},
    {"DI-2-X1-MM(IN17)",                    QSTR("Door Close Button"),                "",      5,     0},
    {"DI-2-X1-HH(IN18)",                    QSTR("Traction Safe Loop"),                "",      5,     1},
    {"DI-2-X1-KK(IN19)",                    QSTR("Sanding Pump Work"),             "",      5,     2},
    {"DI-2-X1-EE(IN20)",                    QSTR("Brake Big Fault(Tp)"),         "",     5,     3},
    {"DI-2-X1-CC(IN21)",                    QSTR("Brake Small Fault(Tp)"),        "",     5,     4},
    {"DI-2-X1-Y(IN22)",                     QSTR("Brake Auxiliary Release(Tp)"), "",   5,     5},
    {"DI-2-X1-AA(IN23)",                    QSTR("Not Used"),                     "",    5,     6},
    {"DI-2-X1-W(IN24)",                     QSTR("Not Used"),                     "",    5,     7},
//    {"",                      QSTR("备用"),                "*****",      15,     0},
//    {"",                      QSTR("备用"),                "*****",      15,     1},
//    {"",                      QSTR("备用"),                "*****",      15,     2},
//    {"",                      QSTR("备用"),                "*****",      15,     3},
//    {"",                      QSTR("备用"),                "*****",      15,     4},
//    {"",                      QSTR("备用"),                "*****",      15,     5},
//    {"",                      QSTR("备用"),                "*****",      15,     6},
//    {"",                      QSTR("备用"),                "*****",      15,     7}
};
int g_LocalIoRomMC1_RIOM3Len = sizeof(g_LocalIoRom_MC1_RIOM3)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC1_RIOM4[] =
{
    /*   Connector                              Signal                             LineNo      Byte   Bit  */
    {"DO-1-X1-H(OUT1)",                      QSTR("Magnet Track Closed"),          "",      13,     0},
    {"DO-1-X1-E(OUT2)",                      QSTR("Zero Signal"),       "",      13,     1},
    {"DO-1-X1-J(OUT3)",                      QSTR("Sanding Applied"),                  "",     13,     2},
    {"DO-1-X1-M(OUT4)",                      QSTR("Stopping Brake"),         "",      13,     3},
    {"DO-1-X1-K(OUT5)",                      QSTR("Holding Brake"),         "",     13,     4},
    {"DO-1-X1-N(OUT6)",                      QSTR("Sub-Brake"),         "",     13,     5},
    {"DO-1-X1-S(OUT7)",                      QSTR("Deadman Event Applied"),               "",    13,     6},
    {"DO-1-X1-P(OUT8)",                      QSTR("Ringing"),                    "",     13,     7},
    {"DO-1-X1-T(OUT9)",                      QSTR("Pantograph Lamp"),               "",     14,     0},
    {"DO-1-X1-W(OUT10)",                     QSTR("Normal Lamp Lighting"),                   "",    14,     1},
    {"DO-1-X1-U(OUT11)",                     QSTR("Fored Compressor Start"),                   "",    14,     2},
    {"DO-1-X1-X(OUT12)",                     QSTR("Not Used"),                       "",    14,     3},
    {"DO-1-X1-Y(OUT13)",                     QSTR("Reserved"),                   "",    14,     4},
    /////////////OPEN COM CLOSE duiying shenme xinhao
    {"DO-1-X1-AA(OUT14)",                   QSTR("Not Used"),                       "",    14,     5},
    {"DO-1-X1-FF(OUT15)",                    QSTR("Turn Left"),                "",     14,     6},

    {"DO-1-X1-LL(OUT16)",                    QSTR("Turn Right"),               "",      14,     7},
     ////////////
    {"DO-2-X1-H(OUT1)",                      QSTR("HSCB Close"),          "",      15,     0},
    {"DO-2-X1-E(OUT2)",                      QSTR("Turn Left Blinking"),                  "",     15,     1},
    {"DO-2-X1-J(OUT3)",                      QSTR("Turn Right Blinking"),                  "",     15,     2},
    {"DO-2-X1-M(OUT4)",                      QSTR("Cab Heat"),              "",     15,     3},
    {"DO-2-X1-K(OUT5)",                      QSTR("Emergency INV Working"),           "",     15,     4},
    {"DO-2-X1-N(OUT6)",                      QSTR("Not Used"),                   "",     15,     5},
    {"DO-2-X1-S(OUT7)",                      QSTR("Not Used"),                   "",     15,     6},
    {"DO-2-X1-P(OUT8)",                      QSTR("Heating Glass Working"),            "",      15,     7},
    {"DO-2-X1-T(OUT9)",                      QSTR("Not Used"),                    "",      16,     0},
    {"DO-2-X1-W(OUT10)",                     QSTR("Not Used"),                    "",      16,     1},
    {"DO-2-X1-U(OUT11)",                     QSTR("Not Used"),                        "",      16,     2},
    {"DO-2-X1-X(OUT12)",                     QSTR("Not Used"),                        "",      16,     3},
    {"DO-2-X1-Y(OUT13)",                     QSTR("Not Used"),                        "",      16,     4},
    ///
    {"DO-2-X1-AA(OUT14)",                   QSTR("Not Used"),                     "",      16,     5},
    {"DO-2-X1-EE(OUT15)",                   QSTR("Not Used"),                "",      16,     6},
    {"DO-2-X1-KK(OUT16)",                   QSTR("HMI Fan"),                         "",      16,     7}
};
int g_LocalIoRomMC1_RIOM4Len = sizeof(g_LocalIoRom_MC1_RIOM4)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC2_RIOM1[] =
{
/*   Connector                Signal                          LineNo      Byte   Bit  */
    {"SGN-1-X1-S(IN1)",       QSTR("Deadman Button"),                "",      30,     0},
    {"SGN-1-X1-M(IN2)",       QSTR("Driver Key"),                "",      30,     1},
    {"SGN-1-X1-P(IN3)",       QSTR("Door Bypass"),              "",      30,     2},
    {"SGN-1-X1-K(IN4)",       QSTR("Brake Release(MC)"),            "",     30,     3},
    {"SGN-1-X1-H(IN5)",       QSTR("Safety Brake"),                "",      30,     4},
    {"SGN-1-X1-C(IN6)",       QSTR("Magnet Track Brake(MC)"),            "",      30,     5},
    {"SGN-1-X1-E(IN7)",       QSTR("Brake Manually Release(MC)"),       "",       30,     6},
    {"SGN-1-X1-A(IN8)",       QSTR("Deadman Bypass"),            "",      30,     7},
    {"SGN-1-X1-N(IN9)",       QSTR("All Doors Closed"),                "",      31,     0},
    {"SGN-1-X1-J(IN10)",      QSTR("Battery Contactor"),            "",      31,     1},
    {"SGN-1-X1-D(IN11)",      QSTR("Brake Release Bypass"),            "",      31,     2},
    {"SGN-1-X1-T(IN12)",      QSTR("AC Output Contactor"),          "",      31,     3},
    {"SGN-1-X1-BB(IN13)",     QSTR("Not Used"),                   "",      31,     4},
    {"SGN-1-X1-LL(IN14)",     QSTR("Not Used"),                   "",      31,     5},
    {"SGN-1-X1-FF(IN15)",     QSTR("Pantograph Up Finished"),           "",      31,     6},
    {"SGN-1-X1-X(IN16)",      QSTR("Pantograph Down Finished"),           "",      31,     7},
    {"SGN-1-X1-MM(IN17)",     QSTR("Not Used"),                   "",      32,     0},
    {"SGN-1-X1-HH(IN18)",     QSTR("HSCB Closed"),       "",     32,     1},
    {"SGN-1-X1-KK(IN19)",     QSTR("Pantograph Motor Breaker"),     "",     32,     2},
    {"SGN-1-X1-EE(IN20)",     QSTR("Not Used"),                     "",    32,     3},
//    {"",                    QSTR("备用"),                    "*****",      7,     4},
//    {"",                    QSTR("备用"),                    "*****",      7,     5},
//    {"",                    QSTR("备用"),                    "*****",      7,     6},
//    {"",                    QSTR("备用"),                    "*****",      7,     7},
//    {"",                    QSTR("备用"),                    "*****",      43,     0},
//    {"",                    QSTR("备用"),                    "*****",      43,     1},
//    {"",                    QSTR("备用"),                    "*****",      43,     2},
//    {"",                    QSTR("备用"),                    "*****",      43,     3},
//    {"",                    QSTR("备用"),                    "*****",      43,     4},
//    {"",                    QSTR("备用"),                    "*****",      43,     5},
//    {"",                    QSTR("备用"),                    "*****",      43,     6},
//    {"",                    QSTR("备用"),                    "*****",      43,     7}
};
int g_LocalIoRomMC2_RIOM1Len = sizeof(g_LocalIoRom_MC2_RIOM1)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC2_RIOM2[] =
{
/*   Connector                 Signal                          LineNo      Byte   Bit  */
    {"DI-1-X1-S(IN1)",        QSTR("Power"),                "",      24,     0},
    {"DI-1-X1-M(IN2)",        QSTR("Brake"),                "",      24,     1},
    {"DI-1-X1-P(IN3)",        QSTR("Emergency Brake"),             "",      24,     2},
    {"DI-1-X1-K(IN4)",        QSTR("Forword"),                "",      24,     3},
    {"DI-1-X1-H(IN5)",        QSTR("Back"),                "",      24,     4},
    {"DI-1-X1-C(IN6)",        QSTR("Brake 1"),                "",      24,     5},
    {"DI-1-X1-E(IN7)",        QSTR("Brake 2"),                "",      24,     6},
    {"DI-1-X1-A(IN8)",        QSTR("Brake 3"),                "",      24,     7},
    {"DI-1-X1-N(IN9)",        QSTR("Power 1"),                "",      25,     0},
    {"DI-1-X1-J(IN10)",       QSTR("Power 2"),                "",      25,     1},
    {"DI-1-X1-D(IN11)",       QSTR("Power 3"),                "",      25,     2},
    {"DI-1-X1-T(IN12)",       QSTR("Power 4"),                "",      25,     3},
    {"DI-1-X1-BB(IN13)",      QSTR("Sanding Button"),                "",       25,     4},
    {"DI-1-X1-LL(IN14)",      QSTR("Lamp Test"),                "",       25,     5},
    {"DI-1-X1-FF(IN15)",      QSTR("Propulsion OK"),             "",      25,     6},
    {"DI-1-X1-X(IN16)",       QSTR("EDB1 OK"),             "",       25,     7},
    {"DI-1-X1-MM(IN17)",      QSTR("EDB2 OK"),             "",      26,     0},
    {"DI-1-X1-HH(IN18)",      QSTR("Holding Brake Applied"),             "",     26,     1},
    {"DI-1-X1-KK(IN19)",      QSTR("Slip Indication"),             "",     26,     2},
    {"DI-1-X1-EE(IN20)",      QSTR("APS OK"),           "",     26,     3},
    {"DI-1-X1-CC(IN21)",      QSTR("Brake No Fault(MC)"),          "",     26,     4},
    {"DI-1-X1-Y(IN22)",       QSTR("Backup Mode"),                    "",     26,     5},
    {"DI-1-X1-AA(IN23)",      QSTR("Coupled"),           "",     26,     6},
    {"DI-1-X1-W(IN24)",       QSTR("Not Used"),                     "",     26,     7},
//    {"",                      QSTR("备用"),                     "*****",     51,     0},
//    {"",                      QSTR("备用"),                     "*****",     51,     1},
//    {"",                      QSTR("备用"),                     "*****",     51,     2},
//    {"",                      QSTR("备用"),                     "*****",     51,     3},
//    {"",                      QSTR("备用"),                     "*****",     51,     4},
//    {"",                      QSTR("备用"),                     "*****",     51,     5},
//    {"",                      QSTR("备用"),                     "*****",     51,     6},
//    {"",                      QSTR("备用"),                     "*****",     51,     7}
};
int g_LocalIoRomMC2_RIOM2Len = sizeof(g_LocalIoRom_MC2_RIOM2)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC2_RIOM3[] =
{
    /*   Connector                              Signal                          LineNo      Byte   Bit  */
    {"DI-2-X1-S(IN1)",                      QSTR("Emergency INV Fault"),          "",      27,     0},
    {"DI-2-X1-M(IN2)",                      QSTR("Emergency INV Breaker Closed"),       "",      27,     1},
    {"DI-2-X1-P(IN3)",                      QSTR("Emergency INV Working"),           "",      27,     2},
    {"DI-2-X1-K(IN4)",                      QSTR("H&R Selected R"),                "",      27,     3},
    {"DI-2-X1-H(IN5)",                      QSTR("H&R Selected H"),                "",      27,     4},
    {"DI-2-X1-C(IN6)",                      QSTR("Rescue"),                "",      27,     5},
    {"DI-2-X1-E(IN7)",                      QSTR("ATP Bypass"),                "",      27,     6},
    {"DI-2-X1-A(IN8)",                      QSTR("Zero Bypass"),                    "",      27,     7},
    {"DI-2-X1-N(IN9)",                      QSTR("All Brake Released"),             "",      28,     0},
    {"DI-2-X1-J(IN10)",                     QSTR("VVVF Cooling FAN Breaker"),       "",      28,     1},
    {"DI-2-X1-D(IN11)",                     QSTR("Pantograph Up Button"),                "",      28,     2},
    {"DI-2-X1-T(IN12)",                     QSTR("Pantograph Down Button "),                "",      28,     3},
    {"DI-2-X1-BB(IN13)",                    QSTR("Door Permit(L)"),                "",      28,     4},
    {"DI-2-X1-LL(IN14)",                    QSTR("Door Permit(R)"),                "",      28,     5},
    {"DI-2-X1-FF(IN15)",                    QSTR("Door Open Button(L)"),              "",      28,     6},
    {"DI-2-X1-X(IN16)",                     QSTR("Door Open Button(R)"),              "",      28,     7},
    {"DI-2-X1-MM(IN17)",                    QSTR("Door Close Button"),                "",      29,     0},
    {"DI-2-X1-HH(IN18)",                    QSTR("Traction Safe Loop"),                "",      29,     1},
    {"DI-2-X1-KK(IN19)",                    QSTR("Sanding Pump Work"),             "",     29,     2},
    {"DI-2-X1-EE(IN20)",                    QSTR("Not Used"),                    "",      29,     3},
    {"DI-2-X1-CC(IN21)",                    QSTR("Not Used "),                   "",      29,     4},
    {"DI-2-X1-Y(IN22)",                     QSTR("Not Used"),                     "",      29,     5},
    {"DI-2-X1-AA(IN23)",                    QSTR("Not Used"),                "",      29,     6},
    {"DI-2-X1-W(IN24)",                     QSTR("Not Used"),                "",      29,     7},
//    {"",                      QSTR("备用"),                "*****",      55,     0},
//    {"",                      QSTR("备用"),                "*****",      55,     1},
//    {"",                      QSTR("备用"),                "*****",      55,     2},
//    {"",                      QSTR("备用"),                "*****",      55,     3},
//    {"",                      QSTR("备用"),                "*****",      55,     4},
//    {"",                      QSTR("备用"),                "*****",      55,     5},
//    {"",                      QSTR("备用"),                "*****",      55,     6},
//    {"",                      QSTR("备用"),                "*****",      55,     7}
};
int g_LocalIoRomMC2_RIOM3Len = sizeof(g_LocalIoRom_MC2_RIOM3)/sizeof(LOCAL_IO_ROMDATA);

LOCAL_IO_ROMDATA g_LocalIoRom_MC2_RIOM4[] =
{
    /*   Connector                              Signal                             LineNo      Byte   Bit  */
    {"DO-1-X1-H(OUT1)",                      QSTR("Magnet Track Closed"),          "",      37,     0},
    {"DO-1-X1-E(OUT2)",                      QSTR("Zero Signal"),       "",      37,     1},
    {"DO-1-X1-J(OUT3)",                      QSTR("Sanding Applied"),                  "",      37,     2},
    {"DO-1-X1-M(OUT4)",                      QSTR("Stopping Brake"),         "",      37,     3},
    {"DO-1-X1-K(OUT5)",                      QSTR("Holding Brake"),         "",      37,     4},
    {"DO-1-X1-N(OUT6)",                      QSTR("Sub-Brake"),         "",      37,     5},
    {"DO-1-X1-S(OUT7)",                      QSTR("Deadman Event Applied"),               "",      37,     6},
    {"DO-1-X1-P(OUT8)",                      QSTR("Ringing"),                    "",      37,     7},
    {"DO-1-X1-T(OUT9)",                      QSTR("Pantograph Lamp"),               "",      38,     0},
    {"DO-1-X1-W(OUT10)",                     QSTR("Normal Lamp Lighting"),                   "",      38,     1},
    {"DO-1-X1-U(OUT11)",                     QSTR("Fored Compressor Start"),                   "",      38,     2},
    {"DO-1-X1-X(OUT12)",                     QSTR("Not Used"),                       "",      38,     3},
    {"DO-1-X1-Y(OUT13)",                     QSTR("Reserved"),                   "",      38,     4},

//    //////////
    {"DO-1-X1-AA(OUT14)",                   QSTR("Not Used"),                       "",      38,     5},
    {"DO-1-X1-FF(OUT15)",                    QSTR("Turn Left"),                "",      38,     6},
    {"DO-1-X1-LL(OUT16)",                    QSTR("Turn Right"),                     "",      38,     7},
    //////
    {"DO-2-X1-H(OUT1)",                      QSTR("HSCB Close"),              "",      39,     0},
    {"DO-2-X1-E(OUT2)",                      QSTR("Turn Left Blinking"),                    "",     39,     1},
    {"DO-2-X1-J(OUT3)",                      QSTR("Turn Right Blinking"),                    "",     39,     2},
    {"DO-2-X1-M(OUT4)",                      QSTR("Cab Heat"),                     "",     39,     3},
    {"DO-2-X1-K(OUT5)",                      QSTR("Emergency INV Working"),                     "",     39,     4},
    {"DO-2-X1-N(OUT6)",                      QSTR("Not Used"),                   "",     39,     5},
    {"DO-2-X1-S(OUT7)",                      QSTR("Not Used"),                   "",     39,     6},
    {"DO-2-X1-P(OUT8)",                      QSTR("Heating Glass Working"),                "",      39,     7},
    {"DO-2-X1-T(OUT9)",                      QSTR("Not Used"),                        "",      40,     0},
    {"DO-2-X1-W(OUT10)",                     QSTR("Not Used"),               "",      40,     1},
    {"DO-2-X1-U(OUT11)",                     QSTR("Not Used"),                        "",      40,     2},
    {"DO-2-X1-X(OUT12)",                     QSTR("Not Used"),                        "",      40,     3},
    {"DO-2-X1-Y(OUT13)",                     QSTR("Not Used"),                        "",      40,     4},
  ///////
    {"DO-2-X1-AA(OUT14)",                   QSTR("Not Used"),                     "",     40,     5},
    {"DO-2-X1-EE(OUT15)",                   QSTR("Not Used"),                "",     40,     6},
    {"DO-2-X1-KK(OUT16)",                   QSTR("HMI Fan"),                        "",      40,     7}

};
int g_LocalIoRomMC2_RIOM4Len = sizeof(g_LocalIoRom_MC2_RIOM4)/sizeof(LOCAL_IO_ROMDATA);

ROMDATA g_PicRom_LocalIO[] =
{
    /*string             font         rc                       foreground color         background color      control type            ID           */

/* Title */
  {QSTR("Connector"),          D_FONT(6),      QRect( 13, 35, 80, 20),   Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  {QSTR("Signal"),            D_FONT(6),      QRect( 101, 35, 55, 20),   Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  //{QSTR("Line"),            D_FONT(6),      QRect(224, 35, 40, 20),   Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  {QSTR("State"),            D_FONT(6),      QRect(274, 35, 40, 20),   Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  {QSTR("Connector"),          D_FONT(6),      QRect(326, 35, 80, 20),   Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  {QSTR("Signal"),           D_FONT(6),      QRect(416, 35, 55, 20),    Qt::yellow,           Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  //{QSTR("Line"),           D_FONT(6),      QRect(537, 35, 40, 20),    Qt::yellow,           Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },
  {QSTR("State"),           D_FONT(6),      QRect(593, 35, 40, 20),    Qt::yellow,           Qt::black,            CONTROL_LABEL,          ID_IGNORE                      },

/* H line */
  {"",                   D_FONT_BOLD(8), QRect(  8, 50+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8, 72+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8, 94+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,116+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,138+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,160+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,182+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,204+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,226+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,248+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,270+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,292+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,314+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,336+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,358+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,380+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,402+5,622,  1), Qt::yellow,            Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(  8,424+5,622,  1), Qt::cyan,              Qt::black,            CONTROL_LINE,           ID_IGNORE                        },

/* V line */
  {"",                   D_FONT_BOLD(8), QRect(  8, 50+5,  1,375), QColor(250,250,250),   Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(320, 50+5,  1,375), QColor(250,250,250),   Qt::black,            CONTROL_LINE,           ID_IGNORE                        },
  {"",                   D_FONT_BOLD(8), QRect(630, 50+5,  1,375), QColor(250,250,250),   Qt::black,            CONTROL_LINE,           ID_IGNORE                        },

/* label */
/* Connector */
  {"",                   D_FONT(4)     , QRect( 10, 51+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10, 73+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10, 95+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,117+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,139+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,161+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,183+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,205+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,227+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,249+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,271+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,293+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,315+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,337+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,359+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,381+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_01_CONNECTOR },
  {"",                   D_FONT(4)     , QRect( 10,403+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_01_CONNECTOR },

  {"",                   D_FONT(4)     , QRect(322, 51+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322, 73+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322, 95+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,117+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,139+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,161+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,183+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,205+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,227+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,249+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,271+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,293+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,315+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,337+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,359+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,381+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_02_CONNECTOR },
  {"",                   D_FONT(4)     , QRect(322,403+8, 94, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_02_CONNECTOR },

/* Signal */
  {"",                   D_FONT(4)     , QRect(112, 51+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112, 73+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112, 95+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,117+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,139+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,161+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,183+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,205+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,227+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,249+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,271+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,293+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,315+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,337+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,359+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,381+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_01_SIGNAL },
  {"",                   D_FONT(4)     , QRect(112,403+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_01_SIGNAL },

  {"",                   D_FONT(4)     , QRect(425, 51+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425, 73+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425, 95+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,117+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,139+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,161+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,183+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,205+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,227+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,249+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,271+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,293+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,315+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,337+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,359+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,381+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_02_SIGNAL },
  {"",                   D_FONT(4)     , QRect(425,403+8,190, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_02_SIGNAL },

/* LineNo */
  {"",                   D_FONT(6)     , QRect(270, 51+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270, 73+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270, 95+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,117+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,139+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,161+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,183+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,205+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,227+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,249+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,271+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,293+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,315+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,337+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,359+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,381+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_01_LINENO },
  {"",                   D_FONT(6)     , QRect(270,403+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_01_LINENO },

  {"",                   D_FONT(6)     , QRect(583, 51+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583, 73+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583, 95+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,117+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,139+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,161+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,183+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,205+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,227+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,249+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,271+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,293+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,315+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,337+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,359+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,381+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_02_LINENO },
  {"",                   D_FONT(6)     , QRect(583,403+8, 7, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_02_LINENO },

/* State */
  {"",                   D_FONT(6)     , QRect(279, 51+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279, 73+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279, 95+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,117+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,139+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,161+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,183+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,205+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,227+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,249+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,271+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,293+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,315+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,337+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,359+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,381+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_01_STATE  },
  {"",                   D_FONT(6)     , QRect(279,403+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_01_STATE  },

  {"",                   D_FONT(6)     , QRect(592, 51+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_01_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592, 73+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_02_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592, 95+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_03_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,117+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_04_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,139+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_05_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,161+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_06_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,183+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_07_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,205+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_08_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,227+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_09_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,249+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_10_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,271+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_11_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,293+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_12_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,315+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_13_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,337+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_14_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,359+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_15_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,381+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_16_02_STATE  },
  {"",                   D_FONT(6)     , QRect(592,403+8, 37, 17), Qt::yellow,            Qt::black,            CONTROL_LABEL,          ID_LOCALIO_LABEL_17_02_STATE  },

  {"",                   D_FONT(6),      QRect(  0, 438,640,  2),  QColor(250,250,250),  QColor(50, 50, 50),    CONTROL_LINE,           ID_IGNORE                        },

  {"MC1_SGN",            D_FONT_BOLD(8),   QRect( 10, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC1_RIOM1     },
  {"MC1_DI1",            D_FONT_BOLD(8),   QRect( 67, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC1_RIOM2     },
  {"MC1_DI2",            D_FONT_BOLD(8),   QRect(124, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC1_RIOM3     },
  {"MC1_DO",             D_FONT_BOLD(8),   QRect(181, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC1_RIOM4     },
  {"MC1_AX",             D_FONT_BOLD(8),   QRect(238, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC1_RIOM5     },
  {"MC2_SGN",            D_FONT_BOLD(8),   QRect(295, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC2_RIOM1     },
  {"MC2_DI1",            D_FONT_BOLD(8),   QRect(352, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC2_RIOM2     },
  {"MC2_DI2",            D_FONT_BOLD(8),   QRect(409, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC2_RIOM3     },
  {"MC2_DO",             D_FONT_BOLD(8),   QRect(466, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC2_RIOM4     },
  {"MC2_AX",             D_FONT_BOLD(8),   QRect(523, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_MC2_RIOM5     },
  {QSTR("Quit"),          D_FONT_BOLD(8),   QRect(580, 445, 50, 30),    Qt::black,            Qt::yellow,           CONTROL_BUTTON,         ID_LOCALIO_BTN_QUIT    },

};
int g_LocalIORomLen = sizeof(g_PicRom_LocalIO)/sizeof(ROMDATA);

CLocalIOPage::CLocalIOPage()
{
    m_pagetype = E_MC1_RIOM1;
}

BEGIN_MESSAGE_MAP(CLocalIOPage,CPage)
        ON_UPDATE_PAGE()

        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC1_RIOM1,  OnMC1_RIOM1ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC1_RIOM2,  OnMC1_RIOM2ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC1_RIOM3,  OnMC1_RIOM3ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC1_RIOM4,  OnMC1_RIOM4ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC1_RIOM5,  OnMC1_RIOM5ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC2_RIOM1,  OnMC2_RIOM1ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC2_RIOM2,  OnMC2_RIOM2ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC2_RIOM3,  OnMC2_RIOM3ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC2_RIOM4,  OnMC2_RIOM4ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_MC2_RIOM5,  OnMC2_RIOM5ButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_BTN_QUIT, OnQuitButtonDown)


        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_01_01_CONNECTOR,  OnID_LOCALIO_LABEL_01_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_02_01_CONNECTOR,  OnID_LOCALIO_LABEL_02_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_03_01_CONNECTOR,  OnID_LOCALIO_LABEL_03_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_04_01_CONNECTOR,  OnID_LOCALIO_LABEL_04_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_05_01_CONNECTOR,  OnID_LOCALIO_LABEL_05_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_06_01_CONNECTOR,  OnID_LOCALIO_LABEL_06_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_07_01_CONNECTOR,  OnID_LOCALIO_LABEL_07_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_08_01_CONNECTOR,  OnID_LOCALIO_LABEL_08_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_09_01_CONNECTOR,  OnID_LOCALIO_LABEL_09_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_10_01_CONNECTOR,  OnID_LOCALIO_LABEL_10_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_11_01_CONNECTOR,  OnID_LOCALIO_LABEL_11_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_12_01_CONNECTOR,  OnID_LOCALIO_LABEL_12_01_CONNECTORButtonDown)
//        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_13_01_CONNECTOR,  OnID_LOCALIO_LABEL_13_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_14_01_CONNECTOR,  OnID_LOCALIO_LABEL_14_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_15_01_CONNECTOR,  OnID_LOCALIO_LABEL_15_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_16_01_CONNECTOR,  OnID_LOCALIO_LABEL_16_01_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_17_01_CONNECTOR,  OnID_LOCALIO_LABEL_17_01_CONNECTORButtonDown)

        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_01_02_CONNECTOR,  OnID_LOCALIO_LABEL_01_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_02_02_CONNECTOR,  OnID_LOCALIO_LABEL_02_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_03_02_CONNECTOR,  OnID_LOCALIO_LABEL_03_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_04_02_CONNECTOR,  OnID_LOCALIO_LABEL_04_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_05_02_CONNECTOR,  OnID_LOCALIO_LABEL_05_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_06_02_CONNECTOR,  OnID_LOCALIO_LABEL_06_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_07_02_CONNECTOR,  OnID_LOCALIO_LABEL_07_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_08_02_CONNECTOR,  OnID_LOCALIO_LABEL_08_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_09_02_CONNECTOR,  OnID_LOCALIO_LABEL_09_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_10_02_CONNECTOR,  OnID_LOCALIO_LABEL_10_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_11_02_CONNECTOR,  OnID_LOCALIO_LABEL_11_02_CONNECTORButtonDown)
//        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_12_02_CONNECTOR,  OnID_LOCALIO_LABEL_12_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_13_02_CONNECTOR,  OnID_LOCALIO_LABEL_13_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_14_02_CONNECTOR,  OnID_LOCALIO_LABEL_14_02_CONNECTORButtonDown)
        ON_LBUTTONDOWN(ID_LOCALIO_LABEL_15_02_CONNECTOR,  OnID_LOCALIO_LABEL_15_02_CONNECTORButtonDown)


        ON_LBUTTONUP(ID_LOCALIO_BTN_QUIT, OnQuitButtonUp)

END_MESSAGE_MAP()

void CLocalIOPage::OnUpdatePage()
{
    //qDebug()<<"dis";
    if(!(MAIN_VCUMS_BOOL))
    {
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->SetCtrlText("Disable");
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->SetCtrlText("Disable");
    }else
    {
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->SetCtrlText("MC1_DO");
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->SetCtrlText("MC2_DO");
    }
    DrawPage();
}

void CLocalIOPage::OnMC1_RIOM1ButtonDown()
{
    m_pagetype = E_MC1_RIOM1;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC1_RIOM2ButtonDown()
{
    m_pagetype = E_MC1_RIOM2;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC1_RIOM3ButtonDown()
{
    m_pagetype = E_MC1_RIOM3;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC1_RIOM4ButtonDown()
{
    if(MAIN_VCUMS_BOOL)
    {
        m_pagetype = E_MC1_RIOM4;
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
        DrawPage();
    }

}

void CLocalIOPage::OnMC1_RIOM5ButtonDown()
{
    m_pagetype = E_MC1_RIOM5;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC2_RIOM1ButtonDown()
{
    m_pagetype = E_MC2_RIOM1;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC2_RIOM2ButtonDown()
{
    m_pagetype = E_MC2_RIOM2;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC2_RIOM3ButtonDown()
{
    m_pagetype = E_MC2_RIOM3;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
    DrawPage();
}

void CLocalIOPage::OnMC2_RIOM4ButtonDown()
{
    if(MAIN_VCUMS_BOOL)
    {
        m_pagetype = E_MC2_RIOM4;
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);
        DrawPage();
    }

}

void CLocalIOPage::OnMC2_RIOM5ButtonDown()
{
    m_pagetype = E_MC2_RIOM5;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_DOWN);
    DrawPage();
}
void CLocalIOPage::OnID_LOCALIO_LABEL_01_01_CONNECTORButtonDown()
{
    //ASSERT((0>= 1) && (100 <= 34));
    qDebug() << TEST_Factory_BOOL;

    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL = !g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL = !g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_02_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL = !g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL = !g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_03_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_SANDINGSIGNAL_MC1_RIOM_BOOL = !g_SANDINGSIGNAL_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_SANDINGSIGNAL_MC2_RIOM_BOOL = !g_SANDINGSIGNAL_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_04_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_STOPPINGBRAKE_MC1_RIOM_BOOL = !g_STOPPINGBRAKE_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_STOPPINGBRAKE_MC2_RIOM_BOOL = !g_STOPPINGBRAKE_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_05_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_HOLDINGBRAKE_MC1_RIOM_BOOL = !g_HOLDINGBRAKE_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_HOLDINGBRAKE_MC2_RIOM_BOOL = !g_HOLDINGBRAKE_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_06_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_SUBSTEPBRAKE_MC1_RIOM_BOOL = !g_SUBSTEPBRAKE_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_SUBSTEPBRAKE_MC2_RIOM_BOOL = !g_SUBSTEPBRAKE_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_07_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DEADMAN_MC1_RIOM_BOOL = !g_DEADMAN_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DEADMAN_MC2_RIOM_BOOL = !g_DEADMAN_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_08_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_BEEP_MC1_RIOM_BOOL = !g_BEEP_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_BEEP_MC2_RIOM_BOOL = !g_BEEP_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_09_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL = !g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL = !g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_10_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_NORMALLIGHT_MC1_RIOM_BOOL = !g_NORMALLIGHT_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_NORMALLIGHT_MC2_RIOM_BOOL = !g_NORMALLIGHT_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_11_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_FORCEDPUMPFAN_MC1_RIOM_BOOL = !g_FORCEDPUMPFAN_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_FORCEDPUMPFAN_MC2_RIOM_BOOL = !g_FORCEDPUMPFAN_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_12_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL = !g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL = !g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL;
        }
    }

}
//void CLocalIOPage::OnID_LOCALIO_LABEL_13_01_CONNECTORButtonDown()
//{
//    if(InstructionTest2_Bool)
//    {
//            if(m_pagetype==E_MC1_RIOM4)
//            {
//                g_DO_1_X1_Y_OUT13_MC1_RIOM_BOOL = !g_DO_1_X1_Y_OUT13_MC1_RIOM_BOOL;
//            }
//            else if(m_pagetype==E_MC2_RIOM4)
//            {
//                g_DO_1_X1_Y_OUT13_MC2_RIOM_BOOL = !g_DO_1_X1_Y_OUT13_MC2_RIOM_BOOL;
//            }
//    }

//}
void CLocalIOPage::OnID_LOCALIO_LABEL_14_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL = !g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL = !g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_15_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_LEFTTURNOUT_MC1_RIOM_BOOL = !g_LEFTTURNOUT_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_LEFTTURNOUT_MC2_RIOM_BOOL = !g_LEFTTURNOUT_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_16_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_RIGHTTURNOUT_MC1_RIOM_BOOL = !g_RIGHTTURNOUT_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_RIGHTTURNOUT_MC2_RIOM_BOOL = !g_RIGHTTURNOUT_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_17_01_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL = !g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL = !g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL;
        }
    }
}
void CLocalIOPage::OnID_LOCALIO_LABEL_01_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_LEFTTURN_MC1_RIOM_BOOL = !g_LEFTTURN_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_LEFTTURN_MC2_RIOM_BOOL = !g_LEFTTURN_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_02_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_RIGHTTURN_MC1_RIOM_BOOL = !g_RIGHTTURN_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_RIGHTTURN_MC2_RIOM_BOOL = !g_RIGHTTURN_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_03_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_CABELECTRIC_MC1_RIOM_BOOL = !g_CABELECTRIC_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_CABELECTRIC_MC2_RIOM_BOOL = !g_CABELECTRIC_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_04_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_EMGCINVERTERSTART_MC1_RIOM_BOOL = !g_EMGCINVERTERSTART_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_EMGCINVERTERSTART_MC2_RIOM_BOOL = !g_EMGCINVERTERSTART_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_05_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_N_OUT6_MC1_RIOM_BOOL = !g_DO_2_X1_N_OUT6_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_N_OUT6_MC2_RIOM_BOOL = !g_DO_2_X1_N_OUT6_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_06_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_S_OUT7_MC1_RIOM_BOOL = !g_DO_2_X1_S_OUT7_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_S_OUT7_MC2_RIOM_BOOL = !g_DO_2_X1_S_OUT7_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_07_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_FRONTGLASSHEAT_MC1_RIOM_BOOL = !g_FRONTGLASSHEAT_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_FRONTGLASSHEAT_MC2_RIOM_BOOL = !g_FRONTGLASSHEAT_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_08_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_T_OUT9_MC1_RIOM_BOOL = !g_DO_2_X1_T_OUT9_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_T_OUT9_MC2_RIOM_BOOL = !g_DO_2_X1_T_OUT9_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_09_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_W_OUT10_MC1_RIOM_BOOL = !g_DO_2_X1_W_OUT10_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_W_OUT10_MC2_RIOM_BOOL = !g_DO_2_X1_W_OUT10_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_10_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL = !g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL = !g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_11_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL = !g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL = !g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL;
        }
    }

}
//void CLocalIOPage::OnID_LOCALIO_LABEL_12_02_CONNECTORButtonDown()
//{
//    if(InstructionTest2_Bool)
//    {
//        if(m_pagetype==E_MC1_RIOM4)
//        {
//            g_DO_2_X1_Y_OUT13_MC1_RIOM_BOOL = !g_DO_2_X1_Y_OUT13_MC1_RIOM_BOOL;
//        }
//        else if(m_pagetype==E_MC2_RIOM4)
//        {
//            g_DO_2_X1_Y_OUT13_MC2_RIOM_BOOL = !g_DO_2_X1_Y_OUT13_MC2_RIOM_BOOL;
//        }
//    }

//}
void CLocalIOPage::OnID_LOCALIO_LABEL_13_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_BB_OUT14_MC1_RIOM_BOOL = !g_DO_2_X1_BB_OUT14_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_BB_OUT14_MC2_RIOM_BOOL = !g_DO_2_X1_BB_OUT14_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_14_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_BB_OUT15_MC1_RIOM_BOOL = !g_DO_2_X1_BB_OUT15_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_BB_OUT15_MC2_RIOM_BOOL = !g_DO_2_X1_BB_OUT15_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnID_LOCALIO_LABEL_15_02_CONNECTORButtonDown()
{
    if(TEST_Factory_BOOL)
    {
        if(m_pagetype==E_MC1_RIOM4)
        {
            g_DO_2_X1_BB_OUT16_MC1_RIOM_BOOL = !g_DO_2_X1_BB_OUT16_MC1_RIOM_BOOL;
        }
        else if(m_pagetype==E_MC2_RIOM4)
        {
            g_DO_2_X1_BB_OUT16_MC2_RIOM_BOOL = !g_DO_2_X1_BB_OUT16_MC2_RIOM_BOOL;
        }
    }

}
void CLocalIOPage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CLocalIOPage::OnQuitButtonUp()
{
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

void CLocalIOPage::DrawTable(LOCAL_IO_ROMDATA *pData, uint cnt)
{
    uint i;

    if(NULL != pData)
    {
        for(i=1;i<=34;i++)
        {
            if (i <= cnt)
            {
                DrawLine(pData, i);
                pData++;
            }
            else
            {
                DrawLine(NULL, i);
            }
        }
    }
    else
    {
        for(i=1;i<=34;i++)
            DrawLine(NULL, i);
    }

}

void CLocalIOPage::DrawLine(LOCAL_IO_ROMDATA *pData, uint linenum)
{
    ASSERT((linenum >= 1) && (linenum <= 34));
    uint connector_id, signal_id, lineno_id, state_id;
    connector_id = GetConnectorLabelId(linenum);
    signal_id    = GetSignalLabelId(linenum);
    lineno_id    = GetLineNoLabelId(linenum);
    state_id     = GetStateLabelId(linenum);

    if(m_pagetype==E_MC1_RIOM4)
    {
        if(TEST_Factory_BOOL)
        {
            if(g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL)
            {
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::red);
                qDebug() << "24";
            }
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_SANDINGSIGNAL_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_STOPPINGBRAKE_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_HOLDINGBRAKE_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_SUBSTEPBRAKE_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DEADMAN_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_BEEP_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_NORMALLIGHT_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_FORCEDPUMPFAN_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);

    //        if(g_DO_1_X1_Y_OUT13_MC1_RIOM_BOOL)
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::red);
    //        else
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_LEFTTURNOUT_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_RIGHTTURNOUT_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_LEFTTURN_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_RIGHTTURN_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_CABELECTRIC_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_EMGCINVERTERSTART_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_N_OUT6_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_S_OUT7_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_FRONTGLASSHEAT_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_T_OUT9_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_W_OUT10_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);

    //        if(g_DO_2_X1_Y_OUT13_MC1_RIOM_BOOL)
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::red);
    //        else
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_BB_OUT14_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_BB_OUT15_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_BB_OUT16_MC1_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        }
        else
        {
            g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL = false;
            g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL = false;
            g_SANDINGSIGNAL_MC1_RIOM_BOOL = false;
            g_STOPPINGBRAKE_MC1_RIOM_BOOL = false;
            g_HOLDINGBRAKE_MC1_RIOM_BOOL = false;
            g_SUBSTEPBRAKE_MC1_RIOM_BOOL = false;
            g_DEADMAN_MC1_RIOM_BOOL = false;
            g_BEEP_MC1_RIOM_BOOL = false;
            g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL = false;
            g_NORMALLIGHT_MC1_RIOM_BOOL = false;
            g_FORCEDPUMPFAN_MC1_RIOM_BOOL = false;
            g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL = false;
//            g_DO_1_X1_Y_OUT13_MC1_RIOM_BOOL = false;
            g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL = false;
            g_LEFTTURNOUT_MC1_RIOM_BOOL = false;
            g_RIGHTTURNOUT_MC1_RIOM_BOOL = false;
            g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL = false;
            g_LEFTTURN_MC1_RIOM_BOOL = false;
            g_RIGHTTURN_MC1_RIOM_BOOL = false;
            g_ELECTRIC1_MC1_RIOM_BOOL = false;
            g_ELECTRIC2_MC1_RIOM_BOOL = false;
            g_CABELECTRIC_MC1_RIOM_BOOL = false;
            g_BATTERYHEAT_MC1_RIOM_BOOL = false;
            g_FRONTGLASSHEAT_MC1_RIOM_BOOL = false;
            g_ZEROSPEEDBYPASS_MC1_RIOM_BOOL = false;
            g_EMGCINVERTERSTART_MC1_RIOM_BOOL = false;
            g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL = false;
            g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL = false;
//            g_DO_2_X1_Y_OUT13_MC1_RIOM_BOOL = false;
            g_FORCEDROPPANTOGRAPH_MC1_RIOM_BOOL = false;
            g_DO_2_X1_EE_OPEN15_MC1_RIOM_BOOL = false;
            g_DO_2_X1_KK_OPEN16_MC1_RIOM_BOOL = false;
            g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL = false;
            g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL = false;
            g_SANDINGSIGNAL_MC2_RIOM_BOOL = false;
            g_STOPPINGBRAKE_MC2_RIOM_BOOL = false;
            g_HOLDINGBRAKE_MC2_RIOM_BOOL = false;
            g_SUBSTEPBRAKE_MC2_RIOM_BOOL = false;
            g_DEADMAN_MC2_RIOM_BOOL = false;
            g_BEEP_MC2_RIOM_BOOL = false;
            g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL = false;
            g_NORMALLIGHT_MC2_RIOM_BOOL = false;
            g_FORCEDPUMPFAN_MC2_RIOM_BOOL = false;
            g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL = false;
//            g_DO_1_X1_Y_OUT13_MC2_RIOM_BOOL = false;
            g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL = false;
            g_LEFTTURNOUT_MC2_RIOM_BOOL = false;
            g_RIGHTTURNOUT_MC2_RIOM_BOOL = false;
            g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL = false;
            g_LEFTTURN_MC2_RIOM_BOOL = false;
            g_RIGHTTURN_MC2_RIOM_BOOL = false;
            g_ELECTRIC1_MC2_RIOM_BOOL = false;
            g_ELECTRIC2_MC2_RIOM_BOOL = false;
            g_CABELECTRIC_MC2_RIOM_BOOL = false;
            g_BATTERYHEAT_MC2_RIOM_BOOL = false;
            g_FRONTGLASSHEAT_MC2_RIOM_BOOL = false;
            g_ZEROSPEEDBYPASS_MC2_RIOM_BOOL = false;
            g_EMGCINVERTERSTART_MC2_RIOM_BOOL = false;
            g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL = false;
            g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL = false;
//            g_DO_2_X1_Y_OUT13_MC2_RIOM_BOOL = false;
            g_FORCEDROPPANTOGRAPH_MC2_RIOM_BOOL = false;
            g_DO_2_X1_EE_OPEN15_MC2_RIOM_BOOL = false;
            g_DO_2_X1_KK_OPEN16_MC2_RIOM_BOOL = false;

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        }

    }
    else if(m_pagetype==E_MC2_RIOM4)
    {
        if(TEST_Factory_BOOL)
        {
            if(g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_SANDINGSIGNAL_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_STOPPINGBRAKE_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_HOLDINGBRAKE_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_SUBSTEPBRAKE_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DEADMAN_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_BEEP_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_NORMALLIGHT_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_FORCEDPUMPFAN_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);

    //        if(g_DO_1_X1_Y_OUT13_MC2_RIOM_BOOL)
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::red);
    //        else
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_LEFTTURNOUT_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_RIGHTTURNOUT_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_LEFTTURN_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_RIGHTTURN_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_CABELECTRIC_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_EMGCINVERTERSTART_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_N_OUT6_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_S_OUT7_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_FRONTGLASSHEAT_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_T_OUT9_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_W_OUT10_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);

    //        if(g_DO_2_X1_Y_OUT13_MC2_RIOM_BOOL)
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::red);
    //        else
    //            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_BB_OUT14_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_BB_OUT15_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            if(g_DO_2_X1_BB_OUT16_MC2_RIOM_BOOL)
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::red);
            else
                ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        }
        else
        {
            g_MAGNETICTRACKBRAKECLOSECMD_MC1_RIOM_BOOL = false;
            g_ZEROSPEEDSINGAL_MC1_RIOM_BOOL = false;
            g_SANDINGSIGNAL_MC1_RIOM_BOOL = false;
            g_STOPPINGBRAKE_MC1_RIOM_BOOL = false;
            g_HOLDINGBRAKE_MC1_RIOM_BOOL = false;
            g_SUBSTEPBRAKE_MC1_RIOM_BOOL = false;
            g_DEADMAN_MC1_RIOM_BOOL = false;
            g_BEEP_MC1_RIOM_BOOL = false;
            g_PANTOGRAPHSTATELIGHT_MC1_RIOM_BOOL = false;
            g_NORMALLIGHT_MC1_RIOM_BOOL = false;
            g_FORCEDPUMPFAN_MC1_RIOM_BOOL = false;
            g_DO_1_X1_X_OUT12_MC1_RIOM_BOOL = false;
//            g_DO_1_X1_Y_OUT13_MC1_RIOM_BOOL = false;
            g_DO_1_X1_AA_OPEN14_MC1_RIOM_BOOL = false;
            g_LEFTTURNOUT_MC1_RIOM_BOOL = false;
            g_RIGHTTURNOUT_MC1_RIOM_BOOL = false;
            g_HIGHSPEEDCIRCUITBREAKERSTATE_MC1_RIOM_BOOL = false;
            g_LEFTTURN_MC1_RIOM_BOOL = false;
            g_RIGHTTURN_MC1_RIOM_BOOL = false;
            g_ELECTRIC1_MC1_RIOM_BOOL = false;
            g_ELECTRIC2_MC1_RIOM_BOOL = false;
            g_CABELECTRIC_MC1_RIOM_BOOL = false;
            g_BATTERYHEAT_MC1_RIOM_BOOL = false;
            g_FRONTGLASSHEAT_MC1_RIOM_BOOL = false;
            g_ZEROSPEEDBYPASS_MC1_RIOM_BOOL = false;
            g_EMGCINVERTERSTART_MC1_RIOM_BOOL = false;
            g_DO_2_X1_U_OUT11_MC1_RIOM_BOOL = false;
            g_DO_2_X1_X_OUT12_MC1_RIOM_BOOL = false;
//            g_DO_2_X1_Y_OUT13_MC1_RIOM_BOOL = false;
            g_FORCEDROPPANTOGRAPH_MC1_RIOM_BOOL = false;
            g_DO_2_X1_EE_OPEN15_MC1_RIOM_BOOL = false;
            g_DO_2_X1_KK_OPEN16_MC1_RIOM_BOOL = false;
            g_MAGNETICTRACKBRAKECLOSECMD_MC2_RIOM_BOOL = false;
            g_ZEROSPEEDSINGAL_MC2_RIOM_BOOL = false;
            g_SANDINGSIGNAL_MC2_RIOM_BOOL = false;
            g_STOPPINGBRAKE_MC2_RIOM_BOOL = false;
            g_HOLDINGBRAKE_MC2_RIOM_BOOL = false;
            g_SUBSTEPBRAKE_MC2_RIOM_BOOL = false;
            g_DEADMAN_MC2_RIOM_BOOL = false;
            g_BEEP_MC2_RIOM_BOOL = false;
            g_PANTOGRAPHSTATELIGHT_MC2_RIOM_BOOL = false;
            g_NORMALLIGHT_MC2_RIOM_BOOL = false;
            g_FORCEDPUMPFAN_MC2_RIOM_BOOL = false;
            g_DO_1_X1_X_OUT12_MC2_RIOM_BOOL = false;
//            g_DO_1_X1_Y_OUT13_MC2_RIOM_BOOL = false;
            g_DO_1_X1_AA_OPEN14_MC2_RIOM_BOOL = false;
            g_LEFTTURNOUT_MC2_RIOM_BOOL = false;
            g_RIGHTTURNOUT_MC2_RIOM_BOOL = false;
            g_HIGHSPEEDCIRCUITBREAKERSTATE_MC2_RIOM_BOOL = false;
            g_LEFTTURN_MC2_RIOM_BOOL = false;
            g_RIGHTTURN_MC2_RIOM_BOOL = false;
            g_ELECTRIC1_MC2_RIOM_BOOL = false;
            g_ELECTRIC2_MC2_RIOM_BOOL = false;
            g_CABELECTRIC_MC2_RIOM_BOOL = false;
            g_BATTERYHEAT_MC2_RIOM_BOOL = false;
            g_FRONTGLASSHEAT_MC2_RIOM_BOOL = false;
            g_ZEROSPEEDBYPASS_MC2_RIOM_BOOL = false;
            g_EMGCINVERTERSTART_MC2_RIOM_BOOL = false;
            g_DO_2_X1_U_OUT11_MC2_RIOM_BOOL = false;
            g_DO_2_X1_X_OUT12_MC2_RIOM_BOOL = false;
//            g_DO_2_X1_Y_OUT13_MC2_RIOM_BOOL = false;
            g_FORCEDROPPANTOGRAPH_MC2_RIOM_BOOL = false;
            g_DO_2_X1_EE_OPEN15_MC2_RIOM_BOOL = false;
            g_DO_2_X1_KK_OPEN16_MC2_RIOM_BOOL = false;

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);

            ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        }

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_02_CONNECTOR))->SetTxtColor(Qt::yellow);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_02_CONNECTOR))->SetTxtColor(Qt::yellow);

    }

    if (NULL != pData)
    {
        ((CLabel *)GetDlgItem(connector_id))->SetCtrlText(pData->connector);
        ((CLabel *)GetDlgItem(signal_id))->SetCtrlText(pData->signal);
        ((CLabel *)GetDlgItem(lineno_id))->SetCtrlText(pData->lineno);
        ((CLabel *)GetDlgItem(state_id))->SetCtrlText("");

        if (Bit(pData->byte, pData->bit))
        {
            ((CLabel *)GetDlgItem(state_id))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(state_id))->SetCtrlBKColor(Qt::gray);
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(connector_id))->SetCtrlText("");
        ((CLabel *)GetDlgItem(signal_id))->SetCtrlText("");
        ((CLabel *)GetDlgItem(lineno_id))->SetCtrlText("");
        ((CLabel *)GetDlgItem(state_id))->SetCtrlText("");
        ((CLabel *)GetDlgItem(state_id))->SetCtrlBKColor(Qt::black);
    }
}

uint CLocalIOPage::GetConnectorLabelId(uint linenum)
{
    ASSERT((linenum >= 1) && (linenum <= 34));
    uint id = ID_LOCALIO_LABEL_01_01_CONNECTOR;
    id += (linenum - 1);
    return id;
}

uint CLocalIOPage::GetSignalLabelId(uint linenum)
{
    ASSERT((linenum >= 1) && (linenum <= 34));
    uint id = ID_LOCALIO_LABEL_01_01_SIGNAL;
    id += (linenum - 1);
    return id;
}

uint CLocalIOPage::GetLineNoLabelId(uint linenum)
{
    ASSERT((linenum >= 1) && (linenum <= 34));
    uint id = ID_LOCALIO_LABEL_01_01_LINENO;
    id += (linenum - 1);
    return id;
}

uint CLocalIOPage::GetStateLabelId(uint linenum)
{
    ASSERT((linenum >= 1) && (linenum <= 34));
    uint id = ID_LOCALIO_LABEL_01_01_STATE;
    id += (linenum - 1);
    return id;
}

void CLocalIOPage::DrawPage()
{
    ASSERT((m_pagetype >= E_MC1_RIOM1) && (m_pagetype <= E_MC2_RIOM5));
    LOCAL_IO_ROMDATA *pData;

    switch(m_pagetype)
    {
    case E_MC1_RIOM1:
        pData = &g_LocalIoRom_MC1_RIOM1[0];
        DrawTable(pData, g_LocalIoRomMC1_RIOM1Len);
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_CONNECTOR))->SetCtrlText("SGN-1-X1-CC");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_SIGNAL))->SetCtrlText(QSTR("速度信号1"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_LINENO))->SetCtrlText("26213");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_STATE))->SetCtrlText(QString::number(SPEEDSIGNAL_MC1_RIOM_WORD));

        break;
    case E_MC1_RIOM2:
        pData = &g_LocalIoRom_MC1_RIOM2[0];
        DrawTable(pData, g_LocalIoRomMC1_RIOM2Len);
        break;
    case E_MC1_RIOM3:
        pData = &g_LocalIoRom_MC1_RIOM3[0];
        DrawTable(pData, g_LocalIoRomMC1_RIOM3Len);
        break;
    case E_MC1_RIOM4:
        pData = &g_LocalIoRom_MC1_RIOM4[0];
        DrawTable(pData, g_LocalIoRomMC1_RIOM4Len);
        break;
    case E_MC1_RIOM5:
        pData = NULL;
        DrawTable(pData, 34);
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetCtrlText("AX-1-X1-D");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_SIGNAL))->SetCtrlText(QSTR("Load Sensor1 Signal"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR1_MC1_RIOM_WORD)/10,1) + "mA");

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetCtrlText("AX-1-X1-M");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_SIGNAL))->SetCtrlText(QSTR("Load Sensor2 Signal"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_LINENO))->SetCtrlText("");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR2_MC1_RIOM_WORD)/10,1) + "mA");

        // added by Deng Ran on January 30th,
        // Changchun company wants to show both current value and pressure value of the pressure sensor named AI3.
        // formula: pressure(bar) = 0.625 * current(mA) - 2.5
        // the current value
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetCtrlText("AX-1-X1-C");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_SIGNAL))->SetCtrlText(QSTR("Press Sensor Signal"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_LINENO))->SetCtrlText("");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_STATE))->SetCtrlText(mRound(PRESSSENSOR_MC1_RIOM_WORD, 1) + "mA");
        // the pressure value
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetCtrlText("AX-1-X1-C");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_SIGNAL))->SetCtrlText(QSTR("Press Sensor Value"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_LINENO))->SetCtrlText("");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_STATE))->SetCtrlText(mRound(PRESSURE_VALUE_MC1_RIOM_WORD, 1) + "bar");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetCtrlText("AX-1-X1-S");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_SIGNAL))->SetCtrlText(QSTR("载荷传感器2电源正"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_LINENO))->SetCtrlText("7A02");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR1_MC1_RIOM_WORD)/10,1) + "V");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_CONNECTOR))->SetCtrlText("AX-1-X1-M");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_SIGNAL))->SetCtrlText(QSTR("载荷传感器2信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_LINENO))->SetCtrlText("7A05");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_05_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR2_MC1_RIOM_WORD)/10,1) + "mA");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_CONNECTOR))->SetCtrlText("AX-1-X1-L");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_SIGNAL))->SetCtrlText(QSTR("荷载传感器2电源负"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_LINENO))->SetCtrlText("7A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR2_MC1_RIOM_WORD)/10,1) + "V");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_CONNECTOR))->SetCtrlText("AX-1-X1-AA");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_SIGNAL))->SetCtrlText(QSTR("压力传感器电源正"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_LINENO))->SetCtrlText("7A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)/10,1) + "V");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_CONNECTOR))->SetCtrlText("AX-1-X1-C");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_SIGNAL))->SetCtrlText(QSTR("压力传感器信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_LINENO))->SetCtrlText("7A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)/10,1) + "mA");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_CONNECTOR))->SetCtrlText("AX-1-X1-HH");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_SIGNAL))->SetCtrlText(QSTR("电路板供电正极"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_LINENO))->SetCtrlText("7A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)/10,1) + "mA");



//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_CONNECTOR))->SetCtrlText("AX-1-X1-KK");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_SIGNAL))->SetCtrlText(QSTR("电路板供电正极"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_LINENO))->SetCtrlText("7A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)*40/4096,1) + "V");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_CONNECTOR))->SetCtrlText("AX-1-X1-JJ");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_SIGNAL))->SetCtrlText(QSTR("电路板供电负极"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_LINENO))->SetCtrlText("7A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)*40/4096,1) + "V");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_CONNECTOR))->SetCtrlText("AX-1-X1-LL");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_SIGNAL))->SetCtrlText(QSTR("电路板供电负极"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_LINENO))->SetCtrlText("7A08");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_STATE))->SetCtrlText( mRound((qreal)(PRESSSENSOR_MC1_RIOM_WORD)*40/4096,1) + "V");

        /*((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_SIGNAL))->SetCtrlText(QSTR("SGN生命信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_STATE))->SetCtrlText(QString::number(SGNLIFESIGNAL_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_SIGNAL))->SetCtrlText(QSTR("SGN板卡软件版本号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_STATE))->SetCtrlText(QString::number(SGNVERSION_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_SIGNAL))->SetCtrlText(QSTR("DI1生命信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_STATE))->SetCtrlText(QString::number(DI1LIFESIGNAL_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_SIGNAL))->SetCtrlText(QSTR("DI1板卡软件版本号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_STATE))->SetCtrlText(QString::number(DI1VERSION_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_SIGNAL))->SetCtrlText(QSTR("DI2生命信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_STATE))->SetCtrlText(QString::number(DI2LIFESIGNAL_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_SIGNAL))->SetCtrlText(QSTR("DI2板卡软件版本号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_STATE))->SetCtrlText(QString::number(DI2VERSION_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_SIGNAL))->SetCtrlText(QSTR("AX生命信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_STATE))->SetCtrlText(QString::number(AXLIFESIGNAL_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_SIGNAL))->SetCtrlText(QSTR("AX板卡软件版本号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_STATE))->SetCtrlText(QString::number(AXVERSION_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_SIGNAL))->SetCtrlText(QSTR("DO1生命信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_STATE))->SetCtrlText(QString::number(DO1LIFESIGNAL_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_SIGNAL))->SetCtrlText(QSTR("DO1板卡软件版本号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_STATE))->SetCtrlText(QString::number(DO1VERSION_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_SIGNAL))->SetCtrlText(QSTR("DO2生命信号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_STATE))->SetCtrlText(QString::number(DO2LIFESIGNAL_MC1_RIOM_BYTE));

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_SIGNAL))->SetCtrlText(QSTR("DO2板卡软件版本号"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_STATE))->SetCtrlText(QString::number(DO2VERSION_MC1_RIOM_BYTE));*/

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_SIGNAL))->SetCtrlText(QSTR("AO1-速度表驱动"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_STATE))->SetCtrlText(QString::number(AO1SPEEDFRIVER_MC1_RIOM_WORD));
        break;
    case E_MC2_RIOM1:
        pData = &g_LocalIoRom_MC2_RIOM1[0];
        DrawTable(pData, g_LocalIoRomMC2_RIOM1Len);

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_CONNECTOR))->SetCtrlText("SGN-1-X1-CC");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_SIGNAL))->SetCtrlText(QSTR("速度信号1"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_LINENO))->SetCtrlText("26243");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_02_STATE))->SetCtrlText(QString::number(SPEEDSIGNAL_MC2_RIOM_WORD));

        break;
    case E_MC2_RIOM2:
        pData = &g_LocalIoRom_MC2_RIOM2[0];
        DrawTable(pData, g_LocalIoRomMC2_RIOM2Len);
        break;
    case E_MC2_RIOM3:
        pData = &g_LocalIoRom_MC2_RIOM3[0];
        DrawTable(pData, g_LocalIoRomMC2_RIOM3Len);
        break;
    case E_MC2_RIOM4:
        pData = &g_LocalIoRom_MC2_RIOM4[0];
        DrawTable(pData, g_LocalIoRomMC2_RIOM4Len);
        break;
    case E_MC2_RIOM5:
        pData = NULL;
        DrawTable(pData, 34);

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_CONNECTOR))->SetCtrlText("AX-1-X1-M");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_SIGNAL))->SetCtrlText(QSTR("Load Sensor1 Signal"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_LINENO))->SetCtrlText("");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR1_MC2_RIOM_WORD)/10,1) + "mA");

        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_CONNECTOR))->SetCtrlText("AX-1-X1-C");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_SIGNAL))->SetCtrlText(QSTR("Load Sensor2 Signal"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_LINENO))->SetCtrlText("");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_02_01_STATE))->SetCtrlText( mRound((qreal)(LOADSENSOR2_MC2_RIOM_WORD)/10,1) + "mA");

        // added by Deng Ran on January 30th,
        // Changchun company wants to show both current value and pressure value of the pressure sensor named AI3.
        // formula: pressure(bar) = 0.625 * current(mA) - 2.5
        // the current value
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_CONNECTOR))->SetCtrlText("AX-1-X1-D");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_SIGNAL))->SetCtrlText(QSTR("Press Sensor Signal"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_LINENO))->SetCtrlText("");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_03_01_STATE))->SetCtrlText(mRound(PRESSSENSOR_MC2_RIOM_WORD ,1) + "mA");
        // the pressure value
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_CONNECTOR))->SetCtrlText("AX-1-X1-C");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_SIGNAL))->SetCtrlText(QSTR("Press Sensor Value"));
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_LINENO))->SetCtrlText("");
        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_04_01_STATE))->SetCtrlText( mRound(PRESSURE_VALUE_MC2_RIOM_WORD, 1) + "bar");

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_SIGNAL))->SetCtrlText(QSTR("SGN生命信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_06_01_STATE))->SetCtrlText(QString::number(SGNLIFESIGNAL_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_SIGNAL))->SetCtrlText(QSTR("SGN板卡软件版本号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_07_01_STATE))->SetCtrlText(QString::number(SGNVERSION_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_SIGNAL))->SetCtrlText(QSTR("DI1生命信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_08_01_STATE))->SetCtrlText(QString::number(DI1LIFESIGNAL_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_SIGNAL))->SetCtrlText(QSTR("DI1板卡软件版本号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_09_01_STATE))->SetCtrlText(QString::number(DI1VERSION_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_SIGNAL))->SetCtrlText(QSTR("DI2生命信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_10_01_STATE))->SetCtrlText(QString::number(DI2LIFESIGNAL_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_SIGNAL))->SetCtrlText(QSTR("DI2板卡软件版本号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_11_01_STATE))->SetCtrlText(QString::number(DI2VERSION_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_SIGNAL))->SetCtrlText(QSTR("AX生命信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_12_01_STATE))->SetCtrlText(QString::number(AXLIFESIGNAL_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_SIGNAL))->SetCtrlText(QSTR("AX板卡软件版本号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_13_01_STATE))->SetCtrlText(QString::number(AXVERSION_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_SIGNAL))->SetCtrlText(QSTR("DO1生命信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_14_01_STATE))->SetCtrlText(QString::number(DO1LIFESIGNAL_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_SIGNAL))->SetCtrlText(QSTR("DO1板卡软件版本号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_15_01_STATE))->SetCtrlText(QString::number(DO1VERSION_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_SIGNAL))->SetCtrlText(QSTR("DO2生命信号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_16_01_STATE))->SetCtrlText(QString::number(DO2LIFESIGNAL_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_SIGNAL))->SetCtrlText(QSTR("DO2板卡软件版本号"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_17_01_STATE))->SetCtrlText(QString::number(DO2VERSION_MC2_RIOM_BYTE));

//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_CONNECTOR))->SetCtrlText("AX-1-X1-W");
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_SIGNAL))->SetCtrlText(QSTR("AO1-速度表驱动"));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_STATE))->SetCtrlText(QString::number(AO1SPEEDFRIVER_MC2_RIOM_WORD));
//        ((CLabel *)GetDlgItem(ID_LOCALIO_LABEL_01_02_LINENO))->SetCtrlText("26243");
        break;
    default:
        break;
    }

}

void CLocalIOPage::OnInitPage()
{
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->m_bAutoUpState = false;

    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->m_bAutoUpState = false;

    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM1))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC1_RIOM5))->ChangeButtonState(LBUTTON_UP);

    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM1))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM2))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM3))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM4))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_LOCALIO_BTN_MC2_RIOM5))->ChangeButtonState(LBUTTON_UP);

    m_pagetype = E_MC1_RIOM1;

    for (uint id=ID_LOCALIO_LABEL_01_01_CONNECTOR; id <= ID_LOCALIO_LABEL_17_02_LINENO; id++)
    {
        ((CLabel *)GetDlgItem(id))->SetAlignment(Qt::AlignLeft);
    }

    DrawPage();
}
