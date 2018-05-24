#ifndef CNETSTATEPAGECOUPLED_H
#define CNETSTATEPAGECOUPLED_H
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

#define ID_NETSTATE_TRAINCODE_TBC             0x0301
#define ID_NETSTATE_IDU1_TBC                  0x0302
#define ID_NETSTATE_IDU2_TBC                  0x0303
#define ID_NETSTATE_VCU1_TBC                  0x0304
#define ID_NETSTATE_VCU2_TBC                  0x0305
#define ID_NETSTATE_TCU1_TBC                  0x0306
#define ID_NETSTATE_BCU_TBC                   0x0307
#define ID_NETSTATE_TCU2_TBC                  0x0308
#define ID_NETSTATE_ACU1_TBC                  0x0309
#define ID_NETSTATE_ACU2_TBC                  0x030A
#define ID_NETSTATE_ATC1_TBC                 0x030B
#define ID_NETSTATE_ATC2_TBC                 0x030C
#define ID_NETSTATE_HVAC1_TBC                 0x030D
#define ID_NETSTATE_HVAC2_TBC                 0x030E
#define ID_NETSTATE_MC1_DOOR1_TBC             0x030F
#define ID_NETSTATE_MC1_DOOR2_TBC             0x0310
#define ID_NETSTATE_MC1_DOOR3_TBC             0x0311
#define ID_NETSTATE_MC1_DOOR4_TBC            0x0312
#define ID_NETSTATE_MC2_DOOR1_TBC             0x0313
#define ID_NETSTATE_MC2_DOOR2_TBC             0x0314
#define ID_NETSTATE_MC2_DOOR3_TBC             0x0315
#define ID_NETSTATE_MC2_DOOR4_TBC             0x0316
#define ID_NETSTATE_PIS1_TBC                  0x0317
#define ID_NETSTATE_RIOM1_TBC                 0x0318
#define ID_NETSTATE_RIOM2_TBC                 0x0319

#define ID_NETSTATE_MC1_SGN_TBC               0x0320
#define ID_NETSTATE_MC1_DI1_TBC               0x0321
#define ID_NETSTATE_MC1_DI2_TBC               0x0322
#define ID_NETSTATE_MC1_AX_TBC                0x0323
#define ID_NETSTATE_MC1_DO1_TBC               0x0324
#define ID_NETSTATE_MC1_DO2_TBC               0x0325
#define ID_NETSTATE_MC1_TSS_TBC               0x0326
#define ID_NETSTATE_PIS2_TBC                  0x0327

#define ID_NETSTATE_MC2_SGN_TBC               0x0330
#define ID_NETSTATE_MC2_DI1_TBC               0x0331
#define ID_NETSTATE_MC2_DI2_TBC               0x0332
#define ID_NETSTATE_MC2_AX_TBC                0x0333
#define ID_NETSTATE_MC2_DO1_TBC               0x0334
#define ID_NETSTATE_MC2_DO2_TBC               0x0335
#define ID_NETSTATE_MC2_TSS_TBC               0x0336

#define ID_NETSTATE_MC1_ATC_TBC               0x0337
#define ID_NETSTATE_MC2_ATC_TBC               0x0338
#define ID_NETSTATE_MC1_TKT_TBC               0x0339
#define ID_NETSTATE_MC2_TKT_TBC               0x033A

#define ID_NETSTATE_TBC1                       0x033B
#define ID_NETSTATE_TBC2                       0x033C

class cnetstatepagecoupled : public CPage
{
    DECLEAR_MESSAGE_MAP(cnetstatepagecoupled)

public:
    cnetstatepagecoupled();

protected:
    //TODO:declear call back function
    void OnUpdatePage();

    void OnCommonQuitButtonDown();
};


#endif // CNETSTATEPAGE_H
