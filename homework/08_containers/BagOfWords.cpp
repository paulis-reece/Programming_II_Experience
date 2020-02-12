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
  std::string normalizeWord;
  for (int i = 0; i < word.size(); i++) {
    if (isalpha(word.at(i))) {
      normalizeWord += word.at(i);
    }
  }
  this->count.emplace(normalizeWord, int());
}
std::string BagOfWords::getTopWord() {
  int counter = 0;
  std::string topWord;
  for (auto map : count) {
    if (count.count(std::string()) == 1) {
      if (count.at(std::string()) > counter) {
        topWord = count.at(std::string());
        topWord = std::string();
      }
    }
  }
  return topWord;
}
int BagOfWords::getUniqueWordCount() {
  int counter = 0;
  for (auto map : count) {
    if (count.count(std::string()) == 0) {
      counter++;
    } 
  }
  return counter;
}
int BagOfWords::getWordCount(std::string word) {
  int counter = 0;
  int loopCount = 0;
  std::string words;
  for (auto map : count) {
    if (loopCount == 0) {
      if (count.count(word) == 1) {
        words = word;
      }
    }
    if (words == map.first) {
      counter++;
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
