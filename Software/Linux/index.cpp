#include "Components/ConnectionPage.cpp"

#include <qt/QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ConnectionComponent connectionScreen;
    connectionScreen.show();

    return app.exec();
}