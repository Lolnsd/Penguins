#ifndef check_if
#define check_if
#include "dataTypes.h"

int areAnyPenguinsOnHand();
   /**
   *function that will check if there are any penguins left overall
   *
   *return zero or one
   */

int areThereAnyUnplacedPenguinsForCurrentPlayer();
   /**
   *function that will check if there are any unplaced penguins left for current player
   *
   *return zero or one
   */

int checkIfCoordinatesAreOK();
   /**
   *function that will check if the penguin is placed correctly
   *
   *return zero or one
   */

int canAnyPenguinMove();
   /**
   *function that will check if any penguin can move overall - not blocked
   *
   *return zero or one
   */

int canAnyPenguinMoveForCurrentPlayer();
   /**
   *function that will check if any penguin can move for the current player
   *
   *return zero or one
   */

int isMoveValid();
   /**
   *function that will check if the move is valid - no penguins or water tile on the way
   *
   *return zero or one
   */

int anyAccessibleFishes();
   /**
   *function that will check if there are any fishes that can be picked - no surrounded by water
   *
   *return zero or one
   */

int anyValidMoves();
   /**
   *function that will check if any penguin can make a valid move
   *
   *return zero or one
   */

#endif //check_if
