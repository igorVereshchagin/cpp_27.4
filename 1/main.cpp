#include <iostream>
#include "ElfVillage.h"

int main()
{
  ElfVillage *village = new ElfVillage();
  village->populate();
  village->searchByName();
  delete village;
  return 0;
}
