
#include <cassert> // for assert
#include <cstdlib> // for exit
#include <cstring>
#include <iostream> // for cin and cout
using namespace std;

int main() {
  int counter = 0;
  bool verdict;
  char orgName[] = "gameStop";
  char brandName[] = "pot Semag";
  for (int r = 0; r < strlen(orgName); r++) {
    if (strchr(brandName, orgName[0])) {
      verdict = true;
    } else {
      verdict = false;
    }
  }
  if (verdict != true) {
    cout << "It didnt work";
  } else {
    cout << "It worked";
  }

  return 0;
}
