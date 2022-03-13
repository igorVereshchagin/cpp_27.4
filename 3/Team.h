//
// Created by igora on 13.03.2022.
//

#pragma once

#include "Manager.h"
#include "Employee.h"

class Team
{
  Manager *manager;
  Employee **employees;
  int employeesCount;
public:
  int getEmployeesCount() {return employeesCount;}
  int getEmployeesAvailable();
  void task(int seed);
  Team(int n);
};


