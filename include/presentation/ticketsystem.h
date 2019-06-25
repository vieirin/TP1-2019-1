#ifndef TICKETSYSTEM_H
#define TICKETSYSTEM_H

#include <QMainWindow>
#include <presentation/login.h>
#include <presentation/signup.hpp>
#include <ServiceInterface.h>
#include <presentation/logged.hpp>
#include <presentation/receipt.hpp>
#include <presentation/enrollevent.h>
#include <presentation/createpresentation.hpp>
#include <ServiceContainers/presentationscontainer.hpp>
#include <ServiceContainers/eventscontainer.h>
#include <presentation/searchevent.hpp>
#include <presentation/searchresult.hpp>

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

    void on_searchFound(bool found);

    void on_signup(std::string);

    void on_logout();

    void enroll_event();

    void enroll_presentation();

    void on_actionQuit_triggered();

    void on_login_clicked();

    void on_quit_clicked();

    void on_signup_clicked();

    void on_checkEvents_clicked();

private:
    std::shared_ptr<UsersContainer> users_container;
    std::shared_ptr<PresentationsContainer> presentations_container;
    std::shared_ptr<EventContainer> events_container;

    Login *loginWindow;
    Signup *signupWindow;
    Receipt *logonOkWindow;
    SearchEvent * searcheventWindow;
    SearchResult * foundSearchWindow;


    Logged *loggedWindow;
    CreatePresentation *createPresentationWindow;
    EnrollEvent *enrollEventWindow;

    Ui::TicketSystem *ui;
};

#endif // TICKETSYSTEM_H
