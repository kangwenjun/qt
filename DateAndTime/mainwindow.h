#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnGetTime_clicked();
    void on_btnSetTime_clicked();
    void on_btnSetDate_clicked();
    void on_btnSetDateTime_clicked();
    void on_calendarWidget_selectionChanged();
    void on_timer_timeout();
    void on_btnStart_clicked();
    void on_btnStop_clicked();
    void on_btnSetInterval_clicked();

private:
    Ui::MainWindow *ui;
private:
    QTimer m_Timer;
    QTime m_Time;
};
#endif // MAINWINDOW_H
