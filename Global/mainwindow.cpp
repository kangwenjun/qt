#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGlobal>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug() << qAbs(-1);
    qDebug() << qBound(10, 5, 20);
    qDebug() << qFuzzyCompare(0.01, 0.01000000000000000000000000000000001);
    qDebug() << qFuzzyIsNull(0.00000000000000000000000000000000000000000000000000000000001);
    qDebug() << qInf();
    qDebug() << qIsFinite(0.1);
    qDebug() << qIsInf(qInf());
    qDebug() << qIsNaN(0.1415926535898);
    qDebug() << qMin(1, 2);
    qDebug() << qMax(1, 2);
    qDebug() << qRound64( 3.1415926535898);
    qDebug() << qRound( 3.6415926535898);

    qsrand( 3.1415926535898);
    qDebug() << qrand();

    qDebug() << QT_VERSION;
    qInfo() << QT_VERSION_STR;
    qInfo() << (QT_VERSION == QT_VERSION_CHECK(5, 9, 1));
   // qFatal() << (QT_VERSION == QT_VERSION_CHECK(5, 9, 1));
    qCritical() << (Q_BYTE_ORDER == Q_BIG_ENDIAN);
    qWarning() << (Q_BYTE_ORDER == Q_LITTLE_ENDIAN);

}

MainWindow::~MainWindow()
{
    delete ui;
}

