#include "windowtonosrojos.h"
#include "ui_windowtonosrojos.h"
#include "qfiledialog.h"
#include "iostream"
#include "fstream"
#include "qmessagebox.h"
#include "QFileDialog"

using namespace std;

windowtonosrojos::windowtonosrojos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::windowtonosrojos)
{
    ui->setupUi(this);
}

windowtonosrojos::~windowtonosrojos()
{
    delete ui;
}


void windowtonosrojos::on_pushButton_3_clicked()
{
    //Aqui solo deja elegir el de origen y se para, no se porque
    this->directoryOrigin = QFileDialog::getExistingDirectory(this,tr("Origin directory"), "C://", QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);
    this->directoryDestiny = QFileDialog::getExistingDirectory(this,tr("Destiny directory"), "C://", QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);
}

void windowtonosrojos::aplicarRojos()
{
    QString directoryDestinyAux = this->directoryDestiny;
    QDir directory(this->directoryOrigin);
    QStringList images;
    images <<"*.png" << "*.xpm" << "*.jpg";
    directory.setNameFilters(images);
    QStringList infoList = directory.entryList(images);
    int i;
    for(i = 0; i < (int) infoList.size(); i++){

        //QFileDialog::getOpenFileName(this, tr("Open file"), "C://", tr("Images (*.png *.xpm *.jpg"));

        QString fileName;
        fileName.reserve(100);
        fileName.append(this->directoryOrigin);
        fileName.append("/");
        fileName.append(infoList.at(i));

        cout << fileName.toStdString() << endl;
        QImage *image = new QImage(fileName);
        QColor *c = new QColor(255, 0, 0, 1);
        int x, y;

        for (y = 0; y < image->height(); y++) {
           for (x = 0; x < image->width(); x++) {

               c->setGreen(image->pixelColor(x,y).green());
               c->setBlue(image->pixelColor(x,y).blue());
               image->setPixelColor(x,y, *c);

           }
        }

        string indice = directoryDestinyAux.toStdString();
        indice.append("/");
        indice.append(infoList.at(i).toStdString());
        indice.append(".jpg");
        image->save(indice.c_str());
        this->directoryDestiny = directoryDestinyAux;
    }
}

void windowtonosrojos::on_pushButton_clicked()
{
    if((this->directoryOrigin == "") && (this->directoryDestiny == "")){
        QMessageBox msg;
        msg.setText("No ha seleccionado los 2 directorios");
        msg.exec();
    }
    double tAlgoritmo;
    double t0;
    double t1;
    QString tiempoQString;
    std::string tiempoString;

    if(ui->lineEdit_1->text().toStdString() == ""){
        t0 = (double) clock();
        aplicarRojos();
        t1 = (double) clock();
        tAlgoritmo = (t1 - t0) / CLOCKS_PER_SEC;
        tiempoString = std::to_string(tAlgoritmo);
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_1->setText(tiempoQString);
    }else if(ui->lineEdit_2->text().toStdString() == ""){
        t0 = (double) clock();
        aplicarRojos();
        t1 = (double) clock();
        tAlgoritmo = (t1 - t0) / CLOCKS_PER_SEC;
        tiempoString = std::to_string(tAlgoritmo);
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_2->setText(tiempoQString);
    }else if(ui->lineEdit_3->text().toStdString() == ""){
        t0 = (double) clock();
        aplicarRojos();
        t1 = (double) clock();
        tAlgoritmo = (t1 - t0) / CLOCKS_PER_SEC;
        tiempoString = std::to_string(tAlgoritmo);
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_3->setText(tiempoQString);
    }else if(ui->lineEdit_4->text().toStdString() == ""){
        t0 = (double) clock();
        aplicarRojos();
        t1 = (double) clock();
        tAlgoritmo = (t1 - t0) / CLOCKS_PER_SEC;
        tiempoString = std::to_string(tAlgoritmo);
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_4->setText(tiempoQString);
    }else if(ui->lineEdit_5->text().toStdString() == ""){
        t0 = (double) clock();
        aplicarRojos();
        t1 = (double) clock();
        tAlgoritmo = (t1 - t0) / CLOCKS_PER_SEC;
        tiempoString = std::to_string(tAlgoritmo);
        tiempoQString = QString::fromStdString(tiempoString);
        ui->lineEdit_5->setText(tiempoQString);
    }else{
        if(ui->lineEdit_1->text() != "" && ui->lineEdit_2->text() != "" && ui->lineEdit_3->text() != "" && ui->lineEdit_4->text() != "" && ui->lineEdit_5->text() != ""){
            QString aux;
            string auxString;
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
            auxString = std::to_string(media);
            aux = QString::fromStdString(auxString);
            ui->lineEditMedia->setText(aux);
        }
    }

}





void windowtonosrojos::on_pushButtonReset_clicked()
{
    ui->lineEditMedia->setText("");
    ui->lineEdit_1->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");
}

