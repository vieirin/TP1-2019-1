#ifndef SearchEvent_H_
#define SearchEvent_H_

#include <QWidget>
#include <ServiceContainers/eventscontainer.h>

namespace Ui {
class SearchEvent;
}

class SearchEvent : public QWidget
{
    Q_OBJECT
public:
    SearchEvent(QWidget *parent, std::shared_ptr<EventContainer> events_container);
    ~SearchEvent();
signals:
    void searchUp(std::list<std::shared_ptr<Event>>);
private slots:

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_dateEdit_2_userDateChanged(const QDate &date);

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_Okaybuttom_clicked();

    void on_cancelButton_clicked();

    void on_stateCombo_editTextChanged(const QString &arg1);

private:
    Ui::SearchEvent *ui;
    std::shared_ptr<EventContainer> events_container;
    bool hasDeleteCalled;
    std::string datainicio;
    std::string datafim;
    std::string cidade;
    std::string estado;

};

#endif
