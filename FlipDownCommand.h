//
// Created by pc on 6/22/2018.
//

#ifndef COMMAND_DESIGNPATTERN_FLIPDOWNCOMMAND_H
#define COMMAND_DESIGNPATTERN_FLIPDOWNCOMMAND_H


#include "ICommand.h"
#include "Light.h"

class FlipDownCommand : public Command
{
protected:
    Light & theLight;
public:
    FlipDownCommand(Light &theLight);
    void execute() override;
};


#endif //COMMAND_DESIGNPATTERN_FLIPDOWNCOMMAND_H
