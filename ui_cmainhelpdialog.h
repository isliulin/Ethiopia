/********************************************************************************
** Form generated from reading UI file 'cmainhelpdialog.ui'
**
** Created: Sun Jun 7 19:08:46 2015
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAINHELPDIALOG_H
#define UI_CMAINHELPDIALOG_H

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

class Ui_CMainHelpDialog
{
public:
    QPushButton *quitPushButton;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *Label1_15;
    QLabel *label_10;
    QLabel *label_9;
    QToolButton *downToolButton;
    QToolButton *upToolButton;
    QLabel *currentPageLabel;
    QLabel *Label1_8;
    QLabel *Label1_12;
    QLabel *Label1_11;
    QLabel *Label1_10;
    QLabel *Label1_14;
    QLabel *Label1_18;
    QLabel *Label1_9;
    QLabel *Label1_20;
    QLabel *Label1_28;
    QLabel *Label1_27;
    QLabel *Label1_24;
    QLabel *Label1_26;
    QLabel *Label1_22;
    QLabel *Label1_25;
    QLabel *Label1_23;
    QLabel *Label1_21;
    QLabel *Label1_29;

    void setupUi(QDialog *CMainHelpDialog)
    {
        if (CMainHelpDialog->objectName().isEmpty())
            CMainHelpDialog->setObjectName(QString::fromUtf8("CMainHelpDialog"));
        CMainHelpDialog->setWindowModality(Qt::ApplicationModal);
        CMainHelpDialog->resize(640, 415);
        CMainHelpDialog->setSizeGripEnabled(false);
        CMainHelpDialog->setModal(true);
        quitPushButton = new QPushButton(CMainHelpDialog);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(520, 360, 90, 40));
        QFont font;
        quitPushButton->setFont(font);
        label = new QLabel(CMainHelpDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 301, 31, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"border: 2px solid  rgb(255, 255, 0);"));
        label_3 = new QLabel(CMainHelpDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 226, 31, 31));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"border: 2px solid  rgb(255, 255, 0);"));
        label_4 = new QLabel(CMainHelpDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 190, 31, 31));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 255);\n"
"border: 2px solid  rgb(255, 255, 0);"));
        label_5 = new QLabel(CMainHelpDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 152, 31, 31));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);\n"
"background-color: rgb(0, 255, 0);\n"
"border: 2px solid  rgb(255, 255, 0);"));
        Label1_15 = new QLabel(CMainHelpDialog);
        Label1_15->setObjectName(QString::fromUtf8("Label1_15"));
        Label1_15->setGeometry(QRect(33, 118, 21, 26));
        Label1_15->setFont(font);
        Label1_15->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(CMainHelpDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(55, 118, 21, 26));
        label_10->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(CMainHelpDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(14, 118, 21, 26));
        label_9->setAlignment(Qt::AlignCenter);
        downToolButton = new QToolButton(CMainHelpDialog);
        downToolButton->setObjectName(QString::fromUtf8("downToolButton"));
        downToolButton->setGeometry(QRect(380, 360, 51, 41));
        downToolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"border: 0px solid;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("resource/image/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downToolButton->setIcon(icon);
        downToolButton->setIconSize(QSize(48, 48));
        upToolButton = new QToolButton(CMainHelpDialog);
        upToolButton->setObjectName(QString::fromUtf8("upToolButton"));
        upToolButton->setEnabled(false);
        upToolButton->setGeometry(QRect(440, 360, 51, 41));
        upToolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(54, 54, 54);\n"
"border: 0px solid;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("resource/image/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upToolButton->setIcon(icon1);
        upToolButton->setIconSize(QSize(48, 48));
        currentPageLabel = new QLabel(CMainHelpDialog);
        currentPageLabel->setObjectName(QString::fromUtf8("currentPageLabel"));
        currentPageLabel->setGeometry(QRect(340, 360, 31, 41));
        currentPageLabel->setFont(font);
        Label1_8 = new QLabel(CMainHelpDialog);
        Label1_8->setObjectName(QString::fromUtf8("Label1_8"));
        Label1_8->setGeometry(QRect(80, 306, 220, 17));
        Label1_8->setFont(font);
        Label1_12 = new QLabel(CMainHelpDialog);
        Label1_12->setObjectName(QString::fromUtf8("Label1_12"));
        Label1_12->setGeometry(QRect(80, 158, 220, 17));
        Label1_12->setFont(font);
        Label1_11 = new QLabel(CMainHelpDialog);
        Label1_11->setObjectName(QString::fromUtf8("Label1_11"));
        Label1_11->setGeometry(QRect(80, 195, 220, 17));
        Label1_11->setFont(font);
        Label1_10 = new QLabel(CMainHelpDialog);
        Label1_10->setObjectName(QString::fromUtf8("Label1_10"));
        Label1_10->setGeometry(QRect(80, 232, 220, 17));
        Label1_10->setFont(font);
        Label1_14 = new QLabel(CMainHelpDialog);
        Label1_14->setObjectName(QString::fromUtf8("Label1_14"));
        Label1_14->setGeometry(QRect(80, 120, 220, 17));
        Label1_14->setFont(font);
        Label1_18 = new QLabel(CMainHelpDialog);
        Label1_18->setObjectName(QString::fromUtf8("Label1_18"));
        Label1_18->setGeometry(QRect(390, 40, 220, 17));
        Label1_18->setFont(font);
        Label1_9 = new QLabel(CMainHelpDialog);
        Label1_9->setObjectName(QString::fromUtf8("Label1_9"));
        Label1_9->setGeometry(QRect(80, 269, 220, 17));
        Label1_9->setFont(font);
        Label1_20 = new QLabel(CMainHelpDialog);
        Label1_20->setObjectName(QString::fromUtf8("Label1_20"));
        Label1_20->setGeometry(QRect(80, 40, 220, 17));
        Label1_20->setFont(font);
        Label1_28 = new QLabel(CMainHelpDialog);
        Label1_28->setObjectName(QString::fromUtf8("Label1_28"));
        Label1_28->setGeometry(QRect(390, 290, 220, 17));
        Label1_28->setFont(font);
        Label1_27 = new QLabel(CMainHelpDialog);
        Label1_27->setObjectName(QString::fromUtf8("Label1_27"));
        Label1_27->setGeometry(QRect(390, 185, 220, 17));
        Label1_27->setFont(font);
        Label1_24 = new QLabel(CMainHelpDialog);
        Label1_24->setObjectName(QString::fromUtf8("Label1_24"));
        Label1_24->setGeometry(QRect(390, 150, 220, 17));
        Label1_24->setFont(font);
        Label1_26 = new QLabel(CMainHelpDialog);
        Label1_26->setObjectName(QString::fromUtf8("Label1_26"));
        Label1_26->setGeometry(QRect(390, 255, 220, 17));
        Label1_26->setFont(font);
        Label1_22 = new QLabel(CMainHelpDialog);
        Label1_22->setObjectName(QString::fromUtf8("Label1_22"));
        Label1_22->setGeometry(QRect(390, 115, 220, 17));
        Label1_22->setFont(font);
        Label1_25 = new QLabel(CMainHelpDialog);
        Label1_25->setObjectName(QString::fromUtf8("Label1_25"));
        Label1_25->setGeometry(QRect(390, 220, 220, 17));
        Label1_25->setFont(font);
        Label1_23 = new QLabel(CMainHelpDialog);
        Label1_23->setObjectName(QString::fromUtf8("Label1_23"));
        Label1_23->setGeometry(QRect(390, 80, 220, 17));
        Label1_23->setFont(font);
        Label1_21 = new QLabel(CMainHelpDialog);
        Label1_21->setObjectName(QString::fromUtf8("Label1_21"));
        Label1_21->setGeometry(QRect(80, 80, 220, 17));
        Label1_21->setFont(font);
        Label1_29 = new QLabel(CMainHelpDialog);
        Label1_29->setObjectName(QString::fromUtf8("Label1_29"));
        Label1_29->setGeometry(QRect(390, 325, 220, 17));
        Label1_29->setFont(font);

        retranslateUi(CMainHelpDialog);

        QMetaObject::connectSlotsByName(CMainHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *CMainHelpDialog)
    {
        CMainHelpDialog->setWindowTitle(QApplication::translate("CMainHelpDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        quitPushButton->setStyleSheet(QApplication::translate("CMainHelpDialog", "border: 2px solid  rgb(255, 255, 0);\n"
"\n"
"", 0, QApplication::UnicodeUTF8));
        quitPushButton->setText(QApplication::translate("CMainHelpDialog", "Quit", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        Label1_15->setStyleSheet(QString());
        Label1_15->setText(QApplication::translate("CMainHelpDialog", "~", 0, QApplication::UnicodeUTF8));
        label_10->setStyleSheet(QApplication::translate("CMainHelpDialog", "background-color: rgb(0,0, 0);\n"
"border: 2px solid  rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CMainHelpDialog", "8", 0, QApplication::UnicodeUTF8));
        label_9->setStyleSheet(QApplication::translate("CMainHelpDialog", "background-color: rgb(0,0, 0);\n"
"border: 2px solid  rgb(255, 255, 0);\n"
"color: rgb(255, 255, 0);", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CMainHelpDialog", "1", 0, QApplication::UnicodeUTF8));
        downToolButton->setText(QApplication::translate("CMainHelpDialog", "...", 0, QApplication::UnicodeUTF8));
        upToolButton->setText(QApplication::translate("CMainHelpDialog", "...", 0, QApplication::UnicodeUTF8));
        currentPageLabel->setStyleSheet(QString());
        currentPageLabel->setText(QApplication::translate("CMainHelpDialog", "1/2", 0, QApplication::UnicodeUTF8));
        Label1_8->setStyleSheet(QString());
        Label1_8->setText(QApplication::translate("CMainHelpDialog", ": Emergency Activated", 0, QApplication::UnicodeUTF8));
        Label1_12->setStyleSheet(QString());
        Label1_12->setText(QApplication::translate("CMainHelpDialog", ": Closed", 0, QApplication::UnicodeUTF8));
        Label1_11->setStyleSheet(QString());
        Label1_11->setText(QApplication::translate("CMainHelpDialog", ": Full Opened", 0, QApplication::UnicodeUTF8));
        Label1_10->setStyleSheet(QString());
        Label1_10->setText(QApplication::translate("CMainHelpDialog", ": Not Closed", 0, QApplication::UnicodeUTF8));
        Label1_14->setStyleSheet(QString());
        Label1_14->setText(QApplication::translate("CMainHelpDialog", ": Door", 0, QApplication::UnicodeUTF8));
        Label1_18->setStyleSheet(QString());
        Label1_18->setText(QApplication::translate("CMainHelpDialog", ": Door Bypass", 0, QApplication::UnicodeUTF8));
        Label1_9->setStyleSheet(QString());
        Label1_9->setText(QApplication::translate("CMainHelpDialog", ": Isolated", 0, QApplication::UnicodeUTF8));
        Label1_20->setStyleSheet(QString());
        Label1_20->setText(QApplication::translate("CMainHelpDialog", ": TCU OK", 0, QApplication::UnicodeUTF8));
        Label1_28->setStyleSheet(QString());
        Label1_28->setText(QApplication::translate("CMainHelpDialog", ": HSCB Opened", 0, QApplication::UnicodeUTF8));
        Label1_27->setStyleSheet(QString());
        Label1_27->setText(QApplication::translate("CMainHelpDialog", ": Brake OK Release", 0, QApplication::UnicodeUTF8));
        Label1_24->setStyleSheet(QString());
        Label1_24->setText(QApplication::translate("CMainHelpDialog", ": Brake OK Apply", 0, QApplication::UnicodeUTF8));
        Label1_26->setStyleSheet(QString());
        Label1_26->setText(QApplication::translate("CMainHelpDialog", ": Brake Fault Release", 0, QApplication::UnicodeUTF8));
        Label1_22->setStyleSheet(QString());
        Label1_22->setText(QApplication::translate("CMainHelpDialog", ": APS Fault", 0, QApplication::UnicodeUTF8));
        Label1_25->setStyleSheet(QString());
        Label1_25->setText(QApplication::translate("CMainHelpDialog", ": Brake Fault Apply", 0, QApplication::UnicodeUTF8));
        Label1_23->setStyleSheet(QString());
        Label1_23->setText(QApplication::translate("CMainHelpDialog", ": APS OK", 0, QApplication::UnicodeUTF8));
        Label1_21->setStyleSheet(QString());
        Label1_21->setText(QApplication::translate("CMainHelpDialog", ": TCU Fault", 0, QApplication::UnicodeUTF8));
        Label1_29->setStyleSheet(QString());
        Label1_29->setText(QApplication::translate("CMainHelpDialog", ": HSCB Closed", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CMainHelpDialog: public Ui_CMainHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAINHELPDIALOG_H
