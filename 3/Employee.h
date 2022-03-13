//
// Created by igora on 13.03.2022.
//

#pragma once

enum Task {
  task_none = -1,
  task_min = 0,
  task_A = task_min,
  task_B,
  task_C,
  task_count
};


class Employee
{
  int number = 0;
  Task currentTask = task_none;
public:
  bool isFree() { return currentTask == task_none;}
  void task(const Task &task);
  Employee(int n);
};


