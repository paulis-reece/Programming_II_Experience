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
  string getBrand() const;
  void setBrand(string branding);

private:
  string brand;
};

#endif