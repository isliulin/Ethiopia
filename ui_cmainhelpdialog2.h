/********************************************************************************
** Form generated from reading UI file 'cmainhelpdialog2.ui'
**
** Created: Mon Feb 2 13:56:10 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAINHELPDIALOG2_H
#define UI_CMAINHELPDIALOG2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_CMainHelpDialog2
{
public:
    QPushButton *quitPushButton;
    QToolButton *downToolButton;
    QToolButton *upToolButton;
    QLabel *currentPageLabel;
    QLabel *Label1_11;
    QLabel *Label1_10;
    QLabel *Label1_5;
    QLabel *Label1_9;
    QLabel *Label1_21;
    QLabel *Label1_22;
    QLabel *Label1_23;
    QLabel *Label1_24;
    QLabel *Label1_25;
    QLabel *Label1_26;
    QLabel *Label1_27;
    QLabel *Label1_28;
    QLabel *Label1_29;
    QLabel *Label1_30;
    QLabel *Label1_31;
    QLabel *Label1_33;
    QLabel *Label1_34;
    QLabel *Label1_12;

    void setupUi(QDialog *CMainHelpDialog2)
    {
        if (CMainHelpDialog2->objectName().isEmpty())
            CMainHelpDialog2->setObjectName(QString::fromUtf8("CMainHelpDialog2"));
        CMainHelpDialog2->setWindowModality(Qt::ApplicationModal);
        CMainHelpDialog2->resize(640, 415);
        CMainHelpDialog2->setSizeGripEnabled(false);
        CMainHelpDialog2->setModal(true);
        quitPushButton = new QPushButton(CMainHelpDialog2);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(520, 360, 90, 40));
        QFont font;
        quitPushButton->setFont(font);
        downToolButton = new QToolButton(CMainHelpDialog2);
        downToolButton->setObjectName(QString::fromUtf8("downToolButton"));
        downToolButton->setEnabled(false);
        downToolButton->setGeometry(QRect(380, 360, 51, 41));
        downToolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"border: 0px solid;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("resource/image/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downToolButton->setIcon(icon);
        downToolButton->setIconSize(QSize(48, 48));
        upToolButton = new QToolButton(CMainHelpDialog2);
        upToolButton->setObjectName(QString::fromUtf8("upToolButton"));
        upToolButton->setGeometry(QRect(440, 360, 51, 41));
        upToolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"border: 0px solid;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("resource/image/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upToolButton->setIcon(icon1);
        upToolButton->setIconSize(QSize(48, 48));
        currentPageLabel = new QLabel(CMainHelpDialog2);
        currentPageLabel->setObjectName(QString::fromUtf8("currentPageLabel"));
        currentPageLabel->setGeometry(QRect(340, 360, 31, 41));
        currentPageLabel->setFont(font);
        Label1_11 = new QLabel(CMainHelpDialog2);
        Label1_11->setObjectName(QString::fromUtf8("Label1_11"));
        Label1_11->setGeometry(QRect(100, 60, 201, 17));
        Label1_11->setFont(font);
        Label1_10 = new QLabel(CMainHelpDialog2);
        Label1_10->setObjectName(QString::fromUtf8("Label1_10"));
        Label1_10->setGeometry(QRect(100, 140, 201, 17));
        Label1_10->setFont(font);
        Label1_5 = new QLabel(CMainHelpDialog2);
        Label1_5->setObjectName(QString::fromUtf8("Label1_5"));
        Label1_5->setGeometry(QRect(100, 20, 201, 17));
        Label1_5->setFont(font);
        Label1_9 = new QLabel(CMainHelpDialog2);
        Label1_9->setObjectName(QString::fromUtf8("Label1_9"));
        Label1_9->setGeometry(QRect(100, 180, 201, 17));
        Label1_9->setFont(font);
        Label1_21 = new QLabel(CMainHelpDialog2);
        Label1_21->setObjectName(QString::fromUtf8("Label1_21"));
        Label1_21->setGeometry(QRect(100, 220, 220, 17));
        Label1_21->setFont(font);
        Label1_22 = new QLabel(CMainHelpDialog2);
        Label1_22->setObjectName(QString::fromUtf8("Label1_22"));
        Label1_22->setGeometry(QRect(100, 260, 220, 17));
        Label1_22->setFont(font);
        Label1_23 = new QLabel(CMainHelpDialog2);
        Label1_23->setObjectName(QString::fromUtf8("Label1_23"));
        Label1_23->setGeometry(QRect(100, 300, 220, 17));
        Label1_23->setFont(font);
        Label1_24 = new QLabel(CMainHelpDialog2);
        Label1_24->setObjectName(QString::fromUtf8("Label1_24"));
        Label1_24->setGeometry(QRect(100, 340, 220, 17));
        Label1_24->setFont(font);
        Label1_25 = new QLabel(CMainHelpDialog2);
        Label1_25->setObjectName(QString::fromUtf8("Label1_25"));
        Label1_25->setGeometry(QRect(380, 100, 220, 17));
        Label1_25->setFont(font);
        Label1_26 = new QLabel(CMainHelpDialog2);
        Label1_26->setObjectName(QString::fromUtf8("Label1_26"));
        Label1_26->setGeometry(QRect(380, 140, 220, 17));
        Label1_26->setFont(font);
        Label1_27 = new QLabel(CMainHelpDialog2);
        Label1_27->setObjectName(QString::fromUtf8("Label1_27"));
        Label1_27->setGeometry(QRect(380, 60, 220, 17));
        Label1_27->setFont(font);
        Label1_28 = new QLabel(CMainHelpDialog2);
        Label1_28->setObjectName(QString::fromUtf8("Label1_28"));
        Label1_28->setGeometry(QRect(380, 20, 220, 17));
        Label1_28->setFont(font);
        Label1_29 = new QLabel(CMainHelpDialog2);
        Label1_29->setObjectName(QString::fromUtf8("Label1_29"));
        Label1_29->setGeometry(QRect(380, 180, 220, 17));
        Label1_29->setFont(font);
        Label1_30 = new QLabel(CMainHelpDialog2);
        Label1_30->setObjectName(QString::fromUtf8("Label1_30"));
        Label1_30->setGeometry(QRect(380, 220, 220, 17));
        Label1_30->setFont(font);
        Label1_31 = new QLabel(CMainHelpDialog2);
        Label1_31->setObjectName(QString::fromUtf8("Label1_31"));
        Label1_31->setGeometry(QRect(380, 260, 220, 17));
        Label1_31->setFont(font);
        Label1_33 = new QLabel(CMainHelpDialog2);
        Label1_33->setObjectName(QString::fromUtf8("Label1_33"));
        Label1_33->setGeometry(QRect(100, 380, 220, 17));
        Label1_33->setFont(font);
        Label1_34 = new QLabel(CMainHelpDialog2);
        Label1_34->setObjectName(QString::fromUtf8("Label1_34"));
        Label1_34->setGeometry(QRect(380, 300, 220, 17));
        Label1_34->setFont(font);
        Label1_12 = new QLabel(CMainHelpDialog2);
        Label1_12->setObjectName(QString::fromUtf8("Label1_12"));
        Label1_12->setGeometry(QRect(100, 100, 201, 17));
        Label1_12->setFont(font);

        retranslateUi(CMainHelpDialog2);

        QMetaObject::connectSlotsByName(CMainHelpDialog2);
    } // setupUi

    void retranslateUi(QDialog *CMainHelpDialog2)
    {
        CMainHelpDialog2->setWindowTitle(QApplication::translate("CMainHelpDialog2", "Dialog", 0, QApplication::UnicodeUTF8));
        quitPushButton->setStyleSheet(QApplication::translate("CMainHelpDialog2", "border: 2px solid  rgb(255, 255, 0);\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
        quitPushButton->setText(QApplication::translate("CMainHelpDialog2", "Quit", 0, QApplication::UnicodeUTF8));
        downToolButton->setText(QApplication::translate("CMainHelpDialog2", "...", 0, QApplication::UnicodeUTF8));
        upToolButton->setText(QApplication::translate("CMainHelpDialog2", "...", 0, QApplication::UnicodeUTF8));
        currentPageLabel->setStyleSheet(QString());
        currentPageLabel->setText(QApplication::translate("CMainHelpDialog2", "2/2", 0, QApplication::UnicodeUTF8));
        Label1_11->setStyleSheet(QString());
        Label1_11->setText(QApplication::translate("CMainHelpDialog2", ": Shunting Model", 0, QApplication::UnicodeUTF8));
        Label1_10->setStyleSheet(QString());
        Label1_10->setText(QApplication::translate("CMainHelpDialog2", ": Safety Brake Applied", 0, QApplication::UnicodeUTF8));
        Label1_5->setStyleSheet(QString());
        Label1_5->setText(QApplication::translate("CMainHelpDialog2", ": Wash Car Model", 0, QApplication::UnicodeUTF8));
        Label1_9->setStyleSheet(QString());
        Label1_9->setText(QApplication::translate("CMainHelpDialog2", ": All Brake Released", 0, QApplication::UnicodeUTF8));
        Label1_21->setStyleSheet(QString());
        Label1_21->setText(QApplication::translate("CMainHelpDialog2", ": Safety Loop", 0, QApplication::UnicodeUTF8));
        Label1_22->setStyleSheet(QString());
        Label1_22->setText(QApplication::translate("CMainHelpDialog2", ": Panto Up", 0, QApplication::UnicodeUTF8));
        Label1_23->setStyleSheet(QString());
        Label1_23->setText(QApplication::translate("CMainHelpDialog2", ": Panto Middle", 0, QApplication::UnicodeUTF8));
        Label1_24->setStyleSheet(QString());
        Label1_24->setText(QApplication::translate("CMainHelpDialog2", ": Panto Down", 0, QApplication::UnicodeUTF8));
        Label1_25->setStyleSheet(QString());
        Label1_25->setText(QApplication::translate("CMainHelpDialog2", ": TCU Ready", 0, QApplication::UnicodeUTF8));
        Label1_26->setStyleSheet(QString());
        Label1_26->setText(QApplication::translate("CMainHelpDialog2", ": EB Light", 0, QApplication::UnicodeUTF8));
        Label1_27->setStyleSheet(QString());
        Label1_27->setText(QApplication::translate("CMainHelpDialog2", ": Direction Back", 0, QApplication::UnicodeUTF8));
        Label1_28->setStyleSheet(QString());
        Label1_28->setText(QApplication::translate("CMainHelpDialog2", ": Direction Forward", 0, QApplication::UnicodeUTF8));
        Label1_29->setStyleSheet(QString());
        Label1_29->setText(QApplication::translate("CMainHelpDialog2", ": Left turn light", 0, QApplication::UnicodeUTF8));
        Label1_30->setStyleSheet(QString());
        Label1_30->setText(QApplication::translate("CMainHelpDialog2", ": Right turn light", 0, QApplication::UnicodeUTF8));
        Label1_31->setStyleSheet(QString());
        Label1_31->setText(QApplication::translate("CMainHelpDialog2", ": BCC not OK", 0, QApplication::UnicodeUTF8));
        Label1_33->setStyleSheet(QString());
        Label1_33->setText(QApplication::translate("CMainHelpDialog2", ": BCC work", 0, QApplication::UnicodeUTF8));
        Label1_34->setStyleSheet(QString());
        Label1_34->setText(QApplication::translate("CMainHelpDialog2", ": Rescue", 0, QApplication::UnicodeUTF8));
        Label1_12->setStyleSheet(QString());
        Label1_12->setText(QApplication::translate("CMainHelpDialog2", ": Coupling Model", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CMainHelpDialog2: public Ui_CMainHelpDialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAINHELPDIALOG2_H
