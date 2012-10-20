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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::receiveAddress()
{
    emit sendAddress(ui->addressLine->toPlainText());
}
