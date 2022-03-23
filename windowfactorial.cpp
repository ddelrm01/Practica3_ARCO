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


int windowFactorial::factorial(int num)
{
   int i;
   int fact=1;
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
    cout << numString << endl;
    while(numString == ""){
        QMessageBox msg;
        msg.setText("Introduzca un numero");
        msg.exec();
    }
    double tAlgoritmo;
    double t0;
    double t1;
    int num = numQString.toInt();
    QString tiempoQString;
    std::string tiempoString;

    bool hayTiempo1 = ui->lineEdit_1->hasSelectedText();
    bool hayTiempo2 = ui->lineEdit_2->hasSelectedText();
    bool hayTiempo3 = ui->lineEdit_3->hasSelectedText();
    bool hayTiempo4 = ui->lineEdit_4->hasSelectedText();
    bool hayTiempo5 = ui->lineEdit_5->hasSelectedText();



    if(!hayTiempo1){
        t0 = clock();
        factorial(num);
        t1 = clock();
        tAlgoritmo = t1 - t0;
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_1->setText(tiempoQString);
    }else if(!hayTiempo2){
        t0 = clock();
        factorial(num);
        t1 = clock();
        tAlgoritmo = t1 - t0;
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_1->setText(tiempoQString);
    }else if(!hayTiempo3){
        t0 = clock();
        factorial(num);
        t1 = clock();
        tAlgoritmo = t1 - t0;
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_1->setText(tiempoQString);
    }else if(!hayTiempo4){
        t0 = clock();
        factorial(num);
        t1 = clock();
        tAlgoritmo = t1 - t0;
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_1->setText(tiempoQString);
    }else{
        t0 = clock();
        factorial(num);
        t1 = clock();
        tAlgoritmo = t1 - t0;
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_1->setText(tiempoQString);
    }
}
