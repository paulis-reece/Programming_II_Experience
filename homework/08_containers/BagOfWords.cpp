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
#include <algorithm>
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
  for (int i = 0; i < count.size(); i++) {
    if (count.count(std::string()) == 1) {
      if (count.at(std::string()) > counter) {
        counter = count.at(std::string());
        topWord = std::find(count.begin(), count.end(), counter)->first;
      }
    }
  }
  return topWord;
}
int BagOfWords::getUniqueWordCount() {
  int counter = 0;
  for (int i = 0; i < count.size(); i++) {
    if (count.count(std::string()) == 0) {
      count.at(std::string() += 1);
    }
  }
  return counter;
}
int BagOfWords::getWordCount(std::string word) {
  for (int i = 0; i < count.size(); i++) {
    if (count.count(word) == 1) {
      count.at(word += 1);
    }
  }
  return count.at(word);
}
void BagOfWords::printWordCount() {
  for (int i = 0; i < count.size(); i++) {
    if (count.count(std::string()) == 1) {
      std::cout << std::string();
    }
  }
}
