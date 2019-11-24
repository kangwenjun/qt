#ifndef TESTLIST_H
#define TESTLIST_H

#include <QList>
#include <QDebug>

void TestList()
{
    qDebug() << "TestList Begin:";

    QList<int> lsNum;
    int iNum = 1;
    lsNum.push_back(iNum++);
    lsNum.push_back(iNum++);
    lsNum.push_back(iNum++);

    iNum = 0;
    qDebug() << lsNum[iNum++];
    qDebug() << lsNum[iNum++];
    qDebug() << lsNum[iNum++];

    qDebug() << "TestList End:";
}

#endif // TESTLIST_H
