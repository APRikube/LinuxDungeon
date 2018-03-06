#include "wizard.h"

using namespace std;

Wizard::Wizard(string name, short int lifePoints, int posX, int posY, int speed, int mana)
  : Character(name, lifePoints, posX, posY, speed), m_mana(mana)
{}
