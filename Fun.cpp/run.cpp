#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <fstream>  // fstream
#include <iomanip>  // for format output
#include <iostream> // for cin and cout
#include <map>
#include <set>
#include <string> // strings
#include <utility>
#include <vector> // for vectors
using namespace std;
int main() {
  // Use find function instead of iliterating through map
  ofstream fout;
  ifstream file;
  string upc;
  string brand;
  string brands;
  string product;
  string lineCode;
  // string *branding;
  // branding = new string;
  pair<string, string> productBrand;
  set<string> Storebrands;
  vector<string> productsToBrands;
  map<string, pair<string, string>> UpcProductBrand;
  map<string, pair<string, string>>::iterator iter;
  map<string, string> productBrands;
  file.open("product.txt");
  if (!file.is_open()) {
    cout << "Could not be open" << endl;
  } else {
    while (!file.eof()) {
      (getline(file, lineCode, '\t'));
      upc = lineCode;
      (getline(file, lineCode, '\t'));
      brand = lineCode;
      (getline(file, lineCode, '\n'));
      product = lineCode;
      productBrand = make_pair(product, brand);
      UpcProductBrand.emplace(upc, productBrand);
    }
  }
  fout.close();
  for (iter = UpcProductBrand.begin(); iter != UpcProductBrand.end(); ++iter) {
    if (Storebrands.count(iter->second.second) == 0) {
      Storebrands.insert(iter->second.second);
    }
    brand = "Usda Produce";
    if (iter->second.second == brand) {
      productsToBrands.push_back(iter->second.first);
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
