#include <presentation/resultinfo.h>
#include "ui_resultinfo.h"


ResultInfo::ResultInfo(QWidget *parent,  std::string name, std::string type, std::string age) :
    QWidget (parent),
    ui(new Ui::ResultInfo) {
    ui->setupUi(this);
    char *label = ui->nameLabel->text().toUtf8().data();
    char buf[50];
    sprintf(buf, label, name.data());
    ui->nameLabel->setText(buf);

    label = ui->typeLabel->text().toUtf8().data();
    sprintf(buf, label, type.data());
    ui->typeLabel->setText(buf);

}

void ResultInfo::on_okButton_clicked()
{
    this->deleteLater();
}
