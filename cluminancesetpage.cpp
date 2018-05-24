#include <qsettings.h>
#include <qfile.h>

#include "cluminancesetpage.h"
#include "cwarningdialog.h"

ROMDATA g_PicRom_LuminanceSet[] =
{
    /*string                          font                                        rc                  foreground color              background color                control type                   ID           */
    {QSTR("Luminance Setting"),           D_FONT(13),                           QRect(0,0,640,60),           Qt::black,                      Qt::yellow,                 CONTROL_LABEL,      ID_LUNINSMCESET_LABEL_TITLE    },
    {"",                             D_DEFAULT_FONT,                       QRect(85,200,470,50),        Qt::yellow,                     Qt::black,                  CONTROL_SLIDER,     ID_LUNINSMCESET_SLIDER_MOVE    },
    {QSTR("ManualSettingOK"),                D_COMMON_TITLE_FONT,                  QRect( 65,350,130,50),       Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_LUNINSMCESET_BUTTON_OK      },
    {QSTR("AutoAdjustment"),                D_COMMON_TITLE_FONT,                  QRect(255,350,130,50),       Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_LUNINSMCESET_BUTTON_AUTO    },
    {QSTR("Quit"),                   D_COMMON_TITLE_FONT,                  QRect(445,350,130,50),       Qt::yellow,                     Qt::black,                  CONTROL_BUTTON,     ID_LUNINSMCESET_BUTTON_QUIT    },

};
int g_LuminanceSetRomLen = sizeof(g_PicRom_LuminanceSet)/sizeof(ROMDATA);

LIGHTSTRU lights[] =
{
    {0, 106},
    {1, 169},
    {2, 232},
    {3, 295},
    {4, 357},
    {5, 420},
    {6, 483},
    {7, 546},
    {8, 608},
    {9, 671}
};

BEGIN_MESSAGE_MAP(CLuminanceSetPage,CPage)
    ON_UPDATE_PAGE()
    ON_LBUTTONDOWN(ID_LUNINSMCESET_BUTTON_OK, OnOkDown)
    ON_LBUTTONUP(ID_LUNINSMCESET_BUTTON_OK, OnOkUp)
    ON_LBUTTONDOWN(ID_LUNINSMCESET_BUTTON_AUTO, OnAutoDown)
    ON_LBUTTONUP(ID_LUNINSMCESET_BUTTON_AUTO, OnAutoUp)
    ON_LBUTTONDOWN(ID_LUNINSMCESET_BUTTON_QUIT, OnQuitDown)
    ON_LBUTTONUP(ID_LUNINSMCESET_BUTTON_QUIT, OnQuitUp)
    ON_LBUTTONDOWN(ID_LUNINSMCESET_SLIDER_MOVE, OnSliderMoveButtonDown)
    ON_LBUTTONUP(ID_LUNINSMCESET_SLIDER_MOVE, OnSliderMoveButtonUp)
END_MESSAGE_MAP()

CLuminanceSetPage::CLuminanceSetPage()
{


    isOpen = false;
    g_lightvalue = 7;
    SetLightValue(g_lightvalue);
}

CLuminanceSetPage::~CLuminanceSetPage()
{
}

void CLuminanceSetPage::OnUpdatePage()
{

}


void CLuminanceSetPage::OnInitPage()
{
    if (g_lightvalue > 9)
    {
        g_lightvalue = 9;
    }
    else if (g_lightvalue < 0)
    {
        g_lightvalue = 0;
    }

    for(int i=0; i<10; i++)
    {
        if(g_lightvalue == lights[i].nLight)
        {
            ((CSliderCtrl *)GetDlgItem(ID_LUNINSMCESET_SLIDER_MOVE))->SetThumbInfo(2, SetSliderMovePosition(lights[i].nPos));
            break;
        }
    }
}

void CLuminanceSetPage::OnOkDown()
{
    ((CButton*)GetDlgItem(ID_LUNINSMCESET_BUTTON_OK))->ChangeButtonState(LBUTTON_DOWN);
}

void CLuminanceSetPage::OnOkUp()
{
    ((CButton*)GetDlgItem(ID_LUNINSMCESET_BUTTON_OK))->ChangeButtonState(LBUTTON_UP);
    if (!isOpen)
    {
        int ret;
        ret = InitSerialPort();
        if (0 != ret)
        {
            CWarningDialog warningDlg;
            QString str="";
            str.sprintf("%d", ret);
            warningDlg.SetWarningStr(QSTR("InitSerialPort()返回值：")+str);
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            return;
        }
    }
    SetLightValue(g_lightvalue);
    CloseSerialPort();
}
void CLuminanceSetPage::OnAutoDown()
{
    ((CButton*)GetDlgItem(ID_LUNINSMCESET_BUTTON_AUTO))->ChangeButtonState(LBUTTON_DOWN);
}
void CLuminanceSetPage::OnAutoUp()
{
    ((CButton*)GetDlgItem(ID_LUNINSMCESET_BUTTON_AUTO))->ChangeButtonState(LBUTTON_UP);
    if (!isOpen)
    {
        int ret;
        ret = InitSerialPort();
        if (0 != ret)
        {
            CWarningDialog warningDlg;
            QString str="";
            str.sprintf("%d", ret);
            warningDlg.SetWarningStr(QSTR("InitSerialPort()返回值：")+str);
            warningDlg.setGeometry(m_pDlg->x()+int((m_pDlg->width()-400)/2),m_pDlg->y()+int((m_pDlg->height()-120)/2),400,120);
            warningDlg.exec();
            return;
        }
    }
    SetAutoAdjust();
    CloseSerialPort();
}
void CLuminanceSetPage::OnQuitDown()
{
    ((CButton*)GetDlgItem(ID_LUNINSMCESET_BUTTON_QUIT))->ChangeButtonState(LBUTTON_DOWN);
}

void CLuminanceSetPage::OnQuitUp()
{
    ((CButton*)GetDlgItem(ID_LUNINSMCESET_BUTTON_QUIT))->ChangeButtonState(LBUTTON_UP);
    ChangePage(PAGE_ROM_INDEX_PARAMETERSET);
}

void CLuminanceSetPage::OnSliderMoveButtonDown()
{
    CSliderCtrl* pSliderCtrl;
    QDialog *pDialog;
    int thumb_pos,change_pos;

    pDialog = GetParentDlg();
    thumb_pos = pDialog->mapFromGlobal(QCursor::pos()).x();
    pSliderCtrl = (CSliderCtrl *)GetDlgItem(ID_LUNINSMCESET_SLIDER_MOVE);
    change_pos = SetSliderMovePosition(thumb_pos);
    //qDebug() << "OnSliderMoveButtonDown()" << thumb_pos << change_pos;
    pSliderCtrl->SetThumbInfo(1, change_pos);
}

void CLuminanceSetPage::OnSliderMoveButtonUp()
{
    CSliderCtrl* pSliderCtrl;
    QDialog *pDialog;
    int thumb_pos,change_pos;

    pDialog = GetParentDlg();
    thumb_pos = pDialog->mapFromGlobal(QCursor::pos()).x();
    pSliderCtrl = (CSliderCtrl *)GetDlgItem(ID_LUNINSMCESET_SLIDER_MOVE);
    change_pos = SetSliderMovePosition(thumb_pos);
    //qDebug() << "OnSliderMoveButtonUp()" << thumb_pos << change_pos;
    pSliderCtrl->SetThumbInfo(2, change_pos);
}

void CLuminanceSetPage::WriteLightValueToINI()
{
    QFile inifile;
    QSettings* pSetting = NULL;
    QString inipath = qApp->applicationDirPath() + "/system.ini";

    if( inifile.exists(inipath) ){
        pSetting = new QSettings(inipath, QSettings::IniFormat );
        pSetting->setValue("/LightSet/LightValue", QString::number(g_lightvalue));
    } // end if

    delete pSetting;
}

int CLuminanceSetPage::SetSliderMovePosition(int thumb_pos)
{
    if (thumb_pos < 149)
    {
        g_lightvalue = 0;
    }
    else if ((thumb_pos >= 149) && (thumb_pos < 212))
    {
        g_lightvalue = 1;
    }
    else if ((thumb_pos >= 212) && (thumb_pos < 275))
    {
        g_lightvalue = 2;
    }
    else if ((thumb_pos >= 275) && (thumb_pos < 338))
    {
        g_lightvalue = 3;
    }
    else if ((thumb_pos >= 338) && (thumb_pos < 401))
    {
        g_lightvalue = 4;
    }
    else if ((thumb_pos >= 401) && (thumb_pos < 464))
    {
        g_lightvalue = 5;
    }
    else if ((thumb_pos >= 464) && (thumb_pos < 527))
    {
        g_lightvalue = 6;
    }
    else if ((thumb_pos >= 527) && (thumb_pos < 590))
    {
        g_lightvalue = 7;
    }
    else if ((thumb_pos >= 590) && (thumb_pos < 653))
    {
        g_lightvalue = 8;
    }
    else
    {
        g_lightvalue = 9;
    }

    return lights[g_lightvalue].nPos;
}

int CLuminanceSetPage::InitSerialPort()
{
    BAUDRATE = B9600;
    MODEMDEVICE = "/dev/ttyS2";
    DATABITS = CS8;
    PARITYTYPE = 0;
    STOPBITS = 1;

    if ((fd = open(MODEMDEVICE, O_RDWR | O_NOCTTY | O_NONBLOCK)) < 0)
    {
        return 1;
    }

    int status;
    struct termios Opt;
    tcgetattr(fd, &Opt);
    tcflush(fd, TCIOFLUSH);
    cfsetispeed(&Opt, BAUDRATE);
    cfsetospeed(&Opt, BAUDRATE);
    status =  tcsetattr(fd ,TCSANOW, &Opt);
    if (status != 0)
    {
        return 2;
    }
    tcflush(fd, TCIOFLUSH);

    struct termios options;
    if (tcgetattr( fd, &options ) != 0 )
    {
        return 3;
    }
    options.c_cflag &= ~CSIZE;
    options.c_cflag |= DATABITS;
    options.c_cflag &= ~PARENB;
    options.c_iflag &= ~INPCK;
    options.c_cflag &= ~CSTOPB;

    tcflush(fd, TCIFLUSH);

    options.c_lflag = 0;
    options.c_oflag = 0;
    options.c_iflag &= ~( ICRNL|IXON);
    options.c_cc[VTIME] = 1;
    options.c_cc[VMIN] = 0;
    if(tcsetattr(fd, TCSANOW,&options) != 0)
    {
        return 4;
    }
    isOpen = true;
    return 0;
}

void CLuminanceSetPage::CloseSerialPort()
{
    tcflush(fd, TCIOFLUSH);
    close(fd);
    isOpen = false;
}

int CLuminanceSetPage::ComRead(char *readData)
{
    mutexRead.lock();
    int nread = 0;
    if (fd != -1)
    {
        nread = read(fd, readData, 100);
    }
    mutexRead.unlock();
    return nread;
}

int CLuminanceSetPage::ComWrite(char *writeData, int len)
{
    mutexWrite.lock();
    int result = 0;
    if (len > 0)
    {
        if (fd != -1)
        {
            result = write(fd, writeData, len);
        }
    }
    mutexWrite.unlock();
    return result;
}

void CLuminanceSetPage::SetLightValue(int lightValue)
{
    ASSERT((lightValue >= 0) && (lightValue <= 9));
    int luminance;
    if (0 == lightValue)
    {
        luminance = 2;
    }
    else
    {
        luminance = lightValue * 255 / 9;
    }
    QVariant var = luminance;

    QString strLuminance = var.toString();
    char *luminanceAscii = strLuminance.toAscii().data();
    char cmd[10];
    cmd[0] = 0x1B;
    cmd[1] = 0x23;
    cmd[2] = 0x33;
    cmd[3] = 0x34;
    cmd[4] = 0x2C;
    for( int i=0; i<strLuminance.size(); i++ )
        cmd[5+i] = luminanceAscii[i];
    cmd[5+strLuminance.size()] = 0x0D;
    for( int i=0;i<3;i++)
    {
        ComWrite( cmd, 6+strLuminance.size() );
        usleep(200);
    }
}
void CLuminanceSetPage::SetAutoAdjust()
{
    char cmd[] = {0x1B,0x23,0x33,0x34,0x2C,0x30,0x0D};

    if(InitSerialPort() != 0 )
        return;

    for( int i=0;i<3;i++)
    {
        ComWrite(cmd, sizeof(cmd)/sizeof(char));
        usleep(200);
    }
    CloseSerialPort();
}
int CLuminanceSetPage::getLuminance()
{
    int luminance;
    int len = 0;
    char cmd[20];
    cmd[0] = 0x1B;
    cmd[1] = 0x23;
    cmd[2] = 0x38;
    cmd[3] = 0x35;
    cmd[4] = 0x0D;
    if( ComWrite( cmd, 5 ) == 5 )
    {
        while(1)
        {
            len = ComRead( cmd );
            if(len>0)
                break;
        }
        if( len>6 )
        {
            if( cmd[0]==0x01 &&
                cmd[1]==0x23 &&
                cmd[2]==0x38 &&
                cmd[3]==0x35 &&
                cmd[4]==0x2C )
            {
                switch( len )
                {
                case 7:
                    luminance = cmd[5] - 0x30;
                    break;
                case 8:
                    luminance = ( cmd[5] - 0x30 ) * 10 + cmd[6] - 0x30;
                    break;
                default:
                    luminance = ( cmd[5] - 0x30 ) * 100 + ( cmd[6] - 0x30 ) * 10 + cmd[7] - 0x30;
                    break;
                }
                return luminance;
            }
            else
                return -1;
        }
        else
            return( len - 20 );
    }
    else
        return -3;
}
