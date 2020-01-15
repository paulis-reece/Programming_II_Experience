#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout

const int CLASS_SIZE = 6;
const int NUMBER_OF_SCORES = 14;
using namespace std;

 int getNextResubmission(char homeworkScores[], int size) {
  int indexVal = 0;
  int counter = 0;
  for (int i = 0; i < size; i++) {
      if (homeworkScores[i] == 'N' || homeworkScores[i] == 'R') {
      indexVal = i + 1;
      break;
    } else if (homeworkScores[i] == 'M') {
      indexVal = i + 1;
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
 void displaySuggestedResubmissions(string names[],
                                   char homeworkScores[][NUMBER_OF_SCORES],
                                   int size) {
  for (int r = 0; r < size; r++) {
      cout << names[r];
       if (getNextResubmission(homeworkScores[r], NUMBER_OF_SCORES) ==
          -1) {
        cout << " has no homework to resubmit" << endl;
    
      } else {
        cout << " should resubmit homework "
             << getNextResubmission(homeworkScores[r],
                                    NUMBER_OF_SCORES) << endl;
                               
      }
  }
}

int main() {
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
       // displayGradebook(names, ids, homeworkScores, CLASS_SIZE);
        break;
      case 2:
       // displayGrades(names, homeworkScores, CLASS_SIZE);
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
