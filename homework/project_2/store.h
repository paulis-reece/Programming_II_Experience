#include "brand.h"
#include "product.h"
#include "upc.h"
#include <map>
#include <set>
using namespace std;
#ifndef STORE_H
#define STORE_H
class upc;
class product;
class brand;
class store {
public:
  map<upc *, pair<product *, brand *>> UpcProductBrand;
  void getStoreBrand();
  void setStoreBrand(string variable);
  void getStoreProducts();
  void setStoreProducts(string variable);

private:
  set<string> Storebrands;
  set<string> StoreProducts;
};

#endif