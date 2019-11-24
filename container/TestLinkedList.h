#ifndef TESTLINKEDLIST_H
#define TESTLINKEDLIST_H

#include <QDebug>
#include <QLinkedList>

void TestLinkedList()
{
    qDebug() << "TEstLinkedList Begin:";

    QLinkedList<int> lsNum;
    int iNum = 1;
    lsNum.push_back(iNum++);
    lsNum.push_back(iNum++);
    lsNum.push_back(iNum++);

    iNum = 0;
    qDebug() << lsNum.first();
    qDebug() << lsNum.last();

    for (auto it : lsNum)
        qDebug() << it;
}

#endif // TESTLINKEDLIST_H
