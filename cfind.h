#ifndef CFIND_H
#define CFIND_H

#include <QDialog>
#include "MyDB.h"

namespace Ui {
class CFind;
}

class CFind : public QDialog
{
    Q_OBJECT

public:
    explicit CFind(QWidget *parent = nullptr);
    ~CFind();

private slots:
    void on_findButton_clicked();

private:
    Ui::CFind *ui;
    void showAllElements();
    void hideAllElements();
};

#endif // CFIND_H
