#ifndef TUPDATE_H
#define TUPDATE_H

#include <QDialog>

namespace Ui {
class TUpdate;
}

class TUpdate : public QDialog
{
    Q_OBJECT

public:
    explicit TUpdate(QWidget *parent = nullptr);
    ~TUpdate();

private:
    Ui::TUpdate *ui;
};

#endif // TUPDATE_H
