#ifndef TUPDATE_H
#define TUPDATE_H

#include <QDialog>
#include "MyDB.h"

namespace Ui {
class TUpdate;
}

class TUpdate : public QDialog
{
    Q_OBJECT

public:
    explicit TUpdate(QWidget *parent = nullptr);
    ~TUpdate();

private slots:
    void on_findButton_clicked();

    void on_updateButton_clicked();

private:
    Ui::TUpdate *ui;
    void showAllElements();
    void hideAllElements();
};

#endif // TUPDATE_H
