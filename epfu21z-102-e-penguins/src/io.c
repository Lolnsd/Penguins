#include "io.h"
#include "dataTypes.h"
#include <stdio.h>

void askForPenguinCoordinates(){

}

StateOfTheGame dimensionsOfBoard(){
    StateOfTheGame stateOfTheGame;
   printf("Give me dimensions of board: ");
   scanf("%d %d", &stateOfTheGame.boardX,&stateOfTheGame.boardY);
   return stateOfTheGame;

}


void howManyPlayersAndPenguins(){
    printf("Give me number of players: ");
    //scanf("%d", &players);
   printf("Give me number of penguins per player: ");
   //scanf("%d", &penguins);
   
   
}