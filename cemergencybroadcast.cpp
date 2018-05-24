#include "cemergencybroadcast.h"





extern vector<CPage*>  g_PageVec;

ROMDATA g_PicRom_EmergencyBroadcastCmd[] =
{
    /*string                font                          rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER

    {QSTR("Train’s Delay"), D_FONT(7), QRect(70, 100, 200, 30), Qt::black, Qt::yellow, CONTROL_BUTTON, BUTTON_ID_BROADCAST_NUMBER1},
    {QSTR("Train’s Clearance"), D_FONT(7), QRect(70,100 + 50, 200, 30), Qt::black, Qt::yellow, CONTROL_BUTTON, BUTTON_ID_BROADCAST_NUMBER2},
    {QSTR("Emergency Evacuation"), D_FONT(7),  QRect(70,100 + 50 * 2, 200, 30), Qt::black, Qt::yellow, CONTROL_BUTTON, BUTTON_ID_BROADCAST_NUMBER3},
    {QSTR("Rush Time"), D_FONT(7), QRect(70, 100 + 50 * 3, 200, 30), Qt::black, Qt::yellow, CONTROL_BUTTON, BUTTON_ID_BROADCAST_NUMBER4},
    {QSTR("Train Start"), D_FONT(7), QRect(70, 100 + 50 * 4, 200, 30), Qt::black, Qt::yellow, CONTROL_BUTTON, BUTTON_ID_BROADCAST_NUMBER5},

    {QSTR("Temporary Stop"), D_FONT(7), QRect(370, 100, 200, 30), Qt::black, Qt::yellow, CONTROL_BUTTON, BUTTON_ID_BROADCAST_NUMBER6},
    {QSTR("Out Of Service This Station"), D_FONT(7), QRect(370, 100 + 50, 200, 30), Qt::black, Qt::yellow,  CONTROL_BUTTON, BUTTON_ID_BROADCAST_NUMBER7},
    {QSTR("Out Of Service Next Station"), D_FONT(7), QRect(370, 100 + 50 * 2, 200, 30), Qt::black, Qt::yellow,  CONTROL_BUTTON, BUTTON_ID_BROADCAST_NUMBER8},
    {QSTR("Fire Alarm"), D_FONT(7), QRect(370, 100 + 50 * 3, 200, 30), Qt::black, Qt::yellow, CONTROL_BUTTON, BUTTON_ID_BROADCAST_NUMBER9},
    {QSTR("Jump Station"), D_FONT(7), QRect(370, 100 + 50 * 4, 200, 30), Qt::black, Qt::yellow, CONTROL_BUTTON, BUTTON_ID_BROADCAST_NUMBER10},

    {QSTR("Reset Broadcast"), D_FONT(7), QRect(70, 100 + 50 * 6, 200, 30), Qt::black, Qt::yellow, CONTROL_BUTTON, BUTTON_ID_BROADCAST_RESET},

    {QSTR("Quit"),             D_FONT(7),  QRect(370, 100 + 50 * 6, 200, 30),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMCC_BUTTON_QUIT   },
};
int g_PicRom_EmergencyBroadcastCmdLen = sizeof(g_PicRom_EmergencyBroadcastCmd)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(cEmergencyBroadcast,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONUP(ID_PICMCC_BUTTON_QUIT, buttonQuitUp)
        ON_LBUTTONDOWN(ID_PICMCC_BUTTON_QUIT, buttonQuitDown)
        ON_LBUTTONUP(BUTTON_ID_BROADCAST_RESET, buttonResetUp)
        ON_LBUTTONDOWN(BUTTON_ID_BROADCAST_RESET, buttonResetDown)
        ON_LBUTTONDOWN(BUTTON_ID_BROADCAST_NUMBER1, buttonNumber1Down)
        ON_LBUTTONDOWN(BUTTON_ID_BROADCAST_NUMBER2, buttonNumber2Down)
        ON_LBUTTONDOWN(BUTTON_ID_BROADCAST_NUMBER3, buttonNumber3Down)
        ON_LBUTTONDOWN(BUTTON_ID_BROADCAST_NUMBER4, buttonNumber4Down)
        ON_LBUTTONDOWN(BUTTON_ID_BROADCAST_NUMBER5, buttonNumber5Down)
        ON_LBUTTONDOWN(BUTTON_ID_BROADCAST_NUMBER6, buttonNumber6Down)
        ON_LBUTTONDOWN(BUTTON_ID_BROADCAST_NUMBER7, buttonNumber7Down)
        ON_LBUTTONDOWN(BUTTON_ID_BROADCAST_NUMBER8, buttonNumber8Down)
        ON_LBUTTONDOWN(BUTTON_ID_BROADCAST_NUMBER9, buttonNumber9Down)
        ON_LBUTTONDOWN(BUTTON_ID_BROADCAST_NUMBER10, buttonNumber10Down)
END_MESSAGE_MAP()

cEmergencyBroadcast::cEmergencyBroadcast()
{
}

void cEmergencyBroadcast::OnInitPage()
{
    QPainter *pPainter = this->GetPainter();
    QRect myRectOne(70 - 5, 100 - 5, 660 + 10, 335 + 10),
          myRectTwo(70 - 5, 100 + 50 * 8 - 10, 660 + 10, 50 + 10);

    pPainter->save();
    pPainter->setRenderHint(QPainter::Antialiasing, true);
    pPainter->setPen(QPen(Qt::yellow, 2));
    pPainter->setBrush(Qt::transparent);
    pPainter->drawRoundRect(myRectOne);
    pPainter->drawRoundRect(myRectTwo);
    pPainter->restore();
}

void cEmergencyBroadcast::OnUpdatePage()
{
    ((CButton *)this->GetDlgItem(BUTTON_ID_BROADCAST_NUMBER1))->m_bAutoUpState = false;
    ((CButton *)this->GetDlgItem(BUTTON_ID_BROADCAST_NUMBER2))->m_bAutoUpState = false;
    ((CButton *)this->GetDlgItem(BUTTON_ID_BROADCAST_NUMBER3))->m_bAutoUpState = false;
    ((CButton *)this->GetDlgItem(BUTTON_ID_BROADCAST_NUMBER4))->m_bAutoUpState = false;
    ((CButton *)this->GetDlgItem(BUTTON_ID_BROADCAST_NUMBER5))->m_bAutoUpState = false;
    ((CButton *)this->GetDlgItem(BUTTON_ID_BROADCAST_NUMBER6))->m_bAutoUpState = false;
    ((CButton *)this->GetDlgItem(BUTTON_ID_BROADCAST_NUMBER7))->m_bAutoUpState = false;
    ((CButton *)this->GetDlgItem(BUTTON_ID_BROADCAST_NUMBER8))->m_bAutoUpState = false;
    ((CButton *)this->GetDlgItem(BUTTON_ID_BROADCAST_NUMBER9))->m_bAutoUpState = false;
    ((CButton *)this->GetDlgItem(BUTTON_ID_BROADCAST_NUMBER10))->m_bAutoUpState = false;
}

void cEmergencyBroadcast::buttonQuitUp()
{
    ((CButton *)this->GetDlgItem(ID_PICMCC_BUTTON_QUIT))->ChangeButtonState(LBUTTON_UP);
    this->ChangePage(PAGE_ROM_INDEX_PIS);
}

void cEmergencyBroadcast::buttonQuitDown()
{
    ((CButton *)this->GetDlgItem(ID_PICMCC_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void cEmergencyBroadcast::buttonResetDown()
{
    ((CButton *)this->GetDlgItem(BUTTON_ID_BROADCAST_RESET))->ChangeButtonState(LBUTTON_DOWN);
}

void cEmergencyBroadcast::buttonResetUp()
{
    ((CButton *)this->GetDlgItem(BUTTON_ID_BROADCAST_RESET))->ChangeButtonState(LBUTTON_UP);
    this->setButtonSelected(0);
    emergencyBroadcastNumberUChar = 0;
}

void cEmergencyBroadcast::buttonNumber1Down()
{
    this->setButtonSelected(BUTTON_ID_BROADCAST_NUMBER1);
    emergencyBroadcastNumberUChar = 1;
}

void cEmergencyBroadcast::buttonNumber2Down()
{
    this->setButtonSelected(BUTTON_ID_BROADCAST_NUMBER2);
    emergencyBroadcastNumberUChar = 2;
}

void cEmergencyBroadcast::buttonNumber3Down()
{
    this->setButtonSelected(BUTTON_ID_BROADCAST_NUMBER3);
    emergencyBroadcastNumberUChar = 3;
}

void cEmergencyBroadcast::buttonNumber4Down()
{
    this->setButtonSelected(BUTTON_ID_BROADCAST_NUMBER4);
    emergencyBroadcastNumberUChar = 4;
}

void cEmergencyBroadcast::buttonNumber5Down()
{
    this->setButtonSelected(BUTTON_ID_BROADCAST_NUMBER5);
    emergencyBroadcastNumberUChar = 5;
}

void cEmergencyBroadcast::buttonNumber6Down()
{
    this->setButtonSelected(BUTTON_ID_BROADCAST_NUMBER6);
    emergencyBroadcastNumberUChar = 6;
}

void cEmergencyBroadcast::buttonNumber7Down()
{
    this->setButtonSelected(BUTTON_ID_BROADCAST_NUMBER7);
    emergencyBroadcastNumberUChar = 7;
}

void cEmergencyBroadcast::buttonNumber8Down()
{
    this->setButtonSelected(BUTTON_ID_BROADCAST_NUMBER8);
    emergencyBroadcastNumberUChar = 8;
}

void cEmergencyBroadcast::buttonNumber9Down()
{
    this->setButtonSelected(BUTTON_ID_BROADCAST_NUMBER9);
    emergencyBroadcastNumberUChar = 9;
}

void cEmergencyBroadcast::buttonNumber10Down()
{
    this->setButtonSelected(BUTTON_ID_BROADCAST_NUMBER10);
    emergencyBroadcastNumberUChar = 10;
}

void cEmergencyBroadcast::setButtonSelected(unsigned short int buttonID)
{
    unsigned short int array[] = {
                                    BUTTON_ID_BROADCAST_NUMBER1,
                                    BUTTON_ID_BROADCAST_NUMBER2,
                                    BUTTON_ID_BROADCAST_NUMBER3,
                                    BUTTON_ID_BROADCAST_NUMBER4,
                                    BUTTON_ID_BROADCAST_NUMBER5,
                                    BUTTON_ID_BROADCAST_NUMBER6,
                                    BUTTON_ID_BROADCAST_NUMBER7,
                                    BUTTON_ID_BROADCAST_NUMBER8,
                                    BUTTON_ID_BROADCAST_NUMBER9,
                                    BUTTON_ID_BROADCAST_NUMBER10
                                 };

    for (size_t i = 0; i < (sizeof array) / sizeof(unsigned short int); i ++)
    {
        if (array[i] == buttonID)
        {
            ((CButton *)this->GetDlgItem(array[i]))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            ((CButton *)this->GetDlgItem(array[i]))->ChangeButtonState(LBUTTON_UP);
        }
    }
}
