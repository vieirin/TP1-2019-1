#include <presentation/enrollevent.h>
#include "ui_enrollevent.h"
#include <iostream>
#include <sstream>

EnrollEvent::EnrollEvent(QWidget *parent, std::shared_ptr<EventContainer> ec, std::shared_ptr<PresentationsContainer> pc) : QWidget (parent),
    ui(new Ui::EnrollEvent)
{
    ui->setupUi(this);
    events_container = ec;
    presentations_container = pc;
}

EnrollEvent::~EnrollEvent(){
    delete ui;
}

template<typename Out>
void split(const std::string &s, char delim, Out result) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        *(result++) = item;
    }
}

std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, std::back_inserter(elems));
    return elems;
}


void EnrollEvent::on_eventCodeInput_textChanged(const QString &eventCode)
{
    this->eventCode = eventCode.toUtf8().data();
}


void EnrollEvent::on_eventNameInput_textChanged(const QString &eventName)
{
    this->eventName = eventName.toUtf8().data();
}

void EnrollEvent::on_eventCity_textChanged(const QString &eventCity)
{
    this->eventCity = eventCity.toUtf8().data();
}



void EnrollEvent::on_buttonBox_accepted()
{
    std::list<std::shared_ptr<Presentation>> matchPresentations;
    for (auto code : presentation_codes) {
        auto presentation = presentations_container->GetPresentation(code);
        if (presentation != nullptr) {
               matchPresentations.push_back(presentation);
        }
    }
    if(events_container->CreateEvent(eventCode, ageGroup, eventName, eventType, eventCity, eventState, matchPresentations)) {
        this->deleteLater();
    } else  {
        ui->errMsg->setText("Wrong entries");
    };
}

void EnrollEvent::on_buttonBox_rejected()
{
    this->deleteLater();
}

void EnrollEvent::on_comboBox_3_currentTextChanged(const QString &state)
{
    this->eventState = state.toUtf8().data();
}

void EnrollEvent::on_ageGroupCombo_activated(const QString &ageGroup)
{
    this->ageGroup = ageGroup.toUtf8().data();
}

void EnrollEvent::on_eventTypeCombo_currentTextChanged(const QString &eventType)
{
    this->eventType = eventType.toUtf8().data();
}

void EnrollEvent::on_presCodesInput_textChanged(const QString &presCodes)
{
    auto presentations = presCodes.toUtf8().data();
    presentation_codes = split(presentations, ',');
}
