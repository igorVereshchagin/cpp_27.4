//
// Created by igora on 13.03.2022.
//

#include "Employee.h"
#include <cassert>
#include <iostream>

void Employee::task(const Task &task)
{
  assert(this != nullptr);
  assert(currentTask == task_none);
  currentTask = task;
  std::cout << "Employee " << number << " started task " << (char)(currentTask + 'A') << std::endl;
}

Employee::Employee(int n) : number(n), currentTask(task_none)
{
  std::cout << "new employee: " << n << std::endl;
}