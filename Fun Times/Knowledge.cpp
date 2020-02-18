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
  map.emplace("ba", 2);
  map.emplace("ac", 3);
  map.emplace("ae", 4);
  map.emplace("ed", 5);
  map.emplace("ac", 6);
  map.emplace("ac", 7);
  int loopCount = 0;
  int counter = 0;
  int count = 0;
  int word;
  string topWord;
  for (auto count : map) {
    if (map.count(count.first) == 1) {
      if (count.first == "ac") {
        counter = map.at("ac")++;
        topWord = count.first;
      }
    }
  }
  cout << counter << endl;
  return 0;
}