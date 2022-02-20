//
// Created by Igor on 19.02.2022.
//

#include "Branch.h"
#include <cassert>

Branch::Branch(class ElfVillage *currentVillage)
{
  elfHouse = new ElfHouse(currentVillage->getNumberOfHouses() + 1);
  currentVillage->addHouse(elfHouse);
}

bool Branch::searchByName(const std::string &inName)
{
  assert(this != nullptr);
  std::string name;
  if (!elfHouse->getOwner(name))
    return false;
  if (name == inName)
    return true;
  return false;
}

int Branch::getTotalElves()
{
  assert(this != nullptr);
  if (elfHouse->getOwned())
    return 1;
  return 0;
}
