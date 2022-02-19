#pragma once
#include "SpriteHouse.h"
#include "SpriteVillage.h"

class Branch
{
  class SpriteHouse *spriteHouse = nullptr;
public:
  Branch(class SpriteVillage *currentVillage);
};
