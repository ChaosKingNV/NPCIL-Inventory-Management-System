#ifndef CREMOVE_H
#define CREMOVE_H

#include <QDialog>

namespace Ui {
class CRemove;
}

class CRemove : public QDialog
{
    Q_OBJECT

public:
    explicit CRemove(QWidget *parent = nullptr);
    ~CRemove();

private:
    Ui::CRemove *ui;
};

#endif // CREMOVE_H
