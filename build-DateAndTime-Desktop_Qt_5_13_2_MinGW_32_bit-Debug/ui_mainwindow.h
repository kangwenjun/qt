/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupCalendar;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QLineEdit *editSelectedDate;
    QCalendarWidget *calendarWidget;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupTime;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnSetDateTime;
    QDateTimeEdit *dateTimeEdit;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QPushButton *btnGetTime;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *btnSetDate;
    QLabel *label_3;
    QPushButton *btnSetTime;
    QLineEdit *editTime;
    QLineEdit *editDate;
    QLineEdit *editDateTime;
    QLabel *labelShowTime;
    QGroupBox *groupTimer;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QLabel *labelElapse;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QSpinBox *spinInterval;
    QPushButton *btnSetInterval;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdHour;
    QLCDNumber *lcdMin;
    QLCDNumber *lcdSec;
    QProgressBar *progressBar;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1018, 536);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupCalendar = new QGroupBox(centralwidget);
        groupCalendar->setObjectName(QString::fromUtf8("groupCalendar"));
        groupCalendar->setGeometry(QRect(590, 20, 411, 341));
        verticalLayoutWidget_2 = new QWidget(groupCalendar);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 397, 310));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        editSelectedDate = new QLineEdit(verticalLayoutWidget_2);
        editSelectedDate->setObjectName(QString::fromUtf8("editSelectedDate"));
        editSelectedDate->setEnabled(false);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, editSelectedDate);


        verticalLayout_3->addLayout(formLayout_3);

        calendarWidget = new QCalendarWidget(verticalLayoutWidget_2);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        verticalLayout_3->addWidget(calendarWidget);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(20, 20, 561, 471));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupTime = new QGroupBox(verticalLayoutWidget_4);
        groupTime->setObjectName(QString::fromUtf8("groupTime"));
        verticalLayoutWidget = new QWidget(groupTime);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 20, 551, 137));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btnSetDateTime = new QPushButton(verticalLayoutWidget);
        btnSetDateTime->setObjectName(QString::fromUtf8("btnSetDateTime"));

        gridLayout_2->addWidget(btnSetDateTime, 3, 3, 1, 1);

        dateTimeEdit = new QDateTimeEdit(verticalLayoutWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout_2->addWidget(dateTimeEdit, 3, 1, 1, 1);

        dateEdit = new QDateEdit(verticalLayoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout_2->addWidget(dateEdit, 2, 1, 1, 1);

        timeEdit = new QTimeEdit(verticalLayoutWidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        gridLayout_2->addWidget(timeEdit, 1, 1, 1, 1);

        btnGetTime = new QPushButton(verticalLayoutWidget);
        btnGetTime->setObjectName(QString::fromUtf8("btnGetTime"));

        gridLayout_2->addWidget(btnGetTime, 0, 0, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        btnSetDate = new QPushButton(verticalLayoutWidget);
        btnSetDate->setObjectName(QString::fromUtf8("btnSetDate"));

        gridLayout_2->addWidget(btnSetDate, 2, 3, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        btnSetTime = new QPushButton(verticalLayoutWidget);
        btnSetTime->setObjectName(QString::fromUtf8("btnSetTime"));

        gridLayout_2->addWidget(btnSetTime, 1, 3, 1, 1);

        editTime = new QLineEdit(verticalLayoutWidget);
        editTime->setObjectName(QString::fromUtf8("editTime"));
        editTime->setEnabled(true);

        gridLayout_2->addWidget(editTime, 1, 2, 1, 1);

        editDate = new QLineEdit(verticalLayoutWidget);
        editDate->setObjectName(QString::fromUtf8("editDate"));
        editDate->setEnabled(true);

        gridLayout_2->addWidget(editDate, 2, 2, 1, 1);

        editDateTime = new QLineEdit(verticalLayoutWidget);
        editDateTime->setObjectName(QString::fromUtf8("editDateTime"));
        editDateTime->setEnabled(true);

        gridLayout_2->addWidget(editDateTime, 3, 2, 1, 1);

        labelShowTime = new QLabel(verticalLayoutWidget);
        labelShowTime->setObjectName(QString::fromUtf8("labelShowTime"));

        gridLayout_2->addWidget(labelShowTime, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        verticalLayout_5->addWidget(groupTime);

        groupTimer = new QGroupBox(verticalLayoutWidget_4);
        groupTimer->setObjectName(QString::fromUtf8("groupTimer"));
        verticalLayoutWidget_3 = new QWidget(groupTimer);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 20, 531, 201));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnStart = new QPushButton(verticalLayoutWidget_3);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));

        horizontalLayout_3->addWidget(btnStart);

        btnStop = new QPushButton(verticalLayoutWidget_3);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));

        horizontalLayout_3->addWidget(btnStop);

        labelElapse = new QLabel(verticalLayoutWidget_3);
        labelElapse->setObjectName(QString::fromUtf8("labelElapse"));

        horizontalLayout_3->addWidget(labelElapse);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        spinInterval = new QSpinBox(verticalLayoutWidget_3);
        spinInterval->setObjectName(QString::fromUtf8("spinInterval"));
        spinInterval->setMaximum(10000);
        spinInterval->setValue(1000);

        horizontalLayout_2->addWidget(spinInterval);

        btnSetInterval = new QPushButton(verticalLayoutWidget_3);
        btnSetInterval->setObjectName(QString::fromUtf8("btnSetInterval"));

        horizontalLayout_2->addWidget(btnSetInterval);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lcdHour = new QLCDNumber(verticalLayoutWidget_3);
        lcdHour->setObjectName(QString::fromUtf8("lcdHour"));

        horizontalLayout->addWidget(lcdHour);

        lcdMin = new QLCDNumber(verticalLayoutWidget_3);
        lcdMin->setObjectName(QString::fromUtf8("lcdMin"));

        horizontalLayout->addWidget(lcdMin);

        lcdSec = new QLCDNumber(verticalLayoutWidget_3);
        lcdSec->setObjectName(QString::fromUtf8("lcdSec"));

        horizontalLayout->addWidget(lcdSec);


        verticalLayout_4->addLayout(horizontalLayout);

        progressBar = new QProgressBar(verticalLayoutWidget_3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout_4->addWidget(progressBar);


        verticalLayout_5->addWidget(groupTimer);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(590, 400, 321, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1018, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupCalendar->setTitle(QCoreApplication::translate("MainWindow", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237\357\274\232", nullptr));
        groupTime->setTitle(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        btnSetDateTime->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "yyyy/MM/dd HH:mm:ss", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "yyyy/MM/dd", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "HH:mm:ss", nullptr));
        btnGetTime->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\266\351\227\264\346\227\245\346\234\237", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\227\245   \346\234\237", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        btnSetDate->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\227\245\346\234\237", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\227\266   \351\227\264", nullptr));
        btnSetTime->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\227\266\351\227\264", nullptr));
        labelShowTime->setText(QCoreApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        groupTimer->setTitle(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266\345\231\250", nullptr));
        btnStart->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        btnStop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        labelElapse->setText(QCoreApplication::translate("MainWindow", "\346\265\201\351\200\235\346\227\266\351\227\264", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266\345\221\250\346\234\237", nullptr));
        btnSetInterval->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\221\250\346\234\237", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
