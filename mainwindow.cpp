#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::warning(this,"title","button 1 is pressed!");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::warning(this,"title","button 2 is pressed");
}

void MainWindow::on_pushButton_3_clicked()
{
     QMessageBox::warning(this,"title","button 3 is pressed");
}
