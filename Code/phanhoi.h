#ifndef PHANHOI_H
#define PHANHOI_H

#include <QDialog>

namespace Ui {
class Phanhoi;
}

class Phanhoi : public QDialog
{
    Q_OBJECT

public:
    explicit Phanhoi(QWidget *parent = nullptr);
    ~Phanhoi();
    void Hienthi(QString);

private slots:
    void on_buttonGui_clicked();

private:
    Ui::Phanhoi *ui;
    QString Tentk;
};

#endif // PHANHOI_H
