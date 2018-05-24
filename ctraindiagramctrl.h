#ifndef CTRAINDIAGRAMCTRL_H
#define CTRAINDIAGRAMCTRL_H

#include "ccontrolinterface.h"
#include "rom.h"

typedef enum
{
    PANTOGRAPH_LEFT_UP = 0,
    PANTOGRAPH_LEFT_DOWN,
    PANTOGRAPH_LEFT_MIDDLE,
    PANTOGRAPH_RIGHT_UP,
    PANTOGRAPH_RIGHT_DOWN,
    PANTOGRAPH_RIGHT_MIDDLE
}PANTOGRAPHSTATE;

class CTrainDiagramCtrl : public CControlInterface
{
public:
    CTrainDiagramCtrl();

public:
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString btn_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);

    void DrawTrainDiagramCtrl();

    //car1
    void setCar1Door1State( __in int newCar1Door1State );
    void setCar1Door2State( __in int newCar1Door2State );
    void setCar1Door3State( __in int newCar1Door3State );
    void setCar1Door4State( __in int newCar1Door4State );
    void setCar1Door5State( __in int newCar1Door5State );
    void setCar1Door6State( __in int newCar1Door6State );
    void setCar1Door7State( __in int newCar1Door7State );
    void setCar1Door8State( __in int newCar1Door8State );

    void setCar1DoorState( __in int newState[] );

    void setCar1Brake1State( __in int newCar1Brake1State );
    void setCar1Brake2State( __in int newCar1Brake2State );
    void setCar1Brake3State( __in int newCar1Brake3State );
    void setCar1TCU1State( __in int newCar1TCU1State );
    void setCar1TCU2State( __in int newCar1TCU2State );
    void setCar1ACU1State( __in int newCar1ACU1State );
    void setCar1ACU2State( __in int newCar1ACU2State );
    void setCar1Key1State( __in bool newCar1Key1State );
    void setCar1Key2State( __in bool newCar1Key2State );

    bool getCar1Key1State();
    bool getCar1Key2State();

    void setCar1TrainCode( __in QString newCar1TrainCode );
    void setCar1TPState( __in PANTOGRAPHSTATE newCar1TPState );
    void setCar1TPIsolated( __in bool newCar1TPIsolated );
    void setCar1ERState( __in bool newCar1ERState );
    void setCar1BCC1State( __in int newCar1BCC1State );
    void setCar1BCC2State( __in int newCar1BCC2State );
    void setCar1BreakerState( __in bool newCar1BreakerState );
    void setCar1Mc1BatteryContactorState( __in bool newCar1Mc1BatteryContactorState );
    void setCar1Mc2BatteryContactorState( __in bool newCar1Mc2BatteryContactorState );
    void setCar1CompressorSensor1( __in QString newCompressorSensor );
    void setCar1CompressorSensor2( __in QString newCompressorSensor );

    void setCar1DoorPassbyLight( __in bool newCar1DoorPassbyLight );
    void setCar1TcuReadyLight( __in bool newCar1TcuReadyLight );
    void setCar1EBFaultLight( __in bool newCar1EBFaultLight );

    void setCar2McDirection( __in int newCar2McDirection );
    void setCar2Door1State( __in int newCar2Door1State );
    void setCar2Door2State( __in int newCar2Door2State );
    void setCar2Door3State( __in int newCar2Door3State );
    void setCar2Door4State( __in int newCar2Door4State );
    void setCar2Door5State( __in int newCar2Door5State );
    void setCar2Door6State( __in int newCar2Door6State );
    void setCar2Door7State( __in int newCar2Door7State );
    void setCar2Door8State( __in int newCar2Door8State );

    void setCar2DoorState( __in int newState[]);

    void setCar2Brake1State( __in int newCar2Brake1State );
    void setCar2Brake2State( __in int newCar2Brake2State );
    void setCar2Brake3State( __in int newCar2Brake3State );
    void setCar2TCU1State( __in int newCar2TCU1State );
    void setCar2TCU2State( __in int newCar2TCU2State );
    void setCar2ACU1State( __in int newCar2ACU1State );
    void setCar2ACU2State( __in int newCar2ACU2State );
    void setCar2Key1State( __in bool newCar2Key1State );
    void setCar2Key2State( __in bool newCar2Key2State );
    void setCar2TrainCode( __in QString newCar2TrainCode );
    void setCar2TPState( __in PANTOGRAPHSTATE newCar2TPState );
    void setCar2TPIsolated( __in bool newCar2TPIsolated );
    void setCar2ERState( __in bool newCar2ERState );
    void setCar2BreakerState( __in bool newCar2BreakerState );
    void setCar2CompressorSensor1( __in QString newCompressorSensor );
    void setCar2CompressorSensor2( __in QString newCompressorSensor );
    void setCar2BCC1State( __in int newCar2BCC1State );
    void setCar2BCC2State( __in int newCar2BCC2State );

    void setUNCHARGEWORKSTATE_MC1_DCDC( __in bool newState );
    void setCHARGEFINISH_MC1_DCDC( __in bool newState );
    void setPOWERSUPPLYFINISH_MC1_DCDC( __in bool newState );
    void setUNCHARGEWORKSTATE_MC2_DCDC( __in bool newState );
    void setCHARGEFINISH_MC2_DCDC( __in bool newState );
    void setPOWERSUPPLYFINISH_MC2_DCDC( __in bool newState );


    void iconDriverKey( QPainter* painter,
                            qreal posX, qreal posY, qreal width, qreal height );
    void iconDoor( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       QString doorNum, int doorState, int doorFontSize );
    void iconER( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       bool state, int fontSize );
    void iconBCC( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int state, int fontSize );
    void iconBrake( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int brakeState );
    void iconTCU( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int tcuState );
    void iconAPS( QPainter* painter,
                       qreal posX, qreal posY, qreal width, qreal height,
                       int apsState );
    void iconPantographsLeft( QPainter* painter,
                                  qreal posX, qreal posY, qreal width, qreal height,
                                  PANTOGRAPHSTATE state, bool isolated );
    void iconPantographsRight( QPainter* painter,
                                  qreal posX, qreal posY, qreal width, qreal height,
                                  PANTOGRAPHSTATE state, bool isolated );
    void iconBreaker( QPainter* painter,
                      qreal posX, qreal posY, qreal width, qreal height,
                      bool brkState );
    void iconTCUReadyLight( QPainter* painter,
                            qreal posX, qreal posY, qreal width, qreal height,
                            bool state, int fontSize );
    void iconEBFaultLight( QPainter* painter,
                           qreal posX, qreal posY, qreal width, qreal height,
                           bool state, int fontSize );

    void getTrainCoupledMode(__in int Mode);
private:
    //car1
    //  1:not closed; 2:fault; 3:not online; 4:communication abnormal; default : door closed;
    int m_Car1Door1State;
    int m_Car1Door2State;
    int m_Car1Door3State;
    int m_Car1Door4State;
    int m_Car1Door5State;
    int m_Car1Door6State;
    int m_Car1Door7State;
    int m_Car1Door8State;
    //  1:Brake Infliction; 2:not online; 3:fault; default:not work;
    int m_Car1Brake1State;
    int m_Car1Brake2State;
    int m_Car1Brake3State;
    //  1:Not work; 2:not online; 3:fault; default:work;
    int m_Car1TCU1State;
    int m_Car1TCU2State;
    int m_Car1ACU1State;
    int m_Car1ACU2State;

    bool m_Car1Key1State;
    bool m_Car1Key2State;

    QString m_Car1TrainCode;

    PANTOGRAPHSTATE m_Car1TPState,m_Car2TPState;
    bool m_Car1TPIsolated;
    bool m_Car1ERState;
    int m_Car1BCC1State;
    int m_Car1BCC2State;
    bool m_Car1BreakerState;
    bool m_Car1Mc1BatteryContactorState;
    bool m_Car1Mc2BatteryContactorState;
    QString m_Car1CompressorSensor1,m_Car1CompressorSensor2;

    bool m_Car1DoorPassbyLight;
    bool m_Car1TcuReadyLight;
    bool m_Car1EBFaultLight;

    bool m_UNCHARGEWORKSTATE_MC1_DCDC_BOOL;
    bool m_CHARGEFINISH_MC1_DCDC_BOOL;
    bool m_POWERSUPPLYFINISH_MC1_DCDC_BOOL;
    bool m_UNCHARGEWORKSTATE_MC2_DCDC_BOOL;
    bool m_CHARGEFINISH_MC2_DCDC_BOOL;
    bool m_POWERSUPPLYFINISH_MC2_DCDC_BOOL;

    //car2
    //  1:not closed; 2:fault; 3:not online; 4:communication abnormal; default : door closed;
    int m_Car2Door1State;
    int m_Car2Door2State;
    int m_Car2Door3State;
    int m_Car2Door4State;
    int m_Car2Door5State;
    int m_Car2Door6State;
    int m_Car2Door7State;
    int m_Car2Door8State;
    //  1:Brake Infliction; 2:not online; 3:fault; default:not work;
    int m_Car2Brake1State;
    int m_Car2Brake2State;
    int m_Car2Brake3State;
    //  1:Not work; 2:not online; 3:fault; default:work;
    int m_Car2TCU1State;
    int m_Car2TCU2State;
    int m_Car2ACU1State;
    int m_Car2ACU2State;

    bool m_Car2Key1State;
    bool m_Car2Key2State;

    QString m_Car2TrainCode;

    //int m_Car2TPState;
    bool m_Car2TPIsolated;
    bool m_Car2ERState;
    bool m_Car2BreakerState;
    QString m_Car2CompressorSensor1,m_Car2CompressorSensor2;

    int m_Car2BCC1State;
    int m_Car2BCC2State;
    bool m_Car2Mc1BatteryContactorState;
    bool m_Car2Mc2BatteryContactorState;
    bool m_Car2TcuReadyLight;
    bool m_Car2EBFaultLight;
    bool car2flag,m_Car2McDirection;

    int m_TrainCoupledMode;
};

#endif // CTRAINDIAGRAMCTRL_H
