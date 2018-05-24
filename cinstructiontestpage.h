#ifndef CINSTRUCTIONTESTPAGE_H
#define CINSTRUCTIONTESTPAGE_H

#include "cpage.h"
#include "testbytedialog.h"
#include "QtCore"
#define ID_PICIT_TEST_BUTTON_00     0x1801
#define ID_PICIT_TEST_BUTTON_01     0x1802
#define ID_PICIT_TEST_BUTTON_02     0x1803
#define ID_PICIT_TEST_BUTTON_03     0x1804
#define ID_PICIT_TEST_BUTTON_04     0x1805
#define ID_PICIT_TEST_BUTTON_05     0x1806
#define ID_PICIT_TEST_BUTTON_06     0x1807
#define ID_PICIT_TEST_BUTTON_07     0x1808
#define ID_PICIT_TEST_BUTTON_08     0x1809
#define ID_PICIT_TEST_BUTTON_09     0x180A
#define ID_PICIT_TEST_BUTTON_10     0x180B
#define ID_PICIT_TEST_BUTTON_11     0x180C
#define ID_PICIT_TEST_BUTTON_12     0x180D
#define ID_PICIT_TEST_BUTTON_13     0x180E
#define ID_PICIT_TEST_BUTTON_14     0x180F
#define ID_PICIT_TEST_BUTTON_15     0x1810
#define ID_PICIT_TEST_BUTTON_16     0x1811
#define ID_PICIT_TEST_BUTTON_17     0x1812
#define ID_PICIT_TEST_BUTTON_18     0x1813
#define ID_PICIT_TEST_BUTTON_19     0x1814
#define ID_PICIT_TEST_BUTTON_20     0x1815
#define ID_PICIT_TEST_BUTTON_21     0x1816
#define ID_PICIT_TEST_BUTTON_22     0x1817
#define ID_PICIT_TEST_BUTTON_23     0x1818
#define ID_PICIT_TEST_BUTTON_24     0x1819
#define ID_PICIT_TEST_BUTTON_25     0x181A
#define ID_PICIT_TEST_BUTTON_26     0x181B
#define ID_PICIT_TEST_BUTTON_27     0x181C
#define ID_PICIT_TEST_BUTTON_28     0x181D

class CInstructionTestPage : public CPage
{

    DECLEAR_MESSAGE_MAP(CInstructionTestPage)
public:
    CInstructionTestPage();

private:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnInitPage();
    bool SetButtonDown(int nID);
    bool SetButtonUp(int nID);
    void OnCommonQuitButtonDown();
    void OnTestButton00Down();
    void OnTestButton01Down();
    void OnTestButton02Down();
    void OnTestButton03Down();
    void OnTestButton04Down();
    void OnTestButton05Down();
    void OnTestButton06Down();
    void OnTestButton07Down();
    void OnTestButton08Down();
    void OnTestButton09Down();
    void OnTestButton10Down();
    void OnTestButton11Down();
    void OnTestButton12Down();
    void OnTestButton13Down();
    void OnTestButton14Down();
    void OnTestButton15Down();
    void OnTestButton16Down();
    void OnTestButton17Down();
    void OnTestButton18Down();
    void OnTestButton19Down();
    void OnTestButton20Down();
    void OnTestButton21Down();
    void OnTestButton22Down();
    void OnTestButton23Down();
    void OnTestButton24Down();
    void OnTestButton25Down();
    void OnTestButton26Down();
    void OnTestButton27Down();
    void OnTestButton28Down();
    int m_counter,m_btnID;
    bool m_btndown,m_btndown2,m_btndown3,m_btndown4,m_btndown5,m_btndown6;
    int m_counter2,m_counter3,m_counter4,m_counter5,m_counter6;


};

#endif // CINSTRUCTIONTESTPAGE_H
