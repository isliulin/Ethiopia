#include "cinstructiontestpage.h"
#include "cconfirmdialog.h"

ROMDATA g_PicRom_InstructionTest[] =
{
    /*string                       font                            rc                  foreground color              background color                control type                   ID           */
    {QSTR("MC1MSR1 Disable"),   D_FONT(7),         QRect( 70,  30, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_00   },
    {QSTR("MC1MSR2 Disable"),   D_FONT(7),         QRect( 70, 100, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_01   },
    {QSTR("MC2MSR1 Disable"),   D_FONT(7),         QRect( 70, 170, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_02   },
    {QSTR("MC2MSR2 Disable"),   D_FONT(7),         QRect( 70, 240, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_03   },
    {QSTR("MC1ACU Disable"),    D_FONT(7),          QRect(70,  310, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_04   },
    {QSTR("MC2ACU Disable"),    D_FONT(7),          QRect(70,  380, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_05   },
    {QSTR("MC1ACU Reset"),     D_FONT(7),          QRect(260, 30, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_06   },
    {QSTR("MC2ACU Reset"),     D_FONT(7),          QRect(260, 100, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_07    },
    {QSTR("MC1 BCC Disable"),    D_FONT(7),          QRect(260, 170, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_08    },
    {QSTR("MC2 BCC Disable"),    D_FONT(7),          QRect(260, 240, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_09    },
    {QSTR("MC1 BCC Reset"),      D_FONT(7),          QRect(260, 310, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_10    },
    {QSTR("MC2 BCC Reset"),      D_FONT(7),          QRect(260, 380, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_11    },
    {QSTR("MC1 TCU Reset"),       D_FONT(7),          QRect(450, 30, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_12    },
    {QSTR("MC2 TCU Reset"),       D_FONT(7),          QRect(450, 100, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_13    },
    {QSTR("MC1 Friction\n Brake Release "),       D_FONT(7),      QRect(450,  170, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_14    },
    {QSTR("MC2 Friction\n Brake Release "),       D_FONT(7),      QRect(450,  240, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_15    },
    {QSTR("MTB Test"),           D_FONT(7),          QRect(450, 310, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_16   },
    {QSTR("Factory Test"),       D_FONT(7),          QRect(450, 380, 120, 40),       Qt::black,                   Qt::yellow,                CONTROL_BUTTON,         ID_PICIT_TEST_BUTTON_17    },

    {QSTR("downgray.png"),       D_FONT(5),          QRect(590, 390, 40, 30),       Qt::black,                   Qt::yellow,                CONTROL_BMPBUTTON,         ID_PICIT_TEST_BUTTON_18    },

    D_LAYER2_NAVIGATION_BAR_MAINTAIN

};
int g_InstructionTestRomLen = sizeof(g_PicRom_InstructionTest)/sizeof(ROMDATA);

int nBtnIDArray[]=
{
   ID_PICIT_TEST_BUTTON_00,
   ID_PICIT_TEST_BUTTON_01,
   ID_PICIT_TEST_BUTTON_02,
   ID_PICIT_TEST_BUTTON_03,
   ID_PICIT_TEST_BUTTON_04,
   ID_PICIT_TEST_BUTTON_05,
   ID_PICIT_TEST_BUTTON_06,
   ID_PICIT_TEST_BUTTON_07,
   ID_PICIT_TEST_BUTTON_08,
   ID_PICIT_TEST_BUTTON_09,
   ID_PICIT_TEST_BUTTON_10,
   ID_PICIT_TEST_BUTTON_11,
   ID_PICIT_TEST_BUTTON_12,
   ID_PICIT_TEST_BUTTON_13,
   ID_PICIT_TEST_BUTTON_14,
   ID_PICIT_TEST_BUTTON_15,
   ID_PICIT_TEST_BUTTON_16,
   ID_PICIT_TEST_BUTTON_17,
   /*ID_PICIT_TEST_BUTTON_18,
   ID_PICIT_TEST_BUTTON_19,
   ID_PICIT_TEST_BUTTON_20,
   ID_PICIT_TEST_BUTTON_21,
   ID_PICIT_TEST_BUTTON_22,
   ID_PICIT_TEST_BUTTON_23,
   ID_PICIT_TEST_BUTTON_24,
   ID_PICIT_TEST_BUTTON_25,
   ID_PICIT_TEST_BUTTON_26,
   ID_PICIT_TEST_BUTTON_27,
   ID_PICIT_TEST_BUTTON_28*/
};

BEGIN_MESSAGE_MAP(CInstructionTestPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_00, OnTestButton00Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_01, OnTestButton01Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_02, OnTestButton02Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_03, OnTestButton03Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_04, OnTestButton04Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_05, OnTestButton05Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_06, OnTestButton06Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_07, OnTestButton07Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_08, OnTestButton08Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_09, OnTestButton09Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_10, OnTestButton10Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_11, OnTestButton11Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_12, OnTestButton12Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_13, OnTestButton13Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_14, OnTestButton14Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_15, OnTestButton15Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_16, OnTestButton16Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_17, OnTestButton17Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_18, OnTestButton18Down)
        /*ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_19, OnTestButton19Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_20, OnTestButton20Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_21, OnTestButton21Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_22, OnTestButton22Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_23, OnTestButton23Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_24, OnTestButton24Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_25, OnTestButton25Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_26, OnTestButton26Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_27, OnTestButton27Down)
        ON_LBUTTONDOWN(ID_PICIT_TEST_BUTTON_28, OnTestButton28Down)*/

END_MESSAGE_MAP()

CInstructionTestPage::CInstructionTestPage()
{
    m_counter = 0;
    m_counter2 = 0;
    m_counter3 = 0;
    m_counter4 = 0;
    m_counter5 = 0;
    m_counter6 = 0;

    m_btndown = false;
    m_btndown2 = false;
    m_btndown3 = false;
    m_btndown4 = false;
    m_btndown5 = false;
    m_btndown6 = false;
    m_btnID = 0;
}

void CInstructionTestPage::OnInitPage()
{
    for(unsigned int i = 0; i < sizeof(nBtnIDArray)/sizeof(int); i++)
    {
        ((CButton*)GetDlgItem(nBtnIDArray[i]))->m_bAutoUpState = false;
    }

}

void CInstructionTestPage::OnUpdatePage()
{
//qDebug()<<TEST_Mc1ACUReset_BOOL<<"1";
//qDebug()<<TEST_Mc2ACUReset_BOOL<<"2";
//qDebug()<<TEST_Mc1BCCReset_BOOL<<"3";
//qDebug()<<TEST_Mc2BCCReset_BOOL<<"4";
//qDebug()<<TEST_Mc1TCUReset_BOOL<<"5";
//qDebug()<<TEST_Mc2TFCUReset_BOOL<<"6";
    if(MAIN_TRAINCOUPLED_BOOL&&MAIN_TRAIN_COUPLED_MS_BOOL)
    {
        ((CBitmapButton *)GetDlgItem(ID_PICIT_TEST_BUTTON_18))->ChangeButtonState( LBUTTON_UP );
        ((CBitmapButton *)GetDlgItem(ID_PICIT_TEST_BUTTON_18))->SetCtrlText("down.png");

    }else
    {
        ((CBitmapButton *)GetDlgItem(ID_PICIT_TEST_BUTTON_18))->ChangeButtonState( LBUTTON_UP );
        ((CBitmapButton *)GetDlgItem(ID_PICIT_TEST_BUTTON_18))->SetCtrlText("downgray.png");

    }

    if(m_btnID == 7||m_btndown)
    {
        m_counter++;
        if(m_counter == 6)
        {
            m_btndown=!SetButtonUp(ID_PICIT_TEST_BUTTON_06);
            m_counter = 0;m_btnID=0;
            TEST_Mc1ACUReset_BOOL = false;
        }
    }

    if(m_btnID == 8||m_btndown2)
    {
        m_counter2++;
        if(m_counter2 == 6)
        {
            m_btndown2=!SetButtonUp(ID_PICIT_TEST_BUTTON_07);
            m_counter2 = 0;m_btnID=0;
            TEST_Mc2ACUReset_BOOL = false;
        }
    }
    if(m_btnID == 11||m_btndown3)
    {
        m_counter3++;
        if(m_counter3 == 6)
        {
            m_btndown3=!SetButtonUp(ID_PICIT_TEST_BUTTON_10);
            m_counter3 = 0;m_btnID=0;
            TEST_Mc1BCCReset_BOOL = false;
        }
    }

    if(m_btnID == 12||m_btndown4)
    {
        m_counter4++;
        if(m_counter4 == 6)
        {
            m_btndown4=!SetButtonUp(ID_PICIT_TEST_BUTTON_11);
            m_counter4 = 0;m_btnID=0;
            TEST_Mc2BCCReset_BOOL = false;
        }
    }
    if(m_btnID == 13||m_btndown5)
    {
        m_counter5++;
        if(m_counter5 == 6)
        {
            m_btndown5=!SetButtonUp(ID_PICIT_TEST_BUTTON_12);
            m_counter5 = 0;m_btnID=0;
            TEST_Mc1TCUReset_BOOL = false;
        }
    }

    if(m_btnID == 14||m_btndown6)
    {
        m_counter6++;
        if(m_counter6 == 6)
        {
            m_btndown6=!SetButtonUp(ID_PICIT_TEST_BUTTON_13);
            m_counter6 = 0;m_btnID=0;
            TEST_Mc2TCUReset_BOOL = false;
        }
    }
//    if(m_btndown)
//    {

//    }
//    switch(m_btnID)
//    {
//    case 7:
//        if(m_counter == 6)
//        {
//            m_btndown=!SetButtonUp(ID_PICIT_TEST_BUTTON_06);
//            m_counter = 0;
//            TEST_Mc1ACUReset_BOOL = false;
//        }
//        break;
//    case 8:
//        if(m_counter == 6)
//        {
//            m_btndown=!SetButtonUp(ID_PICIT_TEST_BUTTON_07);
//            m_counter = 0;
//            TEST_Mc2ACUReset_BOOL = false;

//        }
//        break;
//    case 11:
//        if(m_counter == 6)
//        {
//            m_btndown=!SetButtonUp(ID_PICIT_TEST_BUTTON_10);
//            m_counter = 0;
//            TEST_Mc1BCCReset_BOOL = false;
//        }
//        break;
//    case 12:
//        if(m_counter == 6)
//        {
//            m_btndown=!SetButtonUp(ID_PICIT_TEST_BUTTON_11);
//            m_counter = 0;
//            TEST_Mc2BCCReset_BOOL = false;
//        }
//        break;
//    case 13:
//        if(m_counter == 6)
//        {
//            m_btndown=!SetButtonUp(ID_PICIT_TEST_BUTTON_12);
//            m_counter = 0;
//            TEST_Mc1TCUReset_BOOL = false;
//        }
//        break;
//    case 14:
//        if(m_counter == 6)
//        {
//            m_btndown=!SetButtonUp(ID_PICIT_TEST_BUTTON_13);
//            m_counter = 0;
//            TEST_Mc2TCUReset_BOOL = false;
//        }
//        break;
////    case 17:
////        if(m_counter == 6)
////        {
////            m_btndown=!SetButtonUp(ID_PICIT_TEST_BUTTON_16);
////            m_counter = 0;
////        }
////        break;
//        default:break;
//    }
    /*if(!InstructionTest10_Bool)
        SetButtonUp(ID_PICIT_TEST_BUTTON_09);
    if(!InstructionTest11_Bool)
        SetButtonUp(ID_PICIT_TEST_BUTTON_10);
    if(!InstructionTest12_Bool)
        SetButtonUp(ID_PICIT_TEST_BUTTON_11);
    if(!InstructionTest13_Bool)
        SetButtonUp(ID_PICIT_TEST_BUTTON_12);
    if(!InstructionTest14_Bool)
        SetButtonUp(ID_PICIT_TEST_BUTTON_13);
    if(!InstructionTest15_Bool)
        SetButtonUp(ID_PICIT_TEST_BUTTON_14);
    if(!InstructionTest18_Bool)
        SetButtonUp(ID_PICIT_TEST_BUTTON_17);
    if(!InstructionTest19_Bool)
        SetButtonUp(ID_PICIT_TEST_BUTTON_18);*/

}

void CInstructionTestPage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}

bool CInstructionTestPage::SetButtonDown(int nID)
{
    CButton* pButton = NULL;
    int buttonState;
    for(unsigned int i = 0; i <  sizeof(nBtnIDArray)/sizeof(int); i++)
    {
        pButton = (CButton *)GetDlgItem(nBtnIDArray[i]);
        if(nBtnIDArray[i] == nID) {
            buttonState = pButton->GetButtonState();
            if (buttonState == LBUTTON_UP
                || buttonState == LBUTTON_INIT)
            {
                CConfirmDialog dlg;
                    dlg.SetConfirmStr(QSTR("Operation Sure?"));
                dlg.move(m_pDlg->x()+int((m_pDlg->width()-dlg.width())/2),m_pDlg->y()+int((m_pDlg->height()-dlg.height())/2));
                dlg.exec();
                if(dlg.GetContinue())
                {
                    pButton->ChangeButtonState(LBUTTON_DOWN);
                    return true;
                }
            }
            else
            {
                pButton->ChangeButtonState(LBUTTON_UP);
                return true;
            }
        }
    }

    return false;
}
bool CInstructionTestPage::SetButtonUp(int nID)
{

    CButton* pButton = NULL;
    for(unsigned int i = 0; i <  sizeof(nBtnIDArray)/sizeof(int); i++)
    {
        pButton = (CButton *)GetDlgItem(nBtnIDArray[i]);
        if(nBtnIDArray[i] == nID) {
            pButton->ChangeButtonState(LBUTTON_UP);
            return true;
        }
    }

    return false;
}

void CInstructionTestPage::OnTestButton00Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_00))
    {
    TEST_Mc1MSR1Disable_BOOL = !TEST_Mc1MSR1Disable_BOOL;}
}

void CInstructionTestPage::OnTestButton01Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_01))
        TEST_Mc1MSR2Disable_BOOL = !TEST_Mc1MSR2Disable_BOOL;
}

void CInstructionTestPage::OnTestButton02Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_02))
        TEST_Mc2MSR1Disable_BOOL = !TEST_Mc2MSR1Disable_BOOL;
}

void CInstructionTestPage::OnTestButton03Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_03))
        TEST_Mc2MSR2Disable_BOOL = !TEST_Mc2MSR2Disable_BOOL;
}

void CInstructionTestPage::OnTestButton04Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_04))
        TEST_Mc1ACUDisable_BOOL = !TEST_Mc1ACUDisable_BOOL;
}

void CInstructionTestPage::OnTestButton05Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_05))
        TEST_Mc2ACUDisable_BOOL = !TEST_Mc2ACUDisable_BOOL;
}

void CInstructionTestPage::OnTestButton06Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_06))
    {m_btnID = 7;
         m_btndown = true;
         TEST_Mc1ACUReset_BOOL = !TEST_Mc1ACUReset_BOOL;}
}

void CInstructionTestPage::OnTestButton07Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_07))
    { m_btnID = 8;
            m_btndown2 = true;
            TEST_Mc2ACUReset_BOOL = !TEST_Mc2ACUReset_BOOL;}
}

void CInstructionTestPage::OnTestButton08Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_08))
        TEST_Mc1BCCDisable_BOOL = !TEST_Mc1BCCDisable_BOOL;
}

void CInstructionTestPage::OnTestButton09Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_09))
        TEST_Mc2BCCDisable_BOOL = !TEST_Mc2BCCDisable_BOOL;
}

void CInstructionTestPage::OnTestButton10Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_10))
    {m_btnID = 11;
            m_btndown3 = true;
            TEST_Mc1BCCReset_BOOL = !TEST_Mc1BCCReset_BOOL;}
}

void CInstructionTestPage::OnTestButton11Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_11))
    {m_btnID = 12;
            m_btndown4 = true;
            TEST_Mc2BCCReset_BOOL = !TEST_Mc2BCCReset_BOOL;}
}

void CInstructionTestPage::OnTestButton12Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_12))
    {m_btnID = 13;
            m_btndown5 = true;
            TEST_Mc1TCUReset_BOOL = !TEST_Mc1TCUReset_BOOL;}
}

void CInstructionTestPage::OnTestButton13Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_13))
    { m_btnID = 14;
            m_btndown6 = true;
            TEST_Mc2TCUReset_BOOL = !TEST_Mc2TCUReset_BOOL;}
}

void CInstructionTestPage::OnTestButton16Down()
{
     if(SetButtonDown(ID_PICIT_TEST_BUTTON_16))
//    {m_btnID = 17;
//             m_btndown = true;
             TEST_MTB_BOOL = !TEST_MTB_BOOL;
}
void CInstructionTestPage::OnTestButton17Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_17))
        TEST_Factory_BOOL = !TEST_Factory_BOOL;
}
void CInstructionTestPage::OnTestButton14Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_14))
        TEST_Mc1FrictionBrakeRelease_BOOL = !TEST_Mc1FrictionBrakeRelease_BOOL;
}
void CInstructionTestPage::OnTestButton15Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_15))
        TEST_Mc2FrictionBrakeRelease_BOOL = !TEST_Mc2FrictionBrakeRelease_BOOL;
}
void CInstructionTestPage::OnTestButton18Down()
{
    if(MAIN_TRAINCOUPLED_BOOL&&MAIN_TRAIN_COUPLED_MS_BOOL)
    {
        ChangePage(PAGE_ROM_INDEX_INSTRUCTIONTESTTBC);
        ChangeLay2_2ButtonState(IDBTN_NAVIBAR_INSTRUCTIONTEST);
    }
}
void CInstructionTestPage::OnTestButton19Down()
{
    //if(SetButtonDown(ID_PICIT_TEST_BUTTON_19))
   //     InstructionTest2_Bool = !InstructionTest2_Bool;
}
/*void CInstructionTestPage::OnTestButton20Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_20))
         InstructionTest21_Bool= !InstructionTest21_Bool;
}
void CInstructionTestPage::OnTestButton21Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_21))
         InstructionTest22_Bool= !InstructionTest22_Bool;
}
void CInstructionTestPage::OnTestButton22Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_22))
         InstructionTest23_Bool= !InstructionTest23_Bool;
}
void CInstructionTestPage::OnTestButton23Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_23))
         InstructionTest24_Bool= !InstructionTest24_Bool;
}
void CInstructionTestPage::OnTestButton24Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_24))
         InstructionTest25_Bool= !InstructionTest25_Bool;
}
void CInstructionTestPage::OnTestButton25Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_25))
         InstructionTest26_Bool= !InstructionTest26_Bool;
}
void CInstructionTestPage::OnTestButton26Down()
{
    TestByteDialog dialog;
    dialog.exec();
}
void CInstructionTestPage::OnTestButton27Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_27))
         forcedBrakeReleaseMc1En_Bool= !forcedBrakeReleaseMc1En_Bool;
}
void CInstructionTestPage::OnTestButton28Down()
{
    if(SetButtonDown(ID_PICIT_TEST_BUTTON_28))
         forcedBrakeReleaseMc2En_Bool= !forcedBrakeReleaseMc2En_Bool;
}
*/
