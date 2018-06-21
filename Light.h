//
// Created by pc on 6/21/2018.
//

#ifndef COMMAND_DESIGNPATTERN_LIGHT_H
#define COMMAND_DESIGNPATTERN_LIGHT_H


class Light
{
protected:
    int state;
public:
    Light(int state);
    void turnOn();
    void turnOff();

    int getState() const;

    void setState(int state);
};


#endif //COMMAND_DESIGNPATTERN_LIGHT_H
