#include "brand.h"
#include "product.h"
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
  string getBrand() const;
  string getProduct() const;
  void setUpcCode(string upcCode);
  void setBrand(string branding);
  void setProduct(string products);
  pair<product *, brand *> productBrand;
  set<brand *> Storebrands;
  map<string, pair<product *, brand *>> UpcProductBrand;
  vector<product *> productsToBrands;

private:
  string upc;
  string brand;
  string product;
};

#endif