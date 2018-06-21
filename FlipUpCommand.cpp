//
// Created by pc on 6/21/2018.
//

#include "FlipUpCommand.h"

FlipUpCommand::FlipUpCommand(Light &light) : theLight(light)
{
}

void FlipUpCommand::execute()
{
    this->theLight.turnOn();
}
