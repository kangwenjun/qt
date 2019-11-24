#ifndef TESTMULTIMAP_H
#define TESTMULTIMAP_H

#include <QMultiMap>
#include <QDebug>
#include <QString>

void TestMultiMap()
{
    QMultiMap<int, QString> map;
    int iNum = 1;
    map.insert(iNum, "kang");
    map.insert(iNum, "wen");
    map.insert(iNum++, "jun");

    map.insert(iNum, "justin");
    map.insert(iNum++, "king");

    iNum = 1;
    qDebug() << map.value(iNum);
    QList<QString> ls = map.values(iNum++);
    for (auto it : ls)
        qDebug() << it;
    qDebug() << ls.first();

}

#endif // TESTMULTIMAP_H
