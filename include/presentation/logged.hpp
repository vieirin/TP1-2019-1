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
private:
    Ui::Logged *ui;
};

#endif // LOGGED_HPP
