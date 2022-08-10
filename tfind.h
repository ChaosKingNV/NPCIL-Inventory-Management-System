#ifndef TFIND_H
#define TFIND_H

#include <QDialog>
#include "MyDB.h"

namespace Ui {
class TFind;
}

class TFind : public QDialog
{
    Q_OBJECT

public:
    explicit TFind(QWidget *parent = nullptr);
    ~TFind();

private slots:
    void on_findButton_clicked();

private:
    Ui::TFind *ui;
    void showAllElements();
    void hideAllElements();
};

#endif // TFIND_H
