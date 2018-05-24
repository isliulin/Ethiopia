#include "cspeedctrl.h"
#include "QDebug"
CSpeedCtrl::CSpeedCtrl()
{
    m_typestr = "CSpeedCtrl";
    m_pPainter = NULL;
}

void CSpeedCtrl::Create(__in QString& ctrl_str,
                        __in QRect& ctrl_rc,
                        __in QColor& ctrl_txtcolor,
                        __in QFont& ctrl_font,
                        __in QColor& ctrl_bkcolor,
                        __in QPainter* ctrl_m_pPainter,
                        __in int ctrl_ID)
{
    m_txtcolor = ctrl_txtcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_m_pPainter;
    m_str      = ctrl_str;
    ASSERT(m_pPainter != NULL);

    DrawSpeedCtrl(0);
    SetValue(0);
}

void CSpeedCtrl::SetCtrlText(
                             __in QString ctrl_str // CSpeedCtrl text
                            )
{

}

void CSpeedCtrl::SetTxtFont(
                            __in QFont ctrl_font // CSpeedCtrl font
                           )
{

}

void CSpeedCtrl::SetTxtColor(
                             __in QColor ctrl_color // CSpeedCtrl text color
                            )
{

}

void CSpeedCtrl::SetCtrlBKColor(
                                __in QColor ctrl_bkcolor // CSpeedCtrl bk color
                               )
{

}

void CSpeedCtrl::SetCtrlRect(
                             __in QRect ctrl_rect // CSpeedCtrl rect
                            )
{

}

void CSpeedCtrl::DrawSpeedCtrl(__in int ctrl_value)
{

    m_pPainter->setRenderHint(QPainter::Antialiasing);
    m_pPainter->setFont(m_font);
    m_pPainter->setBrush(QBrush(Qt::yellow, Qt::SolidPattern));
    m_pPainter->setPen(QPen(Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
    qreal side = qMin( m_rect.width(), m_rect.height() );

    // qDebug()<< m_rect.width() << m_rect.height();

    m_pPainter->translate( m_rect.x() + m_rect.width() / 2, m_rect.y() + m_rect.height() / 2 );
    m_pPainter->scale( side / 200.0, side / 200.0 );
    m_pPainter->save();

    m_pPainter->drawArc(-100, -100, 200, 200, -30*16, 240*16);
    QRectF rectKmh( -25, -50, 50, 20 );
    m_pPainter->setBrush(QBrush(Qt::NoBrush));
    m_pPainter->drawRect( rectKmh );
    QRectF rectSpeed( -25, 20, 50, 30 );
    m_pPainter->drawRect( rectSpeed );
    QString str;
    str.append(QString("%1").arg(ctrl_value));
    m_pPainter->setFont( QFont("SimHei",  30,QFont::Bold, FALSE) );
    m_pPainter->drawText( rectSpeed, Qt::AlignCenter, str);
    m_pPainter->setFont( QFont("SimHei",  16,QFont::Bold, FALSE ) );
    m_pPainter->drawText( rectKmh, Qt::AlignCenter, "km/h" );
    m_pPainter->setFont( m_font );
    m_pPainter->save();
    m_pPainter->rotate(60);
    for (int i = 0; i < 81; ++i) {
        if (i < 70)
        {
            m_pPainter->setPen(QPen(Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
        }
        else
        {
            m_pPainter->setPen(QPen(Qt::red, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
        }//end
        if(i%5){
            m_pPainter->drawLine(0, 90, 0, 100);
        }else{
            // end red line long
            m_pPainter->drawLine(0, 80, 0, 100);
        } // end if...else
        if (ctrl_value > 80)
        {
            ctrl_value = 80;
        }
        if (i == ctrl_value) {//draw speed pointer by speed value
            static const QPointF points[3] = {
                 QPointF(0, 90),
                 QPointF(5, 0),
                 QPointF(-5, 0)
               };
            m_pPainter->setBrush(QBrush(Qt::green, Qt::SolidPattern));
            m_pPainter->setPen(QPen(Qt::green, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
            m_pPainter->drawPolygon(points, 3);
        }
        m_pPainter->rotate(3);
    } // end for
    m_pPainter->restore();
    m_pPainter->setFont( QFont("SimHei",  16,QFont::Bold, FALSE ) );
    m_pPainter->setPen(QPen(Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
    m_pPainter->drawText( QRectF( -15, -77, 30, 20 ), Qt::AlignCenter, "40" );
    m_pPainter->drawText( QRectF( -48, -67, 30, 20 ), Qt::AlignCenter, "30" );
    m_pPainter->drawText( QRectF( 18, -67, 30, 20 ), Qt::AlignCenter, "50" );
    m_pPainter->drawText( QRectF( -65, -45, 30, 20 ), Qt::AlignVCenter|Qt::AlignLeft, "20" );
    m_pPainter->drawText( QRectF( 40, -45, 30, 20 ), Qt::AlignCenter, "60" );
    m_pPainter->drawText( QRectF( -79, -10, 30, 20 ), Qt::AlignVCenter|Qt::AlignLeft, "10" );
    m_pPainter->drawText( QRectF( -75, 30, 30, 20 ), Qt::AlignCenter, "0" );
    m_pPainter->setPen(QPen(Qt::red, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
    m_pPainter->drawText( QRectF( 47, -10, 30, 20 ), Qt::AlignVCenter|Qt::AlignRight, "70" );
    m_pPainter->drawText( QRectF( 40, 30, 30, 20 ), Qt::AlignCenter, "80" );

    m_pPainter->restore();

    // reset transform
    m_pPainter->resetTransform();
}

void CSpeedCtrl::SetValue(__in int ctrl_value)
{
    //clean with black background
    m_pPainter->setRenderHint(QPainter::Antialiasing);
    m_pPainter->setBrush(QBrush(Qt::black, Qt::SolidPattern));
    m_pPainter->setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
    qreal side = qMin( m_rect.width(), m_rect.height() );
    m_pPainter->translate( m_rect.x() + m_rect.width() / 2, m_rect.y() + m_rect.height() / 2 );
    m_pPainter->scale( side / 200.0, side / 200.0 );
    m_pPainter->save();
    m_pPainter->drawChord(-100, -100, 200, 200, -30*16, 240*16);

    m_pPainter->restore();

    m_pPainter->resetTransform();
    //redraw
    DrawSpeedCtrl(ctrl_value);
}
