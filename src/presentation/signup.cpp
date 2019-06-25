#include <presentation/signup.hpp>
#include "ui_signup.h"

Signup::Signup(QWidget *parent, std::shared_ptr<UsersContainer> uc) : QWidget (parent), ui(new Ui::Signup) {
    ui->setupUi(this);
    hasDeleteCalled = false;
    users_container = uc;
}

Signup::~Signup()
{
    if(!hasDeleteCalled)
        delete ui;
}

void Signup::on_cpfInput_textChanged(const QString &cpfInput)
{
    const QChar *lastchar = cpfInput.end()-1;
    if (lastchar->isDigit() || *lastchar == "-" || *lastchar == "."){
        if (cpfInput.size() < 15)
            cpf = cpfInput.toUtf8().data();
        const QString textDisplay(cpf.data());
        ui->cpfInput->setText(textDisplay);
    }
}

void Signup::on_cpfInput_cursorPositionChanged(int oldPos, int newPos)
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
    ui->cpfInput->setText(textDisplay);
}

void Signup::on_passwdInput_textChanged(const QString &password)
{
    passwd = password.toUtf8().data();
}

void Signup::on_confirmpasswdLabel_textChanged(const QString &conf_password)
{
    confirm_passwd = conf_password.toUtf8().data();
}

void Signup::on_okButton_clicked()
{
    std::shared_ptr<CreditCard> credit_card;
    try {
        credit_card = std::make_shared<CreditCard>(credit_card_number, cvv, expiration);
    }catch (std::exception &e) {
        std::string errMsg("Invalid credit card information\n ");
        errMsg += e.what();
        ui->errMsg->setText(errMsg.data());
        return;
    }
    if (passwd != "" && passwd == confirm_passwd) {
        if(users_container->SignUp(cpf, passwd, credit_card)) {
            hasDeleteCalled = true;
            this->deleteLater();
        } else {
            ui->errMsg->setText("Error creating user, try again");
        }
    } else {
        ui->errMsg->setText("Passwords mismatch");
    }
}

void Signup::on_cancelButton_clicked()
{
    hasDeleteCalled = true;
    this->deleteLater();
}

void Signup::on_creditInput_textChanged(const QString &creditnumber)
{
   credit_card_number = creditnumber.toUtf8().data();
}

void Signup::on_cvvInput_textChanged(const QString &cvvnumber)
{
    cvv = cvvnumber.toUtf8().data();
}

void Signup::on_expirationInput_cursorPositionChanged(int oldPos, int newPos)
{
    if (newPos == 2) {
        expiration += '/';
    }
    ui->expirationInput->setText(expiration.data());
}

void Signup::on_expirationInput_textChanged(const QString &expirationdate)
{
    expiration = expirationdate.toUtf8().data();
}
