#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent);
    ~Login();



private slots:
    void on_cpfField_cursorPositionChanged(int arg1, int arg2);

    void on_cpfField_textChanged(const QString &arg1);

    void on_passwdField_textChanged(const QString &arg1);

private:
    Ui::Login *ui;
    std::string cpf;
    std::string passwd;
};

#endif // LOGIN_H
