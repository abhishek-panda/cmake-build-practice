cmake_minimum_required(VERSION 3.0.0)


project(Test_Project VERSION 1.0.0)

#[[
    Find package can operate in 2 modes
    1. Module mode : Findmy_math.cmake
    2. Config mode : my_math-config.cmake
]]
find_package(my_math)

if(my_math_FOUND)
    message("Pacakge found")
    add_executable(test main.cpp)
    target_link_libraries(test my_math)
else()
    message("No package found")
endif()