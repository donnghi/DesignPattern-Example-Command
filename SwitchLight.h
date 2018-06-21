//
// Created by pc on 6/22/2018.
//

#ifndef COMMAND_DESIGNPATTERN_SWITCHLIGHT_H
#define COMMAND_DESIGNPATTERN_SWITCHLIGHT_H


#include "ICommand.h"

class SwitchLight {
protected:
    Command &flipDownCommand;
    Command &flipUpCommand;
public:
    SwitchLight(Command &flipDownCommand, Command &flipUpCommand);
    void flipUp();
    void flipDown();
};


#endif //COMMAND_DESIGNPATTERN_SWITCHLIGHT_H
