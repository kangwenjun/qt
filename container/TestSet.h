#ifndef TESTSET_H
#define TESTSET_H

#include <QSet>
#include <QDebug>
#include <QtGlobal>

void TestSet()
{
    QSet<int> set;
    for (int i = 0; i < 10; ++i)
        set.insert(qrand());
    qDebug() << set.size();
    for (auto it : set)
        qDebug() << it;
}

#endif // TESTSET_H
