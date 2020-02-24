/****************************************************************************
 *
 * Homework Assignment:  Merge strings
 *
 * File Name:  main.cpp
 * Name:       Reece Reklai
 * Course:     CPTR 142
 * Date:       2/20/2020
 *
 */
#include "mergeStrings.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  // user input
  cout << "Enter line to merge: ";
  string userEntry;
  getline(cin, userEntry);

  string result = mergeStrings(argc, argv, userEntry);

  // output result
  cout << "\"" << result << "\" is " << result.size()
       << " characters in length." << endl;
  return 0;
}