#include<iostream>
#include<stdio.h>
#include<string>
#include "battleshipplayer.h"

using namespace std;

int main()
{
    srand(time(nullptr));
    cout<<"Namaste"<<endl;

    int trialScore=0;
    int toWinScore=14;
    battleshipPlayer player1;
    //player1.displayGrid();

    battleshipPlayer player2;
    //player2.displayGrid();

    player1.getPlayerType(1);
    player2.getPlayerType(2);

    battleshipPlayer::displayMemoryGrids(player1, player2);
    battleshipPlayer::displayGameGrids(player1,player2);

    while(toWinScore-player1.missScore<14 && toWinScore-player2.missScore<14)
    {
        player1.getInput();
        player2.getInput();
        battleshipPlayer::executeAttack(player1,player2);
        battleshipPlayer::displayGameGrids(player1,player2);
    }


    battleshipPlayer::displayGameGrids(player1,player2);

    if(toWinScore-player1.missScore > toWinScore-player2.missScore)
    {
        cout<<"PLAYER 1 WON!"<<endl;
    }
    else
    {
        cout<<"PLAYER 2 WON!"<<endl;
    }


    return 0;
}
