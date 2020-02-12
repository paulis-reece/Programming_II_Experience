// Name : Reece Reklai
// Date : 2/9/2020
// Runs main with connection to beetle.cpp and dice.cpp

#include "beetle.cpp" // Enable Bettle Class
#include "dice.cpp"   // Enable Dice Class
#include <cassert>    // for assert
#include <cstdlib>    // for exit
#include <iostream>   // for cin and cout
#include <vector>     // Activate Vector usage

using namespace std;

int main() {
  int playAgain = 0; // Restart Game
  do {
    Dice dice;              // Class Dice
    vector<string> players; // Store players of the dice game
    int numPlayer = 0;      // Amount of players participating
    int seed = 0;           // Seed
    int turnsTaken = 0;     // Turns iliterated
    int turnWinner = 0;     // The turns of the winner
    int getRoll = 0;        // Dice Rolled
    bool verdict = false;   // Who won the game
    bool validation;        // Validate user input for names
    string playerName;      // Player name
    string player;          // Player winner
    // Welcomes user and determines how many are playing the beetle game
    cout << "Welcome to the Bettle Dice Game!" << endl;
    cout << "How many players are participating today : ";
    cin >> numPlayer;
    while (numPlayer <= 0 || cin.fail()) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Please enter only positive integers except zero and negative "
              "one (-1 to exit the game) : ";
      cin >> numPlayer;
      if (numPlayer == -1) {
        exit(0);
      }
    }
    vector<int> turnPerPlayer(numPlayer,
                              0); // Initializing a parallel vector to players
    vector<Beetle> beetleDrawings(
        numPlayer); // Each player's corresponding class
    // Getting the Player names
    for (int i = 0; i < numPlayer; i++) {
      cout << "What is the name for player " << i + 1
           << " (No wierd punctuation) : ";
      cin >> playerName;
      for (int i = 0; i < playerName.length(); i++) {
        if (isdigit(playerName.at(i)) || ispunct(playerName.at(i)) ||
            cin.fail()) {
          validation = false;
          break;
        } else {
          validation = true;
        }
      }
      while (validation == false) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please Enter Valid Player Names (type the word LEAVE to "
                "exit) : ";
        cin >> playerName;
        for (int i = 0; i < playerName.length(); i++) {
          if (isdigit(playerName.at(i)) || ispunct(playerName.at(i))) {
            validation = false;
            break;
          } else {
            validation = true;
          }
        }
        if (playerName == "LEAVE") {
          exit(0);
        }
      }
      players.push_back(playerName);
    }
    // Seed for the game
    cout << "What is the seed for the players : ";
    cin >> seed;
    while (cin.fail() || seed < 0) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Please Enter Valid Player Seeds (-1 to exit) : ";
      cin >> seed;
      if (seed == -1) {
        exit(0);
      }
    }
    srand(seed);
    // This starts and finishes the bettle game
    while (verdict == false) {
      turnsTaken++;
      for (int j = 0; j < numPlayer; j++) {
        // Dice Values
        dice.setDiceFace();
        getRoll = dice.getDiceFace();
        turnPerPlayer.at(j) += beetleDrawings.at(j).bettleGame(
            getRoll); // Goes into the function and gives directions to the
                      // currently player on whether he/she can "draw" the
                      // beetle part or not
        if (turnPerPlayer.at(j) == 63) {
          turnWinner = turnsTaken;
        }
      }
      for (int j = 0; j < numPlayer; j++) {
        if (turnPerPlayer.at(j) != 63) {
          verdict = false;
        } else {
          verdict = true;
          player = players.at(j);
          break;
        }
      }
    }
    // The players and their turns
    cout << "Here are the players and their turns" << endl;
    cout << "------------------------------------" << endl;
    for (int j = 0; j < numPlayer; j++) {
      cout << players.at(j) << " : " << turnPerPlayer.at(j) << endl;
    }
    cout << "------------------------------------" << endl;
    // Winner and his/her turns
    cout << "The winner among the participants is Player " << player << " and "
         << "the number of turns it took him/her : " << turnsTaken << endl;
    cout << "Do you want to play again? (1 for Yes and 2 for No) : ";
    cin >> playAgain;
    while (playAgain != 1 && playAgain != 2) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Please enter 1 for Yes or 2 for No (-1 to exit) : ";
      cin >> playAgain;
      if (playAgain == -1) {
        exit(0);
      }
    }
  } while (playAgain == 1);
  return 0;
}