#ifndef SCENEVIEWER_H
#define SCENEVIEWER_H

#include <QMainWindow>

namespace Ui {
class SceneViewer;
}

class SceneViewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit SceneViewer(QWidget *parent = 0);
    ~SceneViewer();

private:
    Ui::SceneViewer *ui;
};

#endif // SCENEVIEWER_H
