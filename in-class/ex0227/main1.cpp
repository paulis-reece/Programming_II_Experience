/*************************************************************************
 *
 * Exercise: Exceptions
 *
 * File Name:   main1.cpp
 * Username:  	?
 * Username:  	?
 * Course:      CPTR 142
 *
 */

#include <fstream>
#include <iostream> // for cin and cout
#include <stdexcept>
using namespace std;

// function prototypes
// count the number of lines in main.cpp
//    returns a success flag
//    if successful, then lineCount has a number of lines
//    if unsuccessful, then exception has an explanation
void linesInMain(int &lineCount);

int main() {
  int lines = 0;
  string message;
  try {
    linesInMain(lines);
    cout << "main1.cpp has " << lines << " lines " << endl;
  } catch (runtime_error &exception) {
    cerr << exception.what() << "hi" << endl;
  }
}

void linesInMain(int &lineCount) {
  ifstream inFS; // Input file stream
  lineCount = 0;

  inFS.open("main.cpp");
  if (!inFS.is_open()) {
    throw runtime_error("Unable to open main.cpp!");
  }
  while (!inFS.eof()) {
    string line;
    getline(inFS, line);
    if (!inFS.fail()) {
      ++lineCount;
    }
  }
  inFS.close();
}
