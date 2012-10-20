#include "myScene.h"
#include <QGraphicsItem>
#include <QtCore>

myScene::myScene(QObject *parent) : QGraphicsScene(parent)
{
    addWidget(&pageWindow);
    pageWindow.load(QUrl("http://yandex.com/"));
    pageWindow.show();
    connect(this, SIGNAL(back()), &pageWindow, SLOT(back()));
    connect(this, SIGNAL(forward()), &pageWindow, SLOT(forward()));
    connect(this, SIGNAL(reload()), &pageWindow, SLOT(reload()));
    connect(this, SIGNAL(stop()), &pageWindow, SLOT(stop()));
}

void myScene::homepage()
{
    pageWindow.load(QUrl("http://google.com/"));
}

void myScene::goToAddress(QString goThere)
{
    pageWindow.load(QUrl(goThere));
}
