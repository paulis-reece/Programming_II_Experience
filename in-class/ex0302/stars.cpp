/*************************************************************************
 *
 * Exercise: Stars through Recursion
 *
 * File Name:   stars.cpp
 * Username:  	reklre
 * Username:  	?
 * Course:      CPTR 142
 *
 */
#include <iostream>
using namespace std;

// function prototype
int stars(int count);

int main() {
  // test recursive function
   cout << stars(3);
  cout << endl;


  return 0;
}

// print count stars on one line, then one less on the next line
int stars(int count) {
    int letter;
  if (count == 0) {
    cout << "Beautiful Stars" << endl;
  } else {
    for (int i = 0; i < count; i++) {
      cout << '*';
    }
    cout << endl;
    letter = count;
    stars(count - 1);
  }
  return letter;
}
