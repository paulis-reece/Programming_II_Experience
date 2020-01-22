
#include <cassert> // for assert
#include <cstdlib> // for exit
#include <cstring>
#include <iostream> // for cin and cout
using namespace std;

int main() {
  string trash;
  char firstName[100];
  char lastName[100];
  char game[50] = "Dave";
  char chess[50] = "evad";
  int counter = 0;
  int count = 0;
  int counting = 0;
  int temp = 0;
  for (int r = 0; game[r] != '\0'; r++) {
    if (isspace(game[r])) {

      count++;
    } else if (isblank(game[r])) {

      count++;
    } else if (ispunct(game[r])) {

      count++;
    } else if (iscntrl(game[r])) {

      count++;
    } else if (tolower(game[r])) {
      firstName[r - count] = tolower(game[r]);
    }

    counter++;
  }
  firstName[counter] = '\0';
  cout << firstName << endl;

count = 0;
counter = 0;
   for (int r = 0; chess[r] != '\0'; r++) {
    if (isspace(chess[r])) {

      count++;
    } else if (isblank(game[r])) {

      count++;
    } else if (ispunct(game[r])) {

      count++;
    } else if (iscntrl(game[r])) {

      count++;
    } else if (tolower(game[r])) {
      lastName[r - count] = tolower(game[r]);
    }

    counter++;
  }

  return 0;
}
