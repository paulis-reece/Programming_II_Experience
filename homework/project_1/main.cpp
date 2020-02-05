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
  void resetBettlePart();
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
void Beetle::resetBettlePart() {
  this->body = 6;
  this->head = 5;
  this->wings = 8;
  this->legs = 36;
  this->antennas = 4;
  this->eyes = 4;
  this->sumBettle = 63;
}

void Beetle::setBettlePart(int number){
if(number == 6){
this->body = this->body - 6;
} else if(number == 5){
this->head = this->head - 5;
} else if(number == 4){
this->wings = this->wings - 4;
} else if(number == 3){
this->legs = this->legs - 6;
} else if(number == 2){
this->antennas = this->antennas - 2;
} else if(number == 1){
this->eyes = this->eyes - 2;
}
}

int Beetle:: getBody() const{
return this-> body;
}
int Beetle:: getHead() const{
return this-> head;
}
int Beetle:: getWings() const{
return this-> wings;
}
int Beetle:: getLegs() const{
return this-> legs;
}
int Beetle:: getAntennas() const{
return this-> antennas;
}
int Beetle:: getEyes() const{
return this-> eyes;
}
int Beetle:: getSumBettle() const{
return this-> sumBettle;
}

void BettleGame(string name, int seed, int &turnsTaken){
Dice dice;
Beetle beetle;
int currentBodyPart = 0;
int constructedPart = 0;
int vecCounter = 0;
srand(seed);
while(constructedPart != beetle.getSumBettle()){
dice.setDiceFace();
currentBodyPart = dice.getDiceFace();
if(beetle.getBody() == 6){
if(currentBodyPart == 6){
beetle.setBettlePart(currentBodyPart);
} else {
continue;
}
} else if(beetle.getHead() == 5){
switch(currentBodyPart){



}    
}





turnsTaken++;
}
}








int main() { 
    vector<string>players;
    vector<int>seeds;
    vector<int>turnPerPlayer;
    int numPlayer = 0;
    int seed = 0;
    int turnsTaken = 0;

cout << "Welcome to the Bettle Dice Game!" << endl;
cout << "How many players are participating : ";
cin >> numPlayer;
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0; 
    }