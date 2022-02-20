//
// Created by Igor on 19.02.2022.
//

#pragma once
#include "Tree.h"
#include <vector>
#include "ElfHouse.h"

#define NUMBER_OF_TREES_IN_VILLAGE      5

class ElfVillage
{
  class Tree* trees[NUMBER_OF_TREES_IN_VILLAGE];
  std::vector<ElfHouse*> houses;
public:
  ElfVillage();
  void populate();
  void addHouse(ElfHouse *inHouse);
  int getNumberOfHouses() {return houses.size();}
  void searchByName();
};


