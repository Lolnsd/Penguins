#include <stdio.h>
#include <stdlib.h>
#include "check_if.h"
#include "dataTypes.h"
#include "board.h"
#include "io.h"
/*
void dimensionsOfBoard(){
    printf("Give me dimensions of board: ");
    scanf("%d %d", &xBoard, &yBoard);
}

void howManyPlayersAndPenguins(){
    printf("Give me number of players: ");
    scanf("%d", &players);
    printf("Give me number of penguins per player: ");
    scanf("%d", &penguins);


}

void generateBoard(int x, int y){

}

void givePenguins(int howManyPenguins){

}

void generateIceFloe(int x, int y){

}

void setCurrentPlayerTo1(){

}

int areAnyPenguinsOnHand(){
    return 1;
}

int areThereAnyUnplacedPenguinsForCurrentPlayer(){
    return 1;
}

void askForPenguinCoordinates(){

}

int checkIfCoordinatesAreOK(){
    return 1;
}

void placeThePenguin(){

}

void changePlayer(){

}

int canAnyPenguinMove(){
    return 1;
}

int canAnyPenguinMoveForCurrentPlayer(){
    return 1;
}

void selectTheMovementOfThePenguin(){

}

int isMoveValid(){
    return 1;
}

void moveThePenguin(){

}

void addTheFishes(){

}

void removePreviousTile(){

}

int anyAccessibleFishes(){
    return 1;
}

int anyValidMoves(){
    return 1;

}

void gameOver(){

}
*/

int main() {
    //int x,y;
    //printf("X ");
    //scanf("%d", &x);
    //printf("Y ");
    //scanf("%d", &y);

    //Asking player about dimensions of the board
    StateOfTheGame stateOfTheGame = dimensionsOfBoard();
    //Generating and printing the board
    stateOfTheGame = generateBoard(stateOfTheGame.boardX, stateOfTheGame.boardY);
    printBoard(stateOfTheGame);


//Preparation phase
/*
    dimensionsOfBoard();
    howManyPlayersAndPenguins();
    generateBoard(xBoard,yBoard);
    givePenguins(penguins);
    generateIceFloe(xBoard, yBoard);

    while(areAnyPenguinsOnHand()){
        while(areThereAnyUnplacedPenguinsForCurrentPlayer>0){
            askForPenguinCoordinates();
            if(checkIfCoordinatesAreOK()){
                placeThePenguin();
                changePlayer();
            }
            else{
                printf("You can't put your penguin there, try again!\n");
            }
        }

    }

//Movement phase
    while(anyValidMoves){
        int currentPlayer = canAnyPenguinMoveForCurrentPlayer();
        while(currentPlayer){
            selectTheMovementOfThePenguin();
            if(isMoveValid()){
                moveThePenguin();
                addTheFishes();
                removePreviousTile();
                currentPlayer = 0;
            }
            else{
                printf ("Movement is invalid, try again\n");
            }
        }
        if(anyAccessibleFishes()){
            changePlayer();
        }
        else
            break;
    }

    gameOver();
    */
}
