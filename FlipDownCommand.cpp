//
// Created by pc on 6/22/2018.
//

#include "FlipDownCommand.h"

FlipDownCommand::FlipDownCommand(Light &theLight) : theLight(theLight) {}

void FlipDownCommand::execute()
{
    this->theLight.turnOff();
}
