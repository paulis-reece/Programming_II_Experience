/*************************************************************************
 *
 * Checkpoint Assignment: Dynamic Memory
 *
 * File Name:       Course.h
 * Name:            reklre
 * Course:          CPTR 142
 *
 */
#ifndef COURSE_H
#define COURSE_H

#include "Person.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Course {

private:
  int maxSize = 0;
  int currentEnrollment = 0;

  // TODO Declare the dynamic array for student roster
  vector<Person *> studentRoster;

public:
  // no-argument constructor
  Course() {}
  ~Course() {
    for (int i = studentRoster.size() - 1; i < studentRoster.size(); i--) {
      delete studentRoster.at(i);
    }
  }
  Course(const int size) {
    cout << "-~= Consturctor Called =~-" << endl;
    maxSize = size;

    // TODO According to the number of students, create a dynamic array of
    // Person objects
  }

  int getCourseSize() { return maxSize; }

  int getEnrollmentCount() { return currentEnrollment; }

  /**
   * addStudent
   * Precondition: Takes a single pointer to a Person object.
   * Postcondition: Adds the Person pointer to the course roster.
   */
  void addStudent(Person *newStudent) { studentRoster.push_back(newStudent); }

  /**
   * displayRoster
   * Precondition: None
   * Postcondition: Prints to the console the roster of students in the course.
   */
  void displayRoster() {
    for (auto student : studentRoster) {
      cout << student->getName() << endl;
    }
  }
};

#endif // COURSE_H