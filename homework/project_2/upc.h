
#include <string>
using namespace std;
#ifndef UPC_H
#define UPC_H
class upc {
public:
// Functions for Upc Code
  string getUpcCode() const;
  void setUpcCode(string UPCcode);

private:
  string upc;
};

#endif