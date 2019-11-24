#ifndef TESTQUEUE_H
#define TESTQUEUE_H

#include <QDebug>
#include <QQueue>

void TestQueue()
{
    int iNum = 1;
    QQueue<int> q;
    q.push_back(iNum++);
    q.push_back(iNum++);
    q.push_back(iNum++);

    qDebug() << q.first();
    qDebug() << q.last();
}

#endif // TESTQUEUE_H
