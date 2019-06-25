#include <presentation/login.h>
#include "ui_login.h"

Login::Login(QWidget *parent, std::shared_ptr<UsersContainer> uc) :
    QWidget (parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    users_container = uc;
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
    if (lastchar->isDigit()){
        if (cpfInput.size() < 15)
            cpf = cpfInput.toUtf8().data();
        const QString textDisplay(cpf.data());
        ui->cpfField->setText(textDisplay);
    }
}


void Login::on_passwdField_textChanged(const QString &pwdInput)
{
    ui->errorMsg->setText("");
    passwd = pwdInput.toUtf8().data();
}

void Login::on_okButton_clicked()
{
    if(users_container->SignIn(cpf, passwd)){
        //go back to previous screen
        emit logged(true);
        this->deleteLater();
    } else {
        QString errMsg = "Could not login, check your credentials";
        ui->errorMsg->setText(errMsg);
    }
}

void Login::on_cancelButton_clicked()
{
    this->deleteLater();
}
