#ifndef PANNEAU_H
#define PANNEAU_H
#include <scene.h>
#include <string>

class Panneau : public Scene
{
private:
    std::string texte;
public:
    Panneau();
};

#endif // PANNEAU_H
