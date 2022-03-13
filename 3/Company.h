//
// Created by igora on 11.03.2022.
//
#pragma once

#include "TopManager.h"
#include "Team.h"

class Company
{
  TopManager *topManager = nullptr;
  Team **teams = nullptr;
  int teamsCount = 0;
  int getEmployeesAvailable();
public:
  void task();
  Company();
};