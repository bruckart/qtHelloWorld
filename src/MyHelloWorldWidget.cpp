


#include "MyHelloWorldWidget.h"

#include "ui_MyHelloWorldWidget.h"


MyHelloWorldWidget::MyHelloWorldWidget(QWidget* parent)
:
    QWidget(parent),
    ui(new Ui::MyHelloWorldWidget)
{
    ui->setupUi(this);



}

MyHelloWorldWidget::~MyHelloWorldWidget()
{
    delete ui;
}
