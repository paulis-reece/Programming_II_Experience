/****************************************************************************
 *
 * Homework Assignment:  Merge strings
 *
 * File Name:  mergeStrings.cpp
 * Name:       Reece Reklai
 * Course:     CPTR 142
 * Date:       2/23/2020
 *
 */

// TODO Add code here.
#include "mergeStrings.h"
#include <iostream>
#include <string>
#include <vector>
string mergeStrings(int argc, char *argv[], string userEntry) {
  int largestSize = 0;
  int argcMirror = 0;
  int index = 0;
  string resultSTR;
  string *word;
  vector<string> nullWords(argc);
  word = new string;
  while (argcMirror < argc) {
    if ((*argv)[index] == '\0') {
      argcMirror++;
      cout << (*word) << endl;
      nullWords.push_back(*word);
      delete word;
      word = new string;
    }
    word += (*argv)[index];
    index++;
  }
  return "end";
}