#include <algorithm>
#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <fstream>  // fstream
#include <iomanip>  // for format output
#include <iostream> // for cin and cout
#include <map>
#include <set>
#include <string> // strings
#include <utility>
#include <vector> // for vectors
using namespace std;
int main() {
  // Use find function instead of iliterating through map
  ofstream fout;
  ifstream file;
  char user;
  char tryAgain;
  string username;
  string passcode;
  string brand;
  string product;
  string lineCode;
  bool verdict = true;
  int counter = 0;
  // string *branding;
  // branding = new string;
  map<string, string> readMe;
  map<string, string>::iterator iter;
  file.open("test.txt");
  if (!file.is_open()) {
    cout << "Could not be open" << endl;
  } else {
    while (!file.eof()) {
      (getline(file, lineCode, '\n'));
      brand = lineCode;
      (getline(file, lineCode, '\n'));
      product = lineCode;
      readMe.emplace(product, brand);
    }
  }
  fout.close();
  for (auto map : readMe) {
    cout << map.first << "---" << map.second << endl;
  }
  cout << "____________" << endl;
  // Function for Project 3
  cout << "Do you want to login or sign up?" << endl;
  cout << "(A) Login" << endl;
  cout << "(B) Sign up" << endl;
  cout << "User Choice : ";
  cin >> user;
  while (user != 'A' && user != 'B') {
    cout << "Please Enter A for login or B for sign up : ";
    cin >> user;
  }
  switch (user) {
  case 'A': {
    do {
      if (verdict == false) {
        cout << "Sorry, username does not exist" << endl;
        cout << "Do you want to try again? (Y)es or (N)o : ";
        cin >> tryAgain;
        while (tryAgain != 'Y' && tryAgain != 'y' && tryAgain != 'N' &&
               tryAgain != 'n') {
          cout << "Please enter Y for yes or N for no : ";
          cin >> tryAgain;
        }
        if (tryAgain == 'N' || tryAgain == 'n') {
          exit(0);
        }
      }
      cout << "What is your username? : ";
      cin >> username;
      for (auto map : readMe) {
        if (username == map.first) {
          verdict = true;
          break;
        } else {
          verdict = false;
        }
      }
    } while (verdict == false);
    do {
      if (verdict == false) {
        cout << "Sorry, passcode does not exist" << endl;
        cout << "Do you want to try again? (Y)es or (N)o : ";
        cin >> tryAgain;
        while (tryAgain != 'Y' && tryAgain != 'y' && tryAgain != 'N' &&
               tryAgain != 'n') {
          cout << "Please enter Y for yes or N for no : ";
          cin >> tryAgain;
        }
        if (tryAgain == 'N' || tryAgain == 'n') {
          exit(0);
        }
      }
      cout << "What is your passcode? : ";
      cin >> passcode;
      for (auto map : readMe) {
        if (passcode == map.second) {
          verdict = true;
          break;
        } else {
          verdict = false;
        }
      }
    } while (verdict == false);
    cout << "You have successfully logged in! " << endl;
    break;
  case 'B':
    do {
      if (verdict == false) {
        cout << "Sorry, username is taken" << endl;
        cout << "Do you want to try again? (Y)es or (N)o : ";
        cin >> tryAgain;
        while (tryAgain != 'Y' && tryAgain != 'y' && tryAgain != 'N' &&
               tryAgain != 'n') {
          cout << "Please enter Y for yes or N for no : ";
          cin >> tryAgain;
        }
        if (tryAgain == 'N' || tryAgain == 'n') {
          exit(0);
        }
      }
      cout << "What is your desired username? : ";
      cin >> username;
      for (auto map : readMe) {
        if (username != map.first) {
          verdict = true;
        } else {
          verdict = false;
          break;
        }
      }
    } while (verdict == false);
    cout << "What is your passcode? : ";
    cin >> passcode;
    readMe.emplace(username, passcode);
    for (auto map : readMe) {
      cout << map.first << "---" << map.second << endl;
    }
    break;
  }
  }
  return 0;
}
