#ifndef RECEIPT_H_
#define RECEIPT_H_

#include <QWidget>

namespace Ui {
class Receipt;
}

class Receipt : public QWidget
{
    Q_OBJECT
public:
    Receipt(QWidget *parent, std::string cpf);
    virtual ~Receipt() {}
private slots:
    void on_okButton_clicked();

private:
    Ui::Receipt *ui;
    std::string cpf;
};

#endif
