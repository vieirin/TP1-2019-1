#include <presentation/signup.hpp>
#include "ui_signup.h"

Signup::Signup(QWidget *parent) : QWidget (parent), ui(new Ui::Signup) {
    ui->setupUi(this);
    hasDeleteCalled = false;
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
    if (passwd != "" && passwd == confirm_passwd) {
        hasDeleteCalled = true;
        this->deleteLater();
    } else {
        QPalette pal = ui->cpfInput->palette();
        pal.setColor(QPalette::WindowText, Qt::red);
        ui->cpfInput->setPalette(pal);
    }
}

void Signup::on_cancelButton_clicked()
{
    hasDeleteCalled = true;
    this->deleteLater();
}
