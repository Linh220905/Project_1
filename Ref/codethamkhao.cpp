// Tham khao cac ham nay tu copilot 
bool Dki::checksdt( QString Sdt) {

    QRegularExpression regex("^\\d{10,11}$");
    QRegularExpressionValidator validator(regex, nullptr);
    int pos = 0;
    return validator.validate(const_cast<QString&>(Sdt), pos) == QValidator::Acceptable;
}
bool Dki::checkbienso(QString Bienso) {

    QRegularExpression regex("^[0-9]{2}[A-Z]{1,2}-[0-9]{4,5}$");
    QRegularExpressionValidator validator(regex);
    int pos = 0;
    return validator.validate(const_cast<QString&>(Bienso), pos) == QValidator::Acceptable;
}
void Giaodienchinh::caigiaodien(QString gifPath)
{

    ui->lblbackground->setVisible(false);
    QMovie *gifbackground = new QMovie(gifPath);
    if (!gifbackground->isValid()) {
        qDebug() << "Không th? t?i GIF:" << gifPath;
        return;
    }
    ui->lblbackground->setMovie(gifbackground);
    ui->lblbackground->setVisible(true);
    ui->lblbackground->raise();
    ui->lblbackground->lower();
    gifbackground->start();
}
