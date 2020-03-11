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
void state4(string input, int index) {}

void state1(string input, int index) {}

void state0(string input, int index) {
    
}
void verifyIsMoney(string inputString) {
  int index = 0;
  if (inputString.at(index) != '$') {
    throw runtime_error("Testing is NOT money");
  } else {
    state0(inputString, index++);
  }
}
