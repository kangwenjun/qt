#include "mainwindow.h"

#include <QApplication>
#include "TestList.h"
#include "TestVector.h"
#include "TestLinkedList.h"
#include "TestHash.h"
#include "TestMap.h"
#include "TestQueue.h"
#include "TestSet.h"
#include "TestStack.h"
#include "TestMultiHash.h"
#include "TestMultiMap.h"

int main(int argc, char *argv[])
{
    TestList();
    TestLinkedList();
    TestVector();
    TestStack();
    TestQueue();
    TestHash();
    TestMap();
    TestSet();
    TestMultiMap();
    TestMultiHash();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
