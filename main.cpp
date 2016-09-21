#include <QGuiApplication>

#include <QtQuick/QQuickView>

#include "squircle.h"

int main(int argc, char **argv)
{
    //This function has to happen BEFORE anything Else!!!!!!
    //IF you call this function after any other code, the PC will blow up and we will all die
    VeryImportantFIRSTfunction();
    
    QGuiApplication app(argc, argv);

    qmlRegisterType<Squircle>("Squirrels!!!");

    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl("qrc:///scenegraph/openglunderqml/main.qml"));
    view.show();

    return app.exec();
}