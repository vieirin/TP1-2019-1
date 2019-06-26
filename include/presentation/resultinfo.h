#ifndef RESULTINFO_H
#define RESULTINFO_H


#include <QWidget>

namespace Ui {
class ResultInfo;
}

class ResultInfo : public QWidget
{
    Q_OBJECT
public:
    ResultInfo(QWidget *parent, std::string, std::string, std::string);
    virtual ~ResultInfo() {}
private slots:
    void on_okButton_clicked();

private:
    Ui::ResultInfo *ui;
};


#endif // RESULTINFO_H
