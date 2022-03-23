#include "windowtonosrojos.h"
#include "ui_windowtonosrojos.h"

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
