#include "myScene.h"
#include <QGraphicsItem>
#include <QtCore>

myScene::myScene(QObject *parent) : QGraphicsScene(parent)
{
    //QWebView *view = new QWebView;
    addWidget(&pageWindow);
    pageWindow.load(QUrl("http://yandex.com/"));
    pageWindow.show();
}

void myScene::homepage()
{
    pageWindow.load(QUrl("http://google.com/"));
}

void myScene::back()
{
}

void myScene::forward()
{
}

void myScene::reload()
{
}

void myScene::stop()
{
}

void myScene::goToAdress()
{
}
