#ifndef TFIND_H
#define TFIND_H

#include <QDialog>

namespace Ui {
class TFind;
}

class TFind : public QDialog
{
    Q_OBJECT

public:
    explicit TFind(QWidget *parent = nullptr);
    ~TFind();

private:
    Ui::TFind *ui;
};

#endif // TFIND_H
