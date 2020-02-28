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
  void setVariable(string variable);
  map<upc *, pair<product *, brand *>> UpcProductBrand;
  void getStoreBrand();
  void setStoreBrand();

private:
  string tempVal;
  set<string> Storebrands;
};

#endif