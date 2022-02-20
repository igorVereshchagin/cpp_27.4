//
// Created by Igor on 19.02.2022.
//

#include "ElfHouse.h"
#include <cassert>

ElfHouse::ElfHouse(const int inNumber): number(inNumber)
{
  assert(inNumber > 0);
}

void ElfHouse::populate(const std::string &inName)
{
  ownerName = inName;
  isOwned = true;
}