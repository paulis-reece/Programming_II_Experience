
#include <cassert> // for assert
#include <cstdlib> // for exit
#include <cstring>
#include <iostream> // for cin and cout
using namespace std;

int main() {
  string trash;
  bool verdict;
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
  for (int c = 0; chess[c] != '\0'; c++) {
    if (isspace(chess[c])) {

      count++;
    } else if (isblank(chess[c])) {

      count++;
    } else if (ispunct(chess[c])) {

      count++;
    } else if (iscntrl(chess[c])) {

      count++;
    } else if (tolower(chess[c])) {
     lastName[c - count] = tolower(chess[c]);
    }
    counter++;
  }
  lastName[counter] = '\0';
  cout << lastName << endl;
  for(int i = strlen(firstName); i > -1; i--){
cout << firstName[i];
  }
  
  return 0;
}
