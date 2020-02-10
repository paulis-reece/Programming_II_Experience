

#ifndef BEETLE_H
#define BEETLE_H
// Beetle Class Function
class Beetle {
public:
// Constructor and Mutator
  Beetle();
  void setBettlePart(int number);
// Accessors
  int getBody() const;
  int getHead() const;
  int getWings() const;
  int getLegs() const;
  int getAntennas() const;
  int getEyes() const;
  int getPlayers() const;
  int bettleGame(int getRoll);

private:
// Body Parts to construct beetle
  int body;
  int head;
  int wings;
  int legs;
  int antennas;
  int eyes;
};

#endif