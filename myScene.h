#ifndef MYSCENE_H
#define MYSCENE_H

#include <QGraphicsScene>
#include <QtWebKit>
#include <QString>

class myScene : public QGraphicsScene
{
    Q_OBJECT

public:
    myScene(QObject *parent = 0);

public slots:
    void homepage();
    void back();
    void forward();
    void reload();
    void stop();
    void goToAddress(QString goThere);

private:
    QWebView pageWindow;

};

#endif // MYSCENE_H
