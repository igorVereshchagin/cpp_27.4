//
// Created by Igor on 19.02.2022.
//

#include "Branch.h"

Branch::Branch(class SpriteVillage *currentVillage)
{
  spriteHouse = new SpriteHouse(currentVillage->getNumberOfHouses() + 1);
  currentVillage->addHouse(spriteHouse);
}