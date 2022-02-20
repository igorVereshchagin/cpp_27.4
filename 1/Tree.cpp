//
// Created by Igor on 19.02.2022.
//

#include "Tree.h"
#include <cstdlib>
#include <cassert>

Tree::Tree(ElfVillage *currentVillage, const int inBigBranchesCount): bigBranchesCount(inBigBranchesCount)
{
  assert((inBigBranchesCount >= 3) && (inBigBranchesCount <= 5));
  bigBranches = new BigBranch*[inBigBranchesCount];
  for (int i = 0; i < inBigBranchesCount; i++)
    bigBranches[i] = new BigBranch(currentVillage, (std::rand() % 2) + 2);
}

BigBranch* Tree::searchByName(const std::string &inName)
{
  BigBranch *ret = nullptr;
  for (int i = 0; i < bigBranchesCount; i++)
  {
    if (bigBranches[i]->searchByName(inName))
    {
      ret = bigBranches[i];
      break;
    }
  }
  return ret;
}