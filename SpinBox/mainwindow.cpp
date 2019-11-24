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


void MainWindow::on_btnDec_clicked()
{
    int val = ui->spinDec->value();
    ui->spinBin->setValue(val);
    ui->spinHex->setValue(val);
}

void MainWindow::on_btnBin_clicked()
{
    int val = ui->spinBin->value();
    ui->spinDec->setValue(val);
    ui->spinHex->setValue(val);
}

void MainWindow::on_btnHex_clicked()
{
    int val = ui->spinHex->value();
    ui->spinBin->setValue(val);
    ui->spinDec->setValue(val);
}

void MainWindow::on_btnCalc_clicked()
{
    int weight = ui->spinWeight->value();
    double price = ui->dspinPrice->value();
    ui->dspinTotal->setValue(weight * price);
}
