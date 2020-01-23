
#include <cassert> // for assert
#include <cstdlib> // for exit
#include <cstring>
#include <iostream> // for cin and cout
using namespace std;

int main() {
  char game[50] = "Dormi tory";
  char chess[50] = "Dirty             Room";
 char storestr1[100];
  char storestr2[100];
  int counter = 0;
  int count = 0;
  int temp = 0;
  bool verdict;
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
      storestr1[r - count] = tolower(game[r]);
    }

    counter++;
  }
  storestr1[counter - count] = '\0';
  cout << storestr1 << endl;

   counter = 0;
  count = 0;
   for (int r = 0; chess[r] != '\0'; r++) {
    if (isspace(chess[r])) {

      count++;
    } else if (isblank(chess[r])) {

      count++;
    } else if (ispunct(chess[r])) {

      count++;
    } else if (iscntrl(chess[r])) {

      count++;
    } else if (tolower(chess[r])) {
      storestr2[r - count] = tolower(chess[r]);
    }

    counter++;
  }
  storestr2[counter - count] = '\0';
  cout << storestr2 << endl;



  for (int i = 0; i < strlen(storestr1); i++) {
    if (strchr(storestr2, storestr1[temp]) == NULL) {
      verdict = false;
      break;
    } else {
      verdict = true;
    }
    temp++;
  }
  if (verdict == true) {
    if (strlen(storestr1) == strlen(storestr2)) {
      verdict = true;
    } else {
      verdict = false;
    }
  }
  if(verdict == true){
      cout << "Yes";
  } else {
      cout << "No";
  }
  
  return 0;
}
