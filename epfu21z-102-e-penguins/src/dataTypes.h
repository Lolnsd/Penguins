#ifndef DATATYPES_H_INCLUDED
#define DATATYPES_H_INCLUDED

//Struct that will hold info about initial placement of penguins
typedef struct{
    int x, y;       //coordinates of penguin
    int playerID;   //which player
}InputPlacement;

//Struct that will keep info about all game's settings
typedef struct{
    int numberOfPlayers;        // how many players
    char playerNames[9][100];   // players
    int playerScores[9];        // scores
    int boardX, boardY;         //dimensions of board
    int board[250][250];        //randomly generated tiles
}StateOfTheGame;

//Struct that will hold info about move of the penguin
typedef struct{
    int x,y;                //starting point of movement
    int xMove, yMove;       //ending point of movement
    int playerID;           //which player
}InputPath;

#endif




