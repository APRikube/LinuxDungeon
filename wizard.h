#include <iostream>

#include "character.h"

class Wizard : public Character {
private:
  int m_mana;

 public:
  Wizard();
  Wizard(std::string name, short int lifepoints, int posX, int posY, int speed, int mana);
  void lancerSort(Character cible);
  virtual void infos() const;
  
};
