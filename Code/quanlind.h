#ifndef QUANLIND_H
#define QUANLIND_H

#include <QDialog>

namespace Ui {
class Quanlind;
}

class Quanlind : public QDialog
{
    Q_OBJECT

public:
    explicit Quanlind(QWidget *parent = nullptr);

    ~Quanlind();
    void Thongtinnguoidung(QString,QString,QString,QString,int);
    void Docnguoidungtufile();

private slots:
    void on_tableWidget_clicked(const QModelIndex &index);

private:
    Ui::Quanlind *ui;
};

#endif // QUANLIND_H
