#ifndef DESSINATEUR_H
#define DESSINATEUR_H
#include <scene.h>
#include <panneau.h>
#include <sceneviewer.h>
#include <QApplication>

class Dessinateur
{
private:
    Scene* currentScene;
    //SceneViewer* view;
public:
    Dessinateur();

    // changement de vue
    void setPanneauView();
    void setDrinkView();
    void setKeyView();
    void setWalkView();
    void setView(SceneViewer &value);

    SceneViewer* getMainWindow();
};

#endif // DESSINATEUR_H
