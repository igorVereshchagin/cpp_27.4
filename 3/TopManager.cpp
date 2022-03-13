//
// Created by igora on 13.03.2022.
//

#include "TopManager.h"
#include <iostream>
#include <cassert>

int TopManager::task()
{
  assert(this != nullptr);
  int ret;
  std::cout << "Top manager, input task: " << std::endl;
  std::cin >> ret;
  return ret;
}
