//
// Created by pc on 6/21/2018.
//

#ifndef COMMAND_DESIGNPATTERN_FLIPUPCOMMAND_H
#define COMMAND_DESIGNPATTERN_FLIPUPCOMMAND_H


#include "Light.h"
#include "ICommand.h"

class FlipUpCommand : public Command
{
protected:
    Light &theLight;
public:
    FlipUpCommand(Light &light);
    void execute() override;
};


#endif //COMMAND_DESIGNPATTERN_FLIPUPCOMMAND_H
