#include "wizard.h"

using namespace std;

Wizard::Wizard(string name, short int lifePoints, int posX, int posY, int speed, int mana)
  : Character(name, lifePoints, posX, posY, speed), m_mana(mana)
{}

void Wizard::infos() const {
  cout << "Name : " << m_name << " LifePoints : " << m_lifePoints << " Position : " << m_posX << "," << m_posY << " Speed : " << m_speed << " Mana : " << m_mana  << endl;
}
