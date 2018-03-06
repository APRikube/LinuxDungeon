#include "character.h"

using namespace std;

Character::Character(std::string name, short int lifePoints, int posX, int posY, int speed)
  : m_name(name), m_lifePoints(lifePoints), m_posX(posX), m_posY(posY), m_speed(speed)
{}

void Character::infos() const {
  cout << "Name " << m_name << " LifePoints " << m_lifePoints << " Position " << m_posX << "," << m_posY << " Speed " << m_speed << endl;
}
