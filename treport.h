#ifndef TREPORT_H
#define TREPORT_H

#include <QDialog>
#include "MyDB.h"

namespace Ui {
class TReport;
}

class TReport : public QDialog
{
    Q_OBJECT

public:
    explicit TReport(QWidget *parent = nullptr);
    ~TReport();

private:
    Ui::TReport *ui;
    void updateUI();
};

#endif // TREPORT_H
