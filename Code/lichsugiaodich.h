#ifndef LICHSUGIAODICH_H
#define LICHSUGIAODICH_H

#include <QDialog>

namespace Ui {
class Lichsugiaodich;
}

class Lichsugiaodich : public QDialog
{
    Q_OBJECT

public:
    explicit Lichsugiaodich(QWidget *parent = nullptr);
    ~Lichsugiaodich();
    void Themlichsu(QString ,QString,QString,QString,QString,int);
    void Doclichsutufile(QString);

private:
    Ui::Lichsugiaodich *ui;

};

#endif // LICHSUGIAODICH_H
