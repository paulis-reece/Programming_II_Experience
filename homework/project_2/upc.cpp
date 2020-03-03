
#include "upc.h"
using namespace std;
// Getter for upc code
string upc::getUpcCode() const { return this->upc; }
// Setter for upc code
void upc::setUpcCode(string UPCcode){
this->upc = UPCcode;
}