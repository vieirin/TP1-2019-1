#ifndef ENROLLEVENT_H
#define ENROLLEVENT_H

#include <QWidget>

namespace Ui {
    class EnrollEvent;
}

class EnrollEvent : public QWidget
{
    Q_OBJECT
public:
    explicit EnrollEvent(QWidget *parent);
    ~EnrollEvent();
private:
    Ui::EnrollEvent *ui;

signals:

public slots:
};

#endif // ENROLLEVENT_H
