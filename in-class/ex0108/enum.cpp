/*************************************************************************
 *
 * In-Class Exercise: Enumeration Data Types
 *
 * File Name: enum.cpp
 * Username:  reklre
 * Username:  pricqu
 * Course:    CPTR 142
 */

#include <iostream>
using namespace std;

int main() {
   enum City {CITY_SEATTLE, CITY_SPOKANE, CITY_PENDLETON, CITY_PORTLAND};
   City myCity;

   myCity = CITY_SPOKANE;

   /* Print "OR", "WA", or "??" based on location of myCity  */
  if(myCity == CITY_SEATTLE || myCity == CITY_SPOKANE){
      cout << "WA" << endl;
  } else if(myCity == CITY_PENDLETON || myCity == CITY_PORTLAND){
      cout << "OR" << endl;
  } else {
      cout << "??" << endl;
  }



  switch(myCity){
      case CITY_SEATTLE:
      case CITY_SPOKANE:
      cout << "WA" << endl;
      break;
      case CITY_PENDLETON:
      case CITY_PORTLAND:
      cout << "OR" << endl;
      break;
      default:
      cout << "??" << endl;
  }
   return 0;
}
