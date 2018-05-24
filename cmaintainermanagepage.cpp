#include "cmaintainermanagepage.h"
#include "cmaintaineridlistpage.h"

extern vector<CPage*> g_PageVec;
ROMDATA g_PicRom_MaintainerManage[] =
{
    /*string                font                     rc                   foreground color              background color           control type                   ID           */
    {QSTR("Maintainer Management"),  D_FONT(13),  QRect(  0,    0, 640, 60),        Qt::black,                   Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE                },

    {"1",                  D_COMMON_TITLE_FONT,  QRect(450,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER1  },
    {"2",                  D_COMMON_TITLE_FONT,  QRect(500,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER2  },
    {"3",                  D_COMMON_TITLE_FONT,  QRect(550,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER3  },
    {"4",                  D_COMMON_TITLE_FONT,  QRect(450,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER4  },
    {"5",                  D_COMMON_TITLE_FONT,  QRect(500,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER5  },
    {"6",                  D_COMMON_TITLE_FONT,  QRect(550,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER6  },
    {"7",                  D_COMMON_TITLE_FONT,  QRect(450,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER7  },
    {"8",                  D_COMMON_TITLE_FONT,  QRect(500,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER8  },
    {"9",                  D_COMMON_TITLE_FONT,  QRect(550,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER9  },
    {"0",                  D_COMMON_TITLE_FONT,  QRect(450,  250,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_NUMBER0  },
    {QSTR("Clear"),         D_COMMON_TITLE_FONT,  QRect(500,  250, 100, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_CLEAR    },
    {QSTR("Quit"),         D_COMMON_TITLE_FONT,  QRect(400,  380, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_QUIT     },
    {QSTR("Add/Modify(4bits)"),D_COMMON_TITLE_FONT,  QRect( 20,  145, 170, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                },
    {QSTR("Work Code"),      D_COMMON_TITLE_FONT,   QRect(130,  110, 120, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                },
    {QSTR("New Password"),        D_COMMON_TITLE_FONT,   QRect(130,  180, 120, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                },
    {QSTR("New Pasword again"), D_COMMON_TITLE_FONT,   QRect(80,  250, 170, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                },
    {"",                   D_COMMON_TITLE_FONT,   QRect(130,  310, 300, 40),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PICMM_LABEL_SUCCESS   },
    {"",                   D_COMMON_TITLE_FONT,  QRect(260,  110, 110, 50),        Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICMM_EDIT_ID         },
    {"",                   D_COMMON_TITLE_FONT,  QRect(260,  180, 110, 50),        Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICMM_EDIT_PWD        },
    {"",                   D_COMMON_TITLE_FONT, QRect(260,  250, 110, 50),        Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICMM_EDIT_PWDCONFIRM   },
    {QSTR("OK"),         D_COMMON_TITLE_FONT,  QRect(380,  252,  60, 45),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_PWD_OK   },
    {QSTR("Maintainer List"),  D_COMMON_TITLE_FONT,  QRect(80,  380,  240, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMM_BUTTON_MAINLIST   },
};
int g_MaintainerManageRomLen = sizeof(g_PicRom_MaintainerManage)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CMaintainerManagePage,CPage)
        ON_UPDATE_PAGE()
        ON_SHOWPAGE()
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(ID_PICMM_BUTTON_QUIT, OnQuitButtonUp)
        ON_LBUTTONDOWN(ID_PICMM_EDIT_ID, OnIDEdit)
        ON_LBUTTONDOWN(ID_PICMM_EDIT_PWD, OnPWDEdit)
        ON_LBUTTONDOWN(ID_PICMM_EDIT_PWDCONFIRM, OnPWDAgainEdit)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_PWD_OK,OnPwdOkDown)
        ON_LBUTTONUP(ID_PICMM_BUTTON_PWD_OK,OnPwdOkUp)

        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER0,OnNum0Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER1,OnNum1Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER2,OnNum2Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER3,OnNum3Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER4,OnNum4Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER5,OnNum5Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER6,OnNum6Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER7,OnNum7Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER8,OnNum8Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_NUMBER9,OnNum9Down)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_CLEAR,OnClearDown)
        ON_LBUTTONDOWN(ID_PICMM_BUTTON_MAINLIST,OnMainListDown)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER0,OnNum0Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER1,OnNum1Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER2,OnNum2Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER3,OnNum3Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER4,OnNum4Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER5,OnNum5Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER6,OnNum6Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER7,OnNum7Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER8,OnNum8Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_NUMBER9,OnNum9Up)
        ON_LBUTTONUP(ID_PICMM_BUTTON_CLEAR,OnClearUp)
        ON_LBUTTONUP(ID_PICMM_BUTTON_MAINLIST,OnMainListUp)
END_MESSAGE_MAP()

CMaintainerManagePage::CMaintainerManagePage()
{
}

void CMaintainerManagePage::OnInitPage()
{
    QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
    QString strId;
    QString strPwd;
    QString strIdSingle;
    QString strPwdSingle;
    int nPos;
    strId = (ConfigIniRead->value("/Maintainer/Id",1234)).toString();
    strPwd = (ConfigIniRead->value("/Maintainer/Pwd",0000)).toString();
    while(strId.length() != 0)
    {
        if(strPwd.length() != 0)
        {
            if( (strId.indexOf(",") != -1) && (strPwd.indexOf(",") != -1) )
            {
                nPos = strId.indexOf(",");
                strIdSingle = strId.left(nPos);
                strId = strId.mid(nPos);
                if(strPwd.indexOf(",") != -1)
                {
                    nPos = strPwd.indexOf(",");
                    strPwdSingle = strPwd.left(nPos);
                    strPwd = strPwd.mid(nPos);
                    if(strPwd.length() != 0)
                    {
                        if(strPwd.left(1) == ",")
                        {
                            strPwd = strPwd.mid(1);
                        }
                    }
                    else
                    {
                        //Set Initila Password
                        strPwdSingle = "000000";
                    }
                }

                m_MapMaintainer[strIdSingle]= strPwdSingle;
                if(strId.length() != 0)
                {
                    if(strId.left(1) == ",")
                    {
                        strId = strId.mid(1);
                    }
                }
            }
            else
            {
                m_MapMaintainer[strId]= strPwd;
               // m_MapMaintainer.insert(strId,strPwd);

                break;// the last code
            }
        }
    }

    delete ConfigIniRead;

    SetEditSelected(ID_PICMM_EDIT_ID, true);
    SetEditSelected(ID_PICMM_EDIT_PWD, false);
    SetEditSelected(ID_PICMM_EDIT_PWDCONFIRM, false);
}

void CMaintainerManagePage::OnShowPage()
{
    GetDlgItem(ID_PICMM_EDIT_ID)->SetCtrlText("");
    GetDlgItem(ID_PICMM_EDIT_PWD)->SetCtrlText("");
    GetDlgItem(ID_PICMM_EDIT_PWDCONFIRM)->SetCtrlText("");
    OnIDEdit();
}

void CMaintainerManagePage::OnUpdatePage()
{

}

void CMaintainerManagePage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICMM_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CMaintainerManagePage::OnQuitButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICMM_BUTTON_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

void CMaintainerManagePage::OnPwdOkDown()
{
    ((CButton *)GetDlgItem(ID_PICMM_BUTTON_PWD_OK))->ChangeButtonState(LBUTTON_DOWN);
}

void CMaintainerManagePage::OnPwdOkUp()
{
    ((CButton *)GetDlgItem(ID_PICMM_BUTTON_PWD_OK))->ChangeButtonState(LBUTTON_UP);
    QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
    QString strIdInput;
    QString strPwdInput;
    QString strPwdAgainInput;
    QString strIdOutput;
    QString strPwdOutput;
    bool isExist = false;

    strIdInput = GetDlgItem(ID_PICMM_EDIT_ID)->GetCtrlText();
    strPwdInput = GetDlgItem(ID_PICMM_EDIT_PWD)->GetCtrlText();
    strPwdAgainInput = GetDlgItem(ID_PICMM_EDIT_PWDCONFIRM)->GetCtrlText();
    if(strIdInput == "" || strPwdInput == "")
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("WorkCode or Password is null!"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        return;
    }
    else if( strIdInput.toUInt()<9000 )
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("WorkCode is out of range（9000～9999），\r\nPlease reconfirm！"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        return;
    }
    else if(strPwdAgainInput == "")
    {
        GetDlgItem(ID_PICMM_LABEL_SUCCESS)->SetCtrlText(QSTR("Please enter password again"));
        return;
    }
    else if(strIdInput.length() != g_loginIDPWDLen || strPwdInput.length() != g_loginIDPWDLen)
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("WorkCode or Password length Error!"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
        return;
    }
    else if(strPwdInput != strPwdAgainInput)
    {
        GetDlgItem(ID_PICMM_EDIT_PWD)->SetCtrlText("");
        GetDlgItem(ID_PICMM_EDIT_PWDCONFIRM)->SetCtrlText("");
        SetEditSelected(ID_PICMM_EDIT_ID, false);
        SetEditSelected(ID_PICMM_EDIT_PWD, true);
        SetEditSelected(ID_PICMM_EDIT_PWDCONFIRM, false);
        GetDlgItem(ID_PICMM_LABEL_SUCCESS)->SetCtrlText(QSTR("Password not match"));
        return;
    }
    else
    {
        if(m_MapMaintainer.value(strIdInput) != 0)
        {
            isExist = true;
            m_MapMaintainer.remove(strIdInput);
            m_MapMaintainer[strIdInput]= strPwdInput;
        }
        else
        {
            m_MapMaintainer[strIdInput]= strPwdInput;
        }

    }
    if(isExist == false)
    {
        strIdOutput = (ConfigIniRead->value("/Maintainer/Id",1234)).toString();

        strPwdOutput = (ConfigIniRead->value("/Maintainer/Pwd",0000)).toString();
        if(strIdOutput == "")
        {
            strIdOutput = strIdInput;
        }
        else
        {
            strIdOutput = strIdOutput + "," + strIdInput;
        }
        if(strPwdOutput == "")
        {
            strPwdOutput = strPwdInput;
        }
        else
        {
            strPwdOutput = strPwdOutput + "," + strPwdInput;
        }
        ConfigIniRead->setValue("/Maintainer/Id",strIdOutput);
        ConfigIniRead->setValue("/Maintainer/Pwd",strPwdOutput);
        GetDlgItem(ID_PICMM_LABEL_SUCCESS)->SetCtrlText(QSTR("Add successfully"));

    }
    else
    {
        QMapIterator<QString,QString> it(m_MapMaintainer);
        strIdOutput = "";
        strPwdOutput = "";
        while(it.hasNext())
        {
            it.next();
            strIdOutput += it.key();
            strPwdOutput += it.value();
            if(it.hasNext())
            {
                strIdOutput += ",";
                strPwdOutput += ",";
            }
        }
        ConfigIniRead->setValue("/Maintainer/Id",strIdOutput);
        ConfigIniRead->setValue("/Maintainer/Pwd",strPwdOutput);
        GetDlgItem(ID_PICMM_LABEL_SUCCESS)->SetCtrlText(QSTR("Modify successfully"));
    }
    delete ConfigIniRead;
}

void CMaintainerManagePage::OnDeleteIdOkDown()
{
    ((CButton *)GetDlgItem(ID_PICMM_BUTTON_DELETEID_OK))->ChangeButtonState(LBUTTON_DOWN);
}

void CMaintainerManagePage::OnDeleteIdOkUp()
{

}
void CMaintainerManagePage::OnMainListDown()
{
   ((CButton *)GetDlgItem(ID_PICMM_BUTTON_MAINLIST))->ChangeButtonState(LBUTTON_DOWN);
}
void CMaintainerManagePage::OnMainListUp()
{
    CMaintainerIDListPage* pPage = (CMaintainerIDListPage*)g_PageVec[PAGE_ROM_INDEX_MAINTAINERLIST];

    /* Modify by ChengJian for sort ini mantainer code 20110129 Begin */
    QSettings* ConfigIniRead = new QSettings("./system.ini",QSettings::IniFormat,0);
    QString strId;
    QString strIdSingle;
    int nPos = 0;
    QList<int> codeList;

    strId = (ConfigIniRead->value("/Maintainer/Id")).toString();
    pPage->m_MapMaintainer.clear();

    while(strId.length() != 0)
    {
        if(strId.indexOf(",") != -1)
        {
            nPos = strId.indexOf(",");
            strIdSingle = strId.left(nPos);
            strId = strId.mid(nPos);
            codeList.push_back(strIdSingle.toInt());
            if(strId.length() != 0)
            {
                if(strId.left(1) == ",")
                {
                    strId = strId.mid(1);
                }
            }
        }
        else
        {
            codeList.push_back(strId.toInt());
            break;// the last code
        }

    }
    pPage->ResetBtnUp();
    delete ConfigIniRead;

    sort(codeList.begin(), codeList.end(), less<int>());
    for(int i = 0; i < codeList.count(); i++)
    {
        QString code = QString::number(codeList[i]);
        while(code.length() < 4)
        {
            code.insert(0,"0");
        }
        pPage->m_MapMaintainer[i+1] = code;
    }
    /* Modify by ChengJian for sort ini mantainer code 20110129 End */

    ChangePage(PAGE_ROM_INDEX_MAINTAINERLIST);
}
void CMaintainerManagePage::OnNum0Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER0);
}

void CMaintainerManagePage::OnNum1Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER1);
}

void CMaintainerManagePage::OnNum2Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER2);
}

void CMaintainerManagePage::OnNum3Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER3);
}

void CMaintainerManagePage::OnNum4Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER4);
}

void CMaintainerManagePage::OnNum5Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER5);
}

void CMaintainerManagePage::OnNum6Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER6);
}

void CMaintainerManagePage::OnNum7Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER7);
}

void CMaintainerManagePage::OnNum8Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER8);
}

void CMaintainerManagePage::OnNum9Down()
{
    SetBtnDown(ID_PICMM_BUTTON_NUMBER9);
}

void CMaintainerManagePage::OnNum0Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER0);
    AddSelectedEditBox("0");
}

void CMaintainerManagePage::OnNum1Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER1);
    AddSelectedEditBox("1");
}

void CMaintainerManagePage::OnNum2Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER2);
    AddSelectedEditBox("2");
}

void CMaintainerManagePage::OnNum3Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER3);
    AddSelectedEditBox("3");
}

void CMaintainerManagePage::OnNum4Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER4);
    AddSelectedEditBox("4");
}

void CMaintainerManagePage::OnNum5Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER5);
    AddSelectedEditBox("5");
}

void CMaintainerManagePage::OnNum6Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER6);
    AddSelectedEditBox("6");
}

void CMaintainerManagePage::OnNum7Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER7);
    AddSelectedEditBox("7");
}

void CMaintainerManagePage::OnNum8Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER8);
    AddSelectedEditBox("8");
}

void CMaintainerManagePage::OnNum9Up()
{
    SetBtnUp(ID_PICMM_BUTTON_NUMBER9);
    AddSelectedEditBox("9");
}

void CMaintainerManagePage::OnClearDown()
{
    SetBtnDown(ID_PICMM_BUTTON_CLEAR);
}

void CMaintainerManagePage::OnClearUp()
{
    SetBtnUp(ID_PICMM_BUTTON_CLEAR);
    SetSelectedEditBox("");
}

void CMaintainerManagePage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICMM_BUTTON_NUMBER0,
        ID_PICMM_BUTTON_NUMBER1,
        ID_PICMM_BUTTON_NUMBER2,
        ID_PICMM_BUTTON_NUMBER3,
        ID_PICMM_BUTTON_NUMBER4,
        ID_PICMM_BUTTON_NUMBER5,
        ID_PICMM_BUTTON_NUMBER6,
        ID_PICMM_BUTTON_NUMBER7,
        ID_PICMM_BUTTON_NUMBER8,
        ID_PICMM_BUTTON_NUMBER9,
        ID_PICMM_BUTTON_CLEAR,
        ID_PICMM_BUTTON_PWD_OK
      };

    for(int i = 0; i < 12; i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        if(nIDArray[i] == btnId)
        {
            pButton->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            pButton->ChangeButtonState(LBUTTON_UP);
        }
    }

    return;
}

void CMaintainerManagePage::SetBtnUp(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICMM_BUTTON_NUMBER0,
        ID_PICMM_BUTTON_NUMBER1,
        ID_PICMM_BUTTON_NUMBER2,
        ID_PICMM_BUTTON_NUMBER3,
        ID_PICMM_BUTTON_NUMBER4,
        ID_PICMM_BUTTON_NUMBER5,
        ID_PICMM_BUTTON_NUMBER6,
        ID_PICMM_BUTTON_NUMBER7,
        ID_PICMM_BUTTON_NUMBER8,
        ID_PICMM_BUTTON_NUMBER9,
        ID_PICMM_BUTTON_CLEAR,
        ID_PICMM_BUTTON_PWD_OK
    };

    for(int i = 0; i < 12; i++)
    {
        pButton = (CButton *)GetDlgItem(nIDArray[i]);
        if(nIDArray[i] == btnId)
        {
            pButton->ChangeButtonState(LBUTTON_UP);
        }
        else
        {
        }
    }

    return;
}

void CMaintainerManagePage::AddSelectedEditBox(QString str)
{
    int nLen = 0;
    if (IsEditSelected(ID_PICMM_EDIT_ID)) {
        nLen = (GetDlgItem(ID_PICMM_EDIT_ID)->GetCtrlText()).length();
        if(nLen < g_loginIDPWDLen)
        {
            AddEditStr(ID_PICMM_EDIT_ID, str);
        }
    } else if (IsEditSelected(ID_PICMM_EDIT_PWD)) {
        nLen = (GetDlgItem(ID_PICMM_EDIT_PWD)->GetCtrlText()).length();
        if(nLen < g_loginIDPWDLen)
        {
            AddEditStr(ID_PICMM_EDIT_PWD, str);
        }
    } else if (IsEditSelected(ID_PICMM_EDIT_PWDCONFIRM)) {
        nLen = (GetDlgItem(ID_PICMM_EDIT_PWDCONFIRM)->GetCtrlText()).length();
        if(nLen < g_loginIDPWDLen)
        {
            AddEditStr(ID_PICMM_EDIT_PWDCONFIRM, str);
        }
    }
}

void CMaintainerManagePage::SetSelectedEditBox(QString str)
{
    if (IsEditSelected(ID_PICMM_EDIT_ID)) {
        SetEditStr(ID_PICMM_EDIT_ID, str);
    } else if (IsEditSelected(ID_PICMM_EDIT_PWD)) {
        SetEditStr(ID_PICMM_EDIT_PWD, str);
    } else if (IsEditSelected(ID_PICMM_EDIT_PWDCONFIRM)) {
        SetEditStr(ID_PICMM_EDIT_PWDCONFIRM, str);
    }
}

void CMaintainerManagePage::OnIDEdit()
{
    SetEditSelected(ID_PICMM_EDIT_ID, true);
    SetEditSelected(ID_PICMM_EDIT_PWD, false);
    SetEditSelected(ID_PICMM_EDIT_PWDCONFIRM, false);
}

void CMaintainerManagePage::OnPWDEdit()
{
    SetEditSelected(ID_PICMM_EDIT_ID, false);
    SetEditSelected(ID_PICMM_EDIT_PWD, true);
    SetEditSelected(ID_PICMM_EDIT_PWDCONFIRM, false);
    ((CEdit *)GetDlgItem(ID_PICMM_EDIT_PWD))->m_bIsPassWord = true;
}

void CMaintainerManagePage::OnPWDAgainEdit()
{
    SetEditSelected(ID_PICMM_EDIT_ID, false);
    SetEditSelected(ID_PICMM_EDIT_PWD, false);
    SetEditSelected(ID_PICMM_EDIT_PWDCONFIRM, true);
    ((CEdit *)GetDlgItem(ID_PICMM_EDIT_PWDCONFIRM))->m_bIsPassWord = true;
}
void CMaintainerManagePage::SetEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetCtrlText(str);
}

void CMaintainerManagePage::SetEditSelected(int EditId, bool flg)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(flg);
}

void CMaintainerManagePage::AddEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    QString edit_str;
    edit_str = pEdit->GetCtrlText();
    edit_str = edit_str.append(str);
    pEdit->SetCtrlText(edit_str);
}

bool CMaintainerManagePage::IsEditSelected(int EditId)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return false;
    }

    return pEdit->GetSelected();
}

