# -------------------------------------------------
# Project created by QtCreator 2010-06-06T11:32:10
# -------------------------------------------------
TARGET = CNR_IDU
TEMPLATE = app
LIBS +=  -lmodbus
SOURCES += main.cpp \
    dialog.cpp \
    cglobal.cpp \
    cbutton.cpp \
    cpage.cpp \
    rom.cpp \
    clabel.cpp \
    cedit.cpp \
    clistbox.cpp \
    ccountdownctrl.cpp \
    cspeedctrl.cpp \
    cpantographstatectrl.cpp \
    ctrianglectrl.cpp \
    ccircle.cpp \
    cline.cpp \
    ccheckbox.cpp \
    csysloginpage.cpp \
    ctimer.cpp \
    cmainpage.cpp \
    cnetstatepage.cpp \
    cbcustatepage.cpp \
    cacustatepage.cpp \
    cpispage.cpp \
    cstartstationsetpage.cpp \
    chvacstatepage.cpp \
    chvacparametersetpage.cpp \
    chvactestpage.cpp \
    cparametersetpage.cpp \
    csystimesetpage.cpp \
    ccarcodesetpage.cpp \
    cwheeldiametersetpage.cpp \
    cluminancesetpage.cpp \
    cdrivercodemanagepage.cpp \
    cdrivercodelistpage.cpp \
    cmaintainermanagepage.cpp \
    ccurrentfaultlistpage.cpp \
    chistoryfaultlistpage.cpp \
    cdeviceselectpage.cpp \
    cgradeselectpage.cpp \
    cstarttimesetpage.cpp \
    cendtimesetpage.cpp \
    cdoorpage.cpp \
    cfaultalarmpage.cpp \
    ctcustatepage.cpp \
    cendstationsetpage.cpp \
    #ccurrentstationsetpage.cpp \
    cmaintaineridlistpage.cpp \
    cmodifyaccumulatemilepage.cpp \
    cinstructiontestpage.cpp \
    csliderctrl.cpp \
    cimagectrl.cpp \
    cdebugdialog.cpp \
    cbitmapbutton.cpp \
    csetcarsdirdlg.cpp \
    ctraindiagramctrl.cpp \
    faultcommonprocess.cpp \
    senddata.cpp \
    cserialdatapage.cpp \
    cwarningdialog.cpp \
    cmainhelpdialog.cpp \
    cmainhelpdialog2.cpp \
    cacuhelpdialog.cpp \
    cbcuhelpdialog.cpp \
    chvachelpdialog.cpp \
    cnethelpdialog.cpp \
    cfaultdetaildialog.cpp \
    cversionpage.cpp \
    cconfirmdialog.cpp \
    clog.cpp \
    ccriticalwarningdialog.cpp \
    clocaliopage.cpp \
    cdcdcstatepage.cpp \
    cdcdchelpdialog.cpp \
    recorderthread.cpp \
    serialport232.cpp \
    serialthread232.cpp \
    ccapacitancectrl.cpp \
    cmaincontrolcmdpage.cpp \
    testbytedialog.cpp \
    cnetstatepagecoupled.cpp \
    cacustatepagecoupled.cpp \
    ctcustatepagecoupled.cpp \
    cbcustatepagecoupled.cpp \
    chvacstatepagecoupled.cpp \
    cfaultdlg.cpp \
    cmyaddpage.cpp \
    cemergencybroadcast.cpp \
    ctbcinstructiontestpage.cpp \
    ccurrentstationset.cpp
HEADERS += dialog.h \
    cglobal.h \
    cbutton.h \
    cpage.h \
    rom.h \
    ccontrolinterface.h \
    clabel.h \
    cedit.h \
    clistbox.h \
    ccountdownctrl.h \
    cspeedctrl.h \
    cpantographstatectrl.h \
    ctrianglectrl.h \
    ccircle.h \
    cline.h \
    ccheckbox.h \
    csysloginpage.h \
    ctimer.h \
    cmainpage.h \
    cnetstatepage.h \
    cbcustatepage.h \
    cacustatepage.h \
    cpispage.h \
    cstartstationsetpage.h \
    chvacstatepage.h \
    chvacparametersetpage.h \
    chvactestpage.h \
    cparametersetpage.h \
    csystimesetpage.h \
    ccarcodesetpage.h \
    cwheeldiametersetpage.h \
    cluminancesetpage.h \
    cdrivercodemanagepage.h \
    cdrivercodelistpage.h \
    cmaintainermanagepage.h \
    ccurrentfaultlistpage.h \
    chistoryfaultlistpage.h \
    cdeviceselectpage.h \
    cgradeselectpage.h \
    cstarttimesetpage.h \
    cendtimesetpage.h \
    cdoorpage.h \
    cfaultalarmpage.h \
    ctcustatepage.h \
    cendstationsetpage.h \
    #ccurrentstationsetpage.h \
    cmaintaineridlistpage.h \
    cmodifyaccumulatemilepage.h \
    cinstructiontestpage.h \
    csliderctrl.h \
    cimagectrl.h \
    cdebugdialog.h \
    cbitmapbutton.h \
    csetcarsdirdlg.h \
    ctraindiagramctrl.h \
    receivedata.h \
    faultcommonprocess.h \
    senddata.h \
    cserialdatapage.h \
    cwarningdialog.h \
    cmainhelpdialog.h \
    cmainhelpdialog2.h \
    cacuhelpdialog.h \
    cbcuhelpdialog.h \
    chvachelpdialog.h \
    cnethelpdialog.h \
    cfaultdetaildialog.h \
    cversionpage.h \
    cconfirmdialog.h \
    clog.h \
    ccriticalwarningdialog.h \
    clocaliopage.h \
    cdcdcstatepage.h \
    cdcdchelpdialog.h \
    recorderthread.h \
    serialport232.h \
    serialthread232.h \
    ccapacitancectrl.h \
    cmaincontrolcmdpage.h \
    testbytedialog.h \
    cnetstatepagecoupled.h \
    cacustatepagecoupled.h \
    ctcustatepagecoupled.h \
    cbcustatepagecoupled.h \
    chvacstatepagecoupled.h \
    cfaultdlg.h \
    cmyaddpage.h \
    cemergencybroadcast.h \
    ctbcinstructiontestpage.h \
    ccurrentstationset.h \
    modbus-version.h \
    modbus-tcp.h \
    modbus-rtu-private.h \
    modbus-rtu.h \
    modbus-private.h \
    modbus.h
FORMS += dialog.ui \
    cdebugdialog.ui \
    csetcarsdirdlg.ui \
    cwarningdialog.ui \
    cmainhelpdialog.ui \
    cmainhelpdialog2.ui \
    cacuhelpdialog.ui \
    cbcuhelpdialog.ui \
    chvachelpdialog.ui \
    cnethelpdialog.ui \
    cfaultdetaildialog.ui \
    cconfirmdialog.ui \
    ccriticalwarningdialog.ui \
    cdcdchelpdialog.ui \
    testbytedialog.ui \
    cfaultdlg.ui
