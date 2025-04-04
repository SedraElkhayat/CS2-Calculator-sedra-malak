cmake_minimum_required(VERSION 3.10)    

project(calculator)

set(SOURCE_FILES                       
    calculator.cpp
    test.cpp	   
)

add_executable(calc  ${SOURCE_FILES})   