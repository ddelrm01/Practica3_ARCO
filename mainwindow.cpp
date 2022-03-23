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


///ESTO DENTRO DEL SLOT DE OK
//using namespace std;
//int main(void){
//   int i;
//   int fact=1;
//   int numero;
//   cout<<"ingresa un numero: "; ///AQUI EN VEZ DE COUT HAY Q LEER LO QUE PILLEMOS POR EL LINEEDIT Y METERLO AQUI
//   cin>>numero;
//   if(numero<0) fact =0;
//   else if(numero==0) fact=1;
//   else{
//      for (i = 1; i <= numero; i++){
//         fac = fact*i;
//      }
//   }
