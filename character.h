#include <iostream>
#include <string>

#include "weapon.h"

class Character {
 protected:
  std::string m_name;
  short int m_lifePoints;
  int m_posX;
  int m_posY;
  int m_speed;
  
 public:
  Character();
  Character(std::string name, short int lifePoints, int posX, int posY, int speed);
  virtual void infos() const;
  
};
