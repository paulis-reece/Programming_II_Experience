/*************************************************************************
 *
 * Homework: Money
 *
 * File Name:   money.cpp
 * Username:  	Reece Reklai
 * Course:      CPTR 142
 * Date:        3/9/2020
 *
 */
#include "money.h"
#include <stdexcept>
#include <string>
using namespace std;

// throws a runtime_error if the input string is not properly formatted
void state4(string input, int index, int counter) {
  if (input.at(index) == ',') {
    counter = 0;
    state4(input, index++, counter);
  } else if (counter == 3) {
    if (input.at(index) != '\0') {
      throw runtime_error("Testing is NOT money");
    } else {
      return;
    }
  } else if (input.at(index) == '\0') {
    return;
  } else {
    state4(input, index++, counter++);
  }
}

void state1(string input, int index) {
  int counter = 0;
  if (input.at(index) == ',') {
    state4(input, index++, counter);
  } else if (index == 4) {
    if (input.at(index) != '\0') {
      throw runtime_error("Testing is NOT money");
    } else {
      return;
    }
  } else if (input.at(index) == '\0') {
    return;
  } else {
    state1(input, index++);
  }
}

void state0(string input, int index) {
  if (ispunct(input.at(index)) == true && isdigit(input.at(index)) == false &&
      input.at(index) == '0' && input.at(index) == '\0') {
    throw runtime_error("Testing is NOT money");
  } else {
    state1(input, index++);
  }
}
void verifyIsMoney(string inputString) {
  int index = 0;
  if (inputString.at(index) != '$') {
    throw runtime_error("Testing is NOT money");
  } else {
    state0(inputString, index++);
  }
}
