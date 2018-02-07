#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H


class InputManager
{
private:
    float x;
    float y;
public:
    InputManager();
    float getX() const;
    float getY() const;
};

#endif // INPUTMANAGER_H
