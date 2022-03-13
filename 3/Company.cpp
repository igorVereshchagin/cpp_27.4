//
// Created by igora on 13.03.2022.
//

#include "Company.h"
#include <cassert>
#include <cstdlib>
#include <ctime>

void Company::task()
{
  assert(this != nullptr);
  assert(topManager != nullptr);
  assert(teams != nullptr);
  assert(teamsCount != 0);

  while (0 != getEmployeesAvailable())
  {
    int seed = topManager->task();
    for (int i = 0; i < teamsCount; i++)
    {
      assert(teams[i] != nullptr);
      teams[i]->task(seed);
    }
  }
}

int Company::getEmployeesAvailable()
{
  int ret = 0;
  for (int i = 0; i < teamsCount; i++)
    ret += teams[i]->getEmployeesAvailable();
  return ret;
}

Company::Company()
{
  topManager = new TopManager();
  std::srand(std::time(nullptr));
  teamsCount = std::rand() % 10;
  teams = new Team*[teamsCount];
  for (int i = 0; i < teamsCount; i++)
    teams[i] = new Team(i);
}