/*************************************************************************
 *
 * In-Class Exercise: Sets
 *
 * File Name: set.cpp
 * Username:  reklre
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <set>	  	// vector
using namespace std;

int main() {
  // define a set
set<string>states;
  // add Oregon and Washington
states.insert("WA");
states.insert("OR");
  bool exists;
  int size;
  // does Alaska exist?
  exists = states.count("OR");
  // what is size of set?
  size = states.size();
  
  cout << "Alaska is " << ( exists ?" " : "not ") << "in set of " << size << endl;

  // add Alasks
  // does Alaska exist?
  exists = states.count("OR");
  // what is size of set?
  size = states.size();
  cout << "Alaska is " << (exists ? "" : "not ") << "in set of " << size << endl;

  return 0;
}
