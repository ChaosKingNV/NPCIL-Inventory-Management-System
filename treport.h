#ifndef TREPORT_H
#define TREPORT_H

#include <QDialog>

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
};

#endif // TREPORT_H
