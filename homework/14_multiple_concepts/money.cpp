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
void state4(string inputString, int indexing, int counting) {
  if (counting == 3 && inputString.at(indexing) == '\0') {
    return;
  } else if (inputString.at(indexing) == '\0') {
    throw runtime_error("the input string is not properly formatted");
  } else {
    if (inputString.at(indexing) == ',') {
      counting = 0;
      state4(inputString, indexing++, counting);
    } else {
      if (isdigit(inputString.at(indexing)) == true) {
        state4(inputString, indexing++, counting++);
      } else {
        throw runtime_error("the input string is not properly formatted");
      }
    }
  }
}
void state1(string inputString, int indexing) {
  int counter = 0;
  if (inputString.at(indexing) == ',') {
    state4(inputString, indexing++, counter);
  } else if (inputString.at(indexing) == '\0' || indexing == 3) {
    if (indexing != 3) {
      return;
    } else {
      if (inputString.at(indexing) == '\0' && indexing == 3) {
        return;
      } else {
        throw runtime_error("the input string is not properly formatted");
      }
    }
  }
  if (isdigit(inputString.at(indexing)) == true) {
    state1(inputString, indexing++);
  } else {
    throw runtime_error("the input string is not properly formatted");
  }
}
void state0(string inputString) {
  int index = 0;
  if (isdigit(inputString.at(index)) == true) {
    state1(inputString, index++);
  } else {
    throw runtime_error("the input string is not properly formatted");
  }
}
void verifyIsMoney(string inputString) {
  if (inputString.at(0) != '$') {
    throw runtime_error("the input string is not properly formatted");
  } else {
    inputString.erase(inputString.begin());
    state0(inputString);
  }
}
