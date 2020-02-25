#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <fstream>  // fstream
#include <iomanip>  // for format output
#include <iostream> // for cin and cout
#include <map>
#include <string> // strings
#include <vector> // for vectors
using namespace std;

// Functions
int main() {
  vector<string> productFromBrand;
  map<string, string> brandProduct;
  map<string, int> brandAmount;
  string *ptrBrand;
  string brand;
  string product;
  ofstream fout;
  ifstream file;
  string line;
  int num;
  bool facts = true;
  file.open("product.txt");
  if (!file.is_open()) {
    cout << "Could not be open" << endl;
  } else {
    while (!file.eof()) {
      (getline(file, line, '\t'));
      (getline(file, line, '\t'));
      brand = line;
      (getline(file, line, '\n'));
      product = line;
      brandProduct.emplace(product, brand);
    }
  }
  fout.close();
  for (auto map : brandProduct) {
    cout << map.first << "---------" << map.second << endl;
    // use new for this vector
    if (map.second == "Usda Meat") {
      productFromBrand.push_back(map.first);
    }
    // Use new for this variable
    ptrBrand = &map.second;
    if (brandAmount.count((*ptrBrand)) == 0) {
      brandAmount.emplace((*ptrBrand), 1);
    } else {
      brandAmount.at((*ptrBrand))++;
    }
  }
  cout << "___________________________" << endl;
  for (auto map : productFromBrand) {
    cout << map << endl;
  }
  cout << "__________________________" << endl;
  for (auto map : brandAmount) {
    cout << map.first << "-----------------" << map.second << endl;
  }
  return 0;
}
