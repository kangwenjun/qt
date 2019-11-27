#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_Timer(this)
{
    ui->setupUi(this);

    QObject::connect(ui->btnGetTime, SIGNAL(clicked()), this, SLOT(on_btnGetTime_clicked));
    QObject::connect(ui->btnSetTime, SIGNAL(clicked()), this, SLOT(on_btnSetTime_clicked()));
    QObject::connect(ui->btnSetDate, SIGNAL(clicked()), this, SLOT(on_btnSetDate_clicked()));
    QObject::connect(ui->btnSetDateTime, SIGNAL(clicked()), this, SLOT(on_btnSetDateTime_clicked()));

    QObject::connect(&m_Timer, SIGNAL(timeout()), this, SLOT(on_timer_timeout()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnGetTime_clicked()
{
    QDateTime curDateTime = QDateTime::currentDateTime();
    ui->timeEdit->setTime(curDateTime.time());
    ui->dateEdit->setDate(curDateTime.date());
    ui->dateTimeEdit->setDateTime(curDateTime);

    ui->editTime->setText(curDateTime.toString("hh:mm:ss"));
    ui->editDate->setText(curDateTime.toString("yyyy-MM-dd"));
    ui->editDateTime->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));

    m_Timer.stop();
    on_btnSetInterval_clicked();
}

void MainWindow::on_btnSetTime_clicked()
{
    QString strText = ui->editTime->text();
    strText = strText.trimmed();
    if (strText.length())
    {
        QTime time = QTime::fromString(strText, "hh:mm:ss");
        ui->timeEdit->setTime(time);
    }
}

void MainWindow::on_btnSetDate_clicked()
{
    QString strText = ui->editDate->text();
    strText = strText.trimmed();
    if (strText.length())
    {
        QDate date = QDate::fromString(strText, "yyyy-MM-dd");
        ui->dateEdit->setDate(date);
        ui->calendarWidget->setSelectedDate(date);
    }
}

void MainWindow::on_btnSetDateTime_clicked()
{
    QString strText = ui->editDateTime->text();
    strText = strText.trimmed();
    if (strText.length())
    {
        QDateTime dateTime = QDateTime::fromString(strText, "yyyy-MM-dd hh:mm:ss");
        ui->dateTimeEdit->setDateTime(dateTime);
        ui->calendarWidget->setSelectedDate(dateTime.date());
    }
}

void MainWindow::on_calendarWidget_selectionChanged()
{
    QDate date = ui->calendarWidget->selectedDate();
    ui->editSelectedDate->setText(date.toString("yyyy 年 M 月 d 日"));
}

void MainWindow::on_timer_timeout()
{
    QTime curTime = QTime::currentTime();
    ui->lcdHour->display(curTime.hour());
    ui->lcdMin->display(curTime.minute());
    ui->lcdSec->display(curTime.second());
}

void MainWindow::on_btnStart_clicked()
{
    m_Time.start();
    m_Timer.start();

    ui->btnSetInterval->setEnabled(false);
    ui->btnStop->setEnabled(true);
    ui->btnStart->setEnabled(false);
}

void MainWindow::on_btnStop_clicked()
{
    m_Timer.stop();
    int millisecond = m_Time.elapsed();
    int ss = millisecond / 1000;
    int ms = millisecond % 1000;
    QString strElapse;
    strElapse.sprintf("流逝时间：%d 秒 %d 毫秒", ss, ms);
    ui->labelElapse->setText(strElapse);

    ui->btnSetInterval->setEnabled(true);
    ui->btnStop->setEnabled(false);
    ui->btnStart->setEnabled(true);
}


void MainWindow::on_btnSetInterval_clicked()
{
    QString strText = ui->spinInterval->text();
    int interval = strText.toInt();
    m_Timer.setInterval(interval);
}
