#include <iostream>
#include <iomanip>
using namespace std;

class Matrix {
  public:
    Matrix();
    void setValues(int,int,int,int);
    void print();
    int getTrace();
    int getDeterminant();
  private:
    int a,b,c,d; // Entries in | a b |
                 // matrix     | c d |
};

Matrix::Matrix() {
  a = 1; b = 0;
  c = 0; d = 1;
}   

int main() {
  Matrix Z(0);       // create a matrix of all zeros
  cout << "Z = " << endl;
  Z.print();
   
  Matrix I;          // create identity matrix [ [1,0], [0,1] ]
  cout << "I = " << endl;
  I.print();
   
  Matrix A(1,2,3,4); // create matrix [ [1,2], [3,4] ]
  cout << "A = " << endl;
  A.print();   
}

void Matrix::setValues(int x, int y, int z, int w) {
  a = x;
  b = y;
  c = z;
  d = w;
}

int Matrix::getTrace() {
  return a + d;
}

int Matrix::getDeterminant() {
  return a*d - b*c;   
}

void Matrix::print() {
  cout << "| " << setw(2) << a
       << " " << setw(2) << b 
       << " |" << endl
       << "| " << setw(2) << c
       << " " << setw(2) << d 
       << " |" << endl << endl;;
}
