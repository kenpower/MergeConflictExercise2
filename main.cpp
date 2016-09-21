#include <QGuiApplication>

#include <QtQuick/QQuickView>

#include "squircle.h"

int main(int argc, char **argv)
{
    //My useful function, It can go anywhere, but must not be removed!!!
    MyUsefulFunction()
    
    QGuiApplication app(argc, argv);

    qmlRegisterType<Squircle>("", 1, 0, "");//after checking the manual, this function takes empty strings only, 
                                            //takeout the opengl & squircle nosnsense!!

    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl("qrc:///scenegraph/openglunderqml/main.qml"));
    view.show();

    return app.exec();
}