#include "beetle.h"
// Constructor
Beetle::Beetle() {
  this->body = 6;
  this->head = 5;
  this->wings = 8;
  this->legs = 36;
  this->antennas = 4;
  this->eyes = 4;
}
//  Returns a new value for a specific body part of a beetle
void Beetle::setBettlePart(int number) {
  if (number == 6) {
    this->body = this->body - 6;
  } else if (number == 5) {
    this->head = this->head - 5;
  } else if (number == 4) {
    this->wings = this->wings - 4;
  } else if (number == 3) {
    this->legs = this->legs - 6;
  } else if (number == 2) {
    this->antennas = this->antennas - 2;
  } else if (number == 1) {
    this->eyes = this->eyes - 2;
  }
}
// Returns Body Part Value
int Beetle::getBody() const { return this->body; }
int Beetle::getHead() const { return this->head; }
int Beetle::getWings() const { return this->wings; }
int Beetle::getLegs() const { return this->legs; }
int Beetle::getAntennas() const { return this->antennas; }
int Beetle::getEyes() const { return this->eyes; }
// Dice Beetle Game
int Beetle::bettleGame(int getRoll) {
  int currentPart = 0;
  int constructedPart = 0;
  currentPart = getRoll;
  // I did subtraction, if the body part returned is less than its initialized
  // Value then its been build Checks to see if the beetle's body has been built
  // yet
  if (this->getBody() == 6) {
    if (currentPart == 6) {
      this->setBettlePart(currentPart);
      constructedPart = 6;
    }
    // The beetle' head has not been built (options are legs, wings, head)
  } else if (this->getHead() == 5) {
    switch (currentPart) {
    case 3:
      if (this->getLegs() != 0) { // legs
        this->setBettlePart(currentPart);
        constructedPart = 6;
      }
      break;
    case 4:
      if (this->getWings() != 0) { // wings
        this->setBettlePart(currentPart);
        constructedPart = 4;
      }
      break;
    case 5:
      if (this->getHead() != 0) { // head
        this->setBettlePart(currentPart);
        constructedPart = 5;
      }
      break;
    default:
      constructedPart = 0;
      break;
    }
    // The head of the beetle has been built (Includes all body parts except
    // body since its been built)
  } else if (this->getHead() == 0) {
    switch (currentPart) {
    case 1:
      if (this->getEyes() != 0) { // eyes
        this->setBettlePart(currentPart);
        constructedPart = 2;
      }
      break;
    case 2:
      if (this->getAntennas() != 0) { // antennas
        this->setBettlePart(currentPart);
        constructedPart = 2;
      }
      break;
    case 3:
      if (this->getLegs() != 0) { // legs
        this->setBettlePart(currentPart);
        constructedPart = 6;
      }
      break;
    case 4:
      if (this->getWings() != 0) { // wings
        this->setBettlePart(currentPart);
        constructedPart = 4;
      }
      break;
    default:
      constructedPart = 0;
      break;
    }
  }
  return constructedPart;
}