#include "csystimesetpage.h"

ROMDATA g_PicRom_SysTimeSet[] =
{
    /*string               font         rc                         foreground color              background color               control type                   ID           */
    {QSTR("System Time Setting")  ,  D_FONT(13),  QRect(0,  0,640, 60),          Qt::black,                   Qt::yellow,                 CONTROL_LABEL,        ID_PISTS_LABEL_TITLE                },

    {"",                   D_FONT(9),   QRect( 50,100,100, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_YEARHOUR      },
    {"",                   D_FONT(9),   QRect(180,100, 70, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_MONTHMINUTE     },
    {"",                   D_FONT(9),   QRect(280,100, 70, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_DAYSECOND       },
    {"",                   D_COMMON_TITLE_FONT,  QRect( 50,140,100, 50),         Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PISTS_EDIT_YEARHOUR       },
    {"",                   D_COMMON_TITLE_FONT,  QRect(180,140, 70, 50),         Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PISTS_EDIT_MONTHMINUTE      },
    {"",                   D_COMMON_TITLE_FONT,  QRect(280,140, 70, 50),         Qt::yellow,                  Qt::black,                  CONTROL_EDIT,         ID_PISTS_EDIT_DAYSECOND        },
    {"-",                  D_FONT(15),  QRect(151,140, 29, 50),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_SPLIT1},
    {"-",                  D_FONT(15),  QRect(251,140, 29, 50),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_LABEL_SPLIT2},

    {QSTR("Set"),         D_COMMON_TITLE_FONT,  QRect(160,  380, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_SET      },
    {QSTR("Quit"),         D_COMMON_TITLE_FONT,  QRect(360,  380, 120, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BTN_QUIT        },

    {"1",                  D_COMMON_TITLE_FONT,  QRect(400,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER1  },
    {"2",                  D_COMMON_TITLE_FONT,  QRect(450,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER2  },
    {"3",                  D_COMMON_TITLE_FONT,  QRect(500,  100,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER3  },
    {"4",                  D_COMMON_TITLE_FONT,  QRect(400,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER4  },
    {"5",                  D_COMMON_TITLE_FONT,  QRect(450,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER5  },
    {"6",                  D_COMMON_TITLE_FONT,  QRect(500,  150,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER6  },
    {"7",                  D_COMMON_TITLE_FONT,  QRect(400,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER7  },
    {"8",                  D_COMMON_TITLE_FONT,  QRect(450,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER8  },
    {"9",                  D_COMMON_TITLE_FONT,  QRect(500,  200,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER9  },
    {"0",                  D_COMMON_TITLE_FONT,  QRect(400,  250,  50, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_NUMBER0  },

    {QSTR("Clear"),              D_COMMON_TITLE_FONT,  QRect(450,  250, 100, 50),        Qt::black,                   Qt::yellow,                 CONTROL_BUTTON,       ID_PISTS_BUTTON_CLEAR  },
//    {"TIME RECVED FLAG",                   D_FONT(8),   QRect(80,200, 200, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_RECVFLAG       },
//    {"TIME SEND FLAG",                   D_FONT(8),   QRect(80,250, 200, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_SENDFLAG       },


    {"ATC1TIME1:",                   D_FONT(8),   QRect(20,200, 100, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },
    {"ATC1TIME2:",                   D_FONT(8),   QRect(20,250, 100, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },
    {"ATC2TIME1:",                   D_FONT(8),   QRect(20,300, 100, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },
    {"ATC2TIME2:",                   D_FONT(8),   QRect(20,350, 100, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_IGNORE       },

    {"",                   D_FONT(8),   QRect(150,200, 250, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_ATC1TIME1       },
    {"",                   D_FONT(8),   QRect(150,250, 250, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_ATC1TIME2       },
    {"",                   D_FONT(8),   QRect(150,300, 250, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_ATC2TIME1       },
    {"",                   D_FONT(8),   QRect(150,350, 250, 30),         Qt::yellow,                  Qt::black,                  CONTROL_LABEL,        ID_PISTS_ATC2TIME2       },


};
int g_SysTimeSetRomLen = sizeof(g_PicRom_SysTimeSet)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CSysTimeSetPage,CPage)
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_PISTS_BTN_QUIT, OnQuitButtonDown)
        ON_LBUTTONUP(ID_PISTS_BTN_QUIT, OnQuitButtonUp)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_SET, OnSetButtonDown)
        ON_LBUTTONUP(ID_PISTS_BUTTON_SET, OnSetButtonUp)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER0,OnNum0Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER1,OnNum1Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER2,OnNum2Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER3,OnNum3Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER4,OnNum4Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER5,OnNum5Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER6,OnNum6Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER7,OnNum7Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER8,OnNum8Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_NUMBER9,OnNum9Down)
        ON_LBUTTONDOWN(ID_PISTS_BUTTON_CLEAR,OnClearDown)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER0,OnNum0Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER1,OnNum1Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER2,OnNum2Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER3,OnNum3Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER4,OnNum4Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER5,OnNum5Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER6,OnNum6Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER7,OnNum7Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER8,OnNum8Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_NUMBER9,OnNum9Up)
        ON_LBUTTONUP(ID_PISTS_BUTTON_CLEAR,OnClearUp)

        ON_LBUTTONDOWN(ID_PISTS_EDIT_YEARHOUR, OnYearHourEdit)
        ON_LBUTTONDOWN(ID_PISTS_EDIT_MONTHMINUTE, OnMonthMinuteEdit)
        ON_LBUTTONDOWN(ID_PISTS_EDIT_DAYSECOND, OnDaySecondEdit)

END_MESSAGE_MAP()

CSysTimeSetPage::CSysTimeSetPage()
{
    m_settype = E_SET_DATE;
}

void CSysTimeSetPage::OnUpdatePage()
{
    GetDlgItem(ID_PISTS_ATC1TIME1)->SetCtrlText(QString::number((int)ATC1_TIME1_UINT));
    GetDlgItem(ID_PISTS_ATC1TIME2)->SetCtrlText(QString::number((int)ATC1_TIME2_UINT));
    GetDlgItem(ID_PISTS_ATC2TIME1)->SetCtrlText(QString::number((int)ATC2_TIME1_UINT));
    GetDlgItem(ID_PISTS_ATC2TIME2)->SetCtrlText(QString::number((int)ATC2_TIME2_UINT));

//    if(ADJUSTTIME_ENABLE_BOOL)
//        GetDlgItem(ID_PISTS_RECVFLAG)->SetCtrlText(QSTR("FLAG RECEIVED!"));
//    else
//        GetDlgItem(ID_PISTS_RECVFLAG)->SetCtrlText(QSTR("FLAG NOT RECEIVED!"));

//    if(g_SystemTimeSetEn_Bool)
//        GetDlgItem(ID_PISTS_SENDFLAG)->SetCtrlText(QSTR("FLAG SEND!"));
//    else
//        GetDlgItem(ID_PISTS_SENDFLAG)->SetCtrlText(QSTR("FLAG NOT SEND!"));
}

void CSysTimeSetPage::OnInitPage()
{
    if (E_SET_DATE == m_settype)
    {
        GetDlgItem(ID_PISTS_LABEL_TITLE)->SetCtrlText(QSTR("System Date Setting"));
        GetDlgItem(ID_PISTS_LABEL_YEARHOUR)->SetCtrlText(QSTR("Year"));
        GetDlgItem(ID_PISTS_LABEL_MONTHMINUTE)->SetCtrlText(QSTR("Month"));
        GetDlgItem(ID_PISTS_LABEL_DAYSECOND)->SetCtrlText(QSTR("Day"));

        QString year, month, day;
        year.sprintf("%d", QDateTime::currentDateTime().date().year());
        month.sprintf("%d", QDateTime::currentDateTime().date().month());
        day.sprintf("%d", QDateTime::currentDateTime().date().day());
        SetEditSelected(ID_PISTS_EDIT_YEARHOUR,true);
        SetEditSelected(ID_PISTS_EDIT_MONTHMINUTE,false);
        SetEditSelected(ID_PISTS_EDIT_DAYSECOND,false);
        GetDlgItem(ID_PISTS_EDIT_YEARHOUR)->SetCtrlText(year);
        GetDlgItem(ID_PISTS_EDIT_MONTHMINUTE)->SetCtrlText(month);
        GetDlgItem(ID_PISTS_EDIT_DAYSECOND)->SetCtrlText(day);
    }
    else
    {
        GetDlgItem(ID_PISTS_LABEL_TITLE)->SetCtrlText(QSTR("System Time Setting"));
        GetDlgItem(ID_PISTS_LABEL_YEARHOUR)->SetCtrlText(QSTR("Hour"));
        GetDlgItem(ID_PISTS_LABEL_MONTHMINUTE)->SetCtrlText(QSTR("Minute"));
        GetDlgItem(ID_PISTS_LABEL_DAYSECOND)->SetCtrlText(QSTR("Second"));

        QString hour, minute, second;
        hour.sprintf("%d", QDateTime::currentDateTime().time().hour());
        minute.sprintf("%d", QDateTime::currentDateTime().time().minute());
        second.sprintf("%d", QDateTime::currentDateTime().time().second());
        SetEditSelected(ID_PISTS_EDIT_YEARHOUR,true);
        SetEditSelected(ID_PISTS_EDIT_MONTHMINUTE,false);
        SetEditSelected(ID_PISTS_EDIT_DAYSECOND,false);
        GetDlgItem(ID_PISTS_EDIT_YEARHOUR)->SetCtrlText(hour);
        GetDlgItem(ID_PISTS_EDIT_MONTHMINUTE)->SetCtrlText(minute);
        GetDlgItem(ID_PISTS_EDIT_DAYSECOND)->SetCtrlText(second);
    }
}

void CSysTimeSetPage::OnQuitButtonDown()
{
    ((CButton*)GetDlgItem(ID_PISTS_BTN_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CSysTimeSetPage::OnQuitButtonUp()
{
    ((CButton*)GetDlgItem(ID_PISTS_BTN_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

void CSysTimeSetPage::OnSetButtonDown()
{
    ((CButton*)GetDlgItem(ID_PISTS_BUTTON_SET))->ChangeButtonState(LBUTTON_DOWN);
}

void CSysTimeSetPage::OnSetButtonUp()
{
//    QString strYear;
//    QString strMonth;
//    QString strDay;
//    QString strHour;
//    QString strMinute;
//    QString strSecond;
    int nYear = 0;
    int nMonth = 0;
    int nDay = 0;
    int nHour = 0;
    int nMinute = 0;
    int nSecond = 0;



  //  QDate intputdate,update( 2040, 01, 19 ),downdate( 2013, 03, 23 );

    strYear.sprintf("%d", QDateTime::currentDateTime().date().year());
    strMonth.sprintf("%d", QDateTime::currentDateTime().date().month());
    strDay.sprintf("%d", QDateTime::currentDateTime().date().day());
    strHour.sprintf("%d", QDateTime::currentDateTime().time().hour());
    strMinute.sprintf("%d", QDateTime::currentDateTime().time().minute());
    strSecond.sprintf("%d", QDateTime::currentDateTime().time().second());

    //qDebug()<<strYear<<"-"<<strMonth<<"-"<<strDay<<" "<<strHour<<":"<<strMinute<<":"<<strSecond;

    if (E_SET_DATE == m_settype)
    {
        strYear = GetDlgItem(ID_PISTS_EDIT_YEARHOUR)->GetCtrlText();
        strMonth = GetDlgItem(ID_PISTS_EDIT_MONTHMINUTE)->GetCtrlText();
        strDay = GetDlgItem(ID_PISTS_EDIT_DAYSECOND)->GetCtrlText();
    }
    else
    {
        strHour = GetDlgItem(ID_PISTS_EDIT_YEARHOUR)->GetCtrlText();
        strMinute = GetDlgItem(ID_PISTS_EDIT_MONTHMINUTE)->GetCtrlText();
        strSecond = GetDlgItem(ID_PISTS_EDIT_DAYSECOND)->GetCtrlText();
    }

    if(strYear.length() != 4 || strMonth.length() > 2
       || strDay.length() > 2 || strHour.length() > 2
       || strMinute.length() > 2 || strSecond.length() > 2)
    {
        OnInitPage();
        ShowWarningDialog();
    }
    else
    {
        nYear = strYear.toInt();
        nMonth = strMonth.toInt();
        nDay = strDay.toInt();
        nHour = strHour.toInt();
        nMinute = strMinute.toInt();
        nSecond = strSecond.toInt();
        if(QDate::isValid( nYear, nMonth, nDay ) && QTime::isValid( nHour, nMinute, nSecond ))
        {
//            intputdate.setDate( nYear, nMonth, nDay );
//            if( intputdate.daysTo( update ) >= 1 && downdate.daysTo( intputdate ) >= 0 )
//            {
                //setScreenTime( nYear, nMonth, nDay, nHour, nMinute, nSecond );
                g_SystemTimeSetEn_Bool = true;
                SetSystemTime( nYear, nMonth, nDay, nHour, nMinute, nSecond );

                //build csv rundata
//                 QDateTime currentDateTime = QDateTime::currentDateTime();
//                 QString fileNameRunData = "./data/rundata" + currentDateTime.date().toString("yyyy_MM_dd") + ".csv";
//                 QFile csvFileRunData( fileNameRunData );
//                if(!(csvFileRunData.exists()))
//                {
//                    if( !csvFileRunData.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append) )
//                    {
//                        return;
//                    }
//                    QTextStream inoutRunData( &csvFileRunData );
//                    inoutRunData.setCodec("GB2312");
//                }

                ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
//            }
//            else
//            {
//                OnInitPage();
//                ShowWarningDialog();
//            }
        }
        else
        {
            OnInitPage();
            ShowWarningDialog();
        }

    }
}

void CSysTimeSetPage::setScreenTime( int year, int mon, int day, int hour, int minute, int second )
{
//    time_t t;
//    struct tm nowtime;
//    nowtime.tm_sec = second; // second
//    nowtime.tm_min = minute; ///*       Minutes.[0-59]
//    nowtime.tm_hour = hour;  ///*       Hours.   [0-23]
//    nowtime.tm_mday = day;   ///*       Day.[1-31]
//    nowtime.tm_mon = mon - 1; ///*       Month.   [0-11]
//    nowtime.tm_year = year - 1900; ///*       Year-       1900.
//    nowtime.tm_isdst = -1;    ///*       DST.[-1/0/1]
//    t = mktime(&nowtime);
//    stime(&t);
    g_SystemTimeSetEn_Bool = true;
//    qDebug()<<" g_SystemTimeSetEn_Bool "<<g_SystemTimeSetEn_Bool;
    QDate date( year, mon, day );
    QTime time( hour, minute, second );
    QString dateStr = date.toString( "yyyy-MM-dd" );
    QString timeStr = time.toString( "hh:mm:ss" );
    //QString hwclockStr = "hwclock --set --date \"";
    QString hwclockStr = "date -s \"";
    dateStr.replace(QRegExp("-"), "");
    timeStr.replace(QRegExp("-"), ":");
    hwclockStr = hwclockStr + dateStr + " " + timeStr + "\"";
    //qDebug()<<hwclockStr;
//    QMessageBox::warning(NULL,
//                                 "error",
//                                  hwclockStr,
////                                 QString("An Error at: \nFile:") +__FILE__+ QString("   Line:") +QString::number(__LINE__)+
////                                  "\nsystem.ini not found!"+QObject::trUtf8("  请联系TMS调试人员!"),
//                                 QMessageBox::Ok,QMessageBox::Ok);
    char *c=hwclockStr.toAscii().data();
    system(c);

    //system("hwclock -w");


}

void CSysTimeSetPage::AddSelectedEditBox(QString str)
{
    int str_len;
    if ((E_SET_DATE == m_settype) && IsEditSelected(ID_PISTS_EDIT_YEARHOUR))
    {
        str_len = AddEditStr(ID_PISTS_EDIT_YEARHOUR, str);
        if (4 == str_len)
        {
            SetEditSelected(ID_PISTS_EDIT_YEARHOUR,false);
            SetEditSelected(ID_PISTS_EDIT_MONTHMINUTE,true);
            SetEditSelected(ID_PISTS_EDIT_DAYSECOND,false);
        }
    }
    else if ((E_SET_DATE == m_settype) && IsEditSelected(ID_PISTS_EDIT_MONTHMINUTE))
    {
        str_len = AddEditStr(ID_PISTS_EDIT_MONTHMINUTE, str);
        if (2 == str_len) {
            SetEditSelected(ID_PISTS_EDIT_YEARHOUR,false);
            SetEditSelected(ID_PISTS_EDIT_MONTHMINUTE,false);
            SetEditSelected(ID_PISTS_EDIT_DAYSECOND,true);
        }
    }
    else if ((E_SET_DATE == m_settype) && IsEditSelected(ID_PISTS_EDIT_DAYSECOND))
    {
        str_len = AddEditStr(ID_PISTS_EDIT_DAYSECOND, str);
        if (2 == str_len) {
            SetEditSelected(ID_PISTS_EDIT_YEARHOUR,false);
            SetEditSelected(ID_PISTS_EDIT_MONTHMINUTE,false);
            SetEditSelected(ID_PISTS_EDIT_DAYSECOND,false);
        }
    }
    else if ((E_SET_TIME == m_settype) && IsEditSelected(ID_PISTS_EDIT_YEARHOUR))
    {
        str_len = AddEditStr(ID_PISTS_EDIT_YEARHOUR, str);
        if (2 == str_len) {
            SetEditSelected(ID_PISTS_EDIT_YEARHOUR,false);
            SetEditSelected(ID_PISTS_EDIT_MONTHMINUTE,true);
            SetEditSelected(ID_PISTS_EDIT_DAYSECOND,false);
        }
    }
    else if ((E_SET_TIME == m_settype) && IsEditSelected(ID_PISTS_EDIT_MONTHMINUTE))
    {
        str_len = AddEditStr(ID_PISTS_EDIT_MONTHMINUTE, str);
        if (2 == str_len) {
            SetEditSelected(ID_PISTS_EDIT_YEARHOUR,false);
            SetEditSelected(ID_PISTS_EDIT_MONTHMINUTE,false);
            SetEditSelected(ID_PISTS_EDIT_DAYSECOND,true);
        }
    }
    else if ((E_SET_TIME == m_settype) && IsEditSelected(ID_PISTS_EDIT_DAYSECOND))
    {
        str_len = AddEditStr(ID_PISTS_EDIT_DAYSECOND, str);
        if (2 == str_len) {
            SetEditSelected(ID_PISTS_EDIT_YEARHOUR,false);
            SetEditSelected(ID_PISTS_EDIT_MONTHMINUTE,false);
            SetEditSelected(ID_PISTS_EDIT_DAYSECOND,false);
        }
    }
    else
    {
        //do nothing
    }
}

bool CSysTimeSetPage::IsEditSelected(int EditId)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return false;
    }

    return pEdit->GetSelected();
}

int CSysTimeSetPage::AddEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return 0;
    }
    QString edit_str;
    edit_str = pEdit->GetCtrlText();

    if (
        ((E_SET_DATE == m_settype) && (ID_PISTS_EDIT_YEARHOUR == EditId) && (4 == edit_str.length()))
        || ((E_SET_TIME == m_settype) && (ID_PISTS_EDIT_YEARHOUR == EditId) && (2 == edit_str.length()))
        || ((ID_PISTS_EDIT_MONTHMINUTE == EditId) && (2 == edit_str.length()))
        || ((ID_PISTS_EDIT_DAYSECOND == EditId) && (2 == edit_str.length()))
        )
    {
        edit_str = str;
    }
    else
    {
        edit_str = edit_str.append(str);
    }
    pEdit->SetCtrlText(edit_str);
    return edit_str.length();
}

void CSysTimeSetPage::SetEditSelected(int EditId, bool flg)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetSelected(flg);
}

void CSysTimeSetPage::SetSelectedEditBox(QString str)
{

    if (IsEditSelected(ID_PISTS_EDIT_YEARHOUR))
    {
        SetEditStr(ID_PISTS_EDIT_YEARHOUR, str);
    }
    else if (IsEditSelected(ID_PISTS_EDIT_MONTHMINUTE))
    {
        SetEditStr(ID_PISTS_EDIT_MONTHMINUTE, str);
    }
    else if (IsEditSelected(ID_PISTS_EDIT_DAYSECOND))
    {
        SetEditStr(ID_PISTS_EDIT_DAYSECOND, str);
    }
    else
    {
        // do nothing
    }
}

void CSysTimeSetPage::SetEditStr(int EditId, QString str)
{
    CEdit *pEdit = NULL;
    pEdit = (CEdit *)GetDlgItem(EditId);
    if (NULL == pEdit)
    {
        return;
    }
    pEdit->SetCtrlText(str);
}

void CSysTimeSetPage::SetBtnDown(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PISTS_BUTTON_NUMBER1,
        ID_PISTS_BUTTON_NUMBER2,
        ID_PISTS_BUTTON_NUMBER3,
        ID_PISTS_BUTTON_NUMBER4,
        ID_PISTS_BUTTON_NUMBER5,
        ID_PISTS_BUTTON_NUMBER6,
        ID_PISTS_BUTTON_NUMBER7,
        ID_PISTS_BUTTON_NUMBER8,
        ID_PISTS_BUTTON_NUMBER9,
        ID_PISTS_BUTTON_NUMBER0,
        ID_PISTS_BUTTON_CLEAR
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

void CSysTimeSetPage::SetBtnUp(int btnId)
{
    CButton *pButton = NULL;
    int nIDArray[] =
    {
        ID_PISTS_BUTTON_NUMBER1,
        ID_PISTS_BUTTON_NUMBER2,
        ID_PISTS_BUTTON_NUMBER3,
        ID_PISTS_BUTTON_NUMBER4,
        ID_PISTS_BUTTON_NUMBER5,
        ID_PISTS_BUTTON_NUMBER6,
        ID_PISTS_BUTTON_NUMBER7,
        ID_PISTS_BUTTON_NUMBER8,
        ID_PISTS_BUTTON_NUMBER9,
        ID_PISTS_BUTTON_NUMBER0,
        ID_PISTS_BUTTON_CLEAR
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

void CSysTimeSetPage::OnNum0Down()
{
    SetBtnDown(ID_PISTS_BUTTON_NUMBER0);
}

void CSysTimeSetPage::OnNum1Down()
{
    SetBtnDown(ID_PISTS_BUTTON_NUMBER1);
}

void CSysTimeSetPage::OnNum2Down()
{
    SetBtnDown(ID_PISTS_BUTTON_NUMBER2);
}

void CSysTimeSetPage::OnNum3Down()
{
    SetBtnDown(ID_PISTS_BUTTON_NUMBER3);
}

void CSysTimeSetPage::OnNum4Down()
{
    SetBtnDown(ID_PISTS_BUTTON_NUMBER4);
}

void CSysTimeSetPage::OnNum5Down()
{
    SetBtnDown(ID_PISTS_BUTTON_NUMBER5);
}

void CSysTimeSetPage::OnNum6Down()
{
    SetBtnDown(ID_PISTS_BUTTON_NUMBER6);
}

void CSysTimeSetPage::OnNum7Down()
{
    SetBtnDown(ID_PISTS_BUTTON_NUMBER7);
}

void CSysTimeSetPage::OnNum8Down()
{
    SetBtnDown(ID_PISTS_BUTTON_NUMBER8);
}

void CSysTimeSetPage::OnNum9Down()
{
    SetBtnDown(ID_PISTS_BUTTON_NUMBER9);
}

void CSysTimeSetPage::OnNum0Up()
{
    SetBtnUp(ID_PISTS_BUTTON_NUMBER0);
    AddSelectedEditBox("0");
}

void CSysTimeSetPage::OnNum1Up()
{
    SetBtnUp(ID_PISTS_BUTTON_NUMBER1);
   AddSelectedEditBox("1");
}

void CSysTimeSetPage::OnNum2Up()
{
    SetBtnUp(ID_PISTS_BUTTON_NUMBER2);
    AddSelectedEditBox("2");
}

void CSysTimeSetPage::OnNum3Up()
{
    SetBtnUp(ID_PISTS_BUTTON_NUMBER3);
    AddSelectedEditBox("3");
}

void CSysTimeSetPage::OnNum4Up()
{
    SetBtnUp(ID_PISTS_BUTTON_NUMBER4);
    AddSelectedEditBox("4");
}

void CSysTimeSetPage::OnNum5Up()
{
    SetBtnUp(ID_PISTS_BUTTON_NUMBER5);
    AddSelectedEditBox("5");
}

void CSysTimeSetPage::OnNum6Up()
{
    SetBtnUp(ID_PISTS_BUTTON_NUMBER6);
    AddSelectedEditBox("6");
}

void CSysTimeSetPage::OnNum7Up()
{
    SetBtnUp(ID_PISTS_BUTTON_NUMBER7);
    AddSelectedEditBox("7");
}

void CSysTimeSetPage::OnNum8Up()
{
    SetBtnUp(ID_PISTS_BUTTON_NUMBER8);
    AddSelectedEditBox("8");
}

void CSysTimeSetPage::OnNum9Up()
{
    SetBtnUp(ID_PISTS_BUTTON_NUMBER9);
    AddSelectedEditBox("9");
}

void CSysTimeSetPage::OnClearDown()
{
    SetBtnDown(ID_PISTS_BUTTON_CLEAR);
}

void CSysTimeSetPage::OnClearUp()
{
    SetBtnUp(ID_PISTS_BUTTON_CLEAR);
    SetSelectedEditBox("");
}

void CSysTimeSetPage::OnYearHourEdit()
{
    SetEditSelected(ID_PISTS_EDIT_YEARHOUR, true);
    SetEditSelected(ID_PISTS_EDIT_MONTHMINUTE, false);
    SetEditSelected(ID_PISTS_EDIT_DAYSECOND, false);
}

void CSysTimeSetPage::OnMonthMinuteEdit()
{
    SetEditSelected(ID_PISTS_EDIT_YEARHOUR, false);
    SetEditSelected(ID_PISTS_EDIT_MONTHMINUTE, true);
    SetEditSelected(ID_PISTS_EDIT_DAYSECOND, false);
}

void CSysTimeSetPage::OnDaySecondEdit()
{
    SetEditSelected(ID_PISTS_EDIT_YEARHOUR, false);
    SetEditSelected(ID_PISTS_EDIT_MONTHMINUTE, false);
    SetEditSelected(ID_PISTS_EDIT_DAYSECOND, true);
}

void CSysTimeSetPage::ShowWarningDialog()
{
    CWarningDialog dlg;
    //dlg.SetWarningStr(QSTR("Invalid Time Set！"));
    dlg.SetWarningStr(QSTR("Invalid Time！")+strYear+"-"+strMonth+"-"+strDay+" "+strHour+":"+strMinute+":"+strSecond);
    dlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
    dlg.exec();
}


