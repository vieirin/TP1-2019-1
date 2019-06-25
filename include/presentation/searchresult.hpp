#ifndef SearchResult_H_
#define SearchResult_H_

#include <QWidget>

namespace Ui {
class SearchResult;
}

class SearchResult : public QWidget
{
    Q_OBJECT
public:
    SearchResult(QWidget *parent);
    ~SearchResult();
private slots:

private:
    Ui::SearchResult *ui;

};

#endif
