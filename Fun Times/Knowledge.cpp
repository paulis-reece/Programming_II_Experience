#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout
#include <vector>   // Activate Vector usage

using namespace std;

int main() {
int number = 0;
srand(0);
for(int i = 0; i < 10; i++){
number = rand() % 6 + 1;
cout << number << endl;
}
  return 0;
}