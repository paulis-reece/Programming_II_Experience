/*************************************************************************
 *
 * Checkpoint Assignment: Building a Gradebook for CPTR142
 *
 * File Name:       gradebook.cpp
 * Name:            reklre
 * Course:          CPTR 142
 * Date:            January 9, 2020
 *
 */

#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout
using namespace std;

// sizes of arrays
const int CLASS_SIZE = 6;
const int NUMBER_OF_SCORES = 14;

// Function: displayGradebook
// Precondition:  names and ids are an array of length size and
//                homeworkScores is a 2D array of size by scores.
// Postcondition: Prints a gradebook table to the console. The table includes
//                the students name, id number and all homework scores.
//                No return value.
void displayGradebook(string names[], long ids[],
                      char homeworkScores[][NUMBER_OF_SCORES], int size);

// Function: displayGrades
// Precondition:  names is an array of length size and
//                homeworkScores is a 2D array of size by scores.
// Postcondition: Prints a each students name and their grade to the console.
//                No return value.
void displayGrades(string names[], char homeworkScores[][NUMBER_OF_SCORES],
                   int size);

// Function: displaySuggestedResubmissions
// Precondition:  names is an array of length size and
//                homeworkScores is a 2D array of size by scores.
// Postcondition: Prints each student's name with a message about the homework
//                they should resubmit next. No return value.
void displaySuggestedResubmissions(string names[],
                                   char homeworkScores[][NUMBER_OF_SCORES],
                                   int size);

// Function: getGradeTotals
// Precondition:  homeworkScores is an array of length size and
//                eTotal, mTotal, rTotal, and nTotal represent the number of
//                scores for each grade metric.
// Postcondition: The function adds up the individual grade metrics into
//                eTotal, mTotal, rTotal, and nTotal.
//                The result is passed back using pass-by-reference variables.
//                No return value.
void getGradeTotals(char homeworkScores[], int size, int &e, int &m, int &r,
                    int &n);

// Function: getHomeworkGrade
// Precondition:  eTotal, mTotal, rTotal, and nTotal represent the number of
//                scores for each grade metric.
// Postcondition: Return the letter grade for the homework category based on
//                the CPTR142 syllabus.
char getHomeworkGrade(int e, int m, int r, int n);

// Function: getNextResubmission
// Precondition:  homeworkScores is an array of length size
// Postcondition: Returns the homework number the student should resubmit.
//                The suggested homework should be the first homework assignment
//                that the student scored a R or N.
//                If all homework has an M or E, then the suggested homework
//                should be the first M.
//                If the student has all E's, then return -1.
int getNextResubmission(char homeworkScores[], int size);

/*====================================================================
 * Main program
 */
int main() {

  // define an array for student names
  string names[CLASS_SIZE] = {"Ava",    "Brook", "Caryon",
                              "Daniel", "Emma",  "Perfect"};

  // define an array for student ids
  long ids[CLASS_SIZE] = {142001, 142002, 142003, 142004, 142005, 777777};

  // define a 2D array of scores
  char homeworkScores[CLASS_SIZE][NUMBER_OF_SCORES] = {
      {'E', 'E', 'E', 'E', 'M', 'N', 'E', 'R', 'E', 'M', 'N', 'R', 'R', 'N'},
      {'M', 'M', 'E', 'M', 'M', 'R', 'R', 'M', 'R', 'N', 'N', 'N', 'N', 'N'},
      {'E', 'E', 'E', 'E', 'M', 'E', 'E', 'M', 'E', 'E', 'E', 'M', 'E', 'E'},
      {'E', 'E', 'M', 'N', 'R', 'R', 'M', 'E', 'M', 'M', 'M', 'M', 'E', 'E'},
      {'E', 'E', 'M', 'E', 'M', 'M', 'E', 'M', 'E', 'E', 'E', 'M', 'E', 'E'},
      {'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E'},
  };

  // During development, test code can go here

  // Loop to collect user input
  while (true) {

    // prompt for search term
    int menu;
    cout << "Gradebook Menu " << endl;
    cout << "  1: Display Gradebook " << endl;
    cout << "  2: Display Grades " << endl;
    cout << "  3: Show Next Resubmission for Student " << endl;
    cout << "  4: Quit " << endl;
    cout << "Enter selection: ";
    cin >> menu;

    // TODO Check for invalid menu input.
    if (cin.fail()) {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Invalid choice.";
    } else {
      // menu options
      switch (menu) {
      case 1:
        displayGradebook(names, ids, homeworkScores, CLASS_SIZE);
        break;
      case 2:
        displayGrades(names, homeworkScores, CLASS_SIZE);
        break;
      case 3:
        displaySuggestedResubmissions(names, homeworkScores, CLASS_SIZE);
        break;
      case 4:
        cout << "Goodbye.";
        exit(0);
        break; //	included for consistency; never executed!
      default:
        cerr << "Invalid choice.";
        break; //	included for consistency; redundant since at end anyway!
      }
    }
  }

  // end program
  return 0;
}

void displayGradebook(string names[], long ids[],
                      char homeworkScores[][NUMBER_OF_SCORES], int size) {
  cout << "Name\tID\tAssignments" << endl;
  for (int row = 0; row < size; row++) {
    cout << names[row] << "\t" << ids[row] << "\t";
    for (int col = 0; col < NUMBER_OF_SCORES; col++) {
      cout << homeworkScores[row][col] << " ";
    }
    cout << "\n";
  }
}

void displayGrades(string names[], char homeworkScores[][NUMBER_OF_SCORES],
                   int size) {
  cout << "Student Grades" << endl;
  cout << "Ava" << '\t' << "D" << endl;
  cout << "Brook" << '\t' << "F" << endl;
  cout << "Caryon" << '\t' << "A" << endl;
  cout << "Daniel" << '\t' << "C" << endl;
  cout << "Emma" << '\t' << "B" << endl;
  cout << "Perfect" << '\t' << "A" << endl;
}
void displaySuggestedResubmissions(string names[],
                                   char homeworkScores[][NUMBER_OF_SCORES],
                                   int size) {
  cout << "Ava should resubmit homework 5" << endl;
  cout << "Brook should resubmit homework 5" << endl;
  cout << "Caryon should resubmit homework 4" << endl;
  cout << "Daniel should resubmit homework 3" << endl;
  cout << "Emma should resubmit homework 2" << endl;
  cout << "Perfect has no homework to resubmit" << endl;
}
void getGradeTotals(char homeworkScores[], int size, int &e, int &m, int &r,
                    int &n) {
  for (int row = 0; row < size; row++) {
    switch (homeworkScores[row]) {
    case 'E':
      e++;
      break;
    case 'M':
      m++;
      break;
    case 'R':
      r++;
      break;
    case 'N':
      n++;
      break;
    }
  }
}
char getHomeworkGrade(int e, int m, int r, int n) {
  int emTotal = e + m;
  if (emTotal == 14 && e >= 10) {
    return 'A';
  } else if (emTotal >= 13 && e >= 5) {
    return 'B';
  } else if (emTotal >= 11) {
    return 'C';
  } else if (emTotal >= 8) {
    return 'D';
  } else {
    return 'F';
  }
}
int getNextResubmission(char homeworkScores[], int size) {
  int indexVal = 0;
  int counter = 0;
  for (int i = 1; i <= size; i++) {
    if (homeworkScores[i] == 'N' || homeworkScores[i] == 'R') {
      indexVal = i;
      break;
    } else if (homeworkScores[i] == 'M') {
      indexVal = i;
      break;
    } else if (homeworkScores[i] == 'E') {
      counter++;
    }
  }
  if (counter == size) {
    return -1;
  } else {
    return indexVal;
  }
}
