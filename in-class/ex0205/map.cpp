/*************************************************************************
 *
 * In-Class Exercise: Map
 *
 * File Name: map.cpp
 * Username:  reklre
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <map>
using namespace std;

int main() {

  bool ableExists;
  // define a variable, family, to hold a map of string and integer pairs
map<string, int> variableName;
  // add family members (Adam, 1), (Eve, 2), (Cain, 3), and (Able, 4)
variableName.emplace("Adam", 1);
variableName.emplace("Adam", 2);
variableName.emplace("Eve", 3);
variableName.emplace("d", 4);
variableName.emplace("C", 5);
int counter = 0;
for (int i = 0; i < variableName.size(); i++) {
    if (variableName.count("Adam")  > counter) {
      cout << variableName.at(string()) << endl;
    }
  }
  // what is Eve's ID?
  //cout << "Eve is person #" << "??" << endl;
  // is Able part of the family?
  //ableExists = true || false;
  //cout << "Family size: " << "??" << " includes Able: " << (ableExists ? "yes" : "no") << endl;
  // Able is killed

  //ableExists = true || false;
  //cout << "Family size: " << "??" << " includes Able: " << (ableExists ? "yes" : "no") << endl;
  // finally everyone dies off

  //cout << "Family size: " << "??" << endl;

  return 0;
}
