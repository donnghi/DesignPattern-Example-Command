//
// Created by pc on 6/21/2018.
//

#ifndef COMMAND_DESIGNPATTERN_ICOMMAND_H
#define COMMAND_DESIGNPATTERN_ICOMMAND_H

#include <iostream>
class Command
{
public:
    virtual void execute() = 0;
};

#endif //COMMAND_DESIGNPATTERN_ICOMMAND_H
