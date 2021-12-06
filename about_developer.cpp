#include "about_developer.h"
#include "ui_about_developer.h"
#include <QLabel>

About_developer::About_developer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::About_developer)
{
    ui->setupUi(this);

}

About_developer::~About_developer()
{
    delete ui;
}
