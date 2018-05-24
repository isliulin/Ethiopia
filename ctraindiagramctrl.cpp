#include "ctraindiagramctrl.h"
#include <QPointF>

CTrainDiagramCtrl::CTrainDiagramCtrl()
{
    m_typestr = "CTrainDiagramCtrl";

    //car1
    m_Car1Door1State = 0;
    m_Car1Door2State = 0;
    m_Car1Door3State = 0;
    m_Car1Door4State = 0;
    m_Car1Door5State = 0;
    m_Car1Door6State = 0;
    m_Car1Door7State = 0;
    m_Car1Door8State = 0;

    m_Car1Brake1State = 0;
    m_Car1Brake2State = 0;
    m_Car1Brake3State = 0;

    m_Car1TCU1State = 0;
    m_Car1TCU2State = 0;
    m_Car1ACU1State = 0;
    m_Car1ACU2State = 0;

    m_Car1Key1State = false; // false->no key,true->key on
    m_Car1Key2State = false; // false->no key,true->key on

    m_Car1TrainCode = ""; //no code

    m_Car1TPState = PANTOGRAPH_LEFT_DOWN;
    m_Car1TPIsolated = false; // fasle->unIsolated, true->Isolated
    m_Car1ERState = false;
    m_Car1BCC1State = 0;
    m_Car1BCC2State = 0;
    m_Car1BreakerState = false;
    m_Car1CompressorSensor1 = "";
    m_Car1CompressorSensor2 = "";
    m_Car1Mc1BatteryContactorState = false;
    m_Car1Mc2BatteryContactorState = false;
    m_Car1DoorPassbyLight = false;
    m_Car1TcuReadyLight = false;
    m_Car1EBFaultLight = false;

    m_UNCHARGEWORKSTATE_MC1_DCDC_BOOL = false;
    m_CHARGEFINISH_MC1_DCDC_BOOL = false;
    m_POWERSUPPLYFINISH_MC1_DCDC_BOOL = false;
    m_UNCHARGEWORKSTATE_MC2_DCDC_BOOL = false;
    m_CHARGEFINISH_MC2_DCDC_BOOL = false;
    m_POWERSUPPLYFINISH_MC2_DCDC_BOOL = false;

    //car2
    m_Car2McDirection = false; //left
    m_Car2Door1State = 0;
    m_Car2Door2State = 0;
    m_Car2Door3State = 0;
    m_Car2Door4State = 0;
    m_Car2Door5State = 0;
    m_Car2Door6State = 0;
    m_Car2Door7State = 0;
    m_Car2Door8State = 0;

    m_Car2Brake1State = 0;
    m_Car2Brake2State = 0;
    m_Car2Brake3State = 0;

    m_Car2TCU1State = 0;
    m_Car2TCU2State = 0;
    m_Car2ACU1State = 0;
    m_Car2ACU2State = 0;

    m_Car2Key1State = false; // false->no key,true->key on
    m_Car2Key2State = false; // false->no key,true->key on

    m_Car2TrainCode = ""; //no code

    m_Car2TPState = PANTOGRAPH_LEFT_DOWN; // 11->left down, 22->left up, 33->right down, 44->right up, othres->undisplay
    m_Car2TPIsolated = false; // fasle->unIsolated, true->Isolated
    m_Car2ERState = false;
    m_Car2BreakerState = false;
    m_Car2CompressorSensor1 = "";
    m_Car2CompressorSensor2 = "";

    m_Car2BCC1State = 0;
    m_Car2BCC2State = 0;

    m_Car2TcuReadyLight = false;
    m_Car2EBFaultLight = false;

}

void CTrainDiagramCtrl::Create(
        __in QString& ctrl_str,     //button string
        __in QRect& ctrl_rc,        //button rect
        __in QColor& ctrl_txtcolor, //button text color
        __in QFont& ctrl_font,      //button text font
        __in QColor& ctrl_bkcolor,  //button bk color
        __in QPainter* ctrl_painter,//which picture to draw
        __in int ctrl_ID            //button id
        )
{
    m_txtcolor = ctrl_txtcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_painter;
    m_str      = ctrl_str;
    ASSERT(m_pPainter != NULL);

    this->DrawTrainDiagramCtrl();
}


void CTrainDiagramCtrl::SetCtrlText(
        __in QString ctrl_str //button text
        )
{
}

void  CTrainDiagramCtrl::SetTxtFont(
        __in QFont ctrl_font // button font
        )
{
    m_font = ctrl_font;
    m_pPainter->setFont(m_font);
}

void CTrainDiagramCtrl::SetTxtColor(
        __in QColor ctrl_txtcolor //button text color
        )
{
    m_txtcolor = ctrl_txtcolor;
    m_pPainter->setPen(m_txtcolor);
}

void CTrainDiagramCtrl::SetCtrlBKColor(
        __in QColor ctrl_bkcolor //button bk color
        )
{
    m_bkcolor = ctrl_bkcolor;
    m_pPainter->setBrush(m_bkcolor);
}

void CTrainDiagramCtrl::SetCtrlRect(
        __in QRect ctrl_rect //button rect
        )
{
}

void CTrainDiagramCtrl::setCar1Door1State( __in int newCar1Door1State )
{
    m_Car1Door1State = newCar1Door1State;
}
void CTrainDiagramCtrl::setCar1Door2State( __in int newCar1Door2State )
{
    m_Car1Door2State = newCar1Door2State;
}
void CTrainDiagramCtrl::setCar1Door3State( __in int newCar1Door3State )
{
    m_Car1Door3State = newCar1Door3State;
}
void CTrainDiagramCtrl::setCar1Door4State( __in int newCar1Door4State )
{
    m_Car1Door4State = newCar1Door4State;
}
void CTrainDiagramCtrl::setCar1Door5State( __in int newCar1Door5State )
{
    m_Car1Door5State = newCar1Door5State;
}
void CTrainDiagramCtrl::setCar1Door6State( __in int newCar1Door6State )
{
    m_Car1Door6State = newCar1Door6State;
}
void CTrainDiagramCtrl::setCar1Door7State( __in int newCar1Door7State )
{
    m_Car1Door7State = newCar1Door7State;
}
void CTrainDiagramCtrl::setCar1Door8State( __in int newCar1Door8State )
{
    m_Car1Door8State = newCar1Door8State;
}
void CTrainDiagramCtrl::setCar1DoorState( __in int newState[] )
{
    m_Car1Door1State = newState[0];
    m_Car1Door2State = newState[1];
    m_Car1Door3State = newState[2];
    m_Car1Door4State = newState[3];
    m_Car1Door5State = newState[4];
    m_Car1Door6State = newState[5];
    m_Car1Door7State = newState[6];
    m_Car1Door8State = newState[7];
}

void CTrainDiagramCtrl::setCar1Brake1State( __in int newCar1Brake1State )
{
    m_Car1Brake1State = newCar1Brake1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1Brake2State( __in int newCar1Brake2State )
{
    m_Car1Brake2State = newCar1Brake2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1Brake3State( __in int newCar1Brake3State )
{
    m_Car1Brake3State = newCar1Brake3State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1TCU1State( __in int newCar1TCU1State )
{
    m_Car1TCU1State = newCar1TCU1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1TCU2State( __in int newCar1TCU2State )
{
    m_Car1TCU2State = newCar1TCU2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1ACU1State( __in int newCar1ACU1State )
{
    m_Car1ACU1State = newCar1ACU1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1ACU2State( __in int newCar1ACU2State )
{
    m_Car1ACU2State = newCar1ACU2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1Key1State( __in bool newCar1Key1State )
{
    m_Car1Key1State = newCar1Key1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1Key2State( __in bool newCar1Key2State )
{
    m_Car1Key2State = newCar1Key2State;
    //DrawTrainDiagramCtrl();
}
bool CTrainDiagramCtrl::getCar1Key1State()
{
    return m_Car1Key1State;
}
bool CTrainDiagramCtrl::getCar1Key2State()
{
    return m_Car1Key2State;
}
void CTrainDiagramCtrl::setCar1TrainCode( __in QString newCar1TrainCode )
{
    m_Car1TrainCode = newCar1TrainCode;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1TPState( __in PANTOGRAPHSTATE newCar1TPState )
{
    m_Car1TPState = newCar1TPState;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1TPIsolated( __in bool newCar1TPIsolated )
{
    m_Car1TPIsolated = newCar1TPIsolated;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1ERState( __in bool newCar1ERState )
{
    m_Car1ERState = newCar1ERState;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar1BCC1State( __in int newCar1BCC1State )
{
    m_Car1BCC1State = newCar1BCC1State;
}
void CTrainDiagramCtrl::setCar1BCC2State( __in int newCar1BCC2State )
{
    m_Car1BCC2State = newCar1BCC2State;
}
void CTrainDiagramCtrl::setCar1BreakerState( __in bool newCar1BreakerState )
{
    m_Car1BreakerState = newCar1BreakerState;
}
void CTrainDiagramCtrl::setCar1CompressorSensor1( __in QString newCompressorSensor )
{
    m_Car1CompressorSensor1 = newCompressorSensor;
}
void CTrainDiagramCtrl::setCar1CompressorSensor2( __in QString newCompressorSensor )
{
    m_Car1CompressorSensor2 = newCompressorSensor;
}

void CTrainDiagramCtrl::setCar1DoorPassbyLight( __in bool newCar1DoorPassbyLight )
{
    m_Car1DoorPassbyLight = newCar1DoorPassbyLight;
}
void CTrainDiagramCtrl::setCar1TcuReadyLight( __in bool newCar1TcuReadyLight )
{
    m_Car1TcuReadyLight = newCar1TcuReadyLight;
}
void CTrainDiagramCtrl::setCar1EBFaultLight( __in bool newCar1EBFaultLight )
{
    m_Car1EBFaultLight = newCar1EBFaultLight;
}
void CTrainDiagramCtrl::setCar1Mc1BatteryContactorState( __in bool newCar1Mc1BatteryContactorState )
{
    m_Car1Mc1BatteryContactorState = newCar1Mc1BatteryContactorState;
}
void CTrainDiagramCtrl::setCar1Mc2BatteryContactorState( __in bool newCar1Mc2BatteryContactorState )
{
    m_Car1Mc2BatteryContactorState = newCar1Mc2BatteryContactorState;
}
void CTrainDiagramCtrl::setUNCHARGEWORKSTATE_MC1_DCDC( __in bool newState )
{
    m_UNCHARGEWORKSTATE_MC1_DCDC_BOOL = newState;
}
void CTrainDiagramCtrl::setCHARGEFINISH_MC1_DCDC( __in bool newState )
{
    m_CHARGEFINISH_MC1_DCDC_BOOL = newState;
}
void CTrainDiagramCtrl::setPOWERSUPPLYFINISH_MC1_DCDC( __in bool newState )
{
    m_POWERSUPPLYFINISH_MC1_DCDC_BOOL = newState;
}
void CTrainDiagramCtrl::setUNCHARGEWORKSTATE_MC2_DCDC( __in bool newState )
{
    m_UNCHARGEWORKSTATE_MC2_DCDC_BOOL = newState;
}
void CTrainDiagramCtrl::setCHARGEFINISH_MC2_DCDC( __in bool newState )
{
    m_CHARGEFINISH_MC2_DCDC_BOOL = newState;
}
void CTrainDiagramCtrl::setPOWERSUPPLYFINISH_MC2_DCDC( __in bool newState )
{
    m_POWERSUPPLYFINISH_MC2_DCDC_BOOL = newState;
}


void CTrainDiagramCtrl::setCar2McDirection( __in int newCar2McDirection )
{
    m_Car2McDirection = newCar2McDirection;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door1State( __in int newCar2Door1State )
{
    m_Car2Door1State = newCar2Door1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door2State( __in int newCar2Door2State )
{
    m_Car2Door2State = newCar2Door2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door3State( __in int newCar2Door3State )
{
    m_Car2Door3State = newCar2Door3State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door4State( __in int newCar2Door4State )
{
    m_Car2Door4State = newCar2Door4State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door5State( __in int newCar2Door5State )
{
    m_Car2Door5State = newCar2Door5State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door6State( __in int newCar2Door6State )
{
    m_Car2Door6State = newCar2Door6State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door7State( __in int newCar2Door7State )
{
    m_Car2Door7State = newCar2Door7State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Door8State( __in int newCar2Door8State )
{
    m_Car2Door8State = newCar2Door8State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2DoorState( __in int newState[] )
{
    m_Car2Door1State = newState[0];
    m_Car2Door2State = newState[1];
    m_Car2Door3State = newState[2];
    m_Car2Door4State = newState[3];
    m_Car2Door5State = newState[4];
    m_Car2Door6State = newState[5];
    m_Car2Door7State = newState[6];
    m_Car2Door8State = newState[7];
}
void CTrainDiagramCtrl::setCar2Brake1State( __in int newCar2Brake1State )
{
    m_Car2Brake1State = newCar2Brake1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Brake2State( __in int newCar2Brake2State )
{
    m_Car2Brake2State = newCar2Brake2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Brake3State( __in int newCar2Brake3State )
{
    m_Car2Brake3State = newCar2Brake3State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2TCU1State( __in int newCar2TCU1State )
{
    m_Car2TCU1State = newCar2TCU1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2TCU2State( __in int newCar2TCU2State )
{
    m_Car2TCU2State = newCar2TCU2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2ACU1State( __in int newCar2ACU1State )
{
    m_Car2ACU1State = newCar2ACU1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2ACU2State( __in int newCar2ACU2State )
{
    m_Car2ACU2State = newCar2ACU2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Key1State( __in bool newCar2Key1State )
{
    m_Car2Key1State = newCar2Key1State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2Key2State( __in bool newCar2Key2State )
{
    m_Car2Key2State = newCar2Key2State;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2TrainCode( __in QString newCar2TrainCode )
{
    m_Car2TrainCode = newCar2TrainCode;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2TPState( __in PANTOGRAPHSTATE newCar2TPState )
{
    m_Car2TPState = newCar2TPState;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2TPIsolated( __in bool newCar2TPIsolated )
{
    m_Car2TPIsolated = newCar2TPIsolated;
    //DrawTrainDiagramCtrl();
}

void CTrainDiagramCtrl::setCar2ERState( __in bool newCar2ERState )
{
    m_Car2ERState = newCar2ERState;
    //DrawTrainDiagramCtrl();
}
void CTrainDiagramCtrl::setCar2BreakerState( __in bool newCar2BreakerState )
{
    m_Car2BreakerState = newCar2BreakerState;
}
void CTrainDiagramCtrl::setCar2CompressorSensor1( __in QString newCompressorSensor )
{
    m_Car2CompressorSensor1 = newCompressorSensor;
}
void CTrainDiagramCtrl::setCar2CompressorSensor2( __in QString newCompressorSensor )
{
    m_Car2CompressorSensor2 = newCompressorSensor;
}
void CTrainDiagramCtrl::setCar2BCC1State(__in int newCar2BCC1State)
{
    m_Car2BCC1State = newCar2BCC1State;
}
void CTrainDiagramCtrl::setCar2BCC2State(__in int newCar2BCC2State)
{
    m_Car2BCC2State = newCar2BCC2State;
}
void CTrainDiagramCtrl::getTrainCoupledMode(int Mode)
{
    m_TrainCoupledMode = Mode;
}
void CTrainDiagramCtrl::DrawTrainDiagramCtrl()
{

    QPointF pointFs1[23]={
        // outline border : top left is 0, clockwise
        QPointF( -207.5, -40 ), // 0
        QPointF( -27.5, -40 ),  // 1
        QPointF( 0, -20 ),      // 2
        QPointF( 27.5, -40 ),   // 3
        QPointF( 207.5, -40 ),  // 4
        QPointF( 235, -20 ),    // 5
        QPointF( 235, 60 ),     // 6
        QPointF( 207.5, 80 ),   // 7
        QPointF( 27.5, 80 ),    // 8
        QPointF( 0, 60 ),       // 9
        QPointF( -27.5, 80 ),   // 10
        QPointF( -207.5, 80 ),  // 11
        QPointF( -235, 60 ),    // 12
        QPointF( -235, -20 ),   // 13
        QPointF( -207.5, -40 ), // 14=0
        // middle 2 lines 1 : start from top
        QPointF( -137.5, -40 ), // 15
        QPointF( -137.5, 80 ),  // 16
        // middle 2 lines 2 : start from top
        QPointF( -97.5, -40 ),  // 17
        QPointF( -97.5, 80 ),   // 18
        // middle 2 lines 3 : start from top
        QPointF( 97.5, -40 ),   // 19
        QPointF( 97.5, 80 ),    // 20
        // middle 2 lines 4 : start from top
        QPointF( 137.5, -40 ),  // 21
        QPointF( 137.5, 80 )   // 22
    };

    QPointF pointFs3[13] = {
        // outline border : top left is 0, clockwise
        QPointF( -180, -40 ), // 0
        QPointF( 180, -40 ), // 1
        QPointF( 235, -20 ), // 2
        QPointF( 235, 60 ), // 3
        QPointF( 180, 80 ), // 4
        QPointF( -180, 80 ), // 5
        QPointF( -235, 60 ), // 6
        QPointF( -235, -20 ), // 7
        QPointF( -180, -40 ), // 8 = 0
        // middle 2 lines 1 : start from top
        QPointF( -40, -40 ), // 9
        QPointF( -40, 80 ), // 10
        // middle 2 lines 2 : start from top
        QPointF( 40, -40 ), // 11
        QPointF( 40, 80 ) // 12
    };
    m_pPainter->setRenderHint(QPainter::Antialiasing);
    m_pPainter->translate( ( m_rect.x()+m_rect.width() )/2, ( m_rect.y()+m_rect.height() )/2  );
    m_pPainter->scale( (m_rect.width()-2 )/470.0, ( m_rect.height()-2 )/160.0 );
    m_pPainter->save();

    m_pPainter->setPen(Qt::black);
    m_pPainter->setBrush(Qt::black);
    //m_pPainter->drawRect(-m_rect.width()/2,-m_rect.height()/2-30,m_rect.width(),m_rect.height()+66 );
    m_pPainter->drawRect(-240,-85,480,185 );

    m_pPainter->setPen( QPen(Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
    m_pPainter->setFont(m_font);

    switch(m_TrainCoupledMode)
    {
    case 1://uncoupled 1car
        m_pPainter->drawPolyline( pointFs3,9 );
        m_pPainter->drawLine( pointFs3[9], pointFs3[10] );
        m_pPainter->drawLine( pointFs3[11], pointFs3[12] );
        m_pPainter->drawLine( pointFs3[0], pointFs3[5] );
        m_pPainter->drawLine( pointFs3[1], pointFs3[4] );

        m_pPainter->setFont( D_FONT(9) );
        m_pPainter->drawText( QRectF( -180, 85, 30, 20 ), Qt::AlignLeft|Qt::AlignTop, m_Car1CompressorSensor1 );
        m_pPainter->drawText( QRectF( 150, 85, 30, 20 ), Qt::AlignRight|Qt::AlignTop, m_Car1CompressorSensor2 );

        m_pPainter->setFont(D_FONT_BOLD(20));
        m_pPainter->drawText( QRectF( -180, -80, 140, 40 ), Qt::AlignHCenter|Qt::AlignBottom, m_Car1TrainCode );

        m_pPainter->drawText( QRectF( -180, 50, 140, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc1" );
        m_pPainter->drawText( QRectF( -40, 50, 80, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "TP" );
        m_pPainter->drawText( QRectF( 40, 50, 140, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc2" );



        m_pPainter->setPen( QPen(Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
        m_pPainter->setFont( D_FONT_BOLD(20) );
        //iconER( m_pPainter, 95.0, -75.0, 30.0, 30.0, m_Car1ERState, 18 );
        //iconER( m_pPainter, 150.0, -75.0, 30.0, 30.0, m_Car1ERState, 18 );
        iconBCC( m_pPainter, -140, -35, 60, 30, m_Car1BCC1State, 18 );
        iconBCC( m_pPainter, 80, -35, 60, 30, m_Car1BCC2State, 18 );
        if( m_Car1Key1State ){
            iconDriverKey( m_pPainter, -235, -20, 55, 80 );
        }//end

        if( m_Car1Key2State ){
            iconDriverKey( m_pPainter, 180, -20, 55, 80 );
        }//end

        iconDoor( m_pPainter, -170, -40, 20, 30, "1", m_Car1Door1State, 20 );
        iconDoor( m_pPainter, -170, 50, 20, 30, "2", m_Car1Door2State, 20 );
        iconDoor( m_pPainter, -70, -40, 20, 30, "3", m_Car1Door3State, 20 );
        iconDoor( m_pPainter, -70, 50, 20, 30, "4", m_Car1Door4State, 20 );

        iconDoor( m_pPainter, 50, -40, 20, 30, "5", m_Car1Door5State, 20 ); // 5
        iconDoor( m_pPainter, 50, 50, 20, 30, "6", m_Car1Door6State, 20 );  // 6
        iconDoor( m_pPainter, 150, -40, 20, 30, "7", m_Car1Door7State, 20 );  // 7
        iconDoor( m_pPainter, 150, 50, 20, 30, "8", m_Car1Door8State, 20 );  // 8

        if(m_Car1DoorPassbyLight)
            iconDoor( m_pPainter, 150, -80, 20, 30, "", 9, 20 ); // door passby light
        iconTCUReadyLight( m_pPainter, 50, -80, 30, 30, m_Car1TcuReadyLight, 6 ); //
        iconEBFaultLight( m_pPainter, 100, -80, 30, 30, m_Car1EBFaultLight, 6 ); //


        iconBrake( m_pPainter, -130, 0, 40, 40, m_Car1Brake1State );
        iconBrake( m_pPainter, -20, 0, 40, 40, m_Car1Brake2State );
        iconBrake( m_pPainter, 90, 0, 40, 40, m_Car1Brake3State );

        iconTCU( m_pPainter, -175, 0, 40, 40, m_Car1TCU1State );
        iconTCU( m_pPainter, 135, 0, 40, 40, m_Car1TCU2State );
        //iconBreaker( m_pPainter, -180, -80, 40, 40, m_Car1Mc1BatteryContactorState );
        //iconBreaker( m_pPainter, 140, -80, 40, 40, m_Car1Mc2BatteryContactorState );

        iconAPS( m_pPainter, -85, 0, 40, 40, m_Car1ACU1State );
        iconAPS( m_pPainter, 45, 0, 40, 40, m_Car1ACU2State );
        iconBreaker( m_pPainter, -20, -40, 40, 40, m_Car1BreakerState );

        iconPantographsLeft( m_pPainter, -30, -80, 60, 40, m_Car1TPState, m_Car1TPIsolated );
        iconPantographsRight( m_pPainter, -30, -80, 60, 40, m_Car1TPState, m_Car1TPIsolated );

        break;




    case 2://coupled 1212mode
        m_pPainter->drawPolyline( pointFs1,15 );
        m_pPainter->drawLine( pointFs1[15], pointFs1[16] );
        m_pPainter->drawLine( pointFs1[17], pointFs1[18] );
        m_pPainter->drawLine( pointFs1[19], pointFs1[20] );
        m_pPainter->drawLine( pointFs1[21], pointFs1[22] );
        m_pPainter->drawLine( pointFs1[0], pointFs1[11] );
        m_pPainter->drawLine( pointFs1[1], pointFs1[10] );
        m_pPainter->drawLine( pointFs1[2], pointFs1[9] );
        m_pPainter->drawLine( pointFs1[3], pointFs1[8] );
        m_pPainter->drawLine( pointFs1[4], pointFs1[7] );

        m_pPainter->setFont( D_FONT(9) );
//        m_pPainter->drawText( QRectF( -205, 85, 30, 20 ), Qt::AlignLeft|Qt::AlignTop, m_Car1CompressorSensor1 );
//        m_pPainter->drawText( QRectF( -60, 85, 30, 20 ), Qt::AlignRight|Qt::AlignTop, m_Car1CompressorSensor2 );
//        m_pPainter->drawText( QRectF( 30, 85, 30, 20 ), Qt::AlignLeft|Qt::AlignTop, m_Car2CompressorSensor2 );
//        m_pPainter->drawText( QRectF( 175, 85, 30, 20 ), Qt::AlignRight|Qt::AlignTop, m_Car2CompressorSensor1 );
        //m_Car1TrainCode = "001";
               // m_Car2TrainCode = "002";
        m_pPainter->setFont( D_FONT_BOLD(10) );
        m_pPainter->drawText( QRectF( -207.5, -80, 80, 30 ), Qt::AlignHCenter|Qt::AlignBottom, m_Car1TrainCode );
        m_pPainter->drawText( QRectF( 17.5, -80, 80, 30 ), Qt::AlignHCenter|Qt::AlignBottom, m_Car2TrainCode );

        m_pPainter->drawText( QRectF( -207.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc1" );
        m_pPainter->drawText( QRectF( -137.5, 50, 40, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "T" );
        m_pPainter->drawText( QRectF( -97.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc2" );
        // car2
        m_pPainter->drawText( QRectF( 27.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc1" );
        m_pPainter->drawText( QRectF( 97.5, 50, 40, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "T" );
        m_pPainter->drawText( QRectF( 137.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc2" );

        m_pPainter->setFont( D_FONT_BOLD(12) );
        //iconDriverKey( m_pPainter, -235, -20, 27.5, 80 );

        if( m_Car1Key1State ){
            iconDriverKey( m_pPainter, -235, -20, 27.5, 80 );
        }//end
        if( m_Car1Key2State ){
            iconDriverKey( m_pPainter, -27.5, -20, 27.5, 80 );
        }//end
        if( m_Car2Key1State ){
            iconDriverKey( m_pPainter, 207.5, -20, 27.5, 80 );
        }//end
        if( m_Car2Key2State ){
            iconDriverKey( m_pPainter, 0, -20, 27.5, 80 );
        }//end

        iconDoor( m_pPainter, -202.5, -40, 15, 20, "1", m_Car1Door1State, 16 );
          iconDoor( m_pPainter, -202.5, 60, 15, 20, "2", m_Car1Door2State, 16 );
          iconDoor( m_pPainter, -157.5, -40, 15, 20, "3", m_Car1Door3State, 16 );
          iconDoor( m_pPainter, -157.5, 60, 15, 20, "4", m_Car1Door4State, 16 );
          iconDoor( m_pPainter, -92.5, -40, 15, 20, "5", m_Car1Door5State, 16 );
          iconDoor( m_pPainter, -92.5, 60, 15, 20, "6", m_Car1Door6State, 16 );
          iconDoor( m_pPainter, -47.5, -40, 15, 20, "7", m_Car1Door7State, 16 );
          iconDoor( m_pPainter, -47.5, 60, 15, 20, "8", m_Car1Door8State, 16 );

          iconBCC( m_pPainter, 162.5,-37.5,20,20 ,m_Car2BCC2State,4);
          iconBCC( m_pPainter, 52.5,-37.5,20,20 ,m_Car2BCC1State,4);
          iconBCC( m_pPainter, -182.5,-37.5,20,20 ,m_Car1BCC1State,4);
          iconBCC( m_pPainter, -72.5,-37.5,20,20 ,m_Car1BCC2State,4);
          //iconBreaker( m_pPainter, -180, -80, 30, 30, m_Car1Mc1BatteryContactorState );
          //iconBreaker( m_pPainter, -72.5, -80, 30, 30, m_Car1Mc2BatteryContactorState );
          //iconBreaker( m_pPainter, 52.5, -80, 30, 30, m_Car2Mc1BatteryContactorState );
          //iconBreaker( m_pPainter, 162.6, -80, 30, 30, m_Car2Mc2BatteryContactorState );

          iconDoor( m_pPainter, 187.5, 60, 15, 20, "8", m_Car2Door8State, 16 );
          iconDoor( m_pPainter, 187.5, -40, 15, 20, "7", m_Car2Door7State, 16 );
          iconDoor( m_pPainter, 142.5, 60, 15, 20, "6", m_Car2Door6State, 16 );
          iconDoor( m_pPainter, 142.5, -40, 15, 20, "5", m_Car2Door5State, 16 );
          iconDoor( m_pPainter, 78.5, 60, 15, 20, "4", m_Car2Door4State, 16 );
          iconDoor( m_pPainter, 78.5, -40, 15, 20, "3", m_Car2Door3State, 16 );
          iconDoor( m_pPainter, 32.5, 60, 15, 20, "2", m_Car2Door2State, 16 );
          iconDoor( m_pPainter, 32.5, -40, 15, 20, "1", m_Car2Door1State, 16 );

          iconTCUReadyLight( m_pPainter, -60, -70, 25, 25, m_Car1TcuReadyLight, 4 ); //
          iconEBFaultLight( m_pPainter, -30, -70, 25, 25, m_Car1EBFaultLight, 4 ); //
          iconTCU( m_pPainter, -187.5, -20, 30, 30, m_Car1TCU1State );
          iconBrake( m_pPainter, -187.5, 5, 30, 30, m_Car1Brake1State );
          iconAPS( m_pPainter, -187.5, 30, 30, 30, m_Car1ACU1State );
          iconBrake( m_pPainter, -132.5, 5, 30, 30, m_Car1Brake2State );
          iconTCU( m_pPainter, -77.5, -20, 30, 30, m_Car1TCU2State );
          iconBrake( m_pPainter, -77.5, 5, 30, 30, m_Car1Brake3State );
          iconAPS( m_pPainter, -77.5, 30, 30, 30, m_Car1ACU2State );
          iconBreaker( m_pPainter, -132.5, -25, 30, 30, m_Car1BreakerState );

          iconTCU( m_pPainter, 157.5, -20, 30, 30, m_Car2TCU2State );
          iconBrake( m_pPainter, 157.5, 5, 30, 30, m_Car2Brake3State );
          iconAPS( m_pPainter, 157.5, 30, 30, 30, m_Car2ACU2State );
          iconBrake( m_pPainter, 102.5, 5, 30, 30, m_Car2Brake2State );
          iconTCU( m_pPainter, 47.5, -20, 30, 30, m_Car2TCU1State );
          iconBrake( m_pPainter, 47.5, 5, 30, 30, m_Car2Brake1State );
          iconAPS( m_pPainter, 47.5, 30, 30, 30, m_Car2ACU1State );
          iconBreaker( m_pPainter, 102.5, -25, 30, 30, m_Car2BreakerState );

          iconPantographsLeft( m_pPainter, -140, -80, 60, 40, m_Car1TPState, m_Car1TPIsolated );
          iconPantographsRight( m_pPainter, -140, -80, 60, 40, m_Car1TPState, m_Car1TPIsolated );

          iconPantographsLeft( m_pPainter, 80, -80, 60, 40, m_Car2TPState, m_Car2TPIsolated );
          iconPantographsRight( m_pPainter, 80, -80, 60, 40, m_Car2TPState, m_Car2TPIsolated );
        break;


    case 3://coupled 1221mode
        m_pPainter->drawPolyline( pointFs1,15 );
        m_pPainter->drawLine( pointFs1[15], pointFs1[16] );
        m_pPainter->drawLine( pointFs1[17], pointFs1[18] );
        m_pPainter->drawLine( pointFs1[19], pointFs1[20] );
        m_pPainter->drawLine( pointFs1[21], pointFs1[22] );
        m_pPainter->drawLine( pointFs1[0], pointFs1[11] );
        m_pPainter->drawLine( pointFs1[1], pointFs1[10] );
        m_pPainter->drawLine( pointFs1[2], pointFs1[9] );
        m_pPainter->drawLine( pointFs1[3], pointFs1[8] );
        m_pPainter->drawLine( pointFs1[4], pointFs1[7] );

        m_pPainter->setFont( D_FONT(9) );
//        m_pPainter->drawText( QRectF( -205, 85, 30, 20 ), Qt::AlignLeft|Qt::AlignTop, m_Car1CompressorSensor1 );
//        m_pPainter->drawText( QRectF( -60, 85, 30, 20 ), Qt::AlignRight|Qt::AlignTop, m_Car1CompressorSensor2 );
//        m_pPainter->drawText( QRectF( 30, 85, 30, 20 ), Qt::AlignLeft|Qt::AlignTop, m_Car2CompressorSensor2 );
//        m_pPainter->drawText( QRectF( 175, 85, 30, 20 ), Qt::AlignRight|Qt::AlignTop, m_Car2CompressorSensor1 );

        m_pPainter->setFont( D_FONT_BOLD(10) );
        m_pPainter->drawText( QRectF( -207.5, -80, 80, 30 ), Qt::AlignHCenter|Qt::AlignBottom, m_Car1TrainCode );
        m_pPainter->drawText( QRectF( 17.5, -80, 80, 30 ), Qt::AlignHCenter|Qt::AlignBottom, m_Car2TrainCode );

        m_pPainter->drawText( QRectF( -207.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc1" );
        m_pPainter->drawText( QRectF( -137.5, 50, 40, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "T" );
        m_pPainter->drawText( QRectF( -97.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc2" );
        // car2
        m_pPainter->drawText( QRectF( 27.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc2" );
        m_pPainter->drawText( QRectF( 97.5, 50, 40, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "T" );
        m_pPainter->drawText( QRectF( 137.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc1" );

        m_pPainter->setFont( D_FONT_BOLD(12) );
        iconDriverKey( m_pPainter, -235, -20, 27.5, 80 );

        /*if( m_Car1Key1State ){
            iconDriverKey( m_pPainter, -235, -20, 27.5, 80 );
        }//end
        if( m_Car1Key2State ){
            iconDriverKey( m_pPainter, -27.5, -20, 27.5, 80 );
        }//end
        if( m_Car2Key1State ){
            iconDriverKey( m_pPainter, 207.5, -20, 27.5, 80 );
        }//end
        if( m_Car2Key2State ){
            iconDriverKey( m_pPainter, 0, -20, 27.5, 80 );
        }//end*/

        iconDoor( m_pPainter, -202.5, -40, 15, 20, "1", m_Car1Door1State, 16 );
          iconDoor( m_pPainter, -202.5, 60, 15, 20, "2", m_Car1Door2State, 16 );
          iconDoor( m_pPainter, -157.5, -40, 15, 20, "3", m_Car1Door3State, 16 );
          iconDoor( m_pPainter, -157.5, 60, 15, 20, "4", m_Car1Door4State, 16 );
          iconDoor( m_pPainter, -92.5, -40, 15, 20, "5", m_Car1Door5State, 16 );
          iconDoor( m_pPainter, -92.5, 60, 15, 20, "6", m_Car1Door6State, 16 );
          iconDoor( m_pPainter, -47.5, -40, 15, 20, "7", m_Car1Door7State, 16 );
          iconDoor( m_pPainter, -47.5, 60, 15, 20, "8", m_Car1Door8State, 16 );

          iconBCC( m_pPainter, 162.5,-37.5,20,20 ,m_Car2BCC1State,4);
          iconBCC( m_pPainter, 52.5,-37.5,20,20 ,m_Car2BCC2State,4);
          iconBCC( m_pPainter, -182.5,-37.5,20,20 ,m_Car1BCC1State,4);
          iconBCC( m_pPainter, -72.5,-37.5,20,20 ,m_Car1BCC2State,4);
          //iconBreaker( m_pPainter, -180, -80, 30, 30, m_Car1Mc1BatteryContactorState );
          //iconBreaker( m_pPainter, -72.5, -80, 30, 30, m_Car1Mc2BatteryContactorState );
          //iconBreaker( m_pPainter, 52.5, -80, 30, 30, m_Car2Mc1BatteryContactorState );
          //iconBreaker( m_pPainter, 162.6, -80, 30, 30, m_Car2Mc2BatteryContactorState );

          iconDoor( m_pPainter, 187.5, 60, 15, 20, "1", m_Car2Door1State, 16 );
          iconDoor( m_pPainter, 187.5, -40, 15, 20, "2", m_Car2Door2State, 16 );
          iconDoor( m_pPainter, 142.5, 60, 15, 20, "3", m_Car2Door3State, 16 );
          iconDoor( m_pPainter, 142.5, -40, 15, 20, "4", m_Car2Door4State, 16 );
          iconDoor( m_pPainter, 78.5, 60, 15, 20, "5", m_Car2Door5State, 16 );
          iconDoor( m_pPainter, 78.5, -40, 15, 20, "6", m_Car2Door6State, 16 );
          iconDoor( m_pPainter, 32.5, 60, 15, 20, "7", m_Car2Door7State, 16 );
          iconDoor( m_pPainter, 32.5, -40, 15, 20, "8", m_Car2Door8State, 16 );

          iconTCU( m_pPainter, -187.5, -20, 30, 30, m_Car1TCU1State );
          iconBrake( m_pPainter, -187.5, 5, 30, 30, m_Car1Brake1State );
          iconAPS( m_pPainter, -187.5, 30, 30, 30, m_Car1ACU1State );
          iconBrake( m_pPainter, -132.5, 5, 30, 30, m_Car1Brake2State );
          iconTCU( m_pPainter, -77.5, -20, 30, 30, m_Car1TCU2State );
          iconBrake( m_pPainter, -77.5, 5, 30, 30, m_Car1Brake3State );
          iconAPS( m_pPainter, -77.5, 30, 30, 30, m_Car1ACU2State );
          iconBreaker( m_pPainter, -132.5, -25, 30, 30, m_Car1BreakerState );

          iconTCU( m_pPainter, 157.5, -20, 30, 30, m_Car2TCU1State );
          iconBrake( m_pPainter, 157.5, 5, 30, 30, m_Car2Brake1State );
          iconAPS( m_pPainter, 157.5, 30, 30, 30, m_Car2ACU1State );
          iconBrake( m_pPainter, 102.5, 5, 30, 30, m_Car2Brake2State );
          iconTCU( m_pPainter, 47.5, -20, 30, 30, m_Car2TCU2State );
          iconBrake( m_pPainter, 47.5, 5, 30, 30, m_Car2Brake3State );
          iconAPS( m_pPainter, 47.5, 30, 30, 30, m_Car2ACU2State );
          iconTCUReadyLight( m_pPainter, -60, -70, 25, 25, m_Car1TcuReadyLight, 4 ); //
          iconEBFaultLight( m_pPainter, -30, -70, 25, 25, m_Car1EBFaultLight, 4 ); //
          iconBreaker( m_pPainter, 102.5, -25, 30, 30, m_Car2BreakerState );

          iconPantographsLeft( m_pPainter, -140, -80, 60, 40, m_Car1TPState, m_Car1TPIsolated );
          iconPantographsRight( m_pPainter, -140, -80, 60, 40, m_Car1TPState, m_Car1TPIsolated );

          iconPantographsLeft( m_pPainter, 80, -80, 60, 40, m_Car2TPState, m_Car2TPIsolated );
          iconPantographsRight( m_pPainter, 80, -80, 60, 40, m_Car2TPState, m_Car2TPIsolated );
        break;

    case 4://coupled 2112mode
        m_pPainter->drawPolyline( pointFs1,15 );
        m_pPainter->drawLine( pointFs1[15], pointFs1[16] );
        m_pPainter->drawLine( pointFs1[17], pointFs1[18] );
        m_pPainter->drawLine( pointFs1[19], pointFs1[20] );
        m_pPainter->drawLine( pointFs1[21], pointFs1[22] );
        m_pPainter->drawLine( pointFs1[0], pointFs1[11] );
        m_pPainter->drawLine( pointFs1[1], pointFs1[10] );
        m_pPainter->drawLine( pointFs1[2], pointFs1[9] );
        m_pPainter->drawLine( pointFs1[3], pointFs1[8] );
        m_pPainter->drawLine( pointFs1[4], pointFs1[7] );

        m_pPainter->setFont( D_FONT(9) );
//        m_pPainter->drawText( QRectF( -205, 85, 30, 20 ), Qt::AlignLeft|Qt::AlignTop, m_Car1CompressorSensor1 );
//        m_pPainter->drawText( QRectF( -60, 85, 30, 20 ), Qt::AlignRight|Qt::AlignTop, m_Car1CompressorSensor2 );
//        m_pPainter->drawText( QRectF( 30, 85, 30, 20 ), Qt::AlignLeft|Qt::AlignTop, m_Car2CompressorSensor2 );
//        m_pPainter->drawText( QRectF( 175, 85, 30, 20 ), Qt::AlignRight|Qt::AlignTop, m_Car2CompressorSensor1 );

        m_pPainter->setFont( D_FONT_BOLD(10) );
        m_pPainter->drawText( QRectF( -207.5, -80, 80, 30 ), Qt::AlignHCenter|Qt::AlignBottom, m_Car1TrainCode );
        m_pPainter->drawText( QRectF( 17.5, -80, 80, 30 ), Qt::AlignHCenter|Qt::AlignBottom, m_Car2TrainCode );

        m_pPainter->drawText( QRectF( -207.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc2" );
        m_pPainter->drawText( QRectF( -137.5, 50, 40, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "T" );
        m_pPainter->drawText( QRectF( -97.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc1" );
        // car2
        m_pPainter->drawText( QRectF( 27.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc1" );
        m_pPainter->drawText( QRectF( 97.5, 50, 40, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "T" );
        m_pPainter->drawText( QRectF( 137.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc2" );

        m_pPainter->setFont( D_FONT_BOLD(12) );
        iconDriverKey( m_pPainter, -235, -20, 27.5, 80 );

        /*if( m_Car1Key1State ){
            iconDriverKey( m_pPainter, -235, -20, 27.5, 80 );
        }//end
        if( m_Car1Key2State ){
            iconDriverKey( m_pPainter, -27.5, -20, 27.5, 80 );
        }//end
        if( m_Car2Key1State ){
            iconDriverKey( m_pPainter, 207.5, -20, 27.5, 80 );
        }//end
        if( m_Car2Key2State ){
            iconDriverKey( m_pPainter, 0, -20, 27.5, 80 );
        }//end*/

          iconDoor( m_pPainter, -202.5, -40, 15, 20, "8", m_Car1Door8State, 16 );
          iconDoor( m_pPainter, -202.5, 60, 15, 20, "7", m_Car1Door7State, 16 );
          iconDoor( m_pPainter, -157.5, -40, 15, 20, "6", m_Car1Door6State, 16 );
          iconDoor( m_pPainter, -157.5, 60, 15, 20, "5", m_Car1Door5State, 16 );
          iconDoor( m_pPainter, -92.5, -40, 15, 20, "4", m_Car1Door4State, 16 );
          iconDoor( m_pPainter, -92.5, 60, 15, 20, "3", m_Car1Door3State, 16 );
          iconDoor( m_pPainter, -47.5, -40, 15, 20, "2", m_Car1Door2State, 16 );
          iconDoor( m_pPainter, -47.5, 60, 15, 20, "1", m_Car1Door1State, 16 );

          iconBCC( m_pPainter, 162.5,-37.5,20,20 ,m_Car2BCC2State,4);
          iconBCC( m_pPainter, 52.5,-37.5,20,20 ,m_Car2BCC1State,4);
          iconBCC( m_pPainter, -182.5,-37.5,20,20 ,m_Car1BCC2State,4);
          iconBCC( m_pPainter, -72.5,-37.5,20,20 ,m_Car1BCC1State,4);
          //iconBreaker( m_pPainter, -180, -80, 30, 30, m_Car1Mc1BatteryContactorState );
          //iconBreaker( m_pPainter, -72.5, -80, 30, 30, m_Car1Mc2BatteryContactorState );
          //iconBreaker( m_pPainter, 52.5, -80, 30, 30, m_Car2Mc1BatteryContactorState );
          //iconBreaker( m_pPainter, 162.6, -80, 30, 30, m_Car2Mc2BatteryContactorState );

          iconDoor( m_pPainter, 187.5, 60, 15, 20, "8", m_Car2Door8State, 16 );
          iconDoor( m_pPainter, 187.5, -40, 15, 20, "7", m_Car2Door7State, 16 );
          iconDoor( m_pPainter, 142.5, 60, 15, 20, "6", m_Car2Door6State, 16 );
          iconDoor( m_pPainter, 142.5, -40, 15, 20, "5", m_Car2Door5State, 16 );
          iconDoor( m_pPainter, 78.5, 60, 15, 20, "4", m_Car2Door4State, 16 );
          iconDoor( m_pPainter, 78.5, -40, 15, 20, "3", m_Car2Door3State, 16 );
          iconDoor( m_pPainter, 32.5, 60, 15, 20, "2", m_Car2Door2State, 16 );
          iconDoor( m_pPainter, 32.5, -40, 15, 20, "1", m_Car2Door1State, 16 );

          iconTCU( m_pPainter, -187.5, -20, 30, 30, m_Car1TCU2State );
          iconBrake( m_pPainter, -187.5, 5, 30, 30, m_Car1Brake3State );
          iconAPS( m_pPainter, -187.5, 30, 30, 30, m_Car1ACU2State );
          iconBrake( m_pPainter, -132.5, 5, 30, 30, m_Car1Brake2State );
          iconTCU( m_pPainter, -77.5, -20, 30, 30, m_Car1TCU1State );
          iconBrake( m_pPainter, -77.5, 5, 30, 30, m_Car1Brake1State );
          iconAPS( m_pPainter, -77.5, 30, 30, 30, m_Car1ACU1State );
          iconBreaker( m_pPainter, -132.5, -25, 30, 30, m_Car1BreakerState );

          iconTCU( m_pPainter, 157.5, -20, 30, 30, m_Car2TCU2State );
          iconBrake( m_pPainter, 157.5, 5, 30, 30, m_Car2Brake3State );
          iconAPS( m_pPainter, 157.5, 30, 30, 30, m_Car2ACU2State );
          iconBrake( m_pPainter, 102.5, 5, 30, 30, m_Car2Brake2State );
          iconTCU( m_pPainter, 47.5, -20, 30, 30, m_Car2TCU1State );
          iconBrake( m_pPainter, 47.5, 5, 30, 30, m_Car2Brake1State );
          iconAPS( m_pPainter, 47.5, 30, 30, 30, m_Car2ACU1State );
          iconTCUReadyLight( m_pPainter, -60, -70, 25, 25, m_Car1TcuReadyLight, 4 ); //
          iconEBFaultLight( m_pPainter, -30, -70, 25, 25, m_Car1EBFaultLight, 4 ); //
          iconPantographsLeft( m_pPainter, -140, -80, 60, 40, m_Car1TPState, m_Car1TPIsolated );
          iconPantographsRight( m_pPainter, -140, -80, 60, 40, m_Car1TPState, m_Car1TPIsolated );
          iconBreaker( m_pPainter, 102.5, -25, 30, 30, m_Car2BreakerState );

          iconPantographsLeft( m_pPainter, 80, -80, 60, 40, m_Car2TPState, m_Car2TPIsolated );
          iconPantographsRight( m_pPainter, 80, -80, 60, 40, m_Car2TPState, m_Car2TPIsolated );
        break;

    case 5://coupled 2121mode
        m_pPainter->drawPolyline( pointFs1,15 );
        m_pPainter->drawLine( pointFs1[15], pointFs1[16] );
        m_pPainter->drawLine( pointFs1[17], pointFs1[18] );
        m_pPainter->drawLine( pointFs1[19], pointFs1[20] );
        m_pPainter->drawLine( pointFs1[21], pointFs1[22] );
        m_pPainter->drawLine( pointFs1[0], pointFs1[11] );
        m_pPainter->drawLine( pointFs1[1], pointFs1[10] );
        m_pPainter->drawLine( pointFs1[2], pointFs1[9] );
        m_pPainter->drawLine( pointFs1[3], pointFs1[8] );
        m_pPainter->drawLine( pointFs1[4], pointFs1[7] );

        m_pPainter->setFont( D_FONT(9) );
//        m_pPainter->drawText( QRectF( -205, 85, 30, 20 ), Qt::AlignLeft|Qt::AlignTop, m_Car1CompressorSensor1 );
//        m_pPainter->drawText( QRectF( -60, 85, 30, 20 ), Qt::AlignRight|Qt::AlignTop, m_Car1CompressorSensor2 );
//        m_pPainter->drawText( QRectF( 30, 85, 30, 20 ), Qt::AlignLeft|Qt::AlignTop, m_Car2CompressorSensor2 );
//        m_pPainter->drawText( QRectF( 175, 85, 30, 20 ), Qt::AlignRight|Qt::AlignTop, m_Car2CompressorSensor1 );

        m_pPainter->setFont( D_FONT_BOLD(10) );
        m_pPainter->drawText( QRectF( -207.5, -80, 80, 30 ), Qt::AlignHCenter|Qt::AlignBottom, m_Car1TrainCode );
        m_pPainter->drawText( QRectF( 17.5, -80, 80, 30 ), Qt::AlignHCenter|Qt::AlignBottom, m_Car2TrainCode );

        m_pPainter->drawText( QRectF( -207.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc2" );
        m_pPainter->drawText( QRectF( -137.5, 50, 40, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "T" );
        m_pPainter->drawText( QRectF( -97.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc1" );
        // car2
        m_pPainter->drawText( QRectF( 27.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc2" );
        m_pPainter->drawText( QRectF( 97.5, 50, 40, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "T" );
        m_pPainter->drawText( QRectF( 137.5, 50, 70, 30 ), Qt::AlignHCenter|Qt::AlignBottom, "Mc1" );

        m_pPainter->setFont( D_FONT_BOLD(12) );
        iconDriverKey( m_pPainter, -235, -20, 27.5, 80 );

        /*if( m_Car1Key1State ){
            iconDriverKey( m_pPainter, -235, -20, 27.5, 80 );
        }//end
        if( m_Car1Key2State ){
            iconDriverKey( m_pPainter, -27.5, -20, 27.5, 80 );
        }//end
        if( m_Car2Key1State ){
            iconDriverKey( m_pPainter, 207.5, -20, 27.5, 80 );
        }//end
        if( m_Car2Key2State ){
            iconDriverKey( m_pPainter, 0, -20, 27.5, 80 );
        }//end*/

          iconDoor( m_pPainter, -202.5, -40, 15, 20, "8", m_Car1Door8State, 16 );
          iconDoor( m_pPainter, -202.5, 60, 15, 20, "7", m_Car1Door7State, 16 );
          iconDoor( m_pPainter, -157.5, -40, 15, 20, "6", m_Car1Door6State, 16 );
          iconDoor( m_pPainter, -157.5, 60, 15, 20, "5", m_Car1Door5State, 16 );
          iconDoor( m_pPainter, -92.5, -40, 15, 20, "4", m_Car1Door4State, 16 );
          iconDoor( m_pPainter, -92.5, 60, 15, 20, "3", m_Car1Door3State, 16 );
          iconDoor( m_pPainter, -47.5, -40, 15, 20, "2", m_Car1Door2State, 16 );
          iconDoor( m_pPainter, -47.5, 60, 15, 20, "1", m_Car1Door1State, 16 );

          iconBCC( m_pPainter, 162.5,-37.5,20,20 ,m_Car2BCC1State,4);
          iconBCC( m_pPainter, 52.5,-37.5,20,20 ,m_Car2BCC2State,4);
          iconBCC( m_pPainter, -182.5,-37.5,20,20 ,m_Car1BCC2State,4);
          iconBCC( m_pPainter, -72.5,-37.5,20,20 ,m_Car1BCC1State,4);
          //iconBreaker( m_pPainter, -180, -80, 30, 30, m_Car1Mc1BatteryContactorState );
          //iconBreaker( m_pPainter, -72.5, -80, 30, 30, m_Car1Mc2BatteryContactorState );
          //iconBreaker( m_pPainter, 52.5, -80, 30, 30, m_Car2Mc1BatteryContactorState );
          //iconBreaker( m_pPainter, 162.6, -80, 30, 30, m_Car2Mc2BatteryContactorState );

          iconDoor( m_pPainter, 187.5, 60, 15, 20, "1", m_Car2Door1State, 16 );
          iconDoor( m_pPainter, 187.5, -40, 15, 20, "2", m_Car2Door2State, 16 );
          iconDoor( m_pPainter, 142.5, 60, 15, 20, "3", m_Car2Door3State, 16 );
          iconDoor( m_pPainter, 142.5, -40, 15, 20, "4", m_Car2Door4State, 16 );
          iconDoor( m_pPainter, 78.5, 60, 15, 20, "5", m_Car2Door5State, 16 );
          iconDoor( m_pPainter, 78.5, -40, 15, 20, "6", m_Car2Door6State, 16 );
          iconDoor( m_pPainter, 32.5, 60, 15, 20, "7", m_Car2Door7State, 16 );
          iconDoor( m_pPainter, 32.5, -40, 15, 20, "8", m_Car2Door8State, 16 );

          iconTCU( m_pPainter, -187.5, -20, 30, 30, m_Car1TCU2State );
          iconBrake( m_pPainter, -187.5, 5, 30, 30, m_Car1Brake3State );
          iconAPS( m_pPainter, -187.5, 30, 30, 30, m_Car1ACU2State );
          iconBrake( m_pPainter, -132.5, 5, 30, 30, m_Car1Brake2State );
          iconTCU( m_pPainter, -77.5, -20, 30, 30, m_Car1TCU1State );
          iconBrake( m_pPainter, -77.5, 5, 30, 30, m_Car1Brake1State );
          iconAPS( m_pPainter, -77.5, 30, 30, 30, m_Car1ACU1State );
          iconBreaker( m_pPainter, -132.5, -25, 30, 30, m_Car1BreakerState );

          iconTCU( m_pPainter, 157.5, -20, 30, 30, m_Car2TCU1State );
          iconBrake( m_pPainter, 157.5, 5, 30, 30, m_Car2Brake1State );
          iconAPS( m_pPainter, 157.5, 30, 30, 30, m_Car2ACU1State );
          iconBrake( m_pPainter, 102.5, 5, 30, 30, m_Car2Brake2State );
          iconTCU( m_pPainter, 47.5, -20, 30, 30, m_Car2TCU2State );
          iconBrake( m_pPainter, 47.5, 5, 30, 30, m_Car2Brake3State );
          iconAPS( m_pPainter, 47.5, 30, 30, 30, m_Car2ACU2State );
          iconTCUReadyLight( m_pPainter, -60, -70, 25, 25, m_Car1TcuReadyLight, 4 ); //
          iconEBFaultLight( m_pPainter, -30, -70, 25, 25, m_Car1EBFaultLight, 4 ); //
          iconPantographsLeft( m_pPainter, -140, -80, 60, 40, m_Car1TPState, m_Car1TPIsolated );
          iconPantographsRight( m_pPainter, -140, -80, 60, 40, m_Car1TPState, m_Car1TPIsolated );
          iconBreaker( m_pPainter, 102.5, -25, 30, 30, m_Car2BreakerState );

          iconPantographsLeft( m_pPainter, 80, -80, 60, 40, m_Car2TPState, m_Car2TPIsolated );
          iconPantographsRight( m_pPainter, 80, -80, 60, 40, m_Car2TPState, m_Car2TPIsolated );
        break;
    default:
        break;
    }
    m_pPainter->restore();
    m_pPainter->resetTransform();
}

void CTrainDiagramCtrl::iconDriverKey(  QPainter* painter, qreal const posX, qreal const posY, qreal const width, qreal const height )
{
    painter->save();
    painter->setRenderHint( QPainter::Antialiasing );
    painter->setBrush( QBrush( Qt::yellow, Qt::SolidPattern ) );
    painter->setPen( QPen( Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );

    qreal side = qMin( width, height );
    painter->translate( posX + width / 2, posY + height / 2 );
    painter->scale( side / 150.0, side / 150.0 );

    painter->drawEllipse( QRectF( -50, -100, 100, 100 ) );
    painter->setBrush( QBrush( Qt::black ) );
    painter->drawEllipse( QRectF( -25, -80, 50, 50 ) );
    painter->setBrush( QBrush( Qt::yellow ) );
    QPointF points[] = {
        QPointF( 25, -30 ),
        QPointF( 25, 80 ),
        QPointF( -5, 100 ),
        QPointF( -25, 90 ),
        QPointF( -5, 80 ),
        QPointF( -25, 70 ),
        QPointF( -5, 55 ),
        QPointF( -25, 40 ),
        QPointF( -25, -30 ),
    }; // end QPoint
    painter->drawPolygon( points, 9 );
    painter->restore();
}
void CTrainDiagramCtrl::iconER( QPainter* painter,
                                qreal posX, qreal posY, qreal width, qreal height,
                                bool state, int fontSize )
{
    painter->save();
    if( state ){
        painter->setRenderHint( QPainter::Antialiasing );
        painter->setFont( D_FONT_BOLD(fontSize) );
        QRectF rectF( posX, posY, width, height );
        painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
        painter->setPen( QPen( Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawRect( rectF );
        painter->drawText( rectF, Qt::AlignCenter, "ER" );
    }//end
    painter->restore();
}
void CTrainDiagramCtrl::iconTCUReadyLight( QPainter* painter,
                                           qreal posX, qreal posY, qreal width, qreal height,
                                           bool state, int fontSize )
{
    painter->save();
    if( state ){
        painter->setRenderHint( QPainter::Antialiasing );
        painter->setFont( D_FONT_BOLD(fontSize) );
        QRectF rectF( posX, posY, width, height );
        painter->setBrush( QBrush( Qt::green, Qt::SolidPattern ) );
        painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawEllipse(rectF);
        painter->drawText( rectF, Qt::AlignCenter, "TCU" );
    }//end
    painter->restore();
}
void CTrainDiagramCtrl::iconEBFaultLight( QPainter* painter,
                                          qreal posX, qreal posY, qreal width, qreal height,
                                          bool state, int fontSize )
{
    painter->save();
    if( state ){
        painter->setRenderHint( QPainter::Antialiasing );
        painter->setFont( D_FONT_BOLD(fontSize) );
        QRectF rectF( posX, posY, width, height );
        painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
        painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawEllipse(rectF);
        painter->drawText( rectF, Qt::AlignCenter, "EB" );
    }//end
    painter->restore();
}
void CTrainDiagramCtrl::iconBCC(QPainter *painter,
                                qreal posX, qreal posY, qreal width, qreal height,
                                int state, int fontSize)

{
    painter->save();

    painter->setRenderHint( QPainter::Antialiasing );
    painter->setFont( D_FONT_BOLD(fontSize) );
    QRectF rectF( posX, posY, width, height );

    switch( state )
    {
    case 1: // work
        painter->setBrush( QBrush( Qt::green, Qt::SolidPattern ) );
        break;
    case 5: // stop
        painter->setBrush( QBrush( Qt::yellow, Qt::SolidPattern ) );
        break;
    default: // failure
        painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
        break;
    }//end

    painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
    painter->drawRect( rectF );
    painter->drawText( rectF, Qt::AlignCenter, "BCC" );

    painter->restore();
}
void CTrainDiagramCtrl::iconDoor( QPainter* painter,
                                  qreal const posX, qreal const posY, qreal const width, qreal const height,
                                  QString const doorNum, int const doorState, int const doorFontSize )
{
    painter->save();
    painter->setRenderHint( QPainter::Antialiasing );
    painter->setBrush( QBrush( Qt::SolidPattern ) );
    painter->setPen( QPen( Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );

    QRectF rectF( posX, posY, width, height );
    // 1:not closed;2:fault;3:not online;4:communication abnormal;default : door closed;
    switch( doorState ){
    case 1:	//yellow
        painter->setBrush( QBrush( Qt::yellow, Qt::SolidPattern ) );
        painter->drawRect( rectF );
        painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        break;
    case 2:	//red, emgc actived
        painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
        painter->drawRect( rectF );
        painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        break;
    case 3:	//white
        painter->setBrush( QBrush( Qt::white, Qt::SolidPattern ) );
        painter->drawRect( rectF );
        painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        break;
    case 4:	//pink, full open
        painter->setBrush( QBrush( QColor( 255, 102, 204), Qt::SolidPattern ) );
        painter->drawRect( rectF );
        painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        break;
    case 5:	//green, closed
        painter->setBrush( QBrush( QColor( 0, 255, 0 ), Qt::SolidPattern ) );
        painter->drawRect( rectF );
        painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        break;
    case 6:	//blue, not closed
        painter->setBrush( QBrush( QColor( 0, 255, 255 ), Qt::SolidPattern ) );
        painter->drawRect( rectF );
        painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        break;
    case 7:	//zi
        painter->setBrush( QBrush( QColor( 128, 128, 255 ), Qt::SolidPattern ) );
        painter->drawRect( rectF );
        painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        break;
    case 8:	//isolated
        painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
        painter->drawRect( rectF );
        painter->setPen( QPen( Qt::red, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawLine( QPointF( posX, posY ), QPointF( posX + width, posY + height ) );
        painter->drawLine( QPointF( posX, posY + height ), QPointF( posX + width, posY ) );
        painter->setPen( QPen( Qt::white, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        break;
    case 9:	//gray,cross, passby
        painter->setBrush( QBrush( Qt::gray, Qt::SolidPattern ) );
        painter->drawRect( rectF );
        painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawLine( QPointF( posX, posY ), QPointF( posX + width, posY + height ) );
        painter->drawLine( QPointF( posX, posY + height ), QPointF( posX + width, posY ) );
        break;
    case 10:
        painter->setBrush( QBrush( Qt::gray, Qt::SolidPattern ) );
        painter->drawRect( rectF );
        painter->setPen( QPen( Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        break;
    default: //black
        //            painter->setBrush( QBrush( QColor( 0, 0, 0 ), Qt::SolidPattern ) );
        //            painter->drawRect( rectF );
        //            painter->setPen( QPen( Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        break;
    }//end

    painter->drawText( rectF, Qt::AlignCenter, doorNum );
    painter->restore();
}
void CTrainDiagramCtrl::iconTCU( QPainter* painter,
                                 qreal posX, qreal posY, qreal width, qreal height,
                                 int tcuState )
{
    painter->save();
    painter->setRenderHint(QPainter::Antialiasing);

    painter->setFont( D_FONT_BOLD(48) );

    qreal side = qMin( width, height );
    painter->translate( posX+(width/2), posY+(height/2) );
    painter->scale( side / 100.0, side / 100.0 );

    QRect rect( -50, -25, 100, 50 );
    QRect circleRect( -40, -40, 80, 80 );

    switch( tcuState ){
    case 1: // green
        painter->save();
        painter->setPen( QPen( Qt::green, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::green, Qt::SolidPattern ) );
        painter->drawRect( rect );
        painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
        painter->drawEllipse( circleRect );
        painter->drawArc( circleRect, 0, 16*360 );
        painter->drawText( circleRect, Qt::AlignCenter, "T" );
        painter->restore();
        break;
    case 2: // red
        painter->save();
        painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
        painter->drawRect( rect );
        painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
        painter->drawEllipse( circleRect );
        painter->drawArc( circleRect, 0, 16*360 );
        painter->setPen( QPen( Qt::red, 12, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawText( circleRect, Qt::AlignCenter, "T" );
        painter->restore();
        break;
    case 3: // red,cross
        painter->save();
        painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
        painter->drawRect( rect );
        painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
        painter->drawEllipse( circleRect );
        painter->drawArc( circleRect, 0, 16*360 );
        painter->drawLine( -40, -40, 40, 40 );
        painter->drawLine( -40, 40, 40, -40 );
        painter->setPen( QPen( Qt::red, 12, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawText( circleRect, Qt::AlignCenter, "T" );
        //            painter->drawLine( -40, -40, 40, 40 );
        //            painter->drawLine( -40, 40, 40, -40 );
        painter->restore();
        break;
    case 4: // gray
        painter->save();
        painter->setPen( QPen( Qt::gray, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::gray, Qt::SolidPattern ) );
        painter->drawRect( rect );
        painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
        painter->drawEllipse( circleRect );
        painter->drawArc( circleRect, 0, 16*360 );
        painter->setPen( QPen( Qt::gray, 12, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawText( circleRect, Qt::AlignCenter, "T" );
        painter->restore();
        break;
    default: //white
        painter->save();
        painter->setPen( QPen( Qt::white, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::white, Qt::SolidPattern ) );
        painter->drawRect( rect );
        painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
        painter->drawEllipse( circleRect );
        painter->drawArc( circleRect, 0, 16*360 );
        painter->setPen( QPen( Qt::white, 12, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawText( circleRect, Qt::AlignCenter, "T" );
        painter->restore();
        break;
    }//end

    painter->restore();
}
void CTrainDiagramCtrl::iconAPS( QPainter* painter,
                                 qreal posX, qreal posY, qreal width, qreal height,
                                 int apsState )
{
    painter->save();
    painter->setRenderHint(QPainter::Antialiasing);
    painter->setFont( D_FONT_BOLD(48) );
    qreal side = qMin( width, height );
    painter->translate( posX+(width/2), posY+(height/2) );
    painter->scale( side / 100.0, side / 100.0 );

    QRect rect( -50, -25, 100, 50 );
    QRect circleRect( -40, -40, 80, 80 );
    QRect roundRect( -25, -5, 50, 10 );
    switch( apsState ){
    case 1: // green
        painter->save();
        painter->setPen( QPen( Qt::green, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::green, Qt::SolidPattern ) );
        painter->drawRect( rect );
        painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
        painter->drawEllipse( circleRect );
        painter->setBrush( QBrush( Qt::green, Qt::SolidPattern ) );
        painter->drawArc( circleRect, 0, 16*360 );
        //            painter->rotate( 45 );
        //            painter->drawRoundRect( roundRect );
        //            painter->rotate( 90 );
        //            painter->drawRoundRect( roundRect );
        //painter->setPen( QPen( Qt::green, 42, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawText( circleRect, Qt::AlignCenter, "A" );
        painter->restore();
        break;
    case 2: // red
        painter->save();
        painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
        painter->drawRect( rect );
        painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
        painter->drawEllipse( circleRect );
        painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
        painter->drawArc( circleRect, 0, 16*360 );
        //            painter->rotate( 45 );
        //            painter->drawRoundRect( roundRect );
        //            painter->rotate( 90 );
        //            painter->drawRoundRect( roundRect );
        //painter->setPen( QPen( Qt::red, 42, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawText( circleRect, Qt::AlignCenter, "A" );
        painter->restore();
        break;
    case 3: // red, cross
        painter->save();
        painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
        painter->drawRect( rect );
        painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
        painter->drawEllipse( circleRect );
        painter->drawLine( -40, -40, 40, 40 );
        painter->drawLine( -40, 40, 40, -40 );
        painter->setBrush( QBrush( Qt::red, Qt::SolidPattern ) );
        painter->drawArc( circleRect, 0, 16*360 );
        //            painter->rotate( 45 );
        //            painter->drawRoundRect( roundRect );
        //            painter->rotate( 90 );
        //            painter->drawRoundRect( roundRect );
        //painter->setPen( QPen( Qt::red, 42, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawText( circleRect, Qt::AlignCenter, "A" );
        painter->restore();
        break;
    case 4: // gray
        painter->save();
        painter->setPen( QPen( Qt::gray, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::gray, Qt::SolidPattern ) );
        painter->drawRect( rect );
        painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
        painter->drawEllipse( circleRect );
        painter->setBrush( QBrush( Qt::gray, Qt::SolidPattern ) );
        painter->drawArc( circleRect, 0, 16*360 );
        //            painter->rotate( 45 );
        //            painter->drawRoundRect( roundRect );
        //            painter->rotate( 90 );
        //            painter->drawRoundRect( roundRect );
        //painter->setPen( QPen( Qt::gray, 42, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawText( circleRect, Qt::AlignCenter, "A" );
        painter->restore();
        break;
    case 5: // yellow
        painter->save();
        painter->setPen( QPen( Qt::yellow, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::yellow, Qt::SolidPattern ) );
        painter->drawRect( rect );
        painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
        painter->drawEllipse( circleRect );
        painter->setBrush( QBrush( Qt::yellow, Qt::SolidPattern ) );
        painter->drawArc( circleRect, 0, 16*360 );
        painter->drawText( circleRect, Qt::AlignCenter, "A" );
        painter->restore();
        break;
    default: // white
        painter->save();
        painter->setPen( QPen( Qt::white, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::white, Qt::SolidPattern ) );
        painter->drawRect( rect );
        painter->setBrush( QBrush( Qt::black, Qt::SolidPattern ) );
        painter->drawEllipse( circleRect );
        painter->setBrush( QBrush( Qt::white, Qt::SolidPattern ) );
        painter->drawArc( circleRect, 0, 16*360 );
        //            painter->rotate( 45 );
        //            painter->drawRoundRect( roundRect );
        //            painter->rotate( 90 );
        //            painter->drawRoundRect( roundRect );
        //painter->setPen( QPen( Qt::white, 42, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawText( circleRect, Qt::AlignCenter, "A" );
        painter->restore();
        break;
    }//end

    painter->restore();
}
void CTrainDiagramCtrl::iconBrake( QPainter* painter,
                                   qreal posX, qreal posY, qreal width, qreal height,
                                   int brakeState )
{
    painter->save();
    painter->setRenderHint( QPainter::Antialiasing );
    qreal side = qMin( width, height );
    painter->translate( posX + width / 2, posY + height / 2 );
    painter->scale( side / 120.0, side / 120.0 );

    static const QPointF pointsRelease[] = {
        QPointF( -50, -30 ),
        QPointF( -60, -10 ),
        QPointF( -60, 10 ),
        QPointF( -50, 30 ),
        QPointF( -42.5, 30 ),
        QPointF( -48.5, 8.5 ),
        QPointF( -48.5, -8.5 ),
        QPointF( -42.5, -30 ),
        QPointF( -50, -30 ),
    }; // end QPointF

    static const QPointF pointsApply[] = {
        QPointF( -50+25, -30 ),
        QPointF( -60+25, -10 ),
        QPointF( -60+25, 10 ),
        QPointF( -50+25, 30 ),
        QPointF( -42.5+25, 30 ),
        QPointF( -48.5+25, 8.5 ),
        QPointF( -48.5+25, -8.5 ),
        QPointF( -42.5+25, -30 ),
        QPointF( -50+25, -30 ),
    }; // end QPointF
    switch( brakeState ){
    case 1: // green apply
        painter->save();
        painter->setPen( QPen( Qt::green, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawPolyline( pointsApply, 9 );
        //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
        painter->rotate( 180 );
        painter->drawPolyline( pointsApply,9 );
        painter->restore();
        break;
    case 2: // green release
        painter->save();
        painter->setPen( QPen( Qt::green, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawPolyline( pointsRelease, 9 );
        //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
        painter->rotate( 180 );
        painter->drawPolyline( pointsRelease,9 );
        painter->restore();
        break;
    case 3: // red apply
        painter->save();
        painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawPolyline( pointsApply, 9 );
        //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
        painter->rotate( 180 );
        painter->drawPolyline( pointsApply,9 );
        painter->restore();
        break;
    case 4: // red release
        painter->save();
        painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawPolyline( pointsRelease, 9 );
        //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
        painter->rotate( 180 );
        painter->drawPolyline( pointsRelease,9 );
        painter->restore();
        break;
    case 5: // red, cross, apply
        painter->save();
        painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawPolyline( pointsApply, 9 );
        //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
        painter->rotate( 180 );
        painter->drawPolyline( pointsApply,9 );
        painter->drawLine( -65, -45, 65, 45 );
        painter->drawLine( -65, 45, 65, -45 );
        painter->restore();
        break;
    case 6: // red, cross, release
        painter->save();
        painter->setPen( QPen( Qt::red, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawPolyline( pointsRelease, 9 );
        //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
        painter->rotate( 180 );
        painter->drawPolyline( pointsRelease,9 );
        painter->drawLine( -65, -45, 65, 45 );
        painter->drawLine( -65, 45, 65, -45 );
        painter->restore();
        break;
    default: // green release
        painter->save();
        painter->setPen( QPen( Qt::green, 4, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->drawPolyline( pointsRelease, 9 );
        //painter->drawArc( QRectF( -37.5, -37.5, 75, 75 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -20, -20, 40, 40 ), 0, 16 * 360 );
        painter->drawArc( QRectF( -10, -10, 20, 20 ), 0, 16 * 360 );
        painter->rotate( 180 );
        painter->drawPolyline( pointsRelease,9 );
        painter->restore();
    }//end

    painter->restore();
}

/******************************************       iconPantographsLeft     ***********************************************/
void CTrainDiagramCtrl::iconPantographsLeft( QPainter* painter,
                                             qreal posX, qreal posY, qreal width, qreal height,
                                             PANTOGRAPHSTATE state, bool isolated )
{
    painter->save();
    painter->setRenderHint( QPainter::Antialiasing );

    painter->setPen(Qt::black);
    painter->setBrush(Qt::black);
    painter->drawRect( QRectF(posX-3, posY-3, width+8, height) );

    painter->translate( QPointF(posX + width / 2, posY + height / 2) );
    painter->scale( width / 100, height / 100 );

    painter->setPen( QPen( Qt::yellow, 6, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
    switch( state )
    {
    case PANTOGRAPH_LEFT_UP:
        {
            QPointF points[] =
            {
                QPointF( -50, -30 ), // 0
                QPointF( -35, -50 ),// 1
                QPointF( 35, -50 ), // 2
                QPointF( 50, -30 ),// 3

                QPointF( 0, -50 ),// 4
                QPointF( -25, 0 ),// 5
                QPointF( 0, 50 ),// 6
            };  // end points
            painter->save();
            painter->drawPolyline( points, 4 );
            painter->drawPolyline( &points[4], 3 );
            painter->restore();
            if( isolated )
            {
                painter->setPen( Qt::red );
                painter->save();
                painter->drawLine( 50, -50, -50, 50 );
                painter->drawLine( 50, 50, -50, -50 );
                painter->restore();
            } // end isolated
        }
        break;
    case PANTOGRAPH_LEFT_DOWN:
        {
            QPointF points[] =
            {
                QPointF( -50, 50 ), // 0
                QPointF( -35, 30 ),// 1
                QPointF( 35, 30 ), // 2
                QPointF( 50, 50 ),// 3

                QPointF( 0, 30 ),// 4
                QPointF( -25, 40 ),// 5
                QPointF( 0, 50 ),// 6
            };  // end points
            painter->save();
            painter->drawPolyline( points, 4 );
            painter->drawPolyline( &points[4], 3 );
            painter->restore();
            if( isolated )
            {
                painter->setPen( Qt::red );
                painter->save();
                painter->drawLine( 50, 30, -50, 50 );
                painter->drawLine( 50, 50, -50, 30 );
                painter->restore();
            } // end isolated
        }
        break;
    case PANTOGRAPH_LEFT_MIDDLE:
        {
            QPointF points[] =
            {
                QPointF( -50, 20 ), // 0
                QPointF( -35, 0 ),// 1
                QPointF( 35, 0 ), // 2
                QPointF( 50, 20 ),// 3

                QPointF( 0, 0 ),// 4
                QPointF( -25, 25 ),// 5
                QPointF( 0, 50 ),// 6
            };  // end points
            painter->save();
            painter->drawPolyline( points, 4 );
            painter->drawPolyline( &points[4], 3 );
            painter->restore();
            if( isolated )
            {
                painter->setPen( Qt::red );
                painter->save();
                painter->drawLine( 50, 0, -50, 50 );
                painter->drawLine( 50, 50, -50, 0 );
                painter->restore();
            } // end isolated
        }
        break;
    default:
        break;
    }
    painter->restore();
}
/******************************************       iconPantographsRight     ***********************************************/
void CTrainDiagramCtrl::iconPantographsRight( QPainter* painter,
                                              qreal posX, qreal posY, qreal width, qreal height,
                                              PANTOGRAPHSTATE state, bool isolated )
{
    painter->save();
    painter->setRenderHint( QPainter::Antialiasing );
    painter->setPen( QPen( Qt::yellow, 6, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
    painter->translate( posX + width / 2, posY + height / 2 );
    painter->scale( width / 100, height / 100 );
    switch( state )
    {
    case PANTOGRAPH_RIGHT_UP:
        {
            QPointF points[] =
            {
                QPointF( -50, -30 ), // 0
                QPointF( -35, -50 ),// 1
                QPointF( 35, -50 ), // 2
                QPointF( 50, -30 ),// 3

                QPointF( 0, -50 ),// 4
                QPointF( 25, 0 ),// 5
                QPointF( 0, 50 ),// 6
            };  // end points
            painter->save();
            painter->drawPolyline( points, 4 );
            painter->drawPolyline( &points[4], 3 );
            painter->restore();
            if( isolated )
            {
                painter->setPen( Qt::red );
                painter->save();
                painter->drawLine( 50, -50, -50, 50 );
                painter->drawLine( 50, 50, -50, -50 );
                painter->restore();
            } // end isolated
        }
        break;
    case PANTOGRAPH_RIGHT_DOWN:
        {
            QPointF points[] =
            {
                QPointF( -50, 50 ), // 0
                QPointF( -35, 30 ),// 1
                QPointF( 35, 30 ), // 2
                QPointF( 50, 50 ),// 3

                QPointF( 0, 30 ),// 4
                QPointF( 25, 40 ),// 5
                QPointF( 0, 50 ),// 6
            };  // end points
            painter->save();
            painter->drawPolyline( points, 4 );
            painter->drawPolyline( &points[4], 3 );
            painter->restore();
            if( isolated )
            {
                painter->setPen( Qt::red );
                painter->save();
                painter->drawLine( 50, 30, -50, 50 );
                painter->drawLine( 50, 50, -50, 30 );
                painter->restore();
            } // end isolated
        }
        break;
    case PANTOGRAPH_RIGHT_MIDDLE:
        {
            QPointF points[] =
            {
                QPointF( -50, 20 ), // 0
                QPointF( -35, 0 ),// 1
                QPointF( 35, 0 ), // 2
                QPointF( 50, 20 ),// 3

                QPointF( 0, 0 ),// 4
                QPointF( 25, 25 ),// 5
                QPointF( 0, 50 ),// 6
            };  // end points
            painter->save();
            painter->drawPolyline( points, 4 );
            painter->drawPolyline( &points[4], 3 );
            painter->restore();
            if( isolated )
            {
                painter->setPen( Qt::red );
                painter->save();
                painter->drawLine( 50, 0, -50, 50 );
                painter->drawLine( 50, 50, -50, 0 );
                painter->restore();
            } // end isolated
        }
        break;
    default:
        break;
    } //  end else
    painter->restore();
}
void CTrainDiagramCtrl::iconBreaker( QPainter* painter,
                                     qreal posX, qreal posY, qreal width, qreal height,
                                     bool brkState )
{
    painter->save();
    painter->setRenderHint(QPainter::Antialiasing);

    qreal side = qMin( width, height );
    painter->translate( posX+(width/2), posY+(height/2) );
    painter->scale( side / 100.0, side / 100.0 );

    if(brkState){
        painter->save();
        painter->setPen( QPen( Qt::green, 8, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::green, Qt::SolidPattern ) );
        painter->drawRect( QRect(-40,10,25,25) );
        painter->drawRect( QRect( 15,10,25,25) );
        painter->drawLine(-40,0,40,0);
        painter->restore();
    }else{
        painter->save();
        painter->setPen( QPen( Qt::gray, 8, Qt::SolidLine, Qt::RoundCap, Qt::MiterJoin ) );
        painter->setBrush( QBrush( Qt::gray, Qt::SolidPattern ) );
        painter->drawRect( QRect(-40,10,25,25) );
        painter->drawRect( QRect( 10,10,25,25) );
        painter->drawLine(-40,10,40,-30);
        painter->restore();
    }//end

    painter->restore();
}
