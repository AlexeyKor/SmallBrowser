#include "mainWindow.h"
#include "myScene.h"
#include "ui_mainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myScene *scene = new myScene;
    ui->myScene->setScene(scene);
    connect(ui->addressLine, SIGNAL(textChanged()), this, SLOT(receiveAddress()));
    connect(this, SIGNAL(sendAddress(QString)), scene, SLOT(goToAddress(QString)));
    connect(ui->homepage, SIGNAL(clicked()), scene, SLOT(homepage()));
    connect(ui->back, SIGNAL(clicked()), scene, SIGNAL(back()));
    connect(ui->forward, SIGNAL(clicked()), scene, SIGNAL(forward()));
    connect(ui->reload, SIGNAL(clicked()), scene, SIGNAL(reload()));
    connect(ui->stop, SIGNAL(clicked()), scene, SIGNAL(stop()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::receiveAddress()
{
    emit sendAddress(ui->addressLine->toPlainText());
}
