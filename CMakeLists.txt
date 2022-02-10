cmake_minimum_required(VERSION 3.0.0)

message("Hello World!")

set(NAME "BOB Smith") # Setting a string to name. This is also a list
set(SKILLS Gaming Riding) #Setting list of skills
set(HEIGHT 190)

message("Hello, my name is ${NAME}, my height is ${HEIGHT}. I like to ${SKILLS}")


#[[ 
    List expression : 
    list(<subcommand> <name_of_list> ...item ...item <return_value>)
    subcommands: APPEND | INSERT | FILTER | GET | JOIN


    String
    
    string(<subcommand> )
]]


set(FRUITS "Apple" "Orange" "Banana")
set(VEGETABLES "Tomata" "Potato" "Carrot")

list(APPEND FRUITS "Jackfruit")

#[[  string() ]]




message("All Veg items :  ${FRUITS}")


set(FLAG YES)
if (FLAG)
    message("If block executed")
else()
    message("Else block executed")
endif()


if (DEFINED FLAG)
    message("Flag is defined")
else()
    message("Flag is not defined")
endif()