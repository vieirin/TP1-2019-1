#ifndef SearchEvent_H_
#define SearchEvent_H_

#include <QWidget>

namespace Ui {
class SearchEvent;
}

class SearchEvent : public QWidget
{
    Q_OBJECT
public:
    SearchEvent(QWidget *parent);
    ~SearchEvent();
signals:
    void searchUp(bool);
private slots:

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_dateEdit_2_userDateChanged(const QDate &date);

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_Okaybuttom_clicked();

    void on_cancelButton_clicked();

private:
    Ui::SearchEvent *ui;
    bool hasDeleteCalled;
    std::string datainicio;
    std::string datafim;
    std::string cidade;
    std::string estado;
};

#endif
