#ifndef TESTMAP_H
#define TESTMAP_H

#include <QMap>
#include <QDebug>
#include <QtGlobal>

void TestMap()
{
    QMap<int, int> map;
    for (int i = 0; i < 10; i++)
        map.insert(qrand(), qrand());
    qDebug() << map.size();
    qDebug() << map.count(qrand());
    for (auto it : map)
        qDebug() << it;
}

#endif // TESTMAP_H
