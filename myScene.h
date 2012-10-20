#ifndef MYSCENE_H
#define MYSCENE_H

#include <QGraphicsScene>
#include <QtWebKit>

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
    void goToAdress();

protected:
    void timerEvent();

private:
    QWebView pageWindow;
};

#endif // MYSCENE_H
