#ifndef TICKETSYSTEM_H
#define TICKETSYSTEM_H

#include <QMainWindow>
#include <presentation/login.h>

namespace Ui {
class TicketSystem;
}

class TicketSystem : public QMainWindow
{
    Q_OBJECT

public:
    explicit TicketSystem(QWidget *parent = nullptr);
    ~TicketSystem();

private slots:

    void on_actionQuit_triggered();

    void on_login_clicked();
private:
    Login *loginWindow;
    Ui::TicketSystem *ui;
};

#endif // TICKETSYSTEM_H
