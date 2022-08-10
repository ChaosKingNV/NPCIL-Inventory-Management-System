#ifndef TADD_H
#define TADD_H

#include <QDialog>

namespace Ui {
class TAdd;
}

class TAdd : public QDialog
{
    Q_OBJECT

public:
    explicit TAdd(QWidget *parent = nullptr);
    ~TAdd();

private:
    Ui::TAdd *ui;
};

#endif // TADD_H
