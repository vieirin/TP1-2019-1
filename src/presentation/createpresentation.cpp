#include <presentation/createpresentation.hpp>
#include "ui_createpresentation.h"

CreatePresentation::CreatePresentation(QWidget *parent, std::shared_ptr<PresentationsContainer> pc) :
    QWidget (parent),
    ui(new Ui::CreatePresentation)
{
    ui->setupUi(this);
    presentations_container = pc;
}

CreatePresentation::~CreatePresentation()
{
    delete ui;
}

void CreatePresentation::on_presCodeInput_textChanged(const QString &presentationCode)
{
    this->presentationCode = presentationCode.toUtf8().data();
}

void CreatePresentation::on_spinBox_valueChanged(int amount)
{
    this->amount = amount;
}

void CreatePresentation::on_priceInput_valueChanged(double price)
{
  this->price = static_cast<float>(price);
}

void CreatePresentation::on_roomNumber_valueChanged(int roomNumber)
{
    this->roomNumber = roomNumber;
}

void CreatePresentation::on_dateEdit_userDateChanged(const QDate &date)
{
    this->presentationDate = date.toString("dd/MM/yy").toUtf8().data();
}


void CreatePresentation::on_timeEdit_userTimeChanged(const QTime &time)
{
    this->startTime = time.toString("hh:mm").toUtf8().data();
}

void CreatePresentation::on_buttonBox_accepted()
{
    if(presentations_container->CreatePresentation(amount, presentationCode, price, roomNumber, presentationDate, startTime)){
        this->deleteLater();
    }else {
        ui->errMsg->setText("Error on entries");
    }
}

void CreatePresentation::on_buttonBox_rejected()
{
    this->deleteLater();
}
