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

void BagOfWords::addWord(string word) { this->count.emplace(word, int()); }
std::string BagOfWords::getTopWord() {
  int counter = 0;
  string topWord;
  for (int i = 0; i < this->count.size(); i++) {
    if (counter < count.at(normalizeWord(std::string()))) {
      counter = count.at(normalizeWord(std::string()));
    }
  }
  topWord = count.at(normalizeWord(std::string()));
}
int BagOfWords::getUniqueWordCount() {
  if (!this->count.count("mouse")) {
  }
}
int BagOfWords::getWordCount(std::string word) {
  if (this->count.count("mouse")) {
    this->count["mouse"]++;
  } else {
    return this->count.at("mouse");
  }
}
void BagOfWords::printWordCount() {}
