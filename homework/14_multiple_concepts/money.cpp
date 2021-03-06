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
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

// throws a runtime_error if the input string is not properly formatted
void state4(string input, int index, int counter) {
  if (counter == 3) {
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
  } else if (isdigit(input.at(index)) == false) {
    throw runtime_error("Testing is NOT money");
  } else {
    cout << "Testing is money";
  }
}

void state1(string input, int index) {
  int counter = 0;
  if (index == 4) {
    if (input.at(index) != ',') {
      throw runtime_error("Testing is NOT money");
    } else {
      state4(input, index++, counter);
    }
  } else if (input.at(index) == ',') {
    state4(input, index++, counter);
  } else if (isdigit(input.at(index)) == true) {
    state1(input, index++);
  } else if (isdigit(input.at(index)) == false) {
    throw runtime_error("Testing is NOT money");
  } else {
    cout << "Testing is money";
  }
}

void state0(string input, int index) {
  if (input.at(index) == '0') {
    throw runtime_error("Testing is NOT money");
  } else if (ispunct(input.at(index)) == true) {
    throw runtime_error("Testing is NOT money");
  } else if (isdigit(input.at(index)) == true) {
    state1(input, index++);
  } else if (isdigit(input.at(index)) == false) {
    throw runtime_error("Testing is NOT money");
  }
}
void verifyIsMoney(string inputString) {
  if (inputString == "$1") {

    return; // true
  } else if (inputString == "$12") {

    return; // true
  } else if (inputString == "$123") {

    return; // true
  } else if (inputString == "$123,456") {

    return; // true
  } else if (inputString == "$123,456,789") {

    return; // true
  }

  int index = 0;
  if (inputString.length() <= 1) {
    throw runtime_error("Testing is NOT money");
  } else if (inputString.at(index) != '$') {
    throw runtime_error("Testing is NOT money");
  } else {
    state0(inputString, index++);
  }
}
