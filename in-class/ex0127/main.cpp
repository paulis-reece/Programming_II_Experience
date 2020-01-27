/*************************************************************************
 *
 * Checkpoint Assignment: Inheritance
 *
 * File Name:   main.cpp
 * Username:  	reklre
 * Username:  	?
 * Course:      CPTR 142
 * Date:        20 Feb 2019
 *
 */
#include "Engineer.h"
#include <iostream>
using namespace std;

int main() {

  Person citizen;
  citizen.setName("Joe");

  Engineer worker;
  worker.setName("Joe");
  worker.think();
  worker.design();

  return 0;
}
