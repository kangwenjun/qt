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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnAddToCombo;
    QPushButton *btnClearText;
    QCheckBox *checkReadOnly;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnInitItems;
    QPushButton *btnClearItems;
    QCheckBox *checkEdit;
    QComboBox *comboSimple;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnInitCity;
    QComboBox *comboCityZone;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(767, 435);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 120, 721, 261));
        verticalLayoutWidget_3 = new QWidget(groupBox_3);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 23, 691, 221));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnAddToCombo = new QPushButton(verticalLayoutWidget_3);
        btnAddToCombo->setObjectName(QString::fromUtf8("btnAddToCombo"));

        horizontalLayout_3->addWidget(btnAddToCombo);

        btnClearText = new QPushButton(verticalLayoutWidget_3);
        btnClearText->setObjectName(QString::fromUtf8("btnClearText"));

        horizontalLayout_3->addWidget(btnClearText);

        checkReadOnly = new QCheckBox(verticalLayoutWidget_3);
        checkReadOnly->setObjectName(QString::fromUtf8("checkReadOnly"));

        horizontalLayout_3->addWidget(checkReadOnly);


        verticalLayout_3->addLayout(horizontalLayout_3);

        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_3->addWidget(plainTextEdit);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 341, 91));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 312, 60));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnInitItems = new QPushButton(verticalLayoutWidget);
        btnInitItems->setObjectName(QString::fromUtf8("btnInitItems"));

        horizontalLayout->addWidget(btnInitItems);

        btnClearItems = new QPushButton(verticalLayoutWidget);
        btnClearItems->setObjectName(QString::fromUtf8("btnClearItems"));

        horizontalLayout->addWidget(btnClearItems);

        checkEdit = new QCheckBox(verticalLayoutWidget);
        checkEdit->setObjectName(QString::fromUtf8("checkEdit"));

        horizontalLayout->addWidget(checkEdit);


        verticalLayout->addLayout(horizontalLayout);

        comboSimple = new QComboBox(verticalLayoutWidget);
        comboSimple->setObjectName(QString::fromUtf8("comboSimple"));

        verticalLayout->addWidget(comboSimple);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(380, 20, 361, 91));
        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 331, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnInitCity = new QPushButton(verticalLayoutWidget_2);
        btnInitCity->setObjectName(QString::fromUtf8("btnInitCity"));

        horizontalLayout_2->addWidget(btnInitCity);


        verticalLayout_2->addLayout(horizontalLayout_2);

        comboCityZone = new QComboBox(verticalLayoutWidget_2);
        comboCityZone->setObjectName(QString::fromUtf8("comboCityZone"));

        verticalLayout_2->addWidget(comboCityZone);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 767, 23));
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
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "QPlainTextEdit(\345\205\267\346\234\211\346\240\207\345\207\206\345\277\253\346\215\267\351\224\256)", nullptr));
        btnAddToCombo->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271\346\267\273\345\212\240\345\210\260ComboBox", nullptr));
        btnClearText->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\346\226\207\346\234\254\345\206\205\345\256\271", nullptr));
        checkReadOnly->setText(QCoreApplication::translate("MainWindow", "Read Only", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\347\256\200\345\215\225ComboBox", nullptr));
        btnInitItems->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        btnClearItems->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        checkEdit->setText(QCoreApplication::translate("MainWindow", "\345\217\257\347\274\226\350\276\221", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\234\211\347\224\250\346\210\267\346\225\260\346\215\256\347\232\204Combox", nullptr));
        btnInitCity->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202+\345\214\272\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
