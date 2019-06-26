#include <presentation/searchevent.hpp>
#include <ui_searchevent.h>
#include <QDate>

SearchEvent::SearchEvent(QWidget *parent, std::shared_ptr<EventContainer> events_container) :
    QWidget (parent),
    ui(new Ui::SearchEvent)
{
    ui->setupUi(this);
    this->events_container = events_container;
}

SearchEvent::~SearchEvent()
{
    delete ui;
}


void SearchEvent::on_lineEdit_2_textChanged(const QString &cidade)
{
   this->cidade = cidade.toUtf8().data();
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

    auto found_containers = events_container->GetEventsFromTime(datainicio, datafim, cidade, estado);
    if(found_containers.size() > 0){
        //go back to previous screen
        emit searchUp(found_containers);
        this->deleteLater();
    } else {
        QString errMsg = "No matches found for event search!";
        ui->errMsg->setText(errMsg);
    }

}


void SearchEvent::on_cancelButton_clicked()
{
    hasDeleteCalled = true;
    this->deleteLater();
}

void SearchEvent::on_stateCombo_editTextChanged(const QString &entry)
{
    estado = entry.toUtf8().data();
}
