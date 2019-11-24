#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_SliderRed_valueChanged(int value);
    void on_Dial_valueChanged(int value);
    void on_RadioBin_clicked();
    void on_RadioOct_clicked();
    void on_RadioDec_clicked();
    void on_RadioHex_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
