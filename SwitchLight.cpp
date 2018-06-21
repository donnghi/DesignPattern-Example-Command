//
// Created by pc on 6/22/2018.
//

#include "SwitchLight.h"

SwitchLight::SwitchLight(Command &flipDownCommand, Command &flipUpCommand) : flipDownCommand(flipDownCommand),
                                                                             flipUpCommand(flipUpCommand) {}

void SwitchLight::flipUp()
{
    flipUpCommand.execute();
}

void SwitchLight::flipDown()
{
    flipDownCommand.execute();
}

