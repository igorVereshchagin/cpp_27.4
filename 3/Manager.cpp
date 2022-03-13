//
// Created by igora on 13.03.2022.
//

#include "Manager.h"
#include <cstdlib>
#include <cassert>
#include "Team.h"

int Manager::task(int seed)
{
  assert(this != nullptr);
  assert(myTeam != nullptr);
  std::srand(seed + number);
  return (std::rand() % (myTeam->getEmployeesCount() - 1)) + 1;
}