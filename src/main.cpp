#include <QApplication>
#include "MyHelloWorldWidget.h"


int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    app.setOrganizationName("");
    app.setApplicationName("qtUuidFactory");
    app.setApplicationVersion("1.0.0");

    MyHelloWorldWidget w;
    w.show();

    return app.exec();
}