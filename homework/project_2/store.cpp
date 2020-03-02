#include "store.h"
using namespace std;
int store::getProductSize() { return this->productSize; }
int store::getBrandSize() { return this->getBrandSize(); };
void store::setProductSize() { productSize = this->StoreProducts.size(); };
void store::setBrandSize() { brandSize = this->Storebrands.size(); };

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
void store::getStoreProducts() {
  for (auto set : StoreProducts) {
    cout << set << endl;
  }
}
void store::setStoreProducts(string variable) {
  if (StoreProducts.count(variable) == 0) {
    StoreProducts.insert(variable);
  }
}