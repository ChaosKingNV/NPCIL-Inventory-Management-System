#ifndef TREMOVE_H
#define TREMOVE_H

#include <QDialog>

namespace Ui {
class TRemove;
}

class TRemove : public QDialog
{
    Q_OBJECT

public:
    explicit TRemove(QWidget *parent = nullptr);
    ~TRemove();

private:
    Ui::TRemove *ui;
};

#endif // TREMOVE_H
