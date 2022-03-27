#ifndef WINDOWTONOSROJOS_H
#define WINDOWTONOSROJOS_H

#include <QWidget>

namespace Ui {
class windowtonosrojos;
}

class windowtonosrojos : public QWidget
{
    Q_OBJECT

public:
    explicit windowtonosrojos(QWidget *parent = nullptr);
    ~windowtonosrojos();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void aplicarRojos();

private:
    Ui::windowtonosrojos *ui;
    QString *directoryOrigin;
    QString *directoryDestiny;
};

#endif // WINDOWTONOSROJOS_H
