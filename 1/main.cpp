#include <iostream>
#include "SpriteVillage.h"

int main()
{
  SpriteVillage *village = new SpriteVillage();
  village->populate();
  delete village;
  return 0;
}
