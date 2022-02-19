//
// Created by Igor on 19.02.2022.
//

#include "SpriteHouse.h"
#include <cassert>

SpriteHouse::SpriteHouse(const int inNumber): number(inNumber)
{
  assert(inNumber > 0);
}

void SpriteHouse::populate(const std::string &inName)
{
  ownerName = inName;
  isOwned = true;
}