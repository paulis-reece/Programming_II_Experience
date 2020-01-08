/*************************************************************************
 *
 * In-Class Exercise: C-Strings
 *
 * File Name: c_string.cpp
 * Username:  reklre
 * Username:  pricqu
 * Course:    CPTR 142
 */

#include <iostream> // for cin and cout
using namespace std;

/*====================================================================
 * Main program
 */
int main() {
  int i = 0;

  // Initialize a string with a size
  char size[10] = "Kira";

  // Initialize a string without a size
  char unknownSize[] = "Jace";

  // Print each string to the console
  cout << size << endl;
  cout << unknownSize << endl;

  // Change characters
  size[0] = 'S';
  unknownSize[2] = 'k';
  // Print the changed name
  cout << size << " ";
  cout << unknownSize;
  cout << endl;

  // Print out a string vertically. (Each character on a new line)
  while (size[i] != '\0') {
    cout << size[i] << endl;
    i++;
  }

  return 0;
}
