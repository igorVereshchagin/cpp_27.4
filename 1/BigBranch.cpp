#include "BigBranch.h"
#include <cassert>

BigBranch::BigBranch(ElfVillage *currentVillage, const int inBranchesCount): branchesCount(inBranchesCount)
{
  assert((inBranchesCount >= 2) && (inBranchesCount <= 3));
  elfHouse = new ElfHouse(currentVillage->getNumberOfHouses() + 1);
  currentVillage->addHouse(elfHouse);
  branches = new Branch*[inBranchesCount];
  for (int i = 0; i < inBranchesCount; i++)
    branches[i] = new Branch(currentVillage);
}

bool BigBranch::searchByName(const std::string &inName)
{
  assert(this != nullptr);
  bool found = false;
  std::string name;
  if (elfHouse->getOwner(name))
  {
    if (name == inName)
      found = true;
  }
  if (found)
    return true;
  for (int i = 0; !found && i < branchesCount; i++)
  {
    found = branches[i]->searchByName(inName);
  }
  return found;
}

int BigBranch::getTotalElves()
{
  assert(this != nullptr);
  int total = 0;
  if (elfHouse->getOwned())
    total++;
  for (int i = 0; i < branchesCount; i++)
    total += branches[i]->getTotalElves();
  return total;
}