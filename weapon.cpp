#include "weapon.h"

using namespace std;

Weapon::Weapon(string name, short int damages)
  : m_name(name), m_damages(damages)
{}

void Weapon::infos() {
  cout << "Name " << m_name << " Damages " << m_damages << endl;
}
