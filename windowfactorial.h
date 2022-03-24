#ifndef WINDOWFACTORIAL_H
#define WINDOWFACTORIAL_H

#include <QWidget>

namespace Ui {
class windowFactorial;
}

class windowFactorial : public QWidget
{
    Q_OBJECT

public:
    explicit windowFactorial(QWidget *parent = nullptr);
    ~windowFactorial();
    long factorial(long num);

private slots:

    void on_pushButtonEjecutar_clicked();

private:
    Ui::windowFactorial *ui;
};

#endif // WINDOWFACTORIAL_H
