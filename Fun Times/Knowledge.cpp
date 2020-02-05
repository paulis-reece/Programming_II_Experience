#include <cassert> // for assert
#include <cstdlib> // for exit
#include <cstring>
#include <iostream> // for cin and cout
#include <vector>
using namespace std;



int main() {
string name;
cout << "Enter (z) : ";
cin >> name;
if(name == "LEAVE"){
exit(0);
}
cout << "Hi";
cout << endl;
return 0;
}