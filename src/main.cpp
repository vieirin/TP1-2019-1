#include <presentation/ticketsystem.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TicketSystem w;
    w.show();

    return a.exec();
}
