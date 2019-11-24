#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColor>
#include <QPalette>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->sliderRed, SIGNAL(valueChanged(int)), this, SLOT(on_SliderRed_valueChanged(int)));
    QObject::connect(ui->sliderGreen, SIGNAL(valueChanged(int)), this, SLOT(on_SliderRed_valueChanged(int)));
    QObject::connect(ui->slierBlue, SIGNAL(valueChanged(int)), this, SLOT(on_SliderRed_valueChanged(int)));
    QObject::connect(ui->sliderAlpha, SIGNAL(valueChanged(int)), this, SLOT(on_SliderRed_valueChanged(int)));

    QObject::connect(ui->dial, SIGNAL(valueChanged(int)), this, SLOT(on_Dial_valueChanged(int)));

    QObject::connect(ui->radioBin, SIGNAL(clicked()), this, SLOT(on_RadioBin_clicked()));
    QObject::connect(ui->radioOct, SIGNAL(clicked()), this, SLOT(on_RadioOct_clicked()));
    QObject::connect(ui->radioDec, SIGNAL(clicked()), this, SLOT(on_RadioDec_clicked()));
    QObject::connect(ui->radioHex, SIGNAL(clicked()), this, SLOT(on_RadioHex_clicked()));

    QObject::connect(ui->scrollV, SIGNAL(valueChanged(int)), this, SLOT(on_Dial_valueChanged(int)));
    QObject::connect(ui->scrollH, SIGNAL(valueChanged(int)), this, SLOT(on_Dial_valueChanged(int)));

    ui->radioDec->setChecked(true);
    on_RadioDec_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SliderRed_valueChanged(int value)
{
    Q_UNUSED(value)

    QColor color;
    int r = ui->sliderRed->value();
    int g = ui->sliderGreen->value();
    int b = ui->slierBlue->value();
    int a = ui->sliderAlpha->value();
    color.setRgb(r, g, b, a);

    QPalette palette = ui->textEdit->palette();
    palette.setColor(QPalette::Base, color);
    ui->textEdit->setPalette(palette);

}

void MainWindow::on_Dial_valueChanged(int value)
{
    ui->lcdNumber->display(value);
    ui->progressH->setValue(value);
    ui->progressV->setValue(value);
    ui->dial->setValue(value);
    ui->scrollH->setValue(value);
    ui->scrollV->setValue(value);
}

void MainWindow::on_RadioBin_clicked()
{
    ui->lcdNumber->setDigitCount(8);
    ui->lcdNumber->setBinMode();
}

void MainWindow::on_RadioOct_clicked()
{
    ui->lcdNumber->setDigitCount(4);
    ui->lcdNumber->setOctMode();
}
void MainWindow::on_RadioDec_clicked()
{
    ui->lcdNumber->setDigitCount(3);
    ui->lcdNumber->setDecMode();
}
void MainWindow::on_RadioHex_clicked()
{
    ui->lcdNumber->setDigitCount(2);
    ui->lcdNumber->setHexMode();
}
