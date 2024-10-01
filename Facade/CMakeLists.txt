cmake_minimum_required(VERSION 3.29)
project(Facade)

set(CMAKE_CXX_STANDARD 20)

add_executable(Facade main.cpp
        Subsystems/Lights.h
        Subsystems/Thermostat.h
        Subsystems/SecuritySystem.h
        Subsystems/EntertainmentSystem.h
        Pattern/Facade.h
        AutomatedSystem/AutomatedSystem.h
        AutomatedSystem/AutomatedSystem.cpp
        Subsystems/Computer.h)
