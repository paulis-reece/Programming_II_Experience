#include "brand.cpp"
#include "product.cpp"
#include "store.cpp"
#include "upc.cpp"
#include <cstdlib>  // for exit
#include <iomanip>  // for format output
#include <iostream> // for cin and cout
#include <string>   //  forstrings
#include <vector>   // for vectors
using namespace std;

int main() {
  // File input and output from text file
  ofstream fout;
  ifstream file;
  // Class Variables
  store Store;
  product Product;
  // Get a specific line from text file
  string lineCode;
  // Decisions for User
  char choice;
  // Test Variables
  // Side Note: You can change this variables to other brand, upc, and products
  // if you wish
  string userBrand = "Usda Meat";
  string userUpc = "307667630039";
  string userProduct =
      "Purina Friskies Rise & Shine Cat Food Sunny Chicken & Egg Scramble";
  // Class pointers
  upc *pointerUpc = nullptr;
  brand *pointerBrand = nullptr;
  product *pointerProduct = nullptr;
  // Iliterator for my map
  map<upc *, pair<product *, brand *>>::iterator loopMap;
  // File text access and input into Class map held in store
  file.open(
      "Inventory.txt"); // Side Note: You can change to inventory text file if
                        // you wish, its currently on inventory file to make it
                        // but can be changed to my test file
  if (!file.is_open()) {
    cout << "Could not be open" << endl;
  } else {
    while (!file.eof()) {
      (getline(file, lineCode, '\t'));
      pointerUpc = new upc;
      pointerUpc->setUpcCode(lineCode);
      (getline(file, lineCode, '\t'));
      pointerBrand = new brand;
      pointerBrand->setBrand(lineCode);
      (getline(file, lineCode, '\n'));
      pointerProduct = new product;
      pointerProduct->setProduct(lineCode);
      // Emplace into map of store (Map has a pointer for Upc class and a value
      // pair which holds a pointer for product class and another pointer for
      // brand class)
      Store.UpcProductBrand.emplace(pointerUpc,
                                    make_pair(pointerProduct, pointerBrand));
    }
  }
  fout.close(); // File closed
  // Start of loop to access each components of map
  for (loopMap = Store.UpcProductBrand.begin();
       loopMap != Store.UpcProductBrand.end(); ++loopMap) {
    Store.setStoreBrand(
        loopMap->second.second
            ->getBrand()); // Container set that holds brands from the map
                           // (Store class holds this container)
    Store.setStoreProducts(
        loopMap->second.first
            ->getProduct()); // Container set that holds products from the map
                             // (Store class holds this container)
    if (loopMap->second.second->getBrand() == userBrand) {
      Product.productsToBrands.push_back(
          loopMap->second.first); // Container vector that holds products of a
                                  // brand (Product Class holds this)
    }
  }
  // Displays Brand Associated with a product
  cout << "Brand Associated with Product: " << userBrand << endl;
  cout << "-------------------------------" << endl;
  for (auto vecArray : Product.productsToBrands) {
    cout << vecArray->getProduct() << endl;
  }
  cout << "_________________________" << endl;
  // Displays brand and product associated with UPC code
  cout << "Give Upc Code then what is brand and product name? " << userUpc
       << endl;
  for (loopMap = Store.UpcProductBrand.begin();
       loopMap != Store.UpcProductBrand.end(); ++loopMap) {
    if (loopMap->first->getUpcCode() == userUpc) {
      cout << "Brand : " << loopMap->second.second->getBrand() << "--------"
           << "Product : " << loopMap->second.first->getProduct() << endl;
    }
  }
  cout << "____________________________" << endl;
  // Displays Upc Code for product name
  cout << "Given a product name, what is its UPC code? " << userProduct << endl;
  cout << "-------------------------------" << endl;
  for (loopMap = Store.UpcProductBrand.begin();
       loopMap != Store.UpcProductBrand.end(); ++loopMap) {
    if (loopMap->second.first->getProduct() == userProduct) {
      cout << "Upc Code : " << loopMap->first->getUpcCode() << endl;
    }
  }
  cout << "____________________________" << endl;
  // Displays Brand associated with product name
  cout << "Given a product name, what is its brand name? " << userProduct
       << endl;
  cout << "-------------------------------" << endl;
  for (loopMap = Store.UpcProductBrand.begin();
       loopMap != Store.UpcProductBrand.end(); ++loopMap) {
    if (loopMap->second.first->getProduct() == userProduct) {
      cout << "Brand : " << loopMap->second.second->getBrand() << endl;
    }
  }
  cout << "____________________________" << endl;
  // Displays brands in store
  cout << "Do you want to display brands in store?" << endl;
  cout << "(Y) For Yes" << endl;
  cout << "(N) For No" << endl;
  cout << "Choice: ";
  cin >> choice;
  while (choice != 'Y' && choice != 'N') {
    cout << "Please select (Y) for yes or (N) for no" << endl;
    cout << "Choice: ";
    cin >> choice;
  }
  if (choice == 'Y') {
    cout << "Brands in Store: " << endl;
    Store.getStoreBrand();
    cout << "_________________________" << endl;
  }

  cout << "Do you want to display products in store?" << endl;
  cout << "(Y) For Yes" << endl;
  cout << "(N) For No" << endl;
  cout << "Choice: ";
  cin >> choice;
  while (choice != 'Y' && choice != 'N') {
    cout << "Please select (Y) for yes or (N) for no" << endl;
    cout << "Choice: ";
    cin >> choice;
  }
  if (choice == 'Y') {
    // Displays Products in store
    cout << "Products in Store: " << endl;
    Store.getStoreProducts();
    cout << "_________________________" << endl;
  }
  // Deletes all allocated memory in map
  for (loopMap = Store.UpcProductBrand.begin();
       loopMap != Store.UpcProductBrand.end(); ++loopMap) {
    delete loopMap->first;
    delete loopMap->second.first;
    delete loopMap->second.second;
  };
  // Setting Pointers to null
  pointerUpc = nullptr;
  pointerBrand = nullptr;
  pointerProduct = nullptr;
  return 0;
}