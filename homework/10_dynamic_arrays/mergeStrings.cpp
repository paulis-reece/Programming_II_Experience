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
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
string mergeStrings(int argc, char *argv[], string userEntry) {
  string result;
  int currentSize[argc];
  int largestSize = userEntry.size();
  if (largestSize < strlen(*argv)) {
    largestSize = strlen(*argv);
  }
  for (int i = 0; i < argc; i++) {
    currentSize[i] = strlen(argv[i]);
    if (currentSize[i] > largestSize) {
      largestSize = currentSize[i];
    }
  }
  for (int i = 0; i < largestSize; i++) {
    if (i < userEntry.size()) {
      result.push_back(userEntry[i]);
    } else {
      result.push_back(' ');
    }
    for (int j = 0; j < argc; j++) {
      if (i < currentSize[j]) {
        result.push_back(argv[j][i]);
      } else {
        result.push_back(' ');
      }
    }
  }
  return result;
}