#include <cassert> // for assert
#include <cstdlib> // for exit
#include <cstring>
#include <iostream> // for cin and cout
#include <vector>
using namespace std;



int main() {
int number = 0;
srand(2);
for(int i = 0; i < 6; i++){
number = rand() % 6 + 1;
cout << number << endl;
}
return 0;
}