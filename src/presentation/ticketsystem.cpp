#include <presentation/ticketsystem.h>
#include "ui_ticketsystem.h"
#include <iostream>

TicketSystem::TicketSystem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TicketSystem)
{
    ui->setupUi(this);
    loginWindow = nullptr;
    signupWindow = nullptr;
    loggedWindow = nullptr;
    searcheventWindow = nullptr;
    logonOkWindow = nullptr;
    enrollEventWindow = nullptr;
    events_container = std::make_shared<EventContainer>();
    users_container = std::make_shared<UsersContainer>();
    presentations_container = std::make_shared<PresentationsContainer>();
    auto credit_card = std::make_shared<CreditCard>("5105105105105100", "469", "08/22");
    users_container->SignUp("609.576.963-96", "Aler12", credit_card);
}

TicketSystem::~TicketSystem()
{
    delete ui;
}

void TicketSystem::on_actionQuit_triggered()
{
   exit(0);
}

void TicketSystem::on_login_clicked()
{
    int loginWindowIdx = 0;
    if (loginWindow != nullptr) {
        //if login was already instantiated before we need to remove it from
        //stack before showing a new one
        loginWindowIdx = ui->stackedWidget->indexOf(loginWindow);
        if (loginWindowIdx != -1) {
            ui->stackedWidget->removeWidget(loginWindow);
        }
    }
    loginWindow = new Login(this, users_container);
    ui->stackedWidget->addWidget(loginWindow);
    loginWindowIdx = ui->stackedWidget->indexOf(loginWindow);
    ui->stackedWidget->setCurrentIndex(loginWindowIdx);
    this->resize(loginWindow->width()+40, loginWindow->height()+80);
    this->connect(loginWindow, SIGNAL(logged(bool)), this, SLOT(on_logged(bool)));
}

void TicketSystem::on_quit_clicked()
{
    exit(0);
}

void TicketSystem::on_signup_clicked()
{
    int signupWindowIdx = 0;
    if (signupWindow != nullptr) {
        //if signup was already instantiated before we need to remove it from
        //stack before showing a new one
        signupWindowIdx = ui->stackedWidget->indexOf(signupWindow);
        if (signupWindowIdx != -1) {
            ui->stackedWidget->removeWidget(signupWindow);
        }
    }
    signupWindow = new Signup(this, users_container);
    ui->stackedWidget->addWidget(signupWindow);
    signupWindowIdx = ui->stackedWidget->indexOf(signupWindow);
    ui->stackedWidget->setCurrentIndex(signupWindowIdx);
    this->resize(signupWindow->width()+15,signupWindow->height()+80);
    this->connect(signupWindow, SIGNAL(signup(std::string)), this, SLOT(on_signup(std::string)));
}

void TicketSystem::on_logged(bool logged) {
    if (logged) {
        int loggedWindowIdx = 0;
        if (loggedWindow != nullptr) {
            loggedWindowIdx = ui->stackedWidget->indexOf(loggedWindow);
            if (loggedWindowIdx != -1)
                ui->stackedWidget->removeWidget(loggedWindow);
        }
        loggedWindow = new Logged(this);
        ui->stackedWidget->addWidget(loggedWindow);
        loggedWindowIdx = ui->stackedWidget->indexOf(loggedWindow);
        ui->stackedWidget->setCurrentIndex(loggedWindowIdx);
        connect(loggedWindow, SIGNAL(logout()), this, SLOT(on_logout()));
        connect(loggedWindow, SIGNAL(enroll()), this, SLOT(enroll_event()));
        connect(loggedWindow, SIGNAL(enrollPresentation()), this, SLOT(enroll_presentation()));
        connect(loggedWindow, SIGNAL(unrollUser()), this, SLOT(on_unroll()));
    }
}

void TicketSystem::on_logout() {
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->removeWidget(loggedWindow);
}

void TicketSystem::on_signup(std::string cpf) {
    int logonokIdx = 0;
    if (logonOkWindow != nullptr) {
        logonokIdx = ui->stackedWidget->indexOf(logonOkWindow);
        if (logonokIdx != -1)
            ui->stackedWidget->removeWidget(logonOkWindow);
    }
    logonOkWindow = new Receipt(this, cpf);
    ui->stackedWidget->addWidget(logonOkWindow);
    logonokIdx = ui->stackedWidget->indexOf(logonOkWindow);
    ui->stackedWidget->setCurrentIndex(logonokIdx);
}

void TicketSystem::enroll_event() {
    int enrollIdx = 0;
    if (enrollEventWindow != nullptr) {
        enrollIdx = ui->stackedWidget->indexOf(enrollEventWindow);
        if (enrollIdx != -1)
            ui->stackedWidget->removeWidget(enrollEventWindow);
    }
    enrollEventWindow = new EnrollEvent(this, events_container, presentations_container);
    ui->stackedWidget->addWidget(enrollEventWindow);
    enrollIdx = ui->stackedWidget->indexOf(enrollEventWindow);
    ui->stackedWidget->setCurrentIndex(enrollIdx);
}

void TicketSystem::enroll_presentation() {
    int enrollIdx = 0;
    if (createPresentationWindow != nullptr) {
        enrollIdx = ui->stackedWidget->indexOf(createPresentationWindow);
        if (enrollIdx != -1)
            ui->stackedWidget->removeWidget(createPresentationWindow);
    }
    createPresentationWindow = new CreatePresentation(this, presentations_container);
    ui->stackedWidget->addWidget(createPresentationWindow);
    enrollIdx = ui->stackedWidget->indexOf(createPresentationWindow);
    this->resize(createPresentationWindow->width()+10, createPresentationWindow->height()+60);
    ui->stackedWidget->setCurrentIndex(enrollIdx);
}

void TicketSystem::on_checkEvents_clicked()
   {
        int searcheventWindowIdx = 0;
        if (searcheventWindow != nullptr) {
            //if searchevent was already instantiated before we need to remove it from
            //stack before showing a new one
            searcheventWindowIdx = ui->stackedWidget->indexOf(searcheventWindow);
            if (searcheventWindowIdx != -1) {
                ui->stackedWidget->removeWidget(searcheventWindow);
            }
        }
        searcheventWindow = new SearchEvent(this, events_container);
        ui->stackedWidget->addWidget(searcheventWindow);
        searcheventWindowIdx = ui->stackedWidget->indexOf(searcheventWindow);
        ui->stackedWidget->setCurrentIndex(searcheventWindowIdx);
        this->resize(searcheventWindow->width()+100, searcheventWindow->height()+50);
        this->connect(searcheventWindow, SIGNAL(searchUp(std::list<std::shared_ptr<Event>>)), this, SLOT(on_searchFound(std::list<std::shared_ptr<Event>>)));
    }

void TicketSystem::on_searchFound(std::list<std::shared_ptr<Event>> events_found) {
    if (events_found.size() > 0){
        resize(width()-100, width()+50);
        int foundSearchWindowIdx = 0;
        if (foundSearchWindow != nullptr) {
            foundSearchWindowIdx = ui->stackedWidget->indexOf(foundSearchWindow);
            if (foundSearchWindowIdx != -1)
                ui->stackedWidget->removeWidget(foundSearchWindow);
        }
        foundSearchWindow = new SearchResult(this, events_found);
        ui->stackedWidget->addWidget(foundSearchWindow);
        foundSearchWindowIdx = ui->stackedWidget->indexOf(foundSearchWindow);
        ui->stackedWidget->setCurrentIndex(foundSearchWindowIdx);
        resize(width()+60, width()+60);
    }
}

void TicketSystem::on_unroll() {
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->removeWidget(loggedWindow);
    users_container->Delete(users_container->LoggedUser());
}
