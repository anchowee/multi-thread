#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _1=new threads(this);
    _2=new threads(this);
    connect(_1,SIGNAL(thread1()),this,SLOT(thread1_sig()));
    connect(_1,SIGNAL(thread2()),this,SLOT(thread2_sig()));
    _1->start();
    _2->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::thread1_sig()
{
    ui->tread1->append("thrade 1");
}
void MainWindow::thread2_sig()
{
    ui->tread2->setText("thrade 2");
}
