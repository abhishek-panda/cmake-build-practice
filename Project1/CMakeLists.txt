#[[Common practice to specify the minimum Cmake version ]]
cmake_minimum_required(VERSION 3.0.0)


#[[Every CMake project requires a name and optional version ]]
project(Calculator_Project VERSION 1.0.0)


#[[Adds a subdirectory to the build. The sub-directory must contain the 
CMakeLists.txt file]]

add_subdirectory(my_math)
add_subdirectory(my_print)


#[[This command is used to add library ]]

#[[
Moving these command to inner sub-folders

add_library(my_math 
    addition.cpp
    division.cpp
)

add_library(my_print
    print_result.cpp
)

]]


#[[This command is used when we want an executable at the end of the 
build process
Syntax: add_executable(executable_name filesname)
]]
add_executable(calculator
    main.cpp
)


#[[This command is used to link libraries to an executable ]]
target_link_libraries(calculator my_math my_print)


