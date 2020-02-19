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

std::string BagOfWords::normalize(std::string word) {
  std::string normalizeWord;
  int counter = 0;
  for (int i = 0; i < word.size(); i++) {
    if (isalpha(word.at(i))) {
      if (counter > 0) {
        normalizeWord += tolower(word.at(i)) - counter;
      } else {
        normalizeWord += tolower(word.at(i));
      }
    } else {
      counter++;
    }
  }
  return normalizeWord;
}

void BagOfWords::addWord(std::string word) {
  std::string normalizeWord;
  if (count.count(normalize(word)) == 0) {
    count.emplace(normalize(word), 1);
  } else {
    count.at(normalize(word))++;
  }
}
std::string BagOfWords::getTopWord() {
  int counter = 0;
  std::string topWord;
  for (auto map : count) {
    if (map.second > counter) {
      counter = map.second;
      topWord = map.first;
    }
  }
  return topWord;
}
int BagOfWords::getUniqueWordCount() { return count.size(); }
int BagOfWords::getWordCount(std::string word) {
  if (count.count(normalize(word)) == 1) {
    return count.at(normalize(word));
  } else {
    return 0;
  }
}
