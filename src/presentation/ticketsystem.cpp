#include <presentation/ticketsystem.h>
#include "ui_ticketsystem.h"
#include <iostream>

TicketSystem::TicketSystem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TicketSystem)
{
    ui->setupUi(this);
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
    auto loginWg = new Login(this);
    ui->stackedWidget->insertWidget(1, loginWg);
    ui->stackedWidget->setCurrentIndex(1);
}
