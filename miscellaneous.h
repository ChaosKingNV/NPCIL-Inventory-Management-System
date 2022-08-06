#ifndef MISCELLANEOUS_H
#define MISCELLANEOUS_H

#include <QDialog>

namespace Ui {
class Miscellaneous;
}

class Miscellaneous : public QDialog
{
    Q_OBJECT

public:
    explicit Miscellaneous(QWidget *parent = nullptr);
    ~Miscellaneous();

private:
    Ui::Miscellaneous *ui;
};

#endif // MISCELLANEOUS_H
