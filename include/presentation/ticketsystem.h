#ifndef TICKETSYSTEM_H
#define TICKETSYSTEM_H

#include <QMainWindow>
#include <presentation/login.h>
#include <presentation/signup.hpp>

namespace Ui {
class TicketSystem;
}

class TicketSystem : public QMainWindow
{
    Q_OBJECT

public:
    explicit TicketSystem(QWidget *parent = nullptr);
    ~TicketSystem();

private slots:

    void on_actionQuit_triggered();

    void on_login_clicked();

    void on_quit_clicked();

    void on_signup_clicked();

private:
    Login *loginWindow;
    Signup *signupWindow;
    Ui::TicketSystem *ui;
};

#endif // TICKETSYSTEM_H
