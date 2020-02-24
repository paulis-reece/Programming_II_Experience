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
  char letter;
  string WORDS;
  int largestSize = 0;
  int argcMirror = 0;
  int index = 0;
  int counter = 0;
  string resultSTR;
  string *word;
  vector<string> nullWords;
  word = new string;
  while (argcMirror < argc) {
    if ((*argv)[index] == '\0') {
      argcMirror++;
      nullWords.push_back(*word);
      delete word;
      if (argcMirror < argc) {
        word = new string;
      }
    }
    if ((*argv)[index] != '\0' && (*argv)[index] != '\n') {
      *word += (*argv)[index];
    }
    index++;
  }
  for (auto words : nullWords) {
    cout << words << endl;
    if (words.size() > largestSize) {
      largestSize = words.size();
    }
  }
  while (counter < largestSize) {
    if (counter < userEntry.length()) {
      resultSTR += userEntry.at(counter);
    } else {
      resultSTR += " ";
    }
    for (int i = 0; i < argc; i++) {
      WORDS = nullWords.at(i);
      if (counter < WORDS.length()) {
        letter = WORDS.at(counter);
        resultSTR += letter;
      } else {
        resultSTR += " ";
      }
    }
    counter++;
  }
  return resultSTR;
}