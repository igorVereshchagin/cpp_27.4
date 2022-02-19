#pragma once
#include "BigBranch.h"
#include "SpriteVillage.h"

class Tree
{
  int bigBranchesCount = 0;
  class BigBranch **bigBranches = nullptr;
public:
  Tree(class SpriteVillage *currentVillage, const int inBigBranchesCount);
};