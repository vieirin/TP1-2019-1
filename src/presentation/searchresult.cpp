#include <presentation/searchresult.hpp>
#include <ui_searchresult.h>
#include <QDate>

SearchResult::SearchResult(QWidget *parent) :
    QWidget (parent),
    ui(new Ui::SearchResult)
{
    ui->setupUi(this);
}

SearchResult::~SearchResult()
{
    delete ui;
}
