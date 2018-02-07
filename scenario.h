#ifndef SCENARIO_H
#define SCENARIO_H
#include <vector>
#include <scene.h>

class Scenario
{
private:
    std::vector<Scene> scenes;
public:
    Scenario();
    void ajouterScene(Scene s);
    void start();
};

#endif // SCENARIO_H
