/*************************************************************************
 *
 * Homework Assignment: C string work
 *
 * File Name: string_functions.cpp
 * Name:      reklre
 * Course:    CPTR 142
 * Date:      January 13, 2020
 *
 */

#include <cctype>
#include <iostream> //	cin & cout
#include <cstring>
#include "string_functions.h"
using namespace std;

bool areAnagrams(const char string1[],const char string2[]) {
  // TODO Add code to determine if strings are anagrams
  bool verdict;
  for (int r = 0; r < strlen(string1); r++) {
    if (strchr(string2, string1[0])) {
      verdict = true;
    } else {
      verdict = false;
    }
  }
  return verdict;
}

bool arePalindromes(const char string1[], const char string2[]) {
  // TODO Add code to determine if strings are anagrams
  bool verdict;
  for (int r = 0; r < strlen(string1); r++) {
    if (strchr(string2, string1[0])) {
      verdict = true;
    } else {
      verdict = false;
    }
  }
  return verdict;
}
