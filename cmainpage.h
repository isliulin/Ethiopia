#ifndef CMAINPAGE_H
#define CMAINPAGE_H

#include "cpage.h"
#include "cmaincontrolcmdpage.h"
#include "ctimer.h"

#define ID_PICMAIN_LABEL_FAULTGRADE             0x0101
#define ID_PICMAIN_LABEL_FAULTCODE              0x0102
#define ID_PICMAIN_LABEL_FAULTNAME              0x0103
//#define ID_PICMAIN_BUTTON_SKIPSTATION           0x0104
#define ID_PICMAIN_TRAINDIAGRAM_TRAINDIAGRAM    0x0105
#define ID_PICMAIN_COUNTDOWN_COUNTDOWN          0x0106
#define ID_PICMAIN_SPEEDCTRL                    0x0107
#define ID_PICMAIN_BRAKETRACTION_STATE          0x0108

#define ID_PICMAIN_IMAGE_SAFEBRAKE              0x010B
#define ID_PICMAIN_IMAGE_BRAKERELEASE           0x010C
#define ID_PICMAIN_IMAGE_DISPATCHINGMODE        0x010D
#define ID_PICMAIN_IMAGE_WASHINGMODE            0x010E
#define ID_PICMAIN_LABEL_TOTALMILEAGE           0x010F
#define ID_PICMAIN_IMAGE_ATC                    0x0110
#define ID_PICMAIN_IMAGE_STOP                   0x0111
#define ID_PICMAIN_IMAGE_3KM                    0x0112
#define ID_PICMAIN_IMAGE_10KM                   0x0113
#define ID_PICMAIN_IMAGE_20KM                   0x0114
#define ID_PICMAIN_IMAGE_40KM                   0x0115
#define ID_PICMAIN_IMAGE_60KM                   0x0116
#define ID_PICMAIN_IMAGE_RIGHT                  0x0117
#define ID_PICMAIN_IMAGE_LEFT                   0x0118
#define ID_PICMAIN_IMAGE_TRACTIONSAFE           0x011A

#define ID_PICMAIN_IMAGE_30KM                   0x011B
#define ID_PICMAIN_IMAGE_50KM                   0x011C
#define ID_PICMAIN_LABEL_FAULTDEVICE            0x011D
#define ID_PICMAIN_LABEL_FAULTPOSITION          0x011E

#define ID_PICMAIN_LABEL_FAULTGRADE_TITLE       0x011F
#define ID_PICMAIN_LABEL_FAULTCODE_TITLE        0x0120
#define ID_PICMAIN_LABEL_FAULTDEVICE_TITLE      0x0121
#define ID_PICMAIN_LABEL_FAULTPOSITION_TITLE    0x0122
#define ID_PICMAIN_LABEL_FAULTNAME_TITLE        0x0123

#define ID_PICMAIN_IMAGE_COUPLINGMODE           0x0124
#define ID_PICMAIN_LABEL_DEGREEMODE_TITLE       0x0125
#define ID_PICMAIN_CAPACITANCE1                 0x0127

#define ID_PICMAIN_BUTTON_CONTROLBUTTON         0x0129
#define ID_PICMAIN_BUTTON_LEFTTURN              0x012A
#define ID_PICMAIN_BUTTON_RIGHTTURN             0x012B

#define ID_PICMAIN_IMAGE_MC2RIGHT               0x012C
#define ID_PICMAIN_IMAGE_MC2LEFT                0x012D

#define ID_PICMAIN_BUTTON_IN_LITTLE_NO_POWER_AREA    0x012E
#define ID_PICMAIN_BUTTON_IN_LARGE_NO_POWER_AREA     0x012F
#define ID_FAULTDOMODEL 0x0130
#define ID_FAULTDOMODELTRAN 0x0131
#define ID_PICMAIN_IMAGE_RESCUE 0x0132
#define ID_PICMAIN_LABEL_BACKUPMODE 0x0133
class CMainPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CMainPage)

public:
    CMainPage();
    ~CMainPage();

    void UpdateCurrentFaultDisplay(bool flg = false);

private:
    CTimer m_timer;
    int m_currentfaulttimerid;
    bool m_turnlighton_bool;
    bool m_tcuoklighton_bool;
    bool m_tcuEBfaultlighton_bool;
    //TODO:declear call back function
    void OnUpdatePage();

    void OnInitPage();
    void OnCommonQuitButtonDown();
    void UpdateListBoxCtrl();
    void OnWarningButtonDown();
    void OnWarningButtonUp();
    void UpdateTotalMileage();
    //void UpdateNextDistance();
    void UpdateImage();
    void UpdateTrainDiagram();
    void UpdateSpeedLimit();
    void OnButtonInLittleNoPowerAreaDown();
    void OnButtonInLargeNoPowerAreaDown();
    void OnControlButtonDown();
    void UpdateDirection();
    void checkDoorState(int car1Door[],int car2Door[]);

    void OnLeftTurnButtonDown();
    void OnRightTurnButtonDown();
};


#endif // CMAINPAGE_H
