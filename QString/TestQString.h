#ifndef TESTQSTRING_H
#define TESTQSTRING_H

#include <QString>
#include <QDebug>
#include "assert.h"

void TestQString()
{
    QString strText; // Uncode
    assert(strText.isNull());
    assert(strText.isEmpty());

   strText = "";
   assert(false == strText.isNull());
   assert(strText.isEmpty());

   strText = "   Hello World!    您好，世界！  "; // 一个汉字占一个字符
   assert(strText.count() == strText.size());
   assert(strText.count() == strText.length());

   qDebug() << strText.toLower(); // 不改变自身
   qDebug() << strText.toUpper(); // 不改变自身

   assert(3 == strText.indexOf("Hello"));
   qDebug() << strText.trimmed(); // 不改变自身
   qDebug() << strText.simplified(); // 不改变自身
   assert(3 == strText.indexOf("Hello"));
   assert((strText.length() - 1) == strText.lastIndexOf(" "));

   assert(strText.contains("您好"));
   assert(strText.contains("Hello", Qt::CaseSensitive));
   assert(strText.contains("hello", Qt::CaseInsensitive));

   strText = strText.trimmed();
   assert(strText.startsWith("Hello", Qt::CaseSensitive));
   assert(strText.endsWith("世界！", Qt::CaseSensitive));

   strText = strText.simplified();
   assert(strText.left(5) == "Hello");
   assert(strText.right(3) == "世界！");

   assert(strText.section(" ", 0, 0) == "Hello");
   assert(strText.section(" ", 1, 1) == "World!");
   assert(strText.section(" ", 0, 1) == "Hello World!");

   strText.append("]");
   assert(strText.endsWith("]"));
   strText.prepend("[");
   assert(strText.startsWith("["));
}

#endif // TESTQSTRING_H
