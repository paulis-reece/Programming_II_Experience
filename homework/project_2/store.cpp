#include "store.h"
using namespace std;

string store::getUpcCode() const { return this->upc; }
void store::setUpcCode(string Upc){
this->upc = Upc;
}