
#include <fstream>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H
class product {
public:
  string getProduct() const;
  void setProduct(string products);

private:
  string product;
};

#endif