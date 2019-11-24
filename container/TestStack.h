#ifndef TESTSTACK_H
#define TESTSTACK_H


#include <QStack>
#include <QDebug>


void TestStack()
{
    QStack<int> stack;
    int iNum = 1;
    stack.push(iNum++);
    stack.push(iNum++);
    stack.push(iNum++);

    qDebug() << stack.top();
    stack.pop();
    qDebug() << stack.top();
    stack.pop();
    qDebug() << stack.top();
    stack.pop();
}


#endif // TESTSTACK_H
