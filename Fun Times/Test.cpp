
#include <cassert> // for assert
#include <cstdlib> // for exit
#include <cstring>
#include <iostream> // for cin and cout
using namespace std;

int main() {
  int count = 0;
  int count2 = 0;
  bool verdict;
  char orgName[] = "2abcd";
  char brandName[] = "dbcA2";
  for (int r = 0; r < strlen(brandName); r++) {
    if (strchr(orgName, brandName[r]) != NULL) {
      verdict = true;
    } else {
      verdict = false;
    }
    if(verdict == false){
        break;
    }
  }
  if(verdict == true){
  if (strlen(orgName) == strlen(brandName)) {
    verdict = true;
  } else {
      verdict = false;
  }
}
  if (verdict == true) {
    cout << "It worked" << endl;
  } else {
    cout << "It didnt work." << endl;
  }
  return 0;
}
