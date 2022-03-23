#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_botonFactorial_clicked(){
    this-> ventanafac = new windowFactorial();
    ventanafac->show();
}


void MainWindow::on_botonRojos_clicked(){
    this-> ventanarojos = new windowtonosrojos();
    ventanarojos->show();

}
