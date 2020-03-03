#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

#ifndef BRAND_H
#define BRAND_H
class brand {
public:
  // Functions to get and set private member variable brand
  string getBrand() const;
  void setBrand(string branding);

private:
  // Function for brand
  string brand;
};

#endif