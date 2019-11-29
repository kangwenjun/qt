#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

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
    void on_btnInitItems_clicked();
    void on_btnClearItems_clicked();

    void on_comboCityZone_clicked();
    void on_comboCityZone_currentIndexChanged(const QString& strArg);

    void on_checkEdit_clicked(bool value);
    void on_btnClearText_clicked();
    void on_btnAddToCombo_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
