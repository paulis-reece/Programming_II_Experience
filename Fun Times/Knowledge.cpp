#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout
#include <map>
#include <vector> // Activate Vector usage
using namespace std;

int main() {
  vector<int> num;
  map<string, int> map;
  map.emplace("aa", 1);
  map.emplace("bb", 2);
  map.emplace("cc", 3);
  map.emplace("aa", 4);
  map.emplace("aa", 5);
  map.emplace("aa", 6);
  map.emplace("aa", 7);
  int loopCount = 0;
  int counter = 0;
  int count = 0;
  string word = "aa";
  std::map<std::string, int>::iterator iter = map.begin();
  while (iter != map.end()) {
    std::string word = iter->first;

    // Accessing VALUE from element pointed by it.
    int count = iter->second;

    std::cout << word << " :: " << count << std::endl;
    iter++;
  }
  return 0;
}