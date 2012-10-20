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
    void goToAddress(QString goThere);

signals:
    void back();
    void forward();
    void reload();
    void stop();

private:
    QWebView pageWindow;

};

#endif // MYSCENE_H
