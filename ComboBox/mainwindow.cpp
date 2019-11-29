#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIcon>
#include <QMap>
#include <QTextDocument>
#include <QTextBlock>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->btnInitItems, SIGNAL(clicked()), this, SLOT(on_btnInitItems_clicked()));
    QObject::connect(ui->btnInitItems, SIGNAL(clicked()), this, SLOT(on_btnClearItems_clicked()));

    QObject::connect(ui->btnInitCity, SIGNAL(clicked()), this, SLOT(on_comboCityZone_clicked()));
    QObject::connect(ui->comboCityZone, SIGNAL(currentIndexChanged()), this, SLOT(on_comboCityZone_currentIndexChanged()));

    QObject::connect(ui->checkEdit, SIGNAL(clicked(bool)), this, SLOT(on_checkEdit_clicked(bool)));
    QObject::connect(ui->checkReadOnly, SIGNAL(clicked(bool)), this, SLOT(on_checkEdit_clicked(bool)));
    on_checkEdit_clicked(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnInitItems_clicked()
{
    on_btnClearItems_clicked();

    QIcon icon;
    icon.addFile("D:/qt/ComboBox/music.ico");
    for (int i = 0; i < 20; ++i)
        ui->comboSimple->addItem(icon, QString::asprintf("item %d", i));
//        ui->comboSimple->addItem(QString::asprintf("item %d", i));
}

void MainWindow::on_btnClearItems_clicked()
{
    ui->comboSimple->clear();
}

void MainWindow::on_comboCityZone_clicked()
{
    QMap<QString, int> mapCityZone;
    mapCityZone["北京"] = 10;
    mapCityZone["上海"] = 21;
    mapCityZone["天津"] = 22;
    mapCityZone["大连"] = 411;
    mapCityZone["锦州"] = 416;
    mapCityZone["徐州"] = 516;
    mapCityZone["福州"] = 591;
    mapCityZone["青岛"] = 532;

    ui->comboCityZone->clear();
    foreach (const QString& key, mapCityZone.keys())
        ui->comboCityZone->addItem(key, mapCityZone[key]);
}

void MainWindow::on_comboCityZone_currentIndexChanged(const QString& strArg)
{
    QString strZone = ui->comboCityZone->currentData().toString();
    ui->plainTextEdit->appendPlainText(strArg + ":区号=" + strZone);
}

void MainWindow::on_btnClearText_clicked()
{
    ui->plainTextEdit->clear();
}

void MainWindow::on_btnAddToCombo_clicked()
{
//    QString strText = ui->plainTextEdit->toPlainText(); // 所有
    ui->comboSimple->clear();
    QTextDocument* doc = ui->plainTextEdit->document();
    int cnt = doc->blockCount();
    for (int i = 0; i < cnt; ++i)
    {
        QTextBlock textLine = doc->findBlockByNumber(i);
        ui->comboSimple->addItem(textLine.text());
    }
}

void MainWindow::on_checkEdit_clicked(bool value)
{
    Q_UNUSED(value);
   ui->comboSimple->setEditable(ui->checkEdit->isChecked());
   ui->plainTextEdit->setEnabled(false == ui->checkReadOnly->isChecked());
}
