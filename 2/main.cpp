#include <iostream>
#include <string>
#include "Circle.h"

int main()
{
  std::string cmd;
  do
  {
    std::cout << "Input command" << std::endl;
    std::cin >> cmd;
    if ("exit" == cmd)
    {
      continue;
    }
    else if ("circle" == cmd)
    {
      double radius;
      std::cout << "Input radius" << std::endl;
      std::cin >> radius;
      if (radius > 0)
      {
        Circle *circle = new Circle(radius);
        Point topLeft, botRight;
        double square = circle->square();
        circle->rect(topLeft, botRight);
        std::cout << "Area of circle: " << square << " rectangle: " << topLeft.x << " " << topLeft.y << " "
          << botRight.x << " " << botRight.y << std::endl;
        delete circle;
      }
    }
  }while(cmd != "exit");
  return 0;
}
