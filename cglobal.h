#ifndef CGLOBAL_H
#define CGLOBAL_H

#include <assert.h>
#include <vector>
#include <functional>
#include <algorithm>
#include <string>
#include <qpoint.h>
#include <map>
#include <qmessagebox.h>

#include "clog.h"
#include <QFile>
#include <QDir>
#include <QTextStream>
using namespace std;

#define DEBUG_MODE

//serial data macro
#if 1
#define USE_RAND_DATA
#else
#define USE_SERIAL_DATA
#endif


#define __in
#define __out
#define ASSERT(T)    \
        if(!(T))     \
            QMessageBox::warning(NULL,                                                                              \
                      QString("ASSERT"),                                                                            \
                      QString("An Error at: \nFile:") +__FILE__+ QString("\n Line:") +QString::number(__LINE__),    \
                      QMessageBox::Ok,QMessageBox::Ok);                                                             \
        assert(T);

#define  TRUE   true
#define  FALSE  false
#define  SAFE_DELETE(T) if(T != NULL) {delete T; T = NULL;}

#define QSTR(T) QString::fromUtf8(T)

#define BKSURFACENUM 50///max page number

#define SCREEN_W 800
#define SCREEN_H 600

typedef uchar BYTE;
typedef quint16 WORD;

typedef int WPARAM;
typedef int LPARAM;

#define WM_LBUTTONDOWN   0x00000001
#define WM_LBUTTONUP     0x00000002
#define WM_UPDATEPAGE    0x00000003
#define WM_SHOWPAGE      0x00000004

class CGlobal
{
public:
    CGlobal();
public:
    static int m_nCurPageIndex;
};

template<class T>
class Delegrate
{
public:
    typedef void (T::*delegratefunc)();
    Delegrate(){}
    Delegrate(T* delegrateCls, delegratefunc pFunc)
    {
        __this = delegrateCls;
        _delegratefunc = pFunc;
    }
    void execute()
    {
        (__this->*_delegratefunc)();
    }

private:
    T* __this;
    delegratefunc _delegratefunc;
};

template<class T>
class MSGINFO
{
public:
    int nMsgMacro;
    Delegrate<T> delegrate;

    MSGINFO(){}
    MSGINFO(int _nMsgMacro, Delegrate<T> _delegrate)
    {
        nMsgMacro = _nMsgMacro;
        delegrate = _delegrate;
    }
};

template<class T>
struct CONTROLMSG
{
    int m_nCtrlID;
    MSGINFO<T> m_msgInfo;

    CONTROLMSG(){}
    CONTROLMSG(int nCtrlID, MSGINFO<T> msginfo)
    {
        m_nCtrlID = nCtrlID;
        m_msgInfo = msginfo;
    }
};

template<class parentT,class mapT>
class CONNECTMSGMAP
{
public:
    CONNECTMSGMAP(parentT* pthis, int nMsg)
    {
        m_pthis = pthis;
        m_nMsg = nMsg;
    }
    void operator()(mapT it, QPoint pt)const
    {
        int nMsg = -1;
        int nMsgListSize = m_pthis->m_MsgList.size();

        for(int i = 0; i < nMsgListSize; i++)
        {
            nMsg = m_pthis->m_MsgList[i].m_msgInfo.nMsgMacro;
            if(m_nMsg == nMsg
                && m_pthis->m_MsgList[i].m_nCtrlID == it->GetCtrlID()
                && it->GetCtrlRect().contains(pt,true))
            {
                m_pthis->m_MsgList[i].m_msgInfo.delegrate.execute();
                m_pthis->GetParentDlg()->update();
                break;
            }
        }
    }
    void operator()()const
    {
        int nMsg = -1;
        int nMsgListSize = m_pthis->m_MsgList.size();

        for(int i = 0; i < nMsgListSize; i++)
        {
            nMsg = m_pthis->m_MsgList[i].m_msgInfo.nMsgMacro;
            if(m_nMsg == nMsg)
            {
                m_pthis->m_MsgList[i].m_msgInfo.delegrate.execute();
                m_pthis->GetParentDlg()->update();
                break;
            }
        }
    }
private:
    parentT* m_pthis;
    int m_nMsg;
};

// picture index begin with 0
#define PICTURE_INDEX(T) T
// rom index begin with 0
#define ROM_INDEX(T) T

#define DECLEAR_MESSAGE_MAP(T)                                            \
                public:                                                   \
                   vector< CONTROLMSG<T> > m_MsgList;                     \
                   void ConnectEvent(__in QPoint pt,__in int nMsg);       \
                   void ConnectEvent(__in int nMsg);                      \
                   void InitMsgList();

#define CONNECTEVENT(classname)                                            \
                    void classname::ConnectEvent(QPoint pt, int nMsg)      \
                    {                                                      \
                        CONNECTMSGMAP<classname, CControlInterface* > g(this,nMsg);         \
                        map<int,CControlInterface*>::iterator it;           \
                        for(it =m_ctrlmap.begin();it!= m_ctrlmap.end();++it)\
                        {                                                   \
                           g(it->second, pt);                               \
                        }                                                   \
                    }                                                       \
                    void classname::ConnectEvent(int nMsg)                  \
                    {                                                       \
                        CONNECTMSGMAP<classname, CControlInterface* > g(this,nMsg);         \
                        map<int,CControlInterface*>::iterator it;           \
                        g();                                                \
                    }

#define BEGIN_MESSAGE_MAP(classname,baseclass)                             \
                    typedef classname ThisClass;                           \
                    CONNECTEVENT(ThisClass)                                \
                    void classname::InitMsgList(){                         \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_MAIN,OnCommonMainButtonDown)                         \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_NET, OnCommonNETButtonDown)                          \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_TCU, OnCommonTCUButtonDown)                          \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_APS, OnCommonAPSButtonDown)                          \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_BRAKE,OnCommonBRAKEButtonDown)                       \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_PIS, OnCommonPISButtonDown)                          \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_HVAC,OnCommonHVACButtonDown)                         \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_MAINTAIN, OnCommonMAINTAINButtonDown)                \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_HVACSTATE,OnCommonHVACSTATEButtonDown)               \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_HVACPARAMSET,OnCommonHVACPARAMSETButtonDown)         \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_HVACTEST,OnCommonHVACTESTButtonDown        )         \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_PARAMSET,OnCommonPARAMSETButtonDown)                 \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_INSTRUCTIONTEST,OnCommonINSTRUCTIONTESTButtonDown)   \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_CURRENTFAULTLIST,OnCommonCURRENTFAULTLISTButtonDown) \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_HISTROYFAULTLIST,OnCommonHISTROYFAULTLISTButtonDown) \
                    ON_LBUTTONDOWN(IDBTN_NAVIBAR_DOOR,OnCommonDOORButtonDown)                         \
                    ON_LBUTTONDOWN(IDLB_COM_DATE,OnCommonDATEButtonDown)                              \
                    ON_LBUTTONDOWN(IDLB_COM_TIME,OnCommonTIMEButtonDown)                              \
                    ON_LBUTTONDOWN(ID_COM_HELP,OnCommonHELPButtonDown)                                \

#define END_MESSAGE_MAP()   }

#define ON_CONTROL(msgname,nCtrlID,EventProc)                             \
                    CONTROLMSG<ThisClass>  msgname##nCtrlID##Msg;         \
                    memset(&(msgname##nCtrlID##Msg), '\0', sizeof(CONTROLMSG<ThisClass>)); \
                    (msgname##nCtrlID##Msg).m_nCtrlID = nCtrlID;                           \
                    (msgname##nCtrlID##Msg).m_msgInfo.nMsgMacro = msgname;                 \
                    (msgname##nCtrlID##Msg).m_msgInfo.delegrate = Delegrate<ThisClass>(this,&ThisClass::EventProc);\
                    m_MsgList.push_back(msgname##nCtrlID##Msg);


#define ON_LBUTTONDOWN(nCtrlID,EventProc)                         \
                 ON_CONTROL(WM_LBUTTONDOWN, nCtrlID,EventProc)

#define ON_LBUTTONUP(nCtrlID,EventProc)                           \
                 ON_CONTROL(WM_LBUTTONUP, nCtrlID,EventProc)

#define ON_UPDATE_PAGE()                                       \
                 ON_CONTROL(WM_UPDATEPAGE,0,OnUpdatePage)

#define ON_SHOWPAGE()                                             \
                 ON_CONTROL(WM_SHOWPAGE,0,OnShowPage)

// page manage macro
#define DECLEAR_PAGE_MANAGE()        \
            private:                 \
                void CreateAllPage();

#define IMPLEMENT_PAGE_MANAGE() \
                CreateAllPage();

#define BEGIN_PAGE_MANAGE() void Dialog::CreateAllPage(){

#define ADD_PAGE(classname,rom_index)                               \
    classname* pPage_##classname = new classname();                 \
    (pPage_##classname)->InitPage(SCREEN_W, SCREEN_H, rom_index,this);\
    (pPage_##classname)->DrawByRom(g_PicRom[rom_index]);            \
    (pPage_##classname)->InitMsgList();                             \
    g_PageVec[rom_index] = dynamic_cast<CPage*>(pPage_##classname);

#define END_PAGE_MANAGE() }


//control type  enum
enum CONTROLTYPEENUM
{
 CONTROL_BUTTON  =  0,
 CONTROL_BMPBUTTON,
 CONTROL_EDIT,
 CONTROL_LABEL,
 CONTROL_LISTBOX,
 CONTROL_COUNTDOWN,
 CONTROL_SPEED,
 CONTROL_CAPACITANCE,
 CONTROL_PANTOGRAPHSTATE,
 CONTROL_IMAGE,
 CONTROL_TRIANGLE,
 CONTROL_LINE,
 CONTROL_CIRCLE,
 CONTROL_CHECKBOX,
 CONTROL_SLIDER,
 CONTROL_TRAINDIAGRAM
};

// login type
enum E_LOGIN_TYPE
{
    ENUM_LOGIN_TYPE_DRIVER = 0,
    ENUM_LOGIN_TYPE_MAINTAINER,
    ENUM_LOGIN_TYPE_ANONYMOUS
};

template<class T>
class DELOBJ:public unary_function<T, void>
{
public:
    void operator()(T& it)
    {
        SAFE_DELETE(it);
    }
};

template<class T>
class DELMAPOBJ:public unary_function<T, void>
{
public:
    void operator()(T it)
    {
        SAFE_DELETE(it.second);
    }
};

template<class T>
class CONTROLFINDIF : public binary_function<T,int,bool>
{
public:
    bool operator()(T& it, int nConditonID)const
    {
        if(it->GetCtrlID() == nConditonID)
        {
           return true;
        }

        return false;
    }
};

template<class T>
class FINDKEY:public binary_function<T,int,bool>
{
public:
    bool operator()(T it,int nID)const
    {
        if(it.first == nID)
        {
            return true;
        }
        return false;
    }
};

#define D_RECEIVE_BUFFER_SIZE       476
#define D_SEND_BUFFER_SIZE          40

//#define D_485RECEIVE_BUFFER_SIZE    32 // 20131219 cancel
//#define D_485SEND_BUFFER_SIZE       2 // 20131219 cancel

extern BYTE receiveData[D_RECEIVE_BUFFER_SIZE];
extern BYTE sendData[D_SEND_BUFFER_SIZE];

extern BYTE test_tempdata[128];

//extern BYTE rs485sendData[D_485SEND_BUFFER_SIZE]; // 20131219 cancel
extern int sendDataCnt;
extern int revDataCnt;
extern int revDataCnt_length0;
extern int comBreakCounter;

extern int g_history_faults_pagenum;
extern int g_current_faults_pagenum;
extern bool isNewFaultsOccurBool;

extern E_LOGIN_TYPE g_login_type, g_fault_recorder_login_type;

extern bool g_communication_ok_flag;

extern int         g_loginIDPWDLen;
extern QString     g_loginID, g_fault_recorder_loginID;
extern QString     g_car1CodeStr;
extern quint16     g_car1IDUint16;

extern QString     g_car2CodeStr;

extern QStringList g_stationNameLine1;
extern QStringList g_stationNameLine2;
extern QStringList g_stationNameLine3;
extern QStringList g_stationNameLine4;
extern QStringList g_stationNameLine5;

extern quint32 g_ParamSet_initAccumulateKms_Quint32;//Byte10,11,12,13

extern uchar g_ParamSet_WheelDiameter_Uchar; //Byte18
extern uchar g_StationSet_DepartureStation_Uchar;	//Byte19
extern uchar g_StationSet_TerminalStation_Uchar;	//Byte20
extern uchar g_StationSet_CurrentStation_Uchar;	        //Byte21
extern quint16 g_ParamSet_CarCode_Uint;	//Byte22,23


extern QString mRound( qreal const fValue, int const bitNumber );

extern void SetSystemTime( int year, int mon, int day, int hour, int minute, int second );

extern BYTE Bit(uint byte, uint bit);

extern quint8 mc1_sgn_lifrsignal;
extern quint8 mc1_ax_lifrsignal;
extern quint8 mc1_di1_lifrsignal;
extern quint8 mc1_di2_lifrsignal;
extern quint8 mc1_do1_lifrsignal;
extern quint8 mc1_do2_lifrsignal;
extern quint8 mc2_sgn_lifrsignal;
extern quint8 mc2_ax_lifrsignal;
extern quint8 mc2_di1_lifrsignal;
extern quint8 mc2_di2_lifrsignal;
extern quint8 mc2_do1_lifrsignal;
extern quint8 mc2_do2_lifrsignal;

extern bool mc1_sgn_onLine;
extern bool mc1_ax_onLine;
extern bool mc1_di1_onLine;
extern bool mc1_di2_onLine;
extern bool mc1_do1_onLine;
extern bool mc1_do2_onLine;
extern bool mc2_sgn_onLine;
extern bool mc2_ax_onLine;
extern bool mc2_di1_onLine;
extern bool mc2_di2_onLine;
extern bool mc2_do1_onLine;
extern bool mc2_do2_onLine;

extern bool optDebugBool;
extern int  g_lightvalue;

extern WORD TC1_HMI_ini;
extern WORD TC2_HMI_ini;
extern WORD TC1_HMI;
extern WORD TC2_HMI;


extern bool firstSetHvacSomethingCoolBool; // 20130122 add for hvac
extern int writeFileCnt; // for save faults
extern void SetINIInfo(QString keypath, QString str);

extern quint8 gearLevel; // 牵引制动级位 0:NP 1-7:制动 8:EP 11-14:牵引

extern WORD screenUpdateCnt, screenUpdateCntBack;
extern bool butteryContectorBreakCheckedBool; // 20140115 add
///2014-5-6 add iscoupledflag
extern bool IsNetstateCoupledFlag;
extern bool IsAcustateCoupledFlag;
extern bool IsBcustateCoupledFlag;
extern bool IsTcustateCoupledFlag;
extern bool IsDoorstateCoupledFlag;

extern int time3s;

extern unsigned char emergencyBroadcastNumberUChar;


#endif // CGLOBAL_H
