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
    users_container = std::make_shared<UsersContainer>();
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
    this->connect(loginWindow, SIGNAL(loginWindow->logged(bool)), this, SLOT(on_logged(bool)));
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
    }
}
