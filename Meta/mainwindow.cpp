#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMetaClassInfo>
#include <QDebug>>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QString strObjName = this->objectName();
    QString strClsName = this->metaObject()->className();

    bool flag = this->inherits("QMainWindow");

    this->setProperty("name", "kang");
    QVariant strName = this->property("name");

    this->setProperty("price", 20);
    QVariant vPrice = this->property("price");

    MainWindow* pMainWnd = qobject_cast<MainWindow*>(this);

    QMetaClassInfo info = this->metaObject()->classInfo(0);
    qDebug() << info.name();
    qDebug() << info.value();
    qDebug() << this->metaObject()->classInfo(1).name();
    qDebug() << this->metaObject()->classInfo(1).value();


    ui->setupUi(this);
}

float MainWindow::getPrice() const
{
    return price;
}

void MainWindow::setPrice(float f)
{
    price=f;
}

MainWindow::~MainWindow()
{
    delete ui;
}

