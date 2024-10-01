cmake_minimum_required(VERSION 3.29)
project(structuralPatterns)

set(CMAKE_CXX_STANDARD 14)

include_directories(Adapter)

add_executable(structuralPatterns
        Adapter/Adapter.h
        Main.cpp
        Games/Game8Bit.h
        Games/Game16Bit.h
        Controller/ModernController.h
        AdapterConcrets/Game8BitAdapter.h
        AdapterConcrets/Game16BitAdapter.h)
