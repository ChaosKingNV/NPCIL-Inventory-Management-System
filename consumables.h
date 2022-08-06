#ifndef CONSUMABLES_H
#define CONSUMABLES_H

#include <QDialog>

namespace Ui {
class Consumables;
}

class Consumables : public QDialog
{
    Q_OBJECT

public:
    explicit Consumables(QWidget *parent = nullptr);
    ~Consumables();

private:
    Ui::Consumables *ui;
};

#endif // CONSUMABLES_H
