#include "sceneviewer.h"
#include <QApplication>
#include <dessinateur.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SceneViewer w;
    Dessinateur d;
    w.show();
    d.setPanneauView();

    return a.exec();
}
