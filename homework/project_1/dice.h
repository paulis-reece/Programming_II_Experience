

#ifndef DICE_H
#define DICE_H
// Class Dice Function
class Dice {
public:
  Dice();
  int getDiceFace() const; // Dice Accessor
  void setDiceFace(); // Dice Mutator

private:
  int diceFace; // The shared Dice
};

#endif