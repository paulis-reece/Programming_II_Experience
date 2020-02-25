#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <fstream>  // fstream
#include <iomanip>  // for format output
#include <iostream> // for cin and cout
#include <string>   // strings
#include <vector>   // for vectors
using namespace std;

class Store{









    
};

















int main() {
  ofstream fout;
  ifstream file;
  string line;
  string Name;
  int num;
  bool facts = true;
  file.open("product.txt");
  if (!file.is_open()) {
    cout << "Could not be open" << endl;
  } else {
    while (!file.eof()) {
      (getline(file, line, '\t'));
      cout << line << endl;
      (getline(file, line, '\t'));
      cout << line << endl;
      (getline(file, line, '\n'));
      cout << line << endl;
    }
  }
  fout.close();
  return 0;
}