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

void BagOfWords::addWord(std::string word) {
  this->count.emplace(std::string(), int());
}
std::string BagOfWords::getTopWord() {
  int counter = 0;
  std::string topWord;
  for (int i = 0; i < this->count.size(); i++) {
    if (counter < this->count.at(std::string())) {
      counter = this->count.at(std::string());
      topWord = std::string();
    }
  }
  return topWord;
}
int BagOfWords::getUniqueWordCount() {
  int counter = 0;
  for (int i = 0; i < this->count.size(); i++) {
    if (this->count.count(std::string()) == 0) {
      counter++;
    }
  }
  return counter;
}
int BagOfWords::getWordCount(std::string word) {
  if (word == "mouse") {
    if (this->count.count(word) == 0) {
      this->count.emplace(word, int());
    } else {
      this->count["mouse"]++;
    }
  }
  return this->count.at("mouse");
}
void BagOfWords::printWordCount() {
  int counter = 0;
  for (int i = 0; i < this->count.size(); i++) {
    counter++;
  }
  std::cout << counter;
}
