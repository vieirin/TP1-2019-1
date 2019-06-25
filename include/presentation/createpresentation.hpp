#ifndef CREATEPRESENTATION_HPP
#define CREATEPRESENTATION_HPP

#include <QWidget>
#include <ServiceContainers/presentationscontainer.hpp>

namespace Ui {
    class CreatePresentation;
}

class CreatePresentation : public QWidget
{
    Q_OBJECT
public:
    explicit CreatePresentation(QWidget *parent, std::shared_ptr<PresentationsContainer> pc);
    ~CreatePresentation();

private slots:

    void on_presCodeInput_textChanged(const QString &presentationCode);

    void on_spinBox_valueChanged(int amount);

    void on_priceInput_valueChanged(double arg1);

    void on_roomNumber_valueChanged(int arg1);

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_timeEdit_userTimeChanged(const QTime &time);

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    std::string presentationCode;
    int amount;
    float price;
    int roomNumber;
    std::string presentationDate;
    std::string startTime;
    Ui::CreatePresentation *ui;
    std::shared_ptr<PresentationsContainer> presentations_container;

};

#endif // CREATEPRESENTATION_HPP
