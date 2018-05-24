#ifndef CHVACPARAMETERSETPAGE_H
#define CHVACPARAMETERSETPAGE_H

#include "cpage.h"
#include "cwarningdialog.h"

#define MIN_COLD    22 // 21
#define MAX_COLD    27

#define MIN_WARM    12 // 20140122 modify 14 // 9 20131202 modify
#define MAX_WARM    18 // 20140122 modify 20 //15 20131202 modify

//picture HVACParameterSet control id
#define ID_PICHPS_BUTTON_AUTOWARM               0x0C01
#define ID_PICHPS_BUTTON_AUTOCOLD               0x0C02
#define ID_PICHPS_BUTTON_VENTILATION            0x0C03
#define ID_PICHPS_BUTTON_STOP                   0x0C04


#define ID_PICHPS_LABEL_SETTEDTEMP              0x0C05
#define ID_PICHPS_LABEL_TEMP                    0x0C06
#define ID_PICHPS_BUTTON_UP                     0x0C07
#define ID_PICHPS_BUTTON_DOWN                   0x0C08

#define ID_PICHPS_BUTTON_HALFWARM               0x0C09
#define ID_PICHPS_BUTTON_FULLWARM               0x0C0A
#define ID_PICHPS_BUTTON_CABED                  0x0C0B
#define ID_PICHPS_BUTTON_EDGLASS                0x0C0C
#define ID_PICHPS_BUTTON_UIC                    0x0C0E

#define ID_PICHPS_LABEL_MC_CARNUM               0x0C0D



class CHvacParameterSetPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CHvacParameterSetPage)
public:
    CHvacParameterSetPage();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnCommonQuitButtonDown();

    void SetUpBtnDown(int btnID);
    void SetUpBtnDown();
    void OnAutoWarmDown();
    void OnAutoColdDown();
    void OnVentilationDown();
    void OnStopDown();

    void SetDownBtnDown(int btnID);
    void SetDownBtnDown();
    void OnHalfWarmDown();
    void OnFullWarmDown();
    void OnCabEDDown();
    void OnEDGlassDown();
    void OnUICDown();
    void OnInitPage();

    void OnDownButtonDown();
    void OnDownButtonUp();
    void OnUpButtonDown();
    void OnUpButtonUp();
    bool m_UICOK;

};

#endif // CHVACPARAMETERSETPAGE_H
