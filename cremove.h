#ifndef CREMOVE_H
#define CREMOVE_H

#include <QDialog>
#include "MyDB.h"

namespace Ui {
class CRemove;
}

class CRemove : public QDialog
{
    Q_OBJECT

public:
    explicit CRemove(QWidget *parent = nullptr);
    ~CRemove();

private slots:
    void on_findButton_3_clicked();

    void on_removeButton_clicked();

private:
    Ui::CRemove *ui;
    void showAllElements();
    void hideAllElements();
};

#endif // CREMOVE_H
