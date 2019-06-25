#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <ServiceContainers/userscontainer.hpp>
namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent, std::shared_ptr<UsersContainer> uc);
    ~Login();

signals:
    void logged(bool);

private slots:
    void on_cpfField_cursorPositionChanged(int arg1, int arg2);

    void on_cpfField_textChanged(const QString &arg1);

    void on_passwdField_textChanged(const QString &arg1);

    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    std::shared_ptr<UsersContainer> users_container;
    Ui::Login *ui;
    std::string cpf;
    std::string passwd;
};

#endif // LOGIN_H
