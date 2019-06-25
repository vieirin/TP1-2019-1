#ifndef LOGGED_HPP
#define LOGGED_HPP
#include <QWidget>

namespace Ui {
    class Logged;
}

class Logged : public QWidget
{
    Q_OBJECT
public:
    Logged(QWidget *parent);
    ~Logged();
signals:
    void logout();
    void enroll();
    void enrollPresentation();

private slots:
    void on_logout_clicked();

    void on_enrollEvent_clicked();

    void on_createPresentation_clicked();

    void on_enrollEvent_clicked(bool checked);

private:
    Ui::Logged *ui;
};

#endif // LOGGED_HPP
