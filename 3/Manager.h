//
// Created by igora on 13.03.2022.
//

#pragma once

//#include "Team.h"

class Team;

class Manager
{
  int number = 0;
  Team *myTeam = nullptr;
public:
  int task(int seed);
  Manager(int n, Team *inTeam) : number(n), myTeam(inTeam) {}
};


