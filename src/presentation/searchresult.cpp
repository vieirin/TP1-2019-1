#include <presentation/searchresult.hpp>
#include <ui_searchresult.h>
#include <QDate>
#include <QLabel>
#include <presentation/resultinfo.h>

SearchResult::SearchResult(QWidget *parent,  std::list<std::shared_ptr<Event>> found_events) :
    QWidget (parent),
    ui(new Ui::SearchResult)
{
    ui->setupUi(this);
    this->found_events = found_events;
    for (auto event : this->found_events) {
        auto result = new ResultInfo(this, event->getName(), event->getType(), event->getAgeGroup());
        ui->stackedWidget->addWidget(result);
        ui->stackedWidget->resize(ui->stackedWidget->width()+300, ui->stackedWidget->height());
    }
}

SearchResult::~SearchResult()
{
    delete ui;
}
