#include "windowfactorial.h"
#include "ui_windowfactorial.h"

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
