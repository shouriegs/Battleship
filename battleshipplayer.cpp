#include "battleshipplayer.h"
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<list>
#include<random>

using namespace std;

unsigned int getRandomInteger(const unsigned int max)
{
    return static_cast<unsigned int>(rand())%max;
}

battleshipPlayer::battleshipPlayer()
{
    //vector of pairs of data
    std::list <std::pair <int,int>> listOfFilledPoints;

    std::vector<std::pair<BoxContent,unsigned int>> boats_list
    {
        {BoxContent::AIRCRAFT, 5},
        {BoxContent::CRUISE, 4},
        {BoxContent::DESTROYER, 3},
        {BoxContent::SUBMARINE, 2},
        {BoxContent::SEA, 1},
        {BoxContent::NOTATTACKED, 1},
    };

    for (const auto [boat_type, boat_length] : boats_list)
    {
        if(boat_type!=BoxContent::NOTATTACKED)
        {
            bool vertical_boat=getRandomInteger(2);
            comeback:
            unsigned int col = vertical_boat ? getRandomInteger(10) : getRandomInteger(10-boat_length);
            unsigned int row = vertical_boat ? getRandomInteger(10-boat_length) : getRandomInteger(10);
            int ccol=col;
            int crow=row;
            pair <int,int> currentPoint{col,row};

            list<std::pair <int,int>>::iterator it;

            //it=std::find(listOfFilledPoints.begin(), listOfFilledPoints.end(), currentPoint);

            for(unsigned int step=0; step<boat_length; step++)
            {
                it=std::find(listOfFilledPoints.begin(), listOfFilledPoints.end(), currentPoint);
                if(it!=listOfFilledPoints.end())
                {
                    goto comeback;
                }
                else
                {
                    if(vertical_boat)
                        row++;
                    else
                        col++;
                }
                currentPoint={col,row};
            }
            col=ccol;
            row=crow;

            for(unsigned int step=0; step<boat_length; step++)
            {

                player_grid[row][col].content = boat_type;
                listOfFilledPoints.push_back({col,row});
                if(vertical_boat)
                    row++;
                else
                    col++;
            }
        }
        else
        {
            for(int i=0;i<10;i++)
            {
                for(int j=0;j<10;j++)
                {
                    game_grid[i][j].content=boat_type;
                }
            }
        }

    }




}

      /*     //  I want to create my boats
    const unsigned int boat_length = 4;
    bool vertical_boat = getRandomInteger(2);

    // We place the boat vertically
    //                      statment ?      if true do this : if false do this
    unsigned int col = vertical_boat ? getRandomInteger(10) : getRandomInteger(10 - boat_length);
    unsigned int row = vertical_boat ? getRandomInteger(10 - boat_length) : getRandomInteger(10);

    for (unsigned int step=0;step<boat_length;step++)
    {
        player_grid[row][col].content = BoxContent::AIRCRAFT;
        if(vertical_boat)
           row ++; //  Increase the row
        else
           col ++; //  Increase the column
    }*/


void battleshipPlayer::displayGrid()
{
    cout<<"   ";
    for(int i=0; i<10; i++)
    {
        cout<<i<<"  ";
        
    }
    cout<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<i<<" ";

        for(int j=0;j<10; j++)
        {
            cout<<"|"<<player_grid[i][j].displayBoxContent()<<"|";

        }
        cout<<""<<endl;
    }
}

void battleshipPlayer::displayGameGrids(battleshipPlayer _player1, battleshipPlayer _player2)
{
    cout<<"            PLAYER 1                             PLAYER 2"<<endl;
    cout<<"   ";
    for(int i=0; i<10; i++)
    {
        cout<<i<<"  ";

    }
    cout<<"    ";

    cout<<"   ";
    for(int i=0; i<10; i++)
    {
        cout<<i<<"  ";

    }
    cout<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<i<<" ";

        for(int j=0;j<10; j++)
        {
            cout<<"|"<<_player1.game_grid[i][j].displayBoxContent()<<"|";

        }
        cout<<"       ";
        for(int j=0;j<10; j++)
        {
            cout<<"|"<<_player2.game_grid[i][j].displayBoxContent()<<"|";

        }
        cout<<""<<endl;
    }
}

void battleshipPlayer::displayMemoryGrids(battleshipPlayer _player1, battleshipPlayer _player2)
{
    cout<<"            PLAYER 1                             PLAYER 2"<<endl;
    cout<<"   ";
    for(int i=0; i<10; i++)
    {
        cout<<i<<"  ";

    }
    cout<<"    ";

    cout<<"   ";
    for(int i=0; i<10; i++)
    {
        cout<<i<<"  ";

    }
    cout<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<i<<" ";

        for(int j=0;j<10; j++)
        {
            cout<<"|"<<_player1.player_grid[i][j].displayBoxContent()<<"|";

        }
        cout<<"       ";
        for(int j=0;j<10; j++)
        {
            cout<<"|"<<_player2.player_grid[i][j].displayBoxContent()<<"|";

        }
        cout<<""<<endl;
    }
}

void battleshipPlayer::getInput()
{
    default_random_engine generator;
    int a = 0, b = 9;
    uniform_int_distribution<int> distribution(a, b);

    if(playerType==0) //player is computer
    {
        do
        {
            input[0]=distribution(generator);
            input[1]=distribution(generator);
        }while(game_grid[input[0]][input[1]].content==BoxContent::MISSED);
    }
    else
    {
        cout<<"Enter row coordinate for attack: ";
        cin>>input[0];

        cout<<"Enter column coordinate for attack: ";
        cin>>input[1];
    }
    //cout<<"Input row "<<input[0]<<" input column "<<input[1]<<endl;
}

void battleshipPlayer::executeAttack(battleshipPlayer& _player1, battleshipPlayer& _player2)
{
    int row1=_player1.input[0];
    int col1=_player1.input[1];

    int row2=_player2.input[0];
    int col2=_player2.input[1];

    if(_player2.player_grid[row1][col1].content==BoxContent::SEA)
    {
        _player2.game_grid[row1][col1].content=BoxContent::MISSED;   
        _player1.missScore+=1;

    }
    else
    {
        _player2.game_grid[row1][col1].content=_player2.player_grid[row1][col1].content;

    }

    if(_player1.player_grid[row2][col2].content==BoxContent::SEA)
    {
        _player1.game_grid[row2][col2].content=BoxContent::MISSED;
        _player2.missScore+=1;

    }
    else
    {
        _player1.game_grid[row2][col2].content=_player1.player_grid[row2][col2].content;

    }
}

void battleshipPlayer::getPlayerType(int _i)
{
    char choice;
    cout<<"Is player"<<_i<<" supposed to be the computer? (y/n)";
    cin>>choice;
    if(choice=='y')
    {
        playerType=0;
        playerName="COMPUTER1";
    }
    else
    {
        playerType=1;
        cout<<"Enter player"<<_i<<" name: ";
        cin>>playerName;
    }

}

