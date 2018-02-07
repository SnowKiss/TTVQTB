#include "sceneviewer.h"
#include "ui_sceneviewer.h"

SceneViewer::SceneViewer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SceneViewer)
{
    ui->setupUi(this);
}

SceneViewer::~SceneViewer()
{
    delete ui;
}
