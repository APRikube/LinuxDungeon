#include <iostream>
#include <string>

#include "wizard.h"

using namespace std;

int main() {
  Weapon sword("Da fucking sword", 5);
  sword.infos();
  Wizard yoyo("Yonnel", 100, 0, 0, 1, 0);
  yoyo.infos();
}
