#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "thread.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public Q_SLOTS :
    void thread1_sig();
    void thread2_sig();

    
private:
    Ui::MainWindow *ui;

    threads *_1;
    threads *_2;
};

#endif // MAINWINDOW_H
