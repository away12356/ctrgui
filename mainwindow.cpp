#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Motorworker.h"
#include <QDebug>
#include <QThread>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    thread = new QThread();
    Motorworker *worker = new Motorworker();

    connect(this,SIGNAL(sendToWorker_motor_commands(QString,int)),
            worker,SLOT(getFromMain_motor_commands(QString,int)));

    worker->moveToThread(thread);

    thread->start();
    emit sendToWorker_motor_commands("Check Device",1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Read status
void MainWindow::on_pushButton_clicked()
{
    emit sendToWorker_motor_commands("Read_Status",1);
}
