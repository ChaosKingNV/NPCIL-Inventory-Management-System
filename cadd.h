#ifndef CADD_H
#define CADD_H

#include <QDialog>

namespace Ui {
class CAdd;
}

class CAdd : public QDialog
{
    Q_OBJECT

public:
    explicit CAdd(QWidget *parent = nullptr);
    ~CAdd();

private:
    Ui::CAdd *ui;
};

#endif // CADD_H
