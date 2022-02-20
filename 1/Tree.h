#pragma once
#include "BigBranch.h"
#include "ElfVillage.h"

class Tree
{
  int bigBranchesCount = 0;
  class BigBranch **bigBranches = nullptr;
public:
  Tree(class ElfVillage *currentVillage, const int inBigBranchesCount);
  BigBranch* searchByName(const std::string &name);
};