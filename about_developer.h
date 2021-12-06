#ifndef ABOUT_DEVELOPER_H
#define ABOUT_DEVELOPER_H

#include <QWidget>

namespace Ui {
class About_developer;
}

class About_developer : public QWidget
{
    Q_OBJECT

public:
    explicit About_developer(QWidget *parent = nullptr);
    ~About_developer();

private:
    Ui::About_developer *ui;
};

#endif // ABOUT_DEVELOPER_H
