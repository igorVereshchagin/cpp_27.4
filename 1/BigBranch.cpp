#include "BigBranch.h"
#include <cassert>

BigBranch::BigBranch(SpriteVillage *currentVillage, const int inBranchesCount): branchesCount(inBranchesCount)
{
  assert((inBranchesCount >= 2) && (inBranchesCount <= 3));
  spriteHouse = new SpriteHouse(currentVillage->getNumberOfHouses() + 1);
  currentVillage->addHouse(spriteHouse);
  branches = new Branch*[inBranchesCount];
  for (int i = 0; i < inBranchesCount; i++)
    branches[i] = new Branch(currentVillage);
}
