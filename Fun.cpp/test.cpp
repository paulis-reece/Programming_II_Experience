#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <fstream>  // fstream
#include <iomanip>  // for format output
#include <iostream> // for cin and cout
#include <map>
#include <string> // strings
#include <vector> // for vectors
#include <utility>
using namespace std;

// Functions
int main() {
  vector<string> productFromBrand;
  map<string*, string*> productBrand;
  map<string*, int> brandAmount;
  pair<string,string> ProBrand;
  map<string, pair<string,string>> UpcProductBrand;
  string upcCode;
  string brand;
  string product;
  ofstream fout;
  string name;
  string name2;
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
      upcCode = line;
      (getline(file, line, '\t'));
      brand = line;
      (getline(file, line, '\n'));
      product = line;
      ProBrand = make_pair(product, brand);
      UpcProductBrand.emplace(upcCode, ProBrand);
      productBrand.emplace(product, brand);
    }
  }
  fout.close();
for(auto map : UpcProductBrand){
name = map.second.first;
name2 = map.second.second;
cout << map.first << "-------------" << name << "----------------" << name2<< endl;
}











  /* for (auto map : productBrand) {
    cout << map.first << "---------" << map.second << endl;
    // use new for this vector
    if (map.second == "Usda Meat") {
      productFromBrand.push_back(map.first);
    }
    // Use new for this variable
    if (brandAmount.count((&map.second)) == 0) {
      brandAmount.emplace(&map.second, 1);
    } else {
      brandAmount.at(&map.second)++;
    }
  }
 for(auto map: productBrand){




 }
  cout << "___________________________" << endl;
  for (auto map : productFromBrand) {
    cout << map << endl;
  }
  cout << "__________________________" << endl;
  for (auto map : brandAmount) {
    cout << map.first << "-----------------" << map.second << endl;
  }*/
  return 0;
}
