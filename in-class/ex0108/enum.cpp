/*************************************************************************
 *
 * In-Class Exercise: Enumeration Data Types
 *
 * File Name: enum.cpp
 * Username:  fostja
 * Username:  ?
 * Course:    CPTR 142
 */

#include <iostream>
using namespace std;

int main() {
   enum City {CITY_SEATTLE, CITY_SPOKANE, CITY_PENDLETON, CITY_PORTLAND};
   City myCity;

   myCity = CITY_SPOKANE;

   /* Print "OR", "WA", or "??" based on location of myCity  */

   return 0;
}
