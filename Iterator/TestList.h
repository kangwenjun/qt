#ifndef TESTLIST_H
#define TESTLIST_H

#include <QList>
#include <QListIterator>
#include <QtGlobal>
#include <QDebug>

void TestConstIteratorJava(QList<int>& ls)
{
    QListIterator<int> cJavaIt(ls);
    while (cJavaIt.hasNext())
        qDebug() << cJavaIt.next();
}

void TestListIteratorJava()
{
    QList<int> ls;
    for (int i = 0; i < 10; ++i)
        ls.push_back(qrand());

    TestConstIteratorJava(ls);
    QMutableListIterator<int> JavaIt(ls);
    while (JavaIt.hasNext())
        JavaIt.next() = qrand();
    TestConstIteratorJava(ls);

    JavaIt.toFront();
//    wrong
//    while (JavaIt.hasNext())
//        if (JavaIt.peekNext() % 2)
//            JavaIt.remove();
    while (JavaIt.hasNext())
        if (JavaIt.next() % 2)
            JavaIt.remove();
    TestConstIteratorJava(ls);
}

void TestConstIteratorStl(QList<int>& ls)
{
    for (QList<int>::const_iterator it = ls.begin(); it != ls.end(); ++it)
        qDebug() << *it;
}

void TestListIteratorStl()
{
    QList<int> ls;
    for (int i = 0; i < 10; ++i)
        ls.push_back(qrand());

   TestConstIteratorStl(ls);
    for (QList<int>::iterator it = ls.begin(); it != ls.end(); ++it)
        *it = qrand();
    TestConstIteratorStl(ls);

    // vs:ok qt:wrong
    for (QList<int>::iterator it = ls.begin(); it != ls.end();)
    {
        qDebug() << *it;
        QList<int>::iterator cur = it++;
        qDebug() << *cur;
        qDebug() << *it;
        qDebug() << "\n";
        if (*cur % 2)
            ls.erase(cur);
    }

    TestConstIteratorStl(ls);
}

#endif // TESTLIST_H
