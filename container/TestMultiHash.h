#ifndef TESTMULTIHASH_H
#define TESTMULTIHASH_H

#include <QMultiHash>
#include <QString>
#include <QDebug>

void TestMultiHash()
{
    QMultiHash<int, QString> hash;
    int iNum = 1;
    hash.insert(iNum, "kang");
    hash.insert(iNum, "wen");
    hash.insert(iNum++, "jun");

    hash.insert(iNum, "justin");
    hash.insert(iNum++, "king");

    iNum = 1;
    qDebug() << hash.value(iNum);
    QList<QString> ls = hash.values(iNum++);
    for (auto it : ls)
        qDebug() << it;
}

#endif // TESTMULTIHASH_H
