#include "thread.h"
#include <QtCore>

threads::threads(QObject *parent):QThread(parent)
{

}
void threads::_start1()
{
    emit thread1();
}
void threads::_start2()
{
    emit thread2();
}
void threads::thread1_sig()
{
    qDebug("thrad1");
}
void threads::thread2_sig()
{
    qDebug("thread 2");
}
