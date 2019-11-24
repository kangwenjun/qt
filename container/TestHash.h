#ifndef TESTHASH_H
#define TESTHASH_H

#include <QHash>
#include <QDebug>
#include <QString>

void TestHash()
{
    QHash<int, QString> hash;
    int iNum = 1;
    hash.insert(iNum++, "kang");
    hash.insert(iNum++, "wen");
    hash.insert(iNum++, "jun");

    iNum = 1;
    qDebug() << hash[iNum++];
    qDebug() << hash[iNum++];
    qDebug() << hash[iNum++];
}


#endif // TESTHASH_H
