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
  if (index == input.length()) {
    return;
  } else if (counter == 3) {
    if (input.at(index) != ',') {
      throw runtime_error("Testing is NOT money");
    } else {
      counter = 0;
      state4(input, index++, counter);
    }
  } else if (input.at(index) == ',') {
    counter = 0;
    state4(input, index++, counter);
  } else if (isdigit(input.at(index)) == true) {
    state4(input, index++, counter++);
  } else {
    throw runtime_error("Testing is NOT money");
  }
}

void state1(string input, int index) {
  int counter = 0;
  if (index == input.length()) {
    return;
  } else if (index == 4) {
    if (input.at(index) != ',') {
      throw runtime_error("Testing is NOT money");
    } else {
      state4(input, index++, counter);
    }
  } else if (input.at(index) == ',') {
    state4(input, index++, counter);
  } else if (isdigit(input.at(index)) == true) {
    state1(input, index++);
  } else {
    throw runtime_error("Testing is NOT money");
  }
}

void state0(string input, int index) {
  if (index == input.length() || input.at(index) == '0') {
    throw runtime_error("Testing is NOT money");
  } else if (ispunct(input.at(index)) == true ||
             isdigit(input.at(index)) == false) {
    throw runtime_error("Testing is NOT money");
  } else {
    state1(input, index++);
  }
}
void verifyIsMoney(string inputString) {
  int index = 0;
  if (inputString.at(index) == '$') {
    state0(inputString, index++);
  } else {
    throw runtime_error("Testing is NOT money");
  }
}
