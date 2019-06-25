#include <presentation/receipt.hpp>
#include <ui_receiptsignup.h>


Receipt::Receipt(QWidget *parent, std::string cpf) :
    QWidget (parent),
    ui(new Ui::Receipt) {
    ui->setupUi(this);
    this->cpf = cpf;
    char *label = ui->label->text().toUtf8().data();
    char buf[50];
    sprintf(buf, label, cpf.data());
    ui->label->setText(buf);
}

void Receipt::on_okButton_clicked()
{
    this->deleteLater();
}
