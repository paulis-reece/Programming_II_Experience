#include "store.h"
using namespace std;
void store::getStoreBrand() {
  cout << "Brand Count : " << Storebrands.size() << endl;
  /*  for (auto set : Storebrands) {
     cout << set << endl;
   }
   */
}
void store::setStoreBrand(string variable) {
  if (Storebrands.count(variable) == 0) {
    Storebrands.insert(variable);
  }
}
void store::getStoreProducts() {
  cout << "Product Count : " << StoreProducts.size() << endl;
  /*  for (auto set : StoreProducts) {
     cout << set << endl;
  }*/
}
void store::setStoreProducts(string variable) {
  if (StoreProducts.count(variable) == 0) {
    StoreProducts.insert(variable);
  }
}