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

#include "string_functions.h"
#include <cctype>
#include <cstring>
#include <iostream> //	cin & cout
using namespace std;

bool areAnagrams(const char string1[], const char string2[]) {
  // TODO Add code to determine if strings are anagrams
  char storestr1[100];
  char storestr2[100];
  int counter = 0;
  int count = 0;
  int temp = 0;
  bool verdict;
  for (int r = 0; string1[r] != '\0'; r++) {
    if (isspace(string1[r])) {

      count++;
    } else if (isblank(string1[r])) {

      count++;
    } else if (ispunct(string1[r])) {

      count++;
    } else if (iscntrl(string1[r])) {

      count++;
    } else if (tolower(string1[r])) {
      storestr1[r - count] = tolower(string1[r]);
    }

    counter++;
  }
  storestr1[counter - count] = '\0';
  count = 0;
  counter = 0;
  for (int c = 0; string2[c] != '\0'; c++) {
    if (isspace(string2[c])) {

      count++;
    } else if (isblank(string2[c])) {

      count++;
    } else if (ispunct(string2[c])) {

      count++;
    } else if (iscntrl(string2[c])) {

      count++;
    } else if (tolower(string2[c])) {
      storestr2[c - count] = tolower(string2[c]);
    }
    counter++;
  }
  storestr2[counter - count] = '\0';
  for (int i = 0; i < strlen(storestr1); i++) {
    if (strchr(storestr2, storestr1[temp]) == NULL) {
      verdict = false;
      break;
    } else {
      verdict = true;
    }
    temp++;
  }
  if (verdict == true) {
    if (strlen(storestr1) == strlen(storestr2)) {
      verdict = true;
    } else {
      verdict = false;
    }
  }
  return verdict;
}

bool arePalindromes(const char string1[], const char string2[]) {
  // TODO Add code to determine if strings are anagrams
  char storestr1[100];
  char storestr2[100];
  int counting = 0;
  int counter = 0;
  int count = 0;
  int temp = 0;
  bool verdict;
  for (int r = 0; string1[r] != '\0'; r++) {
    if (isspace(string1[r])) {

      count++;
    } else if (isblank(string1[r])) {

      count++;
    } else if (ispunct(string1[r])) {

      count++;
    } else if (iscntrl(string1[r])) {

      count++;
    } else if (tolower(string1[r])) {
      storestr1[r - count] = tolower(string1[r]);
    }

    counter++;
  }
  storestr1[counter - count] = '\0';
  count = 0;
  counter = 0;
  for (int c = 0; string2[c] != '\0'; c++) {
    if (isspace(string2[c])) {

      count++;
    } else if (isblank(string2[c])) {

      count++;
    } else if (ispunct(string2[c])) {

      count++;
    } else if (iscntrl(string2[c])) {

      count++;
    } else if (tolower(string2[c])) {
      storestr2[c - count] = tolower(string2[c]);
    }
    counter++;
  }
  storestr2[counter - count] = '\0';
  for (int i = strlen(storestr1) - 1; i > -1; i--) {
    if (strchr(storestr2, storestr1[temp]) == NULL) {
      verdict = false;
      break;
    } else {
      verdict = true;
    }
    temp++;
  }
  if (verdict == true) {
    if (strlen(storestr1) == strlen(storestr2)) {
      verdict = true;
    } else {
      verdict = false;
    }
  }
  if (verdict == true) {
    for (int i = strlen(storestr1) - 1; i > -1; i--) {
      if (storestr1[i] != storestr2[counting]) {
        verdict = false;
        break;
      } else {
        verdict = true;
      }
      counting++;
    }
  }
  return verdict;
}
