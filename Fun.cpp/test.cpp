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
class store {
public:
  store();
  string getUpcCode() const;
  string getBrand() const;
  string getProduct() const;
  map<string, pair<string, string>> UpcProductBrand;
  map<string, pair<string, string>>::iterator iter;
  vector<string *> productsToBrands;

private:
  ofstream fout;
  ifstream file;
  string upc;
  string brand;
  string product;
  string lineCode;
  pair<string, string> productBrand;
};

class products {
public:
  string getProduct() const;
  void setProductMap();

private:
  string product;
  map<string *, string *> productBrand;
};

class brand{
public:
  string getBrand() const;

private:
  string brand;
  set<string *> Storebrands;
};

string store::getUpcCode() const { return this->upc; }
string store::getBrand() const { return this->brand; }
string store::getProduct() const { return this->product; }
store::store() {
  file.open("product.txt");
  if (!file.is_open()) {
    cout << "Could not be open" << endl;
  } else {
    while (!file.eof()) {
      (getline(file, lineCode, '\t'));
      this->upc = lineCode;
      (getline(file, lineCode, '\t'));
      this->brand = lineCode;
      (getline(file, lineCode, '\n'));
      this->product = lineCode;
      this->productBrand = make_pair(product, brand);
      UpcProductBrand.emplace(getUpcCode(), this->productBrand);
    }
  }
  fout.close();
}
string products::getProduct() const { return this->product; }
void products::setProductMap() {}
string brand::getBrand() const { return this->brand; }
int main() { return 0; }
