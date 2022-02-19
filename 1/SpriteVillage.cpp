//
// Created by Igor on 19.02.2022.
//

#include "SpriteVillage.h"
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <iostream>

SpriteVillage::SpriteVillage()
{
  std::srand(std::time(nullptr));
  for (int i = 0; i < NUMBER_OF_TREES_IN_VILLAGE; i++)
    trees[i] = new Tree(this, (std::rand() % 3)  + 3);
  std::cout << "Total houses: " << houses.size() << std::endl;
}

void SpriteVillage::addHouse(SpriteHouse *inHouse)
{
  assert(this != nullptr);
  houses.push_back(inHouse);
}

void SpriteVillage::populate()
{
  for (std::vector<SpriteHouse*>::iterator it = houses.begin(); it != houses.end(); it++)
  {
    std::string name;
    std::cout << "Populating house " << (*it)->getNumber() << ", input owner name: "<< std::endl;
    std::cin >> std::ws;
    std::getline(std::cin, name);
    if (name != "None")
      (*it)->populate(name);
  }
}