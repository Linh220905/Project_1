#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMovie>
#include"QFile"
#include"QDebug"
#include"QMessageBox"
#include"QListWidget"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Giao diện quản lí");
    ptrquanlilichsu = new Quanlilichsu();
    ptrlichsunguoidung = new Lichsunguoidung();
    ptrdoanhthu = new Doanhthu();
    ptrhomthu = new Homthu();
    caigiaodien();
    doctramthuphitufile();


}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrquanlilichsu;
    delete ptrlichsunguoidung;
    delete ptrdoanhthu;
    delete ptrhomthu;
}




void MainWindow::on_buttonLichSu_clicked()
{
   ptrquanlilichsu->Doclichsutufile();

}
void MainWindow::on_ButtonNguoidung_clicked()
{
  ptrlichsunguoidung->Docnguoidungtufile();
}
void MainWindow::caigiaodien()
{
    ui->lbl->setVisible(false);
    QString gifPath = "C:/Users/linh/Downloads/backrounddd.gif";
    QMovie *gifbackground = new QMovie(gifPath);
    if (!gifbackground->isValid()) {
        qDebug() << "Không thể tải GIF:" << gifPath;
        return;
    }
    ui->lbl->setMovie(gifbackground);
    ui->lbl->setVisible(true);
    ui->lbl->raise();
    ui->lbl->lower();
    gifbackground->start();
}
void MainWindow::doctramthuphitufile()
{

    QFile file("DanhSachTramThuPhi.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"loi";
        return;
    }
    QTextStream in(&file);
    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList park = line.split(":::");
        if (park.size() > 0) {
            QString a=park[0];

            ui->listWidget->addItem(a);

        }
    }
    file.close();
}

void MainWindow::on_buttondoanhthu_clicked()
{
  ptrdoanhthu->thongkevaobang();
}






void MainWindow::on_buttonHthu_clicked()
{
    ptrhomthu->docykientufile();
}

