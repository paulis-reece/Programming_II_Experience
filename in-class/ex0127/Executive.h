/*************************************************************************
 *
 * Excercise: Inheritance
 *
 * File Name:  Executive.h
 * Username:  	reklre
 * Username:  	?
 * Course:      CPTR 142
 * Date:        20 Feb 2019
 *
 */
#ifndef EXECUTIVE_H
#define EXECUTIVE_H


#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

// Simple class for modelling a person
class Executive: public Person {
      public:
        void think(string name) {
            cout << name << " is thinking..." << endl;
        }

    	
};
#endif // PERSON_H