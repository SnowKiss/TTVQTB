#include "sceneviewer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SceneViewer w;
    w.show();

    return a.exec();
}
