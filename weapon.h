#include <iostream>
#include <string>

class Weapon {
 private:
  std::string m_name;
  short int m_damages;

 public:
  Weapon();
  Weapon(std::string name, short int damages);
  void infos();
};
