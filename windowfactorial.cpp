#include "windowfactorial.h"
#include "ui_windowfactorial.h"
#include "qmessagebox.h"
#include "qstring.h"
#include "string.h"
#include "iostream"

using namespace std;

windowFactorial::windowFactorial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::windowFactorial)
{
    ui->setupUi(this);
}

windowFactorial::~windowFactorial()
{
    delete ui;
}


long windowFactorial::factorial(long num)
{
   int i;
   long fact=1;
   if(num<0) fact =0;
   else if(num==0) fact=1;
   else{
      for (i = 1; i <= num; i++){
         fact = fact*i;
      }
   }
   return fact;
}


void windowFactorial::on_pushButtonEjecutar_clicked()
{
    QString numQString = ui->lineEditNumero->text();
    string numString = numQString.toStdString();
    if(numString == ""){
        QMessageBox msg;
        msg.setText("Introduzca un numero");
        msg.exec();
    }
    double tAlgoritmo;
    double t0;
    double t1;
    long num = numQString.toLong();
    QString tiempoQString;
    std::string tiempoString;

    if(ui->lineEdit_1->text().toStdString() == "" && ui->lineEditNumero->text() != ""){
        t0 = (double) clock();
        factorial(num);
        t1 = (double) clock();
        tAlgoritmo = t1 - t0;
        tiempoString = std::to_string(tAlgoritmo);
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_1->setText(tiempoQString);
    }else if(ui->lineEdit_2->text().toStdString() == "" && ui->lineEditNumero->text() != ""){
        t0 = (double) clock();
        factorial(num);
        t1 = (double) clock();
        tAlgoritmo = t1 - t0;
        tiempoString = std::to_string(tAlgoritmo);
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_2->setText(tiempoQString);
    }else if(ui->lineEdit_3->text().toStdString() == "" && ui->lineEditNumero->text() != ""){
        t0 = (double) clock();
        factorial(num);
        t1 = (double) clock();
        tAlgoritmo = t1 - t0;
        tiempoString = std::to_string(tAlgoritmo);
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_3->setText(tiempoQString);
    }else if(ui->lineEdit_4->text().toStdString() == "" && ui->lineEditNumero->text() != ""){
        t0 = (double) clock();
        factorial(num);
        t1 = (double) clock();
        tAlgoritmo = t1 - t0;
        tiempoString = std::to_string(tAlgoritmo);
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_4->setText(tiempoQString);
    }else if(ui->lineEdit_5->text().toStdString() == "" && ui->lineEditNumero->text() != ""){
        t0 = (double) clock();
        factorial(num);
        t1 = (double) clock();
        tAlgoritmo = t1 - t0;
        tiempoString = std::to_string(tAlgoritmo);
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_5->setText(tiempoQString);
    }else{
        if(ui->lineEdit_1->text() != "" && ui->lineEdit_2->text() != "" && ui->lineEdit_3->text() != "" && ui->lineEdit_4->text() != "" && ui->lineEdit_5->text() != ""){
            QString aux;
            double tiempo1;
            double tiempo2;
            double tiempo3;
            double tiempo4;
            double tiempo5;
            double media;
            aux = ui->lineEdit_1->text();
            tiempo1 = aux.toDouble();
            aux = ui->lineEdit_2->text();
            tiempo2 = aux.toDouble();
            aux = ui->lineEdit_3->text();
            tiempo3 = aux.toDouble();
            aux = ui->lineEdit_4->text();
            tiempo4 = aux.toDouble();
             aux = ui->lineEdit_5->text();
            tiempo5 = aux.toDouble();
            media = (tiempo1 + tiempo2 +tiempo3 + tiempo4 + tiempo5)/5;
            aux = aux.number(media);
            ui->lineEditMedia->setText(aux);
        }
    }

}

void windowFactorial::on_pushButtonRsetear_clicked()
{
    ui->lineEditNumero->setText("");
    ui->lineEditMedia->setText("");
    ui->lineEdit_1->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");

}

