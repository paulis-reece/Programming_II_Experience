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
    if (count.count(map.first) == 1) {
      if (count.at(map.first) > counter) {
        counter = count.at(map.first)++;
        topWord = map.first;
      }
    } else {
      addWord(map.first);
    }
  }
  return topWord;
}
int BagOfWords::getUniqueWordCount() {
  int counter = 0;
  for (int i = 0; i < count.size(); i++) {
    if (count.count(std::string()) == 0) {
      counter++;
      addWord(std::string());
    }
  }
  return counter;
}
int BagOfWords::getWordCount(std::string word) {
  int counter = 0;
  for (auto map : count) {
    if (count.count(word) == 1) {
      counter = count.at(word)++;
    } else {
      addWord(word);
    }
  }
  return counter;
}
void BagOfWords::printWordCount() {}
