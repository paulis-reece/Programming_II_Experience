/*************************************************************************
 *
 * Exercise: Exceptions
 *
 * File Name:   main2.cpp
 * Username:  	?
 * Username:  	?
 * Course:      CPTR 142
 * Date:        04 Mar 2019
 *
 */

#include <fstream>
#include <iostream> // for cin and cout
#include <stdexcept>
#include <vector>
using namespace std;

class file_not_found_error : public runtime_error {
public:
  file_not_found_error(const string &what_arg) : runtime_error(what_arg) {}
};
class not_a_word_error : public runtime_error {
public:
  not_a_word_error(const string &what_arg) : runtime_error(what_arg) {}
};
class word_too_long_error : public runtime_error {
public:
  word_too_long_error(const string &what_arg) : runtime_error(what_arg) {}
};

// function prototypes
// count the number of lines in main.cpp
//    returns a success flag
//    if successful, then lineCount has a number of lines
//    if unsuccessful, then exception has an explanation
void readFile(vector<string> &words, int &errorCode);

int main() {
  vector<string> words;
  int errorCode;
  string message;
  try {
    readFile(words, errorCode);
  } catch (runtime_error &exception) {
    cerr << exception.what() << endl;
  }
}

void readFile(vector<string> &words, int &errorCode) {
  ifstream inFS; // Input file stream
  errorCode = 0;

  inFS.open("words.txt");
  if (!inFS.is_open()) {
    throw file_not_found_error("Unable to open words.cpp!");
  }
  while (!inFS.eof()) {
    string line;
    getline(inFS, line);
    if (!inFS.fail() && line.size() > 0) {
      if (isdigit(line.at(0))) {
        throw not_a_word_error("Found a digit");
      }
      if (line.size() > 20) {
        throw word_too_long_error("Words too long");
      }
      words.push_back(line);
    }
  }
  inFS.close();
}
