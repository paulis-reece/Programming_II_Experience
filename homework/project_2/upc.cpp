#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include "upc.h"
using namespace std;
string upc::getUpcCode() const { return this->upc; }
void upc::setUpcCode(string UPCcode){
this->upc = UPCcode;
}