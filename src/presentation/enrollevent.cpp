#include <presentation/enrollevent.h>
#include "ui_enrollevent.h"

EnrollEvent::EnrollEvent(QWidget *parent) : QWidget (parent),
    ui(new Ui::EnrollEvent)
{
    ui->setupUi(this);
}

EnrollEvent::~EnrollEvent(){
    delete ui;
}
