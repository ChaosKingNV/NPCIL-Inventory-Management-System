#ifndef TADD_H
#define TADD_H

#include <QDialog>
#include "MyDB.h"

namespace Ui {
class TAdd;
}

class TAdd : public QDialog
{
    Q_OBJECT

public:
    explicit TAdd(QWidget *parent = nullptr);
    ~TAdd();

private slots:
    void on_add_clicked();

    void on_reset_clicked();

private:
    Ui::TAdd *ui;
};

#endif // TADD_H
