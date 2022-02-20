//
// Created by Igor on 19.02.2022.
//

#include "ElfVillage.h"
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <iostream>

void createName(std::string &name);

ElfVillage::ElfVillage()
{
  std::srand(std::time(nullptr));
  for (int i = 0; i < NUMBER_OF_TREES_IN_VILLAGE; i++)
    trees[i] = new Tree(this, (std::rand() % 3)  + 3);
  std::cout << "Total houses: " << houses.size() << std::endl;
}

void ElfVillage::addHouse(ElfHouse *inHouse)
{
  assert(this != nullptr);
  houses.push_back(inHouse);
}

//#define MANUAL_INPUT_NAMES

void ElfVillage::populate()
{
  assert(this != nullptr);
  for (std::vector<ElfHouse*>::iterator it = houses.begin(); it != houses.end(); it++)
  {
    std::cout << "Populating house " << (*it)->getNumber() << ", input owner name: "<< std::endl;
    std::string name;
#ifdef MANUAL_INPUT_NAMES
    std::cin >> std::ws;
    std::getline(std::cin, name);
#else
    createName(name);
#endif
    if (name != "None")
      (*it)->populate(name);
  }
}

void ElfVillage::searchByName()
{
  assert(this != nullptr);
  std::cout << "Input name: " << std::endl;
  std::string name;
  std::cin >> std::ws;
  std::getline (std::cin, name);
  BigBranch* bigBranchFound = nullptr;
  for (int i = 0; bigBranchFound == nullptr && i < NUMBER_OF_TREES_IN_VILLAGE; i++)
    bigBranchFound = trees[i]->searchByName(name);
  if (nullptr != bigBranchFound)
    std::cout << "Found " << name << ". Total elves on the same big branch: " << bigBranchFound->getTotalElves() << std::endl;
  else
    std::cout << "Not found!" << std::endl;
}

void createName(std::string &name)
{
  if (0 == (std::rand() % 10))
  {
    name = "None";
    return;
  }
  int len = (std::rand() % 5) + 5;
  name.resize(len);
  for (int i = 0; i < len; i++)
  {
    name[i] = (char)(std::rand() % 26 + 'a');
  }
  std::cout << name << std::endl;
}