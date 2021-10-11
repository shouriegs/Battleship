project(Projects_in_class)

set(CMAKE_BUILD_TYPE Debug)

add_executable(battleship
    board.h
    battleshipplayer.cpp
    battleshipplayer.h
    vehicle.cpp
    vehicle.h
    battleship.cpp)

