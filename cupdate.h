#ifndef CUPDATE_H
#define CUPDATE_H

#include <QDialog>

namespace Ui {
class CUpdate;
}

class CUpdate : public QDialog
{
    Q_OBJECT

public:
    explicit CUpdate(QWidget *parent = nullptr);
    ~CUpdate();

private:
    Ui::CUpdate *ui;
};

#endif // CUPDATE_H
