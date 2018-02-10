
#include "dessinateur.h"
#include <QHBoxLayout>
#include <QLabel>

Dessinateur::Dessinateur()
{
    //this->setView(mainWindow);
}

void Dessinateur::setPanneauView()
{
    // on récupère la mainWindow
    SceneViewer* vue = getMainWindow();

    // on clean la fenetre
    //vue->clearScene();

    // on met à jour le contenu
    QLabel *texte = new QLabel("Coucou",vue);
    texte->show();
    vue->setGeometry(200,200,1000,600);
    vue->setStyleSheet("background-color:rgb(250,0,0);");


}

SceneViewer* Dessinateur::getMainWindow()
{
    foreach (QWidget *w, qApp->topLevelWidgets())
        if (SceneViewer* mainWin = qobject_cast<SceneViewer*>(w))
            return mainWin;
    return nullptr;
}
