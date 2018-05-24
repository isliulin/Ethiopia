#ifndef CEMERGENCYBROADCAST_H
#define CEMERGENCYBROADCAST_H


#include "cpage.h"

//picture MainControlCmd control id


#define ID_PICCEB_BUTTON_EB1                        0x2408
#define ID_PICCEB_BUTTON_EB2                        0x2409
#define ID_PICCEB_BUTTON_EB3                        0x240A
#define ID_PICCEB_BUTTON_EB4                        0x240B
#define ID_PICCEB_BUTTON_EB5                        0x240C
#define ID_PICCEB_BUTTON_EB6                        0x240D

#define ID_PICMCC_BUTTON_QUIT                       0x240F

#define BUTTON_ID_BROADCAST_NUMBER1 0x2410
#define BUTTON_ID_BROADCAST_NUMBER2 0x2411
#define BUTTON_ID_BROADCAST_NUMBER3 0x2412
#define BUTTON_ID_BROADCAST_NUMBER4 0x2413
#define BUTTON_ID_BROADCAST_NUMBER5 0x2414
#define BUTTON_ID_BROADCAST_NUMBER6 0x2415
#define BUTTON_ID_BROADCAST_NUMBER7 0x2416
#define BUTTON_ID_BROADCAST_NUMBER8 0x2417
#define BUTTON_ID_BROADCAST_NUMBER9 0x2418
#define BUTTON_ID_BROADCAST_NUMBER10 0x2419

#define BUTTON_ID_BROADCAST_RESET 0x241A

class cEmergencyBroadcast : public CPage
{
    DECLEAR_MESSAGE_MAP(cEmergencyBroadcast)
public:
    cEmergencyBroadcast();
    void OnInitPage();
    void OnButtonEB1Down();
    void OnButtonEB2Down();
    void OnButtonEB3Down();
    void OnButtonEB4Down();
    void OnButtonEB5Down();
    void OnButtonEB6Down();

private:
    void OnUpdatePage();


    void OnButtonQuitDown();

    void OnButtonForcedPumpUp();
    bool EM1_bool,EM2_bool,EM3_bool,EM4_bool,EM5_bool,EM6_bool;

private:
    void setButtonSelected(unsigned short int buttonID);

    void buttonQuitDown();
    void buttonQuitUp();
    void buttonResetDown();
    void buttonResetUp();

    void buttonNumber1Down();
    void buttonNumber2Down();
    void buttonNumber3Down();
    void buttonNumber4Down();
    void buttonNumber5Down();
    void buttonNumber6Down();
    void buttonNumber7Down();
    void buttonNumber8Down();
    void buttonNumber9Down();
    void buttonNumber10Down();
};

#endif // CMAINCONTROLCMDPAGE_H
