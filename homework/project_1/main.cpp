#include <cassert>  // for assert
#include <cstdlib>  // for exit
#include <iostream> // for cin and cout
#include <vector>   // Activate Vector usage

using namespace std;

class Dice {
public:
  Dice();
  int getDiceFace() const;
  void setDiceFace();

private:
  int diceFace;
};

Dice::Dice() { this->diceFace = 0; }
int Dice::getDiceFace() const { return this->diceFace; }
void Dice::setDiceFace() { this->diceFace = rand() % 6 + 1; }

class Beetle : public Dice {
public:
  Beetle();
  void setBettlePart(int number);
  int getBody() const;
  int getHead() const;
  int getWings() const;
  int getLegs() const;
  int getAntennas() const;
  int getEyes() const;
  int getSumBettle() const;

private:
  int body;
  int head;
  int wings;
  int legs;
  int antennas;
  int eyes;
  int sumBettle;
};

Beetle::Beetle() {
  this->body = 6;
  this->head = 5;
  this->wings = 8;
  this->legs = 36;
  this->antennas = 4;
  this->eyes = 4;
  this->sumBettle = 63;
}

void Beetle::setBettlePart(int number) {
  if (number == 6) {
    this->body = this->body - 6;
  } else if (number == 5) {
    this->head = this->head - 5;
  } else if (number == 4) {
    this->wings = this->wings - 4;
  } else if (number == 3) {
    this->legs = this->legs - 6;
  } else if (number == 2) {
    this->antennas = this->antennas - 2;
  } else if (number == 1) {
    this->eyes = this->eyes - 2;
  }
}

int Beetle::getBody() const { return this->body; }
int Beetle::getHead() const { return this->head; }
int Beetle::getWings() const { return this->wings; }
int Beetle::getLegs() const { return this->legs; }
int Beetle::getAntennas() const { return this->antennas; }
int Beetle::getEyes() const { return this->eyes; }
int Beetle::getSumBettle() const { return this->sumBettle; }

string bettleGame(int seed, int &turnsTaken, vector<string> Players,
                  int playerCount) {
  Dice dice;
  Beetle beetle;
  vector<int> constructedPart(playerCount, 0);
  int currentPart = 0;
  string winner;
  bool verdictWin = false;
  srand(seed);
  while (verdictWin == false) {
    for (int j = 0; j < playerCount; j++) {
      dice.setDiceFace();
      currentPart = dice.getDiceFace();
      if (beetle.getBody() == 6) {
        if (currentPart == 6) {
          beetle.setBettlePart(currentPart);
          constructedPart[j] += 6;
        }
      } else if (beetle.getHead() == 5) {
        switch (currentPart) {
        case 3:
          if (beetle.getLegs() != 0) {
            beetle.setBettlePart(currentPart);
            constructedPart[j] += 6;
          }
          break;
        case 4:
          if (beetle.getWings() != 0) {
            beetle.setBettlePart(currentPart);
            constructedPart[j] += 4;
          }
          break;
        case 5:
          if (beetle.getHead() != 0) {
            beetle.setBettlePart(currentPart);
            constructedPart[j] += 5;
          }
          break;
        default:
          break;
        }
      } else if (beetle.getHead() == 0) {
        switch (currentPart) {
        case 1:
          if (beetle.getEyes() != 0) {
            beetle.setBettlePart(currentPart);
            constructedPart[j] += 2;
          }
          break;
        case 2:
          if (beetle.getAntennas() != 0) {
            beetle.setBettlePart(currentPart);
            constructedPart[j] += 2;
          }
          break;
        case 3:
          if (beetle.getLegs() != 0) {
            beetle.setBettlePart(currentPart);
            constructedPart[j] += 6;
          }
          break;
        case 4:
          if (beetle.getWings() != 0) {
            beetle.setBettlePart(currentPart);
            constructedPart[j] += 4;
          }
          break;
        default:
          break;
        }
      }
      turnsTaken++;
      if (constructedPart[j] == beetle.getSumBettle()) {
        winner = Players[j];
        verdictWin = true;
        break;
      }
    }
  }
  return winner;
}

int main() {
  vector<string> players;
  int numPlayer = 0;
  int seed = 0;
  int turnsTaken = 0;
  string playerName;
  string playerWinner;

  cout << "Welcome to the Bettle Dice Game!" << endl;
  cout << "How many players are participating : ";
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
  for (int i = 0; i < numPlayer; i++) {
    cout << "What is the name for player " << i + 1 << " : ";
    cin >> playerName;
    while (cin.fail()) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Please Enter Valid Player Names (type the word LEAVE to "
              "exit) : ";
      cin >> playerName;
      if (playerName == "LEAVE") {
        exit(0);
      }
    }
    players.push_back(playerName);
  }
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
  playerWinner = bettleGame(seed, turnsTaken, players, numPlayer);
  cout << "Our champion" << endl;
  cout << "-------------" << endl;
  for (int r = 0; r < numPlayer; r++) {
    cout << "Congratulations " << playerWinner << " !" << endl;
    cout << "This player only took " << turnsTaken << " to win!" << endl;
  }
  return 0;
}