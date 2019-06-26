#ifndef SearchResult_H_
#define SearchResult_H_

#include <QWidget>
#include <entities/Event.hpp>
#include <list>
#include <memory>

namespace Ui {
class SearchResult;
}

class SearchResult : public QWidget
{
    Q_OBJECT
public:
    SearchResult(QWidget *parent, std::list<std::shared_ptr<Event>> found_events);
    ~SearchResult();
private slots:

private:
    Ui::SearchResult *ui;
    std::list<std::shared_ptr<Event>> found_events;
};

#endif
