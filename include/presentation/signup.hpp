#ifndef SIGNUP_CPP
#define SIGNUP_CPP

#include <QWidget>
#include <ServiceContainers/userscontainer.hpp>

namespace Ui {
class Signup;
}

class Signup : public QWidget
{
    Q_OBJECT
public:

    explicit Signup(QWidget *parent, std::shared_ptr<UsersContainer> uc);
    ~Signup();

private slots:
    void on_cpfInput_textChanged(const QString &cpfInput);

    void on_cpfInput_cursorPositionChanged(int oldPos, int newPos);

    void on_passwdInput_textChanged(const QString &arg1);

    void on_confirmpasswdLabel_textChanged(const QString &arg1);

    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    bool hasDeleteCalled;
    std::shared_ptr<UsersContainer> users_container;
    Ui::Signup *ui;
    std::string cpf;
    std::string passwd;
    std::string confirm_passwd;
};


#endif // SIGNUP_CPP
