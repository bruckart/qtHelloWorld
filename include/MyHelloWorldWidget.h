#ifndef MYHELLOWORLDLWIDGET_H
#define MYHELLOWORLDLWIDGET_H


#include <QWidget>


namespace Ui
{
    class MyHelloWorldWidget;
}

class MyHelloWorldWidget : public QWidget
{
    Q_OBJECT

public:
    MyHelloWorldWidget(QWidget* parent=0);
    virtual ~MyHelloWorldWidget();

protected:

private:

    Ui::MyHelloWorldWidget* ui;
};

#endif // MYHELLOWORLDLWIDGET_H