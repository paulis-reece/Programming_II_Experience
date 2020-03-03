
#include <map>
#include <string>
#include <vector>
using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H
class product {
public:
  // Functions for product private member variable
  string getProduct() const;
  void setProduct(string products);
  vector<product *> productsToBrands;

private:
  // Variable for product
  string product;
};

#endif