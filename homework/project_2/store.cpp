#include "store.h"
using namespace std;
void store::getStoreBrand() {
  for (auto set : Storebrands) {
    cout << set << endl;
  }
}
void store::setStoreBrand(string variable) {
  if (Storebrands.count(variable) == 0) {
    Storebrands.insert(variable);
  }
}