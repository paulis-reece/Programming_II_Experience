/*************************************************************************
 *
 * Excercise: Inheritance
 *
 * File Name:   Engineer.h
 * Username:  	reklre
 * Username:  	?
 * Course:      CPTR 142
 * Date:        20 Feb 2019
 *
 */
#ifndef ENGINEER_H
#define ENGINEER_H


#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

// Simple class for modelling a person
class Engineer: public Person {
       public:
    	// name mutator
        void design(){
            cout << "Engineer " << getName() << " is designing..." << endl;
        }
    private:
     
};
#endif // PERSON_H