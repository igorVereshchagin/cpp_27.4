#include <iostream>
#include "Company.h"

int main()
{
  Company *company = new Company();
  company->task();
  delete company;
  return 0;
}
