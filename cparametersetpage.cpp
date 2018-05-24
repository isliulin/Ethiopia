#include <qdebug.h>

#include "cparametersetpage.h"
#include "cwheeldiametersetpage.h"
#include "ccarcodesetpage.h"
#include "csysloginpage.h"
#include "csystimesetpage.h"
#include "clocaliopage.h"

extern vector<CPage*> g_PageVec;
ROMDATA g_PicRom_ParameterSet[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER
  {QSTR("System Time Setting"),     D_COMMON_TITLE_FONT,          QRect(66,  80, 230, 40),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_SYSTIMESET       },
  {QSTR("Vehicle Code Setting"),     D_COMMON_TITLE_FONT,          QRect(66, 140, 230, 40),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_CARCODESET       },
  {QSTR("Wheel Diameter"),        D_COMMON_TITLE_FONT,          QRect(66, 200, 230, 40),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_WDIAMETERSET     },
  {QSTR("Luminance Adjustment"),        D_COMMON_TITLE_FONT,          QRect(66, 260, 230, 40),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_LUMINANCESET     },
  //{QSTR("屏幕校正"),      D_COMMON_TITLE_FONT,          QRect(66, 320, 230, 40),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_SCREENRECTIFY    },
  //{QSTR("网络IO"),       D_COMMON_TITLE_FONT,          QRect(66, 380, 230, 40),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_LOCALIO          },
  {QSTR("Local IO Display"),         D_COMMON_TITLE_FONT,          QRect(66, 320, 230, 40),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_LOCALIO          },

  {QSTR("System Date Setting"),     D_COMMON_TITLE_FONT,          QRect(334, 80, 230, 40),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_SYSDATESET       },
  {QSTR("Driver Code"),     D_COMMON_TITLE_FONT,          QRect(334,140, 230, 40),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_DRICODEMANAGE    },
  {QSTR("Maintainer"),     D_COMMON_TITLE_FONT,          QRect(334,200, 230, 40),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_MAINTAINERMANAGE },
  {QSTR("Accumulated Mileage"),     D_COMMON_TITLE_FONT,          QRect(334,260, 230, 40),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_MODACCMILE       },
  {QSTR("Version Display"),        D_COMMON_TITLE_FONT,          QRect(334,320, 230, 40) ,      Qt::black,                      Qt::yellow,               CONTROL_BUTTON,         ID_PICPS_BUTTON_VERSION          },
  {QSTR("Return To Login"),   D_COMMON_TITLE_FONT,          QRect(334,380, 230, 40),       Qt::black,                      Qt::yellow,                CONTROL_BUTTON,         ID_PICPS_BUTTON_QUIT             },

  D_LAYER2_NAVIGATION_BAR_MAINTAIN
};
int g_ParameterSetRomLen = sizeof(g_PicRom_ParameterSet)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CParameterSetPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(IDBTN_NAVIBAR_QUIT, OnCommonQuitButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_SYSTIMESET, OnSysTimeSetButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_SYSDATESET, OnSysDateSetButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_CARCODESET, OnCarCodeSetButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_WDIAMETERSET, OnWheelDiameterSetButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_DRICODEMANAGE, OnDriverCodeManageButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_LUMINANCESET, OnLuminanceButtonDown)
        //ON_LBUTTONDOWN(ID_PICPS_BUTTON_SCREENRECTIFY, OnScreenRectifyDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_MAINTAINERMANAGE, OnMaintainerButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_MODACCMILE, OnModAccMileButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_VERSION, OnVersionButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_QUIT, OnReturnButtonDown)
        ON_LBUTTONDOWN(ID_PICPS_BUTTON_LOCALIO, OnLocalIoButtonDown)

        ON_LBUTTONUP(ID_PICPS_BUTTON_QUIT, OnReturnButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_SYSTIMESET, OnSysTimeSetButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_SYSDATESET, OnSysDateSetButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_CARCODESET, OnCarCodeSetButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_WDIAMETERSET, OnWheelDiameterSetButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_DRICODEMANAGE, OnDriverCodeManageButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_LUMINANCESET, OnLuminanceButtonUp)
        //ON_LBUTTONUP(ID_PICPS_BUTTON_SCREENRECTIFY, OnScreenRectifyUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_MAINTAINERMANAGE, OnMaintainerButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_MODACCMILE, OnModAccMileButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_VERSION, OnVersionButtonUp)
        ON_LBUTTONUP(ID_PICPS_BUTTON_LOCALIO, OnLocalIoButtonUp)
END_MESSAGE_MAP()

CParameterSetPage::CParameterSetPage()
{
}

void CParameterSetPage::OnUpdatePage()
{

}

void CParameterSetPage::ShowWarningDialog()
{
    CWarningDialog dlg;
    dlg.SetWarningStr(QSTR("Permission denied！"));
    dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
    dlg.exec();
}

void CParameterSetPage::OnCommonQuitButtonDown()
{
    ChangePage(PAGE_ROM_INDEX_MAIN);
}

void CParameterSetPage::OnReturnButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnReturnButtonUp()
{
    CConfirmDialog confirmDlg;
    confirmDlg.SetConfirmStr(QSTR("Are you sure to return to login?"));
    confirmDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
    confirmDlg.exec();
    if (!confirmDlg.GetContinue())
    {
        return;
    }

    CSysLoginPage* pPage = (CSysLoginPage*)g_PageVec[PAGE_ROM_INDEX_SYSLOGIN];
    if (ENUM_LOGIN_TYPE_DRIVER == g_login_type)
    {
        pPage->GetDlgItem(ID_PICLOGIN_EDIT_DRIVERCODE)->SetCtrlText("");
        ((CButton *)pPage->GetDlgItem(ID_PICLOGIN_BUTTON_DRIVER))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton *)pPage->GetDlgItem(ID_PICLOGIN_BUTTON_MAINTAINER))->ChangeButtonState(LBUTTON_UP);

    }
    else
    {
        ((CButton* )pPage->GetDlgItem(ID_PICLOGIN_BUTTON_MAINTAINER))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton *)pPage->GetDlgItem(ID_PICLOGIN_BUTTON_DRIVER))->ChangeButtonState(LBUTTON_UP);
        pPage->GetDlgItem(ID_PICLOGIN_EDIT_ID)->SetCtrlText("");
        pPage->GetDlgItem(ID_PICLOGIN_EDIT_PWD)->SetCtrlText("");
        pPage->SetEditSelected(ID_PICLOGIN_EDIT_ID, true);
        pPage->SetEditSelected(ID_PICLOGIN_EDIT_PWD, false);
    }
    ChangePage(PAGE_ROM_INDEX_SYSLOGIN);
}

void CParameterSetPage::OnSysTimeSetButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SYSTIMESET))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnSysDateSetButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SYSDATESET))->ChangeButtonState(LBUTTON_DOWN);
}


void CParameterSetPage::OnCarCodeSetButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_CARCODESET))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnWheelDiameterSetButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_WDIAMETERSET))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnDriverCodeManageButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_DRICODEMANAGE))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnLuminanceButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_LUMINANCESET))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnMaintainerButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_MAINTAINERMANAGE))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnModAccMileButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_MODACCMILE))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnVersionButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_VERSION))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnSysTimeSetButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SYSTIMESET))->ChangeButtonState(LBUTTON_UP);
    if (ENUM_LOGIN_TYPE_MAINTAINER != g_login_type)
    {
        ShowWarningDialog();
        return;
    }
    ChangePage(PAGE_ROM_INDEX_SYSTIMESET);
    CPage *pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    ((CSysTimeSetPage *)pPage)->m_settype = E_SET_TIME;
    ((CSysTimeSetPage *)pPage)->OnInitPage();
}

void CParameterSetPage::OnSysDateSetButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SYSDATESET))->ChangeButtonState(LBUTTON_UP);
    if (ENUM_LOGIN_TYPE_MAINTAINER != g_login_type)
    {
        ShowWarningDialog();
        return;
    }
    ChangePage(PAGE_ROM_INDEX_SYSTIMESET);
    CPage *pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    ((CSysTimeSetPage *)pPage)->m_settype = E_SET_DATE;
    ((CSysTimeSetPage *)pPage)->OnInitPage();
}

void CParameterSetPage::OnCarCodeSetButtonUp()
{
    if (ENUM_LOGIN_TYPE_MAINTAINER != g_login_type)
    {
        ShowWarningDialog();
        return;
    }
    CCarCodeSetPage* pPage = (CCarCodeSetPage*)g_PageVec[PAGE_ROM_INDEX_CARCODESET];
    pPage->GetDlgItem(ID_PICCCS_EDIT_CODE)->SetCtrlText("");

    ChangePage(PAGE_ROM_INDEX_CARCODESET);
}

void CParameterSetPage::OnWheelDiameterSetButtonUp()
{
    if (ENUM_LOGIN_TYPE_MAINTAINER != g_login_type)
    {
        ShowWarningDialog();
        return;
    }
    CWheelDiameterSetPage* pPage = (CWheelDiameterSetPage*)g_PageVec[PAGE_ROM_INDEX_WHEELDIAMETERSET];
    pPage->GetDlgItem(ID_PICWDS_LABEL_ORIGINALSET)->SetCtrlText(pPage->m_WheelDiameter);
    pPage->GetDlgItem(ID_PICWDS_EDIT_DIAMETER)->SetCtrlText("");
    ChangePage(PAGE_ROM_INDEX_WHEELDIAMETERSET);
}

void CParameterSetPage::OnDriverCodeManageButtonUp()
{
    if (ENUM_LOGIN_TYPE_MAINTAINER != g_login_type)
    {
        ShowWarningDialog();
        return;
    }
    ChangePage(PAGE_ROM_INDEX_DRIVERCODEMANAGE);
}

void CParameterSetPage::OnLuminanceButtonUp()
{
    ChangePage(PAGE_ROM_INDEX_LUMINANCESET);
}

void CParameterSetPage::OnMaintainerButtonUp()
{
    if (ENUM_LOGIN_TYPE_MAINTAINER != g_login_type)
    {
        ShowWarningDialog();
        return;
    }
    ChangePage(PAGE_ROM_INDEX_MAINTAINERMANAGE);
}

void CParameterSetPage::OnModAccMileButtonUp()
{
    if (ENUM_LOGIN_TYPE_MAINTAINER != g_login_type)
    {
        ShowWarningDialog();
        return;
    }
    ChangePage(PAGE_ROM_INDEX_MODIFYACCUMULATEMILE);
}

void CParameterSetPage::OnVersionButtonUp()
{
    ChangePage(PAGE_ROM_INDEX_VERSION);
}

//void CParameterSetPage::OnScreenRectifyDown()
//{
//    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SCREENRECTIFY))->ChangeButtonState(LBUTTON_DOWN);
//}

//void CParameterSetPage::OnScreenRectifyUp()
//{
//    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_SCREENRECTIFY))->ChangeButtonState(LBUTTON_UP);

//    QString program = "./ts_script_calibrate";
//    QProcess::execute(program);
//}

void CParameterSetPage::OnLocalIoButtonDown()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_LOCALIO))->ChangeButtonState(LBUTTON_DOWN);
}

void CParameterSetPage::OnLocalIoButtonUp()
{
    ((CButton*)GetDlgItem(ID_PICPS_BUTTON_LOCALIO))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_LOCALIO);
}
