#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout
#include <map>
#include <vector> // Activate Vector usage
using namespace std;

int main() {
  string word = "Hello!HALLA?&";
  string store;
  for (int i = 0; i < word.size(); i++) {
    if (isalpha(word.at(i))) {
      if (isupper(word.at(i))) {
        store += tolower(word.at(i));
      } else {
        store += word.at(i);
      }
    }
  }
  cout << store;
  return 0;
}