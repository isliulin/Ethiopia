#ifndef CNETSTATEPAGE_H
#define CNETSTATEPAGE_H

#include "cpage.h"

#define ID_NETSTATE_TRAINCODE             0x0201
#define ID_NETSTATE_IDU1                  0x0202
#define ID_NETSTATE_IDU2                  0x0203
#define ID_NETSTATE_VCU1                  0x0204
#define ID_NETSTATE_VCU2                  0x0205
#define ID_NETSTATE_TCU1                  0x0206
#define ID_NETSTATE_BCU                   0x0207
#define ID_NETSTATE_TCU2                  0x0208
#define ID_NETSTATE_ACU1                  0x0209
#define ID_NETSTATE_ACU2                  0x020A
#define ID_NETSTATE_ATC1                 0x020B
#define ID_NETSTATE_ATC2                 0x020C
#define ID_NETSTATE_HVAC1                 0x020D
#define ID_NETSTATE_HVAC2                 0x020E
#define ID_NETSTATE_MC1_DOOR1             0x020F
#define ID_NETSTATE_MC1_DOOR2             0x0210
#define ID_NETSTATE_MC1_DOOR3             0x0211
#define ID_NETSTATE_MC1_DOOR4             0x0212
#define ID_NETSTATE_MC2_DOOR1             0x0213
#define ID_NETSTATE_MC2_DOOR2             0x0214
#define ID_NETSTATE_MC2_DOOR3             0x0215
#define ID_NETSTATE_MC2_DOOR4             0x0216
#define ID_NETSTATE_PIS1                  0x0217
#define ID_NETSTATE_RIOM1                 0x0218
#define ID_NETSTATE_RIOM2                 0x0219

#define ID_NETSTATE_MC1_SGN               0x0220
#define ID_NETSTATE_MC1_DI1               0x0221
#define ID_NETSTATE_MC1_DI2               0x0222
#define ID_NETSTATE_MC1_AX                0x0223
#define ID_NETSTATE_MC1_DO1               0x0224
#define ID_NETSTATE_MC1_DO2               0x0225
#define ID_NETSTATE_MC1_TSS               0x0226
#define ID_NETSTATE_PIS2                  0x0227

#define ID_NETSTATE_MC2_SGN               0x0230
#define ID_NETSTATE_MC2_DI1               0x0231
#define ID_NETSTATE_MC2_DI2               0x0232
#define ID_NETSTATE_MC2_AX                0x0233
#define ID_NETSTATE_MC2_DO1               0x0234
#define ID_NETSTATE_MC2_DO2               0x0235
#define ID_NETSTATE_MC2_TSS               0x0236

#define ID_NETSTATE_MC1_ATC               0x0237
#define ID_NETSTATE_MC2_ATC               0x0238
#define ID_NETSTATE_MC1_TKT               0x0239
#define ID_NETSTATE_MC2_TKT               0x023A

class CNetStatePage : public CPage
{
    DECLEAR_MESSAGE_MAP(CNetStatePage)
public:
    CNetStatePage();

protected:
    //TODO:declear call back function
    void OnUpdatePage();

    void OnCommonQuitButtonDown();
};

#endif // CNETSTATEPAGE_H
