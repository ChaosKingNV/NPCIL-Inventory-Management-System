#ifndef CUPDATE_H
#define CUPDATE_H

#include <QDialog>
#include "MyDB.h"

namespace Ui {
class CUpdate;
}

class CUpdate : public QDialog
{
    Q_OBJECT

public:
    explicit CUpdate(QWidget *parent = nullptr);
    ~CUpdate();

private slots:
    void on_findButton_clicked();

    void on_updateButton_clicked();

private:
    Ui::CUpdate *ui;
    void showAllElements();
    void hideAllElements();
};

#endif // CUPDATE_H
