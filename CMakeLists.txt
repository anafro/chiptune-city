cmake_minimum_required(VERSION 3.23)
project(ChiptuneCity)

set(CMAKE_CXX_STANDARD 23)

add_executable(
    ChiptuneCity 
    
    main.cpp 
    
    ChiptuneCity/ChiptuneCity.h
    ChiptuneCity/Oscillator.h
)