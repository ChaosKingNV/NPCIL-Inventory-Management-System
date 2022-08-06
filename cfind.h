#ifndef CFIND_H
#define CFIND_H

#include <QDialog>

namespace Ui {
class CFind;
}

class CFind : public QDialog
{
    Q_OBJECT

public:
    explicit CFind(QWidget *parent = nullptr);
    ~CFind();

private:
    Ui::CFind *ui;
};

#endif // CFIND_H
