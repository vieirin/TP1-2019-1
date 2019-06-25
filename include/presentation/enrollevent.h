#ifndef ENROLLEVENT_H
#define ENROLLEVENT_H

#include <QWidget>
#include <ServiceContainers/eventscontainer.h>
#include <ServiceContainers/presentationscontainer.hpp>

namespace Ui {
    class EnrollEvent;
}

class EnrollEvent : public QWidget
{
    Q_OBJECT
public:
    explicit EnrollEvent(QWidget *parent, std::shared_ptr<EventContainer> ec, std::shared_ptr<PresentationsContainer> pc);
    ~EnrollEvent();
private:
    Ui::EnrollEvent *ui;
    std::vector<std::string> presentation_codes;
    std::string eventCode;
    std::shared_ptr<EventContainer> events_container;
    std::shared_ptr<PresentationsContainer> presentations_container;
    std::string eventName;
    std::string eventCity;
    std::string eventState;
    std::string eventType;
    std::string ageGroup;
    int roomNumber;
signals:

public slots:
private slots:
    void on_eventCodeInput_textChanged(const QString &eventCode);
    void on_eventNameInput_textChanged(const QString &eventName);
    void on_eventCity_textChanged(const QString &eventCity);
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_comboBox_3_currentTextChanged(const QString &arg1);
    void on_ageGroupCombo_activated(const QString &arg1);
    void on_eventTypeCombo_currentTextChanged(const QString &arg1);
    void on_presCodesInput_textChanged(const QString &arg1);
};

#endif // ENROLLEVENT_H
