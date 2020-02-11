/*************************************************************************
 *
 * Homework Assignment: Class for counting words
 *
 * File Name:       BagOfWords.cpp
 * Name:            reklre
 * Course:          CPTR 142
 * Date:            2/9/2020
 *
 */

#include "BagOfWords.h"
#include <iostream>

void BagOfWords::addWord(std::string word) { this->count.emplace(word, int()); }
std::string BagOfWords::getTopWord() {
  int counter = 0;
  std::string topWord;
  for (int i = 0; i < count.size(); i++) {
    if (count.count(std::string()) == 1) {
      if (count.at(std::string()) > counter) {
        topWord = std::string();
      }
    }
  }
  return topWord;
}
int BagOfWords::getUniqueWordCount() {
  int counter = 0;
  for (int i = 0; i < count.size(); i++) {
    if (count.count(std::string()) == 0) {
      counter++;
    }
  }
  return counter;
}
int BagOfWords::getWordCount(std::string word) {
  int counter = 0;
  for (int i = 0; i < count.size(); i++) {
    if (count.count(word) == 1) {
      count.at(word) += 1;
      counter = count.at(word);
    }
  }
  return counter;
}
void BagOfWords::printWordCount() {
  int counter = 0;
  for (int i = 0; i < count.size(); i++) {
    if (count.count(std::string()) == 1) {
      counter++;
    }
  }
  std::cout << counter;
}
