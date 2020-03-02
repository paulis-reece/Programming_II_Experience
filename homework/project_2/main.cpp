#include "brand.cpp"
#include "product.cpp"
#include "store.cpp"
#include "upc.cpp"
#include <cstdlib>  // for exit
#include <iomanip>  // for format output
#include <iostream> // for cin and cout
#include <string>   //  forstrings
#include <vector>   // for vectors
using namespace std;

int main() {
  ofstream fout;
  ifstream file;
  store Store;
  product Product;
  string lineCode;
  string UpcCode;
  string userBrand = "Usda Produce";
  string userUpc = "208220500007";
  upc *pointerUpc = nullptr;
  brand *pointerBrand = nullptr;
  product *pointerProduct = nullptr;
  map<upc *, pair<product *, brand *>>::iterator loopMap;
  file.open("test.txt");
  if (!file.is_open()) {
    cout << "Could not be open" << endl;
  } else {
    while (!file.eof()) {
      (getline(file, lineCode, '\t'));
      pointerUpc = new upc;
      pointerUpc->setUpcCode(lineCode);
      UpcCode = lineCode;
      (getline(file, lineCode, '\t'));
      pointerBrand = new brand;
      pointerBrand->setBrand(lineCode);
      (getline(file, lineCode, '\n'));
      pointerProduct = new product;
      pointerProduct->setProduct(lineCode);
      Store.UpcProductBrand.emplace(pointerUpc,
                                    make_pair(pointerProduct, pointerBrand));
    }
  }
  fout.close();
  for (loopMap = Store.UpcProductBrand.begin();
       loopMap != Store.UpcProductBrand.end(); ++loopMap) {
    Store.setStoreBrand(loopMap->second.second->getBrand());
    if (loopMap->second.second->getBrand() == userBrand) {
      Product.productsToBrands.push_back(loopMap->second.first);
    }
  }
  cout << "Brand Associated with Product: Usda Produce" << endl;
  for (auto vecArray : Product.productsToBrands) {
    cout << vecArray->getProduct() << endl;
  }
  cout << "_________________________" << endl;
  cout << "Brands in Store: " << endl;
  Store.getStoreBrand();
  cout << "_________________________" << endl;
  cout << "Give Upc Code then what is brand and product name? (208220500007)"
       << endl;
  for (loopMap = Store.UpcProductBrand.begin();
       loopMap != Store.UpcProductBrand.end(); ++loopMap) {
    if (loopMap->first->getUpcCode() == userUpc) {
      cout << loopMap->second.second->getBrand() << "--------"
           << loopMap->second.first->getProduct() << endl;
    }
  }
  cout << "____________________________" << endl;
  cout << "Given a product name, what are its UPC codes? Organic Cranberries"
       << endl;
  for (loopMap = Store.UpcProductBrand.begin();
       loopMap != Store.UpcProductBrand.end(); ++loopMap) {
    if (loopMap->second.first->getProduct() == "Organic Cranberries") {
      cout << loopMap->first->getUpcCode() << endl;
    }
  }
  cout << "____________________________" << endl;
  cout << "Given a product name, what are its brand names? Organic Cranberries"
       << endl;
  for (loopMap = Store.UpcProductBrand.begin();
       loopMap != Store.UpcProductBrand.end(); ++loopMap) {
    if (loopMap->second.first->getProduct() == "Organic Cranberries") {
      cout << loopMap->second.second->getBrand() << endl;
    }
  }
  return 0;
}