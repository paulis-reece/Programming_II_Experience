#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout
#include <map>
#include <vector> // Activate Vector usage
using namespace std;

int main() {
  map<string, int> map;
  map.emplace("a", 1);
  map.emplace("b", 2);
  map.emplace("c", 3);
  map.emplace("d", 4);
  map.emplace("e", 5);

  int counter = 0;
  std::string topWord;
  for (int i = 0; i < map.size(); i++) {
    if (map.at("a") > counter) {
      counter = map.at("a");
      topWord = "a";
    }
    if (map.at("e") > counter) {
      counter = map.at("a");
      topWord = "e";
    }
  }
  cout << topWord;
  return 0;
}