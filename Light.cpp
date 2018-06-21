//
// Created by pc on 6/21/2018.
//
#include <iostream>
#include "Light.h"

Light::Light(int state=0) : state(state)
{
    if (1 < state) state = 1;
    else if (state < 0) state = 0;
    if (state == 0)
        std::cout << "Initialize the light is Off" << std::endl;
    else
        std::cout << "Initialize the light is On" << std::endl;
}

void Light::turnOn()
{
    std::cout << "On()" << std::endl;
    state = 1 - state;
    if (state == 0)
        std::cout << "Turn the light On to Off" << std::endl;
    else
        std::cout << "Turn the light Off to On" << std::endl;
}

void Light::turnOff()
{
    std::cout << "Off()" << std::endl;
    state = 1 - state;
    if (state == 0)
        std::cout << "Turn the light On to Off" << std::endl;
    else
        std::cout << "Turn the light Off to On" << std::endl;
}

int Light::getState() const {
    return state;
}

void Light::setState(int state) {
    Light::state = state;
}

