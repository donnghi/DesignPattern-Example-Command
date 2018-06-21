cmake_minimum_required(VERSION 3.9)
project(Command_DesignPattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(Command_DesignPattern main.cpp ICommand.h Light.cpp Light.h FlipUpCommand.cpp FlipUpCommand.h FlipDownCommand.cpp FlipDownCommand.h SwitchLight.cpp SwitchLight.h)