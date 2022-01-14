#include "headers/ConnectionPage.h"
#include <qt/QtWidgets/QPushButton>

ConnectionComponent::ConnectionComponent(QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle("Connection Page");

    setMinimumSize(800, 450);

    QPushButton *login = new QPushButton("Login", this);
    login->move(150, 150);

    QPushButton *signup = new QPushButton("Sign up", this);

}

