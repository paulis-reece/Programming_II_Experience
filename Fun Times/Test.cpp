
#include <cassert> // for assert
#include <cstdlib> // for exit
#include <cstring>
#include <iostream> // for cin and cout
using namespace std;

int main() {
 string trash;
  char firstName[100];
  char lastName[100];
  char game[50] = "YES   GGG     Doc       tog1222!!!@@@";
int counter = 0;
int count = 0;
int counting = 0;
int temp = 0;
  for(int r = 0; game[r] != '\0'; r++){
if(isspace(game[r])){

count++;
} else if(isblank(game[r])){

count++;
} else if(ispunct(game[r])){

count++;
} else if(iscntrl(game[r])){

count++;
} else if(tolower(game[r])){
firstName[r - count] = tolower(game[r]);
}


  counter++;
  }
  firstName[counter] = '\0';
cout << firstName << endl;
for(int c = 0; game[c] != '\0'; c++){
lastName[c] = firstName[counter];
counter--;
}
cout << lastName << endl;
  return 0;
}
