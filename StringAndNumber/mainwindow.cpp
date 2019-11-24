#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCalc_clicked()
{
    QString strNum = ui->editNum->text();
    QString strPrice = ui->editPrice->text();
    QString strTotal;
    strTotal.sprintf("%.2f", strNum.toInt() * strPrice.toFloat());
    ui->editTotal->setText(strTotal);
}

void MainWindow::on_btnDec_clicked()
{
    QString strDec = ui->editDec->text();
    int val = strDec.toInt();
    QString strVal;
    strVal.setNum(val, 2);
    ui->editBin->setText(strVal);
    ui->editHex->setText(QString::number(val, 16).toUpper());
}

void MainWindow::on_btnBin_clicked()
{
    QString strBin = ui->editBin->text();
    bool ok;
    int val = strBin.toInt(&ok, 2);

    ui->editDec->setText(QString::number(val, 10));
    ui->editHex->setText(QString::number(val, 16).toUpper());
}

void MainWindow::on_btnHex_clicked()
{
    QString strHex = ui->editHex->text();
    bool ok;
    int val = strHex.toInt(&ok, 16);

    QString strVal;
    ui->editBin->setText(strVal.setNum(val, 2));
    ui->editDec->setText(QString::number(val, 10));
}
