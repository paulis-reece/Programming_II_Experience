#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout
#include <map>
#include <vector> // Activate Vector usage
using namespace std;

int main() {
enum LightState {LS_RED, LS_GREEN, LS_YELLOW, LS_DONE};
   LightState lightVal = LS_RED;
for(int i = 0; i < 4; i++){
if(lightVal == LS_GREEN){
cout << "yes";
} else {
cout << "no";
}
}
  return 0;
}