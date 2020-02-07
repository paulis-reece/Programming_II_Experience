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

class Beetle {
public:
  Beetle();
  void setBettlePart(int number);
  int getBody() const;
  int getHead() const;
  int getWings() const;
  int getLegs() const;
  int getAntennas() const;
  int getEyes() const;
  int getPlayers() const;
  int bettleGame(int &turnsTaken);

private:
  int body;
  int head;
  int wings;
  int legs;
  int antennas;
  int eyes;
};

Beetle::Beetle() {
  this->body = 6;
  this->head = 5;
  this->wings = 8;
  this->legs = 36;
  this->antennas = 4;
  this->eyes = 4;
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

int Beetle::bettleGame(int &turnsTaken) {
  Dice dice;
  int currentPart = 0;
  int constructedPart = 0;
  dice.setDiceFace();
  currentPart = dice.getDiceFace();
  if (this->getBody() == 6) {
    if (currentPart == 6) {
      this->setBettlePart(currentPart);
      constructedPart = 6;
    }
  } else if (this->getHead() == 5) {
    switch (currentPart) {
    case 3:
      if (this->getLegs() != 0) {
        this->setBettlePart(currentPart);
        constructedPart = 6;
      }
      break;
    case 4:
      if (this->getWings() != 0) {
        this->setBettlePart(currentPart);
        constructedPart = 4;
      }
      break;
    case 5:
      if (this->getHead() != 0) {
        this->setBettlePart(currentPart);
        constructedPart = 5;
      }
      break;
    default:
      break;
    }
  } else if (this->getHead() == 0) {
    switch (currentPart) {
    case 1:
      if (this->getEyes() != 0) {
        this->setBettlePart(currentPart);
        constructedPart = 2;
      }
      break;
    case 2:
      if (this->getAntennas() != 0) {
        this->setBettlePart(currentPart);
        constructedPart = 2;
      }
      break;
    case 3:
      if (this->getLegs() != 0) {
        this->setBettlePart(currentPart);
        constructedPart = 6;
      }
      break;
    case 4:
      if (this->getWings() != 0) {
        this->setBettlePart(currentPart);
        constructedPart = 4;
      }
      break;
    default:
      break;
    }
  }
  turnsTaken++;
  return constructedPart;
}

int main() {
  vector<string> players;
  int numPlayer = 0;
  int seed = 0;
  int loopCount = 0;
  int turnsTaken = 0;
  int sumConstructed = 0;
  bool verdict = false;
  string playerName;
  string player;
  Dice dice;

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
  vector<int> turnPerPlayer(numPlayer, 0);
  vector<Beetle> beetleDrawings(numPlayer);
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
  cout << "What is the seed for the player : ";
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
  int loop = 0;
  while (verdict == false) {
    for (int j = 0; j < numPlayer; j++) {
      turnPerPlayer.at(j) += beetleDrawings.at(j).bettleGame(turnsTaken);
      cout << turnPerPlayer.at(j) << "-" << loop++ << endl;
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
  cout << "Here is the winner and the player's turns" << endl;
  cout << "------------------------------------" << endl;
  cout << player << "_______" << turnsTaken - numPlayer << endl;
  return 0;
}