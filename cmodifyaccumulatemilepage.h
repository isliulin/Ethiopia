#ifndef CMODIFYACCUMULATEMILEPAGE_H
#define CMODIFYACCUMULATEMILEPAGE_H

#include "cpage.h"

#define ID_PICMAM_BUTTON_NUMBER1         0x1701
#define ID_PICMAM_BUTTON_NUMBER2         0x1702
#define ID_PICMAM_BUTTON_NUMBER3         0x1703
#define ID_PICMAM_BUTTON_NUMBER4         0x1704
#define ID_PICMAM_BUTTON_NUMBER5         0x1705
#define ID_PICMAM_BUTTON_NUMBER6         0x1706
#define ID_PICMAM_BUTTON_NUMBER7         0x1707
#define ID_PICMAM_BUTTON_NUMBER8         0x1708
#define ID_PICMAM_BUTTON_NUMBER9         0x1709
#define ID_PICMAM_BUTTON_NUMBER0         0x170A
#define ID_PICMAM_BUTTON_CLEAR           0x170B
#define ID_PICMAM_BUTTON_OK              0x170C
#define ID_PICMAM_EDIT_KM                0x170D
#define ID_PICMAM_BUTTON_QUIT            0x170E
#define ID_PICMAM_LABEL_CURRENTMILEAGE   0x170F

class CModifyAccumulateMilePage : public CPage
{
    DECLEAR_MESSAGE_MAP(CModifyAccumulateMilePage)
public:
    CModifyAccumulateMilePage();

protected:
    QString accumulateMileage;

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    void OnEditDown();
    void OnQuitButtonDown();
    void OnQuitButtonUp();
    void OnOkDown();
    void OnOkUp();
    void OnNum0Down();
    void OnNum1Down();
    void OnNum2Down();
    void OnNum3Down();
    void OnNum4Down();
    void OnNum5Down();
    void OnNum6Down();
    void OnNum7Down();
    void OnNum8Down();
    void OnNum9Down();
    void OnNum0Up();
    void OnNum1Up();
    void OnNum2Up();
    void OnNum3Up();
    void OnNum4Up();
    void OnNum5Up();
    void OnNum6Up();
    void OnNum7Up();
    void OnNum8Up();
    void OnNum9Up();

    void OnClearDown();
    void OnClearUp();
    void SetBtnDown(int btnId);
    void SetBtnUp(int btnId);
    void SetEditStr(int EditId, QString str);
    void AddEditStr(int EditId, QString str);
    void SetEditSelected(int EditId, bool flg);

};

#endif // CMODIFYACCUMULATEMILEPAGE_H
