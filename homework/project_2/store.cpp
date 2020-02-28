#include "store.h"
using namespace std;
void store::setVariable(string variable) { this->tempVal = variable; }
void store::getStoreBrand() {
  for (auto set : Storebrands) {
    cout << set << endl;
  }
}
void store::setStoreBrand() {
  if (Storebrands.count(this->tempVal) == 0) {
    Storebrands.insert(tempVal);
  }
}