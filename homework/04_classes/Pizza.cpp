/*************************************************************************
 *
 * Homework Assignment: Class for taking a pizza order
 *
 * File Name:       pizza.cpp
 * Name:            reklre
 * Course:          cp1TR 142
 * Date:            January 22, 2020
 *
 */

#include "Pizza.h"
#include <iostream>

using namespace std;

//========================
// Pizza
// The constructor sets the default pizza
// to a small, deep dish, with only cheese.
//========================
Pizza::Pizza() {
  size = SMALL;
  type = DEEPDISH;
  toppings = 1;
}

//==================================
// Accessors and Mutators Follow
//==================================

// TODO Add the accessor and mutator functions for each class variable.
int Pizza::getSize() { return size; }
int Pizza::getType() { return type; }
int Pizza::getToppings() { return toppings; }
void Pizza::setSize(int size) { this->size = size; }
void Pizza::setToppings(int topping) { this->toppings = topping; }
void Pizza::setType(int type) { this->type = type; }

// TODO Add a function to compute price of the pizza
double Pizza::computePrice() {
  int money = 0;
  switch (this->size) {
  case 0:
    money = 10 + (2 * this->toppings);
    break;
  case 1:
    money = 14 + (2 * this->toppings);
    break;
  case 2:
    money = 17 + (2 * this->toppings);
    break;
  default:
    money = 10 + (2 * this->toppings);
    break;
  }
  return money;
}
//   Price of a pizza using the formula:
//     Small = $10 + $2 per topping
//     Medium = $14 + $2 per topping
//     Large = $17 + $2 per topping
//==================================
// outputDescription
// Prints a textual description of the contents of the pizza.
//==================================
void Pizza::outputDescription() {
  cout << "This pizza is: ";
  switch (size) {
  case SMALL:
    cout << "Small, ";
    break;
  case MEDIUM:
    cout << "Medium, ";
    break;
  case LARGE:
    cout << "Large, ";
    break;
  default:
    cout << "Unknown size, ";
  }
  switch (type) {
  case DEEPDISH:
    cout << "Deep dish, ";
    break;
  case HANDTOSSED:
    cout << "Hand tossed, ";
    break;
  case PAN:
    cout << "Pan, ";
    break;
  default:
    cout << "Uknown type, ";
  }
  cout << "with " << toppings << " topping(s)" << endl;
}
