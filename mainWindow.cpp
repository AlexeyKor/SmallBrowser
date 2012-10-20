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
    connect(ui->homepage, SIGNAL(clicked()), scene, SLOT(homepage()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
