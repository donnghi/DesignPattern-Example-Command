#include <iostream>
#include "Light.h"
#include "FlipUpCommand.h"
#include "FlipDownCommand.h"
#include "SwitchLight.h"

int main() {
    Light lamp(0);
    FlipUpCommand upCommand(lamp);
    FlipDownCommand downCommand(lamp);

    SwitchLight switchLight(downCommand, upCommand);

    switchLight.flipUp();
    switchLight.flipDown();

    return 0;
}