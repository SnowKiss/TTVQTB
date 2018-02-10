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

void SceneViewer::clearScene()
{
    // récupère la liste des widgets qui appartiennent à la fenetre courante et les supprime
    qDeleteAll(this->layout()->children());
    //delete this->layout();
}
