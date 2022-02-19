#pragma once
#include "Branch.h"
#include "SpriteHouse.h"
#include "SpriteVillage.h"

class BigBranch
{
  int branchesCount = 0;
  class Branch **branches = nullptr;
  class SpriteHouse * spriteHouse = nullptr;
public:
  BigBranch(class SpriteVillage *currentVillage, const int count);
};
