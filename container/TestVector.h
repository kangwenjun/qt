#ifndef TESTVECTOR_H
#define TESTVECTOR_H

#include <QDebug>
#include <QVector>

void TestVector()
{
    qDebug() << "TestVector Begin:";

    QVector<int> vecNum;
    int iNum = 1;
    vecNum.push_back(iNum++);
    vecNum.push_back(iNum++);
    vecNum.push_back(iNum++);

    iNum = 0;
    qDebug() << vecNum[iNum++];
    qDebug() << vecNum[iNum++];
    qDebug() << vecNum[iNum++];

    qDebug() << "TestVector End.";
}

#endif // TESTVECTOR_H
