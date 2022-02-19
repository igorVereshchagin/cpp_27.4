//
// Created by Igor on 19.02.2022.
//

#include "Tree.h"
#include <cstdlib>
#include <cassert>

Tree::Tree(SpriteVillage *currentVillage, const int inBigBranchesCount): bigBranchesCount(inBigBranchesCount)
{
  assert((inBigBranchesCount >= 3) && (inBigBranchesCount <= 5));
  bigBranches = new BigBranch*[inBigBranchesCount];
  for (int i = 0; i < inBigBranchesCount; i++)
    bigBranches[i] = new BigBranch(currentVillage, (std::rand() % 2) + 2);
}