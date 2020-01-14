#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout

const int CLASS_SIZE = 6;
const int NUMBER_OF_SCORES = 14;

int main() {
  char homeworkScores[CLASS_SIZE][NUMBER_OF_SCORES] = {
      {'E', 'E', 'E', 'E', 'M', 'N', 'E', 'R', 'E', 'M', 'N', 'R', 'R', 'N'},
      {'M', 'M', 'E', 'M', 'M', 'R', 'R', 'M', 'R', 'N', 'N', 'N', 'N', 'N'},
      {'E', 'E', 'E', 'E', 'M', 'E', 'E', 'M', 'E', 'E', 'E', 'M', 'E', 'E'},
      {'E', 'E', 'M', 'N', 'R', 'R', 'M', 'E', 'M', 'M', 'M', 'M', 'E', 'E'},
      {'E', 'E', 'M', 'E', 'M', 'M', 'E', 'M', 'E', 'E', 'E', 'M', 'E', 'E'},
      {'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E'},
  };
  return 0;
}