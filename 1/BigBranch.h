#pragma once
#include "Branch.h"
#include "ElfHouse.h"
#include "ElfVillage.h"

class BigBranch
{
  int branchesCount = 0;
  class Branch **branches = nullptr;
  class ElfHouse * elfHouse = nullptr;
public:
  BigBranch(class ElfVillage *currentVillage, const int count);
  bool searchByName(const std::string &inName);
  int getTotalElves();
};
