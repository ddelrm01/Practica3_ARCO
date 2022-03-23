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

private:
    Ui::windowtonosrojos *ui;
};

#endif // WINDOWTONOSROJOS_H
