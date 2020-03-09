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
void verifyIsMoney(string inputString) {
  int index = 0;
  if (inputString.length() == 0) {
    return;
  } else {
    if (inputString.at(0) != '$') {
      throw runtime_error("the input string is not properly formatted");
    } else if(inputString.at(1)){} else {
      if (inputString.at(index) == ',') {

      } else {

      }
    }
  }
}
