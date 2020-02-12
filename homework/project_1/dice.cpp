// Name : Reece Reklai
// Date : 2/9/2020
// Runs in connection with dice.h and initializes the dice.h

#include "dice.h"  // Class Dice Origin
#include <cstdlib> // for exit

Dice::Dice() { this->diceFace = 0; }                     // Constructor
int Dice::getDiceFace() const { return this->diceFace; } // Returns DiceFace
void Dice::setDiceFace() {
  this->diceFace = rand() % 6 + 1;
} // Returns random dice value between 1 to 6