#include <iostream>
#include <string>

#include "character.h"

using namespace std;

int main() {
  Weapon sword("Da fucking sword", 5);
  sword.infos();
  Character yoyo("Yonnel", 100, 0, 0, 1);
  yoyo.infos();
}
