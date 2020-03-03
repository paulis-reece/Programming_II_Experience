#include "store.h"
using namespace std;
// Function to Display brands within store
void store::getStoreBrand() {
  cout << "Brand Amount : " << this->Storebrands.size() << endl;
  cout << "--------------" << endl;
  for (auto set : Storebrands) {
    cout << set << endl;
  }
}
// Function to set brands into store (Container Set : name - Storebrands)
void store::setStoreBrand(string variable) {
  if (Storebrands.count(variable) == 0) {
    Storebrands.insert(variable);
  }
}
// Function to Display products within store
void store::getStoreProducts() {
  cout << "Product Amount : " << this->StoreProducts.size() << endl;
  cout << "--------------" << endl;
  for (auto set : StoreProducts) {
    cout << set << endl;
  }
}
// Function to set products into store (Container Set : name - StoreProducts)
void store::setStoreProducts(string variable) {
  if (StoreProducts.count(variable) == 0) {
    StoreProducts.insert(variable);
  }
}