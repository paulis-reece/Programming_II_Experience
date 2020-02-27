#include "brand.cpp"
#include "product.cpp"
#include "store.cpp"
#include <cstdlib>  // for exit
#include <iomanip>  // for format output
#include <iostream> // for cin and cout
#include <string>   // strings
#include <vector>   // for vectors
using namespace std;

int main() {
  string lineCode;
  brand* pointerBrand;
  product* pointerProduct;
  ofstream fout;
  ifstream file;
  store Store;
  map<string, pair<product*, brand*>>*pointerMap;
  map<string, pair<product*, brand*>>::iterator iter;
  vector<product*> *pointerProductToBrands;
  set<brand*> *ptrBrandInStore;
  pair<product*, brand*> *pointerProductBrand;
  file.open("product.txt");
  if (!file.is_open()) {
    cout << "Could not be open" << endl;
  } else {
    while (!file.eof()) {
      (getline(file, lineCode, '\t'));
      Store.setUpcCode(lineCode);
      (getline(file, lineCode, '\t'));
       pointerBrand = new brand;
       pointerBrand->setBrand(lineCode);
      (getline(file, lineCode, '\n'));
      pointerProduct = new product;
      pointerProduct->setProduct(lineCode);
      Store.productBrand = make_pair(pointerProduct, pointerBrand);
      Store.UpcProductBrand.emplace(Store.getUpcCode(), Store.productBrand);
    }
  }
  fout.close();
pointerMap = &Store.UpcProductBrand;
pointerProductToBrands = &Store.productsToBrands;
ptrBrandInStore = &Store.
  for (iter = pointerMap->begin(); iter != pointerMap->end(); ++iter) {
    if (Store.Storebrands.count(iter->second.second) == 0) {
      Store.Storebrands.insert(iter->second.second);
    }
    brand brand;
    brand.setBrand("Usda Produce");
    if (iter->second.second == brand.getBrand()) {
      Store.productsToBrands.push_back(iter->second.first);
    }
  }
  cout << "Brand Associated with Product: Usda Produce" << endl;
  for (auto vecArray : productsToBrands) {
    cout << vecArray << endl;
  }
  cout << "_________________________" << endl;
  cout << "Brands in Store: " << endl;
  for (auto SetArray : Storebrands) {
    cout << SetArray << endl;
  }
  cout << "_________________________" << endl;
  cout << "Give Upc Code then what is brand and product name? (208220500007)"
       << endl;
  for (iter = UpcProductBrand.begin(); iter != UpcProductBrand.end(); ++iter) {
    if (iter->first == "208220500007") {
      cout << iter->second.second << "--------" << iter->second.first << endl;
    }
  }
  cout << "____________________________" << endl;
  cout << "Given a product name, what are its UPC codes? Organic Cranberries"
       << endl;
  for (iter = UpcProductBrand.begin(); iter != UpcProductBrand.end(); ++iter) {
    if (iter->second.first == "Organic Cranberries") {
      cout << iter->first << endl;
    }
  }
  cout << "____________________________" << endl;
  cout << "Given a product name, what are its brand names? Organic Cranberries"
       << endl;
  for (iter = UpcProductBrand.begin(); iter != UpcProductBrand.end(); ++iter) {
    if (iter->second.first == "Organic Cranberries") {
      cout << iter->second.second << endl;
    }
  }
  cout << endl;
  return 0;
}