//
// Created by igora on 13.03.2022.
//

#include "Team.h"
#include <cstdlib>
#include <cassert>

void Team::task(int seed)
{
  assert(this != nullptr);
  assert(employees != nullptr);
  int tasks = manager->task(seed);
  for (int i = 0; (i < employeesCount) && (tasks > 0); i++)
  {
    assert(employees[i] != nullptr);
    if (employees[i]->isFree())
    {
      employees[i]->task(Task(std::rand() % task_count));
      tasks--;
    }
  }
}

Team::Team(int n)
{
  manager = new Manager(n, this);
  employeesCount = std::rand() % 10;
  employees = new Employee*[employeesCount];
  for (int i = 0; i < employeesCount; i ++)
    employees[i] = new Employee(n * 10 + i);
}

int Team::getEmployeesAvailable()
{
  assert(this != nullptr);
  assert(employees != nullptr);
  int ret = 0;
  for (int i = 0; i < employeesCount; i++)
  {
    assert(employees[i] != nullptr);
    if (employees[i]->isFree())
      ret++;
  }
  return ret;
}