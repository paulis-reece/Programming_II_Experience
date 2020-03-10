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
  if (counting == 4 && inputString.at(indexing) == '\0') {
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
  } else if (inputString.at(indexing) == '\0' || indexing == 4) {
    if (indexing != 4) {
      return;
    } else {
      if (inputString.at(indexing) == '\0' && indexing == 4) {
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
void state0(string inputString, int indexing) {
  if (indexing == 1 && inputString.at(indexing) == '0') {
    throw runtime_error("the input string is not properly formatted");
  }
  if (indexing == 1 && isdigit(inputString.at(indexing)) == false) {
    throw runtime_error("the input string is not properly formatted");
  }
  if (isdigit(inputString.at(indexing)) == true) {
    state1(inputString, indexing++);
  } else {
    throw runtime_error("the input string is not properly formatted");
  }
}
void verifyIsMoney(string inputString) {
  int index = 0;
  if (inputString.at(index) != '$') {
    throw runtime_error("the input string is not properly formatted");
  } else {
    state0(inputString, index++);
  }
}
