#ifndef CPISPAGE_H
#define CPISPAGE_H

#include "cpage.h"

#define MIN_LINENO 1
#define MAX_LINENO 2

//picture PIS control id
#define ID_PICPIS_BUTTON_UPORDOWN       0x0701
#define ID_PICPIS_BUTTON_STARTSTATION   0x0702
#define ID_PICPIS_BUTTON_ENDSTATION     0x0703
//#define ID_PICPIS_BUTTON_CURRENTSTATION 0x0704
#define ID_PICPIS_BUTTON_TCMSORTC       0x0705

#define ID_PICPIS_LABEL_UPDOWN          0x0706
#define ID_PICPIS_LABEL_STARTSTATION    0x0707
#define ID_PICPIS_LABEL_ENDSTATION      0x0708
//#define ID_PICPIS_LABEL_CURRENTSTATION  0x0709
#define ID_PICPIS_LABEL_TCMSORTC        0x070A
#define ID_PICPIS_LABEL_LINECH          0x070B
#define ID_PICPIS_LABEL_LINENO          0x070C
#define ID_PICPIS_BUTTON_DOWN           0x070D
#define ID_PICPIS_BUTTON_UP             0x070E

#define ID_PICPIS_EMERGENCY             0x070F
#define ID_PICPIS_BUTTON_CONFIRM           0x0710
#define ID_PICPIS_BUTTON_CURRENTSTATIONSET             0x0711
#define ID_PICPIS_LABEL_CURRENTSTATION 0x0712

#define LABEL_ID_CURRENT_STATION_CODE 0x0713
#define LABEL_ID_NEXT_STATION_CODE 0x0714
#define LABEL_ID_TRAIN_PRERUN 0x0715
#define LABEL_ID_TRAIN_RUN 0x0716
#define LABEL_ID_TRAIN_PREARRIVE 0x0717
#define LABEL_ID_TRAIN_ARRIVE 0x0718

class CPisPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CPisPage)
public:
    CPisPage();

private:
    //TODO:declear call back function
    void OnInitPage();
    void OnUpdatePage();
    void OnCommonQuitButtonDown();
    void OnUpDownBtnDown();
    void OnStartStationSetButtonDown();
    //void OnCurrentStationSetButtonDown();
    void OnEndStationSetButtonDown();
    void OnTcmsOrTcDown();
    void OnUpDownBtnUp();
    void OnStartStationSetButtonUp();
    //void OnCurrentStationSetButtonUp();
    void OnEndStationSetButtonUp();
    void OnTcmsOrTcUp();

    void OnDownButtonDown();
    void OnDownButtonUp();
    void OnUpButtonDown();
    void OnUpButtonUp();

    void OneEmergencyBroadcastDown();
    void OneEmergencyBroadcastUp();

    int currentLineNo;

    void OnStationSetConfirmButtonDown();
    void OnStationSetConfirmButtonUp();

    void OnCurrentStationSetButtonDown();
    void OnCurrentStationSetButtonUp();
};

#endif // CPISPAGE_H
