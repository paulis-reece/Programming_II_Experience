#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout
#include <map>
#include <vector> // Activate Vector usage
using namespace std;

std::string normalize(std::string word) {
  std::string normalizeWord;
  for (int i = 0; i < word.size(); i++) {
    if (isalpha(word.at(i))) {
      normalizeWord += tolower(word.at(i));
    }
  }
  return normalizeWord;
}

int main() {
  string work;
  cin >> work;
  cout << normalize(work) << endl;
  return 0;
}