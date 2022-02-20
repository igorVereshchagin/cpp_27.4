#pragma once
#include "ElfHouse.h"
#include "ElfVillage.h"

class Branch
{
  class ElfHouse *elfHouse = nullptr;
public:
  Branch(class ElfVillage *currentVillage);
  bool searchByName(const std::string &inName);
  int getTotalElves();
};
