#include <presentation/logged.hpp>
#include "ui_logged.h"

Logged::Logged(QWidget *parent) :
    QWidget (parent),
    ui(new Ui::Logged)
{
    ui->setupUi(this);
}

Logged::~Logged()
{
    delete ui;
}

void Logged::on_logout_clicked()
{
    emit logout();
}

void Logged::on_enrollEvent_clicked()
{
    emit enroll();
}

void Logged::on_createPresentation_clicked()
{
    emit enrollPresentation();
}
