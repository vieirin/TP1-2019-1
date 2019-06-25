#ifndef TICKETSYSTEM_H
#define TICKETSYSTEM_H

#include <QMainWindow>
#include <presentation/login.h>
#include <presentation/signup.hpp>
#include <ServiceInterface.h>
#include <presentation/logged.hpp>
#include <presentation/receipt.hpp>
#include <presentation/enrollevent.h>

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
    void on_logged(bool logged);

    void on_signup(std::string);

    void on_logout();

    void enroll_event();

    void on_actionQuit_triggered();

    void on_login_clicked();

    void on_quit_clicked();

    void on_signup_clicked();

private:
    std::shared_ptr<UsersContainer> users_container;
    Login *loginWindow;

    Signup *signupWindow;
    Receipt *logonOkWindow;

    Logged *loggedWindow;

    EnrollEvent *enrollEventWindow;
    Ui::TicketSystem *ui;
};

#endif // TICKETSYSTEM_H
