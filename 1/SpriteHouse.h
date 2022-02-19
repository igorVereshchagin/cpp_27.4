//
// Created by Igor on 19.02.2022.
//

#pragma once
#include <string>

class SpriteHouse
{
  int number = 0;
  bool isOwned = false;
  std::string ownerName = "";
public:
  SpriteHouse(const int inNumber);
  void populate(const std::string &inName);
  bool getOwner(std::string &outName)
  {
    if (isOwned)
      outName = ownerName;
    return isOwned;
  }
  int getNumber() {return number;}
};


