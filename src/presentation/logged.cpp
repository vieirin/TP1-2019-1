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
