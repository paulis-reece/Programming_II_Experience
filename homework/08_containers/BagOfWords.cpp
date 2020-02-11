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
  std::map<std::string, int>::iterator iter = count.begin();
  for (auto iter : count) {
    if (count.count(std::string()) == 1) {
      if (count.at(std::string()) > counter) {
        counter = count.at(std::string());
        topWord = std::string();
      }
    }
  }
  return topWord;
}
int BagOfWords::getUniqueWordCount() {
  int counter = 0;
  std::map<std::string, int>::iterator iter = count.begin();
  for (auto iter : count) {
    if (count.count(std::string()) == 0) {
      counter++;
    }
  }
  return counter;
}
int BagOfWords::getWordCount(std::string word) {
  int counter = 0;
  std::map<std::string, int>::iterator iter = count.begin();
  for (auto iter : count) {
    if (count.count(word) == 1) {
      counter = count[word]++;
    }
  }
  return counter;
}
void BagOfWords::printWordCount() {
  int counter = 0;
  std::map<std::string, int>::iterator iter = count.begin();
  for (auto iter : count) {
    if (count.count(std::string()) == 1) {
      counter++;
    }
  }
  std::cout << counter;
}
