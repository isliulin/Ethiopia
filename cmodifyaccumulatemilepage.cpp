#include "cmodifyaccumulatemilepage.h"

ROMDATA g_PicRom_ModifyAccumulateMileage[] =
{
    /*string                        font                     rc                  foreground color              background color            control type                   ID           */
    {QSTR("Accumulated Mileage Modification"),  D_FONT(13),  QRect(  0,    0, 640, 60),        Qt::black,                   Qt::yellow,                 CONTROL_LABEL,        ID_IGNORE                 },

    {"1",                          D_COMMON_TITLE_FONT,  QRect(450,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER1  },
    {"2",                          D_COMMON_TITLE_FONT,  QRect(500,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER2  },
    {"3",                          D_COMMON_TITLE_FONT,  QRect(550,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER3  },
    {"4",                          D_COMMON_TITLE_FONT,  QRect(450,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER4  },
    {"5",                          D_COMMON_TITLE_FONT,  QRect(500,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER5  },
    {"6",                          D_COMMON_TITLE_FONT,  QRect(550,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER6  },
    {"7",                          D_COMMON_TITLE_FONT,  QRect(450,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER7  },
    {"8",                          D_COMMON_TITLE_FONT,  QRect(500,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER8  },
    {"9",                          D_COMMON_TITLE_FONT,  QRect(550,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER9  },
    {"0",                          D_COMMON_TITLE_FONT,  QRect(450,  250,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_NUMBER0  },
    {QSTR("Clear"),                  D_COMMON_TITLE_FONT,  QRect(500,  250, 100, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_CLEAR    },
    {QSTR("OK"),                  D_COMMON_TITLE_FONT,  QRect(160,  380, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_OK        },
    {QSTR("Quit"),                  D_COMMON_TITLE_FONT,  QRect(360,  380, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PICMAM_BUTTON_QUIT      },
    {QSTR("Accumulate Mileage"),              D_COMMON_TITLE_FONT,   QRect( 60,  145, 220, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {"",                           D_COMMON_TITLE_FONT,  QRect(250,  145, 110, 50),        Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PICMAM_EDIT_KM         },
    {"km",                         D_COMMON_TITLE_FONT,   QRect(370,  145,  50, 50),        Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE                 },
    {QSTR("Current Accumulate Mileage："),         D_COMMON_TITLE_FONT,  QRect( 160,   80, 200, 30),        Qt::yellow,                  Qt::black,                 CONTROL_LABEL,         ID_PICMAM_LABEL_CURRENTMILEAGE },
};
int g_ModifyAccumulateMileageRomLen = sizeof(g_PicRom_ModifyAccumulateMileage)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CModifyAccumulateMilePage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_QUIT, OnQuitButtonUp)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_OK,OnOkDown)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_OK,OnOkUp)
        ON_LBUTTONDOWN(ID_PICMAM_EDIT_KM,OnEditDown)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER0,OnNum0Down)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER1,OnNum1Down)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER2,OnNum2Down)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER3,OnNum3Down)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER4,OnNum4Down)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER5,OnNum5Down)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER6,OnNum6Down)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER7,OnNum7Down)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER8,OnNum8Down)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_NUMBER9,OnNum9Down)
        ON_LBUTTONDOWN(ID_PICMAM_BUTTON_CLEAR,OnClearDown)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_NUMBER0,OnNum0Up)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_NUMBER1,OnNum1Up)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_NUMBER2,OnNum2Up)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_NUMBER3,OnNum3Up)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_NUMBER4,OnNum4Up)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_NUMBER5,OnNum5Up)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_NUMBER6,OnNum6Up)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_NUMBER7,OnNum7Up)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_NUMBER8,OnNum8Up)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_NUMBER9,OnNum9Up)
        ON_LBUTTONUP(ID_PICMAM_BUTTON_CLEAR,OnClearUp)
END_MESSAGE_MAP()

CModifyAccumulateMilePage::CModifyAccumulateMilePage()
{
}

void CModifyAccumulateMilePage::OnInitPage()
{
    SetEditSelected(ID_PICMAM_EDIT_KM, true);
    GetDlgItem(ID_PICMAM_EDIT_KM)->SetCtrlText("");
    //((CLabel *)GetDlgItem(ID_PICMAM_LABEL_CURRENTMILEAGE))->SetAlignment(Qt::AlignLeft);
}
void CModifyAccumulateMilePage::OnUpdatePage()
{
    QString str = "";
    str.sprintf("%d km", g_ParamSet_initAccumulateKms_Quint32);
    ((CLabel *)GetDlgItem(ID_PICMAM_LABEL_CURRENTMILEAGE))->SetCtrlText(QSTR("Current Accumulate Mileage:")+str);
}

void CModifyAccumulateMilePage::OnEditDown()
{
    CEdit* pEdit =  (CEdit*)GetDlgItem(ID_PICMAM_EDIT_KM);
    bool bSelected = pEdit->GetSelected();
    pEdit->SetSelected(!bSelected);
}

void CModifyAccumulateMilePage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICMAM_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CModifyAccumulateMilePage::OnQuitButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICMAM_BUTTON_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

void CModifyAccumulateMilePage::OnOkDown()
{
    ((CButton *)GetDlgItem(ID_PICMAM_BUTTON_OK))->ChangeButtonState(LBUTTON_DOWN);
}

void CModifyAccumulateMilePage::OnOkUp()
{
    QString strMile;

    strMile = GetDlgItem(ID_PICMAM_EDIT_KM)->GetCtrlText();
    if(strMile.length() == 0)
    {
        CWarningDialog warningDlg;
        warningDlg.SetWarningStr(QSTR("Input Null"));
        warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
        warningDlg.exec();
    }
    else
    {
        accumulateMileage = strMile;
        Main_AccumulateKmSettedFlag_Bool = true;
        g_ParamSet_initAccumulateKms_Quint32 = accumulateMileage.toULong();
        ((CButton *)GetDlgItem(ID_PICMAM_BUTTON_OK))->ChangeButtonState(LBUTTON_UP);
        ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
    }

}

void CModifyAccumulateMilePage::OnNum0Down()
{
    SetBtnDown(ID_PICMAM_BUTTON_NUMBER0);
}

void CModifyAccumulateMilePage::OnNum1Down()
{
    SetBtnDown(ID_PICMAM_BUTTON_NUMBER1);
}

void CModifyAccumulateMilePage::OnNum2Down()
{
    SetBtnDown(ID_PICMAM_BUTTON_NUMBER2);
}

void CModifyAccumulateMilePage::OnNum3Down()
{
    SetBtnDown(ID_PICMAM_BUTTON_NUMBER3);
}

void CModifyAccumulateMilePage::OnNum4Down()
{
    SetBtnDown(ID_PICMAM_BUTTON_NUMBER4);
}

void CModifyAccumulateMilePage::OnNum5Down()
{
    SetBtnDown(ID_PICMAM_BUTTON_NUMBER5);
}

void CModifyAccumulateMilePage::OnNum6Down()
{
    SetBtnDown(ID_PICMAM_BUTTON_NUMBER6);
}

void CModifyAccumulateMilePage::OnNum7Down()
{
    SetBtnDown(ID_PICMAM_BUTTON_NUMBER7);
}

void CModifyAccumulateMilePage::OnNum8Down()
{
    SetBtnDown(ID_PICMAM_BUTTON_NUMBER8);
}

void CModifyAccumulateMilePage::OnNum9Down()
{
    SetBtnDown(ID_PICMAM_BUTTON_NUMBER9);
}

void CModifyAccumulateMilePage::OnNum0Up()
{
    SetBtnUp(ID_PICMAM_BUTTON_NUMBER0);
    AddEditStr(ID_PICMAM_EDIT_KM, "0");
}

void CModifyAccumulateMilePage::OnNum1Up()
{
    SetBtnUp(ID_PICMAM_BUTTON_NUMBER1);
    AddEditStr(ID_PICMAM_EDIT_KM, "1");
}

void CModifyAccumulateMilePage::OnNum2Up()
{
    SetBtnUp(ID_PICMAM_BUTTON_NUMBER2);
    AddEditStr(ID_PICMAM_EDIT_KM, "2");
}

void CModifyAccumulateMilePage::OnNum3Up()
{
    SetBtnUp(ID_PICMAM_BUTTON_NUMBER3);
    AddEditStr(ID_PICMAM_EDIT_KM, "3");
}

void CModifyAccumulateMilePage::OnNum4Up()
{
    SetBtnUp(ID_PICMAM_BUTTON_NUMBER4);
    AddEditStr(ID_PICMAM_EDIT_KM, "4");
}

void CModifyAccumulateMilePage::OnNum5Up()
{
    SetBtnUp(ID_PICMAM_BUTTON_NUMBER5);
    AddEditStr(ID_PICMAM_EDIT_KM, "5");
}

void CModifyAccumulateMilePage::OnNum6Up()
{
    SetBtnUp(ID_PICMAM_BUTTON_NUMBER6);
    AddEditStr(ID_PICMAM_EDIT_KM, "6");
}

void CModifyAccumulateMilePage::OnNum7Up()
{
    SetBtnUp(ID_PICMAM_BUTTON_NUMBER7);
    AddEditStr(ID_PICMAM_EDIT_KM, "7");
}

void CModifyAccumulateMilePage::OnNum8Up()
{
    SetBtnUp(ID_PICMAM_BUTTON_NUMBER8);
    AddEditStr(ID_PICMAM_EDIT_KM, "8");
}

void CModifyAccumulateMilePage::OnNum9Up()
{
    SetBtnUp(ID_PICMAM_BUTTON_NUMBER9);
    AddEditStr(ID_PICMAM_EDIT_KM, "9");
}

void CModifyAccumulateMilePage::OnClearDown()
{
    SetBtnDown(ID_PICMAM_BUTTON_CLEAR);
}

void CModifyAccumulateMilePage::OnClearUp()
{
    SetBtnUp(ID_PICMAM_BUTTON_CLEAR);
    SetEditStr(ID_PICMAM_EDIT_KM, "");
}

void CModifyAccumulateMilePage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICMAM_BUTTON_NUMBER0,
        ID_PICMAM_BUTTON_NUMBER1,
        ID_PICMAM_BUTTON_NUMBER2,
        ID_PICMAM_BUTTON_NUMBER3,
        ID_PICMAM_BUTTON_NUMBER4,
        ID_PICMAM_BUTTON_NUMBER5,
        ID_PICMAM_BUTTON_NUMBER6,
        ID_PICMAM_BUTTON_NUMBER7,
        ID_PICMAM_BUTTON_NUMBER8,
        ID_PICMAM_BUTTON_NUMBER9,
        ID_PICMAM_BUTTON_CLEAR,
        ID_PICMAM_BUTTON_OK
      };

    for(int i = 0; i < 11; i++)
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

void CModifyAccumulateMilePage::SetBtnUp(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PICMAM_BUTTON_NUMBER0,
        ID_PICMAM_BUTTON_NUMBER1,
        ID_PICMAM_BUTTON_NUMBER2,
        ID_PICMAM_BUTTON_NUMBER3,
        ID_PICMAM_BUTTON_NUMBER4,
        ID_PICMAM_BUTTON_NUMBER5,
        ID_PICMAM_BUTTON_NUMBER6,
        ID_PICMAM_BUTTON_NUMBER7,
        ID_PICMAM_BUTTON_NUMBER8,
        ID_PICMAM_BUTTON_NUMBER9,
        ID_PICMAM_BUTTON_CLEAR,
        ID_PICMAM_BUTTON_OK
    };

    for(int i = 0; i < 11; i++)
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

void CModifyAccumulateMilePage::SetEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetCtrlText(str);
}

void CModifyAccumulateMilePage::AddEditStr(int EditId, QString str)
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

void CModifyAccumulateMilePage::SetEditSelected(int EditId, bool flg)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(flg);
}
