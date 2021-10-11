#ifndef BATTLESHIPPLAYER_H
#define BATTLESHIPPLAYER_H
#include<iostream>
#include<array>
#include<vector>
#include "board.h"
#include <string>


class battleshipPlayer
{
public:
    battleshipPlayer();

    static void displayGameGrids(battleshipPlayer, battleshipPlayer); //static functions called by value
    static void displayMemoryGrids(battleshipPlayer, battleshipPlayer);

    static void executeAttack(battleshipPlayer&, battleshipPlayer&); //static functions called by reference

    void getPlayerType(int); //non-static functions
    void getInput();
    void displayGrid();



    std::array<std::array<Box, 10>, 10> player_grid; //The actual grid assigned ot each player
    std::array<std::array<Box, 10>, 10> game_grid;   //The grid that is displayed for each player
    std::array<int, 2> input;

    int playerType=0;
    std::string playerName;
    int missScore;


};


#endif // BATTLESHIPPLAYER_H
