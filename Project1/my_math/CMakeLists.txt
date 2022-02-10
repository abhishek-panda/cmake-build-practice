add_library(my_math 
    src/addition.cpp
    src/division.cpp
)

#[[ Create a folder with the same name as library and move the header files
to that folder, for distinguishing the library name]]



#[[This can only be added after a target is created

Syntax:
    target_include_directories(target scope dir.. dir..)
    availale scope: PUBLIC | INTERFACE | PRIVATE
]]
# target_include_directories(my_math PUBLIC include)


target_include_directories(my_math PUBLIC
$<INSTALL_INTERFACE:include>
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)


#$<INSTALL_INTERFACE:include these are generators


#[[ If someone  wants to use our math library then we need to copy
    Headers: addition.h, division.h
    Targets  : my_math

message(${CMAKE_INSTALL_PREFIX})

]]


#[[ Install command to install library

    install (FILES <filename> DESTINATION <dir>)
        or
    install (TARGETS <tgt_name> DESTINATION <dir>)


    The default destination is /usr/local
    CMAKE_INSTALL_PREFIX => /usr/local


    Its recommended to copy install files as follows
    Header files : /usr/local/include/<packgae_name>
    Targets : /usr/local/lib/<packgae_name>


    This installation will install the library which can be consumed by other projects/library
    just like npm install


    The command to install as follows:

    > cd build
    > cmake ..
    > make
    > sudo make install

    To consume the library in other projects we have use find_package(<package_name>) in 
    that project. But first we have to fix discoverabilty of the library to other projects
    
    find_package(ABC) searches for ABC-config.cmake inside /usr/local/lib/ABC


    find_package(<package_name>)
]]




install(
    FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/my_math/addition.h  ${CMAKE_CURRENT_SOURCE_DIR}/include/my_math/division.h
    DESTINATION  ${CMAKE_INSTALL_PREFIX}/include/my_math)

install(TARGETS my_math EXPORT my_export DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/my_math)

install(EXPORT my_export FILE my_math-config.cmake DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/my_math)