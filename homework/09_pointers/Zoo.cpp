/****************************************************************************
 *
 * Homework Assignment: Class for using pointers
 *
 * File Name:  zoo.cpp
 * Course:     CPTR 142
 *
 */

#include "Zoo.h"
#include "Bee.h"
#include "Cat.h"
#include "Duck.h"
#include "Snail.h"
#include <iostream>
// TODO Add code here
void Zoo::addCreature(CREATURES creature, std::string x) {
  if (creature == BEE) {
    creatures.push_back(new Bee(x));
  } else if (creature == CAT) {
    creatures.push_back(new Cat(x));
  } else if (creature == DUCK) {
    creatures.push_back(new Duck(x));
  } else if (creature == SNAIL) {
    creatures.push_back(new Snail(x));
  }
}

void Zoo::printCensus() {
  for (int i = 0; i < 4; i++) {
    std::cout << "- " << creatures.at(i)->getName();
    std::cout << " (" << creatures.at(i)->getDescription() << ")";
    std::cout << std::endl;
  }
}

int Zoo::getNumberOfLegs() {
  int total = 0;
  for (int i = 0; i < 4; i++) {
    total += creatures.at(i)->getNumberOfLegs();
  }
  return total;
}