#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <qevent.h>
#include <qdesktopwidget.h>
#include <qapplication.h>
#include <qdatetime.h>
#include <qdebug.h>
#include <qprocess.h>
#include <QPalette>
#include <QColor>

#include "cpage.h"
#include "cglobal.h"
#include "serialthread232.h"
//#include "serialthread485.h"// 20131219 cancel
#include "faultcommonprocess.h"

#include "cmainhelpdialog.h"
#include "cdebugdialog.h"
#include "csetcarsdirdlg.h"

#include "recorderthread.h"

//page head file
#include "cacustatepage.h"
#include "cbcustatepage.h"
#include "cdcdcstatepage.h"
#include "ccarcodesetpage.h"
#include "ccurrentfaultlistpage.h"
//#include "ccurrentstationsetpage.h"
#include "cdeviceselectpage.h"
#include "cdrivercodelistpage.h"
#include "cdrivercodemanagepage.h"
#include "cendtimesetpage.h"
#include "cendstationsetpage.h"
#include "cfaultalarmpage.h"
#include "cgradeselectpage.h"
#include "chistoryfaultlistpage.h"
#include "chvacparametersetpage.h"
#include "chvactestpage.h"
#include "chvacstatepage.h"
#include "cinstructiontestpage.h"
#include "cluminancesetpage.h"
#include "cmainpage.h"
#include "cmaintaineridlistpage.h"
#include "cmaintainermanagepage.h"
#include "cmodifyaccumulatemilepage.h"
#include "cnetstatepage.h"
#include "cdoorpage.h"
#include "cpantographstatectrl.h"
#include "cparametersetpage.h"
#include "cpispage.h"
#include "cstartstationsetpage.h"
#include "cstarttimesetpage.h"
#include "csysloginpage.h"
#include "csystimesetpage.h"
#include "ctcustatepage.h"
#include "cwheeldiametersetpage.h"
#include "cserialdatapage.h"
#include "cversionpage.h"
#include "ccriticalwarningdialog.h"
#include "clocaliopage.h"
#include "cmaincontrolcmdpage.h"
#include "cnetstatepagecoupled.h"
#include "cacustatepagecoupled.h"
#include "ctcustatepagecoupled.h"
#include "cbcustatepagecoupled.h"
#include "chvacstatepagecoupled.h"
#include "cfaultdlg.h"
#include "cmyaddpage.h"
#include "cemergencybroadcast.h"
#include "ctbcinstructiontestpage.h"
#include "ccurrentstationset.h"
namespace Ui {
    class Dialog;
}

class Dialog : public QDialog {
    Q_OBJECT
    DECLEAR_PAGE_MANAGE()
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

protected slots:
    void OnUpdateData();
    void OnUpdateDate();
    void get232RevDataSlot();
//    void get485RevDataSlot( const QByteArray &data, int length );// 20131219 cancel
    void testRiomBoardOnLineSlot();
    void restartScreenUptateSlot();
    void OnTimer30s();
protected:
    void keyPressEvent( QKeyEvent * event );
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent* e);
    void closeEvent (QCloseEvent* e);

private:
    //int iAdjustSystemTimeCnt; // 500ms count++,every minute adjust idu time to vcu time
    void setScreenTime(int year, int mon, int day, int hour, int minute, int second);
    bool oldADJUSTTIME_ENABLE_BOOL;
    bool oldCARCODE_SYNC_MAIN_BOOL;
    Ui::Dialog *ui;
    // RecorderThread recorderThread;
    unsigned int m_nRs232RevErrorNum/*,m_nRs485RevErrorNum*/;// 20131219 cancel
    CCriticalWarningDialog m_CriticalWarningDlg;
    CFaultDlg m_FaultDlg,m_BackupModeDlg;
    //QTimer dateTimer;
    QTimer UpdateDataTimer;
    SerialThread232 *m_serialThread232;
//    SerialThread485 *m_serialThread485;// 20131219 cancel
    void UpdateTimers();
    void getDefaultParameter();
    void ReadFaultsDef();
    void CreateSendData();
    void ShowWarnningDialog(int retVal);
    void ShowWarnningDialog();
    void globalDataInit();

    // modbus
    void delOldRecorder();
    void writeRecorder();
    BYTE bitToByte(bool bit, quint8 offset);

    //screen serial
    int fd;
    int InitSerialPort();
    void CloseSerialPort();
    int ComWrite(char *writeData, int len);
    int ComRead(char *readData);
    void BackLightCtrl(bool bOpen);
    void SetWarningTemperature();
    void HMI_Initial_Set();
    bool isOpen;
    int BAUDRATE;
    const char *MODEMDEVICE;
    int DATABITS;
    int PARITYTYPE;
    int STOPBITS;
    QMutex mutexRead, mutexWrite;

    QString carIDToString(__in quint16 data);
    QMutex m_UpdateMutex;

    //quint32 m_nPreCLKtime;

    int StationSettedSuccess_Cnt;
    int SkipStationSettedSuccess_Cnt;
    int Main_AccumulateKmSettedFlag_Cnt;
    int lightOn_Cnt;
    int g_Vehicle_CodeSet_enable_cnt;
    int InstructionTest11_Cnt;
    int InstructionTest12_Cnt;
    int InstructionTest13_Cnt;
    int InstructionTest14_Cnt;
    int InstructionTest15_Cnt;
    int InstructionTest18_Cnt;
    int InstructionTest19_Cnt;
    int systemTimeSet_Cnt;

    QTimer riomBoardOnLineTestTimer;
    QTimer timer30s;

    CWarningDialog warningDlg;
    bool oldMAIN_INNOPOWERAREA_BOOL;
    bool oldMAIN_INLARGENOPOWERAREA_BOOL;
    bool oldMAIN_OUTNOPOWERAREA_BOOL;
    bool oldMAIN_CURRENTINLARGENOPOWERAREA_BOOL;
    //2014-5-28 add faultdlgflag
    bool m_FaultDlgFlag;
    bool m_Powerontiming_flg;
    int g_3sTimeSetEn_cnt;
};

#endif // DIALOG_H
