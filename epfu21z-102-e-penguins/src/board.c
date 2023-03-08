#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "dataTypes.h"

StateOfTheGame generateBoard(int x, int y)
{
    time_t t;           //preparing randomly chosen numbers
    srand(time(&t));

    StateOfTheGame stateOfTheGame;      //creating main game info structure
    stateOfTheGame.boardX = x;
    stateOfTheGame.boardY = y;
    int i,j;

    for(i = 0; i < y; i++){
        for(j = 0; j < x; j++){
            stateOfTheGame.board[i][j] = 10 * (rand()%4);
        }
    }
    stateOfTheGame.numberOfPlayers = 0;
    return stateOfTheGame;
}

void printBoard(StateOfTheGame stateOfTheGame){
    int i, j;
    for(i = 0 ; i < stateOfTheGame.boardY; i++){
        for(j = 0; j < stateOfTheGame.boardX; j++){
            if (stateOfTheGame.board[i][j] < 10){
                printf("0");
            }
            printf("%d ", stateOfTheGame.board[i][j]);
        }
        printf("\n");
    }

}




