#include <presentation/searchevent.hpp>
#include <ui_searchevent.h>
#include <QDate>

SearchEvent::SearchEvent(QWidget *parent) :
    QWidget (parent),
    ui(new Ui::SearchEvent)
{
    ui->setupUi(this);
}

SearchEvent::~SearchEvent()
{
    delete ui;
}


void SearchEvent::on_lineEdit_2_textChanged(const QString &cidade)
{
   this->cidade = cidade.toUtf8().data();
}

void SearchEvent::on_lineEdit_4_textChanged(const QString &estado)
{
    this->estado = estado.toUtf8().data();
}

void SearchEvent::on_dateEdit_2_userDateChanged(const QDate &date)
{
  this->datainicio = date.toString("dd/MM/yy").toUtf8().data();
}

void SearchEvent::on_dateEdit_userDateChanged(const QDate &date)
{
    this->datafim = date.toString("dd/MM/yy").toUtf8().data();
}

void SearchEvent::on_Okaybuttom_clicked()
{
/*
    if(events_container->Search(datainicio,datafim,cidade,estado)){
        //go back to previous screen
        emit searchUp(true);
        this->deleteLater();
    } else {
        QString errMsg = "No matches found for event search!";
        ui->errMsg->setText(errMsg);
    }
*/
}


void SearchEvent::on_cancelButton_clicked()
{
    hasDeleteCalled = true;
    this->deleteLater();
}
