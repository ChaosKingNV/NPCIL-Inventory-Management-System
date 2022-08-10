#ifndef TREMOVE_H
#define TREMOVE_H

#include <QDialog>
#include "MyDB.h"

namespace Ui {
class TRemove;
}

class TRemove : public QDialog
{
    Q_OBJECT

public:
    explicit TRemove(QWidget *parent = nullptr);
    ~TRemove();

private slots:
    void on_findButton_2_clicked();

    void on_removeButton_clicked();

private:
    Ui::TRemove *ui;
    void showAllElements();
    void hideAllElements();
};

#endif // TREMOVE_H
