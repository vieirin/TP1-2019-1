#include <presentation/login.h>
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QWidget (parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


void Login::on_cpfField_cursorPositionChanged(int oldPos, int newPos)
{
    if((newPos + 1) % 4 == 0) {
        unsigned int pos = static_cast<unsigned int>(newPos);
        if ((cpf[pos] != '.' || cpf[pos] != '-') && (newPos > oldPos)) {
            switch (newPos) {
                case 3:
                case 7:
                    cpf += '.';
                    break;
                case 11:
                    cpf += '-';
                    break;
            }
        }
    }
    if (newPos == 0) {
        cpf = "";
    }
    const QString textDisplay(cpf.data());
    ui->cpfField->setText(textDisplay);
}

void Login::on_cpfField_textChanged(const QString &cpfInput)
{
    const QChar *lastchar = cpfInput.end()-1;
    if (lastchar->isDigit() || *lastchar == "-" || *lastchar == "."){
        if (cpfInput.size() < 15)
            cpf = cpfInput.toUtf8().data();
        const QString textDisplay(cpf.data());
        ui->cpfField->setText(textDisplay);
    }
}


void Login::on_passwdField_textChanged(const QString &pwdInput)
{
    passwd = pwdInput.toUtf8().data();
}
