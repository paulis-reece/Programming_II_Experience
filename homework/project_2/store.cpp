#include "store.h"
using namespace std;

string store::getUpcCode() const { return this->upc; }
string store::getBrand() const { return this->brand; }
string store::getProduct() const { return this->product; }
void store::setUpcCode(string upcCode) { this->upc = upcCode; }
void store::setBrand(string branding) { this->brand = branding; }
void store::setProduct(string products) { this->product = products; }