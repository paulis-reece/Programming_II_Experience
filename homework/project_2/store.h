#include "brand.h"
#include "product.h"
#include "upc.h"
#include <map>
#include <set>
using namespace std;
#ifndef STORE_H
#define STORE_H
// Include all class for compilers sake
class upc;
class product;
class brand;
class store {
public:
  map<upc *, pair<product *, brand *>>
      UpcProductBrand; // Map holding key of upc and pair for product and brand
  // Getter for Set Storebrands
  void getStoreBrand();
  // Setter for Set Storebrands
  void setStoreBrand(string variable);
  // Getter for Set StoreProducts
  void getStoreProducts();
  // Setter for Set StoreProducts
  void setStoreProducts(string variable);

private:
  set<string> Storebrands;
  set<string> StoreProducts;
};

#endif