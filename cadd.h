#ifndef CADD_H
#define CADD_H

#include <QDialog>
#include "MyDB.h"

namespace Ui {
class CAdd;
}

class CAdd : public QDialog
{
    Q_OBJECT

public:
    explicit CAdd(QWidget *parent = nullptr);
    ~CAdd();

private slots:
    void on_pushButtonCAddAdd_clicked();


    void on_pushButtonCAddReset_clicked();

private:
    Ui::CAdd *ui;
    //void resetElements();

};

#endif // CADD_H
