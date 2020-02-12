#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout
#include <map>
#include <vector> // Activate Vector usage
using namespace std;

int main() {
    vector<int>num;
  map<string, int> map;
  map.emplace("b", 1);
  map.emplace("a", 2);
  map.emplace("d", 3);
  map.emplace("a", 4);
  map.emplace("e", 5);
  map.emplace("a", 6);
  int loopCount = 0;
  int counter = 0;
  int count = 0;
  int word;
  for (auto yes : map) {
   num.push_back(yes.second);
  }
   for (int i = 0; i < map.size(); i++) {
   cout << num.at(i);
  }
  return 0;
}