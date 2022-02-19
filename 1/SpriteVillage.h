//
// Created by Igor on 19.02.2022.
//

#pragma once
#include "Tree.h"
#include <vector>
#include "SpriteHouse.h"

#define NUMBER_OF_TREES_IN_VILLAGE      2

class SpriteVillage
{
  class Tree* trees[NUMBER_OF_TREES_IN_VILLAGE];
  std::vector<SpriteHouse*> houses;
public:
  SpriteVillage();
  void populate();
  void addHouse(SpriteHouse *inHouse);
  int getNumberOfHouses() {return houses.size();}
};


