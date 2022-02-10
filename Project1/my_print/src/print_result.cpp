#include<iostream>
#include "my_print/print_result.h"

/**
 * This can be done by using relative path  or CMake commands target_include_directories
 * 
 * #include "../include/print_result.h"
 * 
 * */


void printResult (std::string message, float result) {
    std::cout << message.c_str() << result << std::endl;
}