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
#include <string>
using namespace std;

void BagOfWords::addWord(string word) {
  this->count.emplace(normalizeWord(std::string()), int());
}
std::string BagOfWords::getTopWord() {
  int counter = 0;
  string topWord;
  for (int i = 0; i < this->count.size(); i++) {
  }
}
int BagOfWords::getUniqueWordCount() {
  if (!this->count.count("mouse")) {
  }
}
int BagOfWords::getWordCount(std::string word) {
  if (this->count.count("mouse")) {
    return this->count["mouse"]++;
  } else {
    return this->count.at("mouse");
  }
}
void BagOfWords::printWordCount() {}
