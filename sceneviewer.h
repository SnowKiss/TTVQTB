#ifndef SCENEVIEWER_H
#define SCENEVIEWER_H

#include <QMainWindow>
#include <QHBoxLayout>

namespace Ui {
class SceneViewer;
}

class SceneViewer : public QMainWindow
{
    Q_OBJECT

public:
    SceneViewer(QWidget *parent = 0);
    ~SceneViewer();
    void clearScene();

private:
    Ui::SceneViewer *ui;
};

#endif // SCENEVIEWER_H
