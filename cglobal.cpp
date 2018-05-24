#include "cglobal.h"
#include "cpage.h"

BYTE receiveData[D_RECEIVE_BUFFER_SIZE];
BYTE sendData[D_SEND_BUFFER_SIZE];

//BYTE rs485sendData[D_485SEND_BUFFER_SIZE]; // 20131219 cancel

int sendDataCnt = 0;
int revDataCnt = 0;
int revDataCnt_length0 = 0;
int comBreakCounter= 0;


int g_lightvalue = 7;

int g_history_faults_pagenum = 1;
int g_current_faults_pagenum = 1;
bool isNewFaultsOccurBool =  false;

E_LOGIN_TYPE g_login_type = ENUM_LOGIN_TYPE_DRIVER;
E_LOGIN_TYPE g_fault_recorder_login_type = ENUM_LOGIN_TYPE_ANONYMOUS;

bool g_communication_ok_flag = false;
int  g_loginIDPWDLen = 4;

QString     g_loginID = "0"; //"0"; //9527 //cancel test use 20120927
QString     g_fault_recorder_loginID = "0";
QString     g_car1CodeStr = "";
quint16     g_car1IDUint16 = 0;

QString g_car2CodeStr = "000";

QStringList g_stationNameLine1;
QStringList g_stationNameLine2;
QStringList g_stationNameLine3;
QStringList g_stationNameLine4;
QStringList g_stationNameLine5;

quint32  g_ParamSet_initAccumulateKms_Quint32 = 0x00000000;//Byte10,11,12,13

uchar    g_ParamSet_WheelDiameter_Uchar = 80; //Byte18
uchar    g_StationSet_DepartureStation_Uchar = 1;	//Byte19
uchar    g_StationSet_TerminalStation_Uchar = 1;	//Byte20
uchar    g_StationSet_CurrentStation_Uchar = 1;         //Byte21
quint16  g_ParamSet_CarCode_Uint = 0;	//Byte22,23
bool g_Vehicle_Codeset_enbale = false;

unsigned char emergencyBroadcastNumberUChar = 0;

quint8 mc1_sgn_lifrsignal = 0;
quint8 mc1_ax_lifrsignal = 0;
quint8 mc1_di1_lifrsignal = 0;
quint8 mc1_di2_lifrsignal = 0;
quint8 mc1_do1_lifrsignal = 0;
quint8 mc1_do2_lifrsignal = 0;
quint8 mc2_sgn_lifrsignal = 0;
quint8 mc2_ax_lifrsignal = 0;
quint8 mc2_di1_lifrsignal = 0;
quint8 mc2_di2_lifrsignal = 0;
quint8 mc2_do1_lifrsignal = 0;
quint8 mc2_do2_lifrsignal = 0;
bool mc1_sgn_onLine = false;
bool mc1_ax_onLine = false;
bool mc1_di1_onLine = false;
bool mc1_di2_onLine = false;
bool mc1_do1_onLine = false;
bool mc1_do2_onLine = false;
bool mc2_sgn_onLine = false;
bool mc2_ax_onLine = false;
bool mc2_di1_onLine = false;
bool mc2_di2_onLine = false;
bool mc2_do1_onLine = false;
bool mc2_do2_onLine = false;

BYTE test_tempdata[128];
WORD TC1_HMI_ini = 5;
WORD TC2_HMI_ini = 5;
WORD TC1_HMI = 5;
WORD TC2_HMI = 5;

bool firstSetHvacSomethingCoolBool = false; // 20130122 add for hvac
int writeFileCnt = 0; // for save faults
quint8 gearLevel = 0; // 牵引制动级位 0:NP 1-7:制动 8:EP 11-14:牵引

WORD screenUpdateCnt = 1;
WORD screenUpdateCntBack = 0;

///add init coupledflag
bool IsNetstateCoupledFlag = 0;
bool IsAcustateCoupledFlag = 0;
bool IsBcustateCoupledFlag = 0;
bool IsTcustateCoupledFlag = 0;
bool IsDoorstateCoupledFlag = 0;

bool butteryContectorBreakCheckedBool = false; // 20140115 add 

 int time3s = 0;

QString mRound( qreal const fValue, int const bitNumber )
{
    QString resultStr = "";
    qreal value = qAbs( fValue );
    quint32 remainder;
    QVariant var;
    if( bitNumber < 0 )
        return "";

    if( fValue >= 0 )
        resultStr = "";
    else
        resultStr = "-";

    switch( bitNumber )
    {
    case 0:
        remainder = ( quint32 )( value * 10 ) - ( quint32 )value * 10;
        if( remainder > 4)
            var = ( quint32 )value + 1;
        else
            var = ( quint32 )value;
        resultStr = resultStr.append( var.toString() );
        break;
    case 1:
        remainder = ( quint32 )( value * 100 ) - ( quint32 )( value * 10 ) * 10;
        if( remainder > 4 )
            remainder = ( quint32 )( value * 10 )  + 1;
        else
            remainder = ( quint32 )( value * 10 );
        var = remainder / 10;
        resultStr = resultStr.append( var.toString() ) + ".";
        var = remainder % 10;
        resultStr = resultStr.append( var.toString() );
        break;
    case 2:
        remainder = ( quint32 )( value * 1000 ) - ( quint32 )( value * 100 ) * 10;
        if( remainder > 4 )
            remainder = ( quint32 )( value * 100 )  + 1;
        else
            remainder = ( quint32 )( value * 100 );
        var = remainder / 100;
        resultStr = resultStr.append( var.toString() ) + ".";
        remainder = remainder % 100;
        var = remainder;
        if(remainder<10)
            resultStr = resultStr.append( "0" + var.toString() );
        else
            resultStr = resultStr.append( var.toString() );
        break;
     default: // bitNumber = 3
         remainder = ( quint32 )( value * 10000 ) - ( quint32 )( value * 1000 ) * 10;
         if( remainder > 4 )
             remainder = ( quint32 )( value * 1000 )  + 1;
         else
             remainder = ( quint32 )( value * 1000 );
         var = remainder / 1000;
         resultStr = resultStr.append( var.toString() ) + ".";
         remainder = remainder % 1000;
         var = remainder;
         if(remainder<10)
            resultStr = resultStr.append( "00" + var.toString() );
         else if(remainder<100)
             resultStr = resultStr.append( "0" + var.toString() );
         else
             resultStr = resultStr.append( var.toString() );
         break;
        }//end

    return resultStr;
}

BYTE Bit(uint byte, uint bit)
{
    ASSERT((byte) < D_RECEIVE_BUFFER_SIZE);
    ASSERT(bit <= 7);
    BYTE flag = 0x01;
    flag = (flag << bit);
    return (receiveData[byte] & flag);
}
void SetINIInfo(QString keypath, QString str)
{
    QString path = qApp->applicationDirPath();
    QString fileName = path + "/csystem.ini";
    QFile inifile( fileName );

    if ( inifile.exists( fileName ) )
    {
        if ( inifile.setPermissions( QFile::WriteOther | QFile::ReadOther ) )
        {
            QSettings settings( fileName, QSettings::IniFormat );
            settings.setIniCodec(QTextCodec::codecForName("utf-8"));
            settings.setValue(keypath, str);
        }
    }
}
CGlobal::CGlobal()
{
}

void SetSystemTime(  int year, int mon, int day, int hour, int minute, int second )
{

    #ifndef windows_demo
    time_t t;
    struct tm nowtime;
    nowtime.tm_sec = second; // second
    nowtime.tm_min = minute; ///*       Minutes.[0-59]
    nowtime.tm_hour = hour;  ///*       Hours.   [0-23]
    nowtime.tm_mday = day;   ///*       Day.[1-31]
    nowtime.tm_mon = mon - 1; ///*       Month.   [0-11]
    nowtime.tm_year = year - 1900; ///*       Year-       1900.
    nowtime.tm_isdst = -1;    ///*       DST.[-1/0/1]
    t = mktime(&nowtime);
    stime(&t);

    QDate date( year, mon, day );
    QTime time( hour, minute, second );
    QString dateStr = date.toString( "yyyy-MM-dd" );
    QString timeStr = time.toString( "hh:mm:ss" );
    QString hwclockStr = "hwclock --set --date \"";
    dateStr.replace(QRegExp("-"), "");
    timeStr.replace(QRegExp("-"), ":");
    hwclockStr = hwclockStr + dateStr + " " + timeStr + "\"";
    char *c=hwclockStr.toAscii().data();
    system(c);
    #endif  //windows_demo


}

//int  CGlobal::m_nCurPageIndex = PICTURE_INDEX(PAGE_ROM_INDEX_MAIN); // test use 20120927
int  CGlobal::m_nCurPageIndex = PICTURE_INDEX(PAGE_ROM_INDEX_SYSLOGIN);

