#ifndef THREAD_H
#define THREAD_H
#include "qthread.h"

class threads : public QThread
{
public:
    threads(QObject *parent=0);
    void _start1();
    void _start2();
signals:
    void thread1();
    void thread2();
public slots:
virtual void  thread1_sig();
virtual void  thread2_sig();

};

#endif // THREAD_H
