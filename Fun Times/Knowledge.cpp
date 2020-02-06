#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout
#include <vector>   // Activate Vector usage

using namespace std;

int main() {
  int number = 0;
  int n = 4;
  int loop = 0;
  vector<int> players(2, 0);
  while (number != 4) {
    players.at(loop) += 1;
    cout << players.at(loop);
    if (players.at(loop) == 4) {
      number = 4;
      break;
    }
    if (loop == 1) {
      loop = 0;
    } else {
      loop++;
    }
  }
  return 0;
}