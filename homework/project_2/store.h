#include "brand.h"
#include "product.h"
#include "upc.h"
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

#ifndef STORE_H
#define STORE_H
class product;
class brand;
class store {
public:
  string getUpcCode() const;
  void setUpcCode(string Upc);
  map<upc*, pair<product *, brand *>> UpcProductBrand;

private:
  set<string> Storebrands;
};

#endif