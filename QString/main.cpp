#include "mainwindow.h"

#include <QApplication>
#include "TestQString.h"

int main(int argc, char *argv[])
{
    TestQString();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
