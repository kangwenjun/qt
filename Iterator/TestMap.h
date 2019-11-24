#ifndef TESTMAP_H
#define TESTMAP_H

#include <QMap>
#include <QMapIterator>
#include <QtGlobal>
#include <QDebug>

typedef QMap<int, int> NUM_MAP;
void TestConstIteratorJava(NUM_MAP& map)
{
    QMapIterator<int, int> it(map);
    while (it.hasNext())
    {
        auto next = it.next();
         qDebug() << next.key() << ":" << next.value();
    }
}

void TestMapJava()
{
    NUM_MAP map;
    for (int i = 0; i < 10; ++i)
        map[qrand()] = qrand();

    TestConstIteratorJava(map);
    QMutableMapIterator<int, int> it(map);
    while (it.hasNext())
        it.next().value() = qrand();
    TestConstIteratorJava(map);
}

void TestConstIteratorStl(NUM_MAP& map)
{
    for (NUM_MAP::const_iterator it = map.begin(); it != map.end(); ++it)
        qDebug() << it.key() << ":" << it.value();

    foreach (const int& key, map.keys())
        qDebug() << key << ":" << map[key];
}

void TestMapStl()
{
    NUM_MAP map;
    for (int i = 0; i < 10; ++i)
        map[qrand()] = qrand();

    TestConstIteratorStl(map);
    for (NUM_MAP::iterator it = map.begin(); it != map.end(); ++it)
        it.value() = qrand();
    TestConstIteratorStl(map);

    foreach (const int& key, map.keys())
        map[key] = qrand();
    TestConstIteratorStl(map);
}

#endif // TESTMAP_H
