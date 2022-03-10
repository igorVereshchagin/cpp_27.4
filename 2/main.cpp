#include <iostream>
#include <string>
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"

int main()
{
  std::string cmd;
  Point *center = nullptr;
  do
  {
    std::cout << "Input command" << std::endl;
    std::cin >> cmd;
    if ("exit" == cmd)
    {
      continue;
    }
    else if ("center" == cmd)
    {
      if (nullptr == center)
        center = new Point;
      std::cout << "Input center: " << std::endl;
      std::cin >> center->x >> center->y;
    }
    else if ("circle" == cmd)
    {
      double radius;
      std::cout << "Input radius" << std::endl;
      std::cin >> radius;
      if (radius > 0)
      {
        Circle *circle = new Circle(radius);
        if (nullptr != center)
        {
          circle->setCenter(*center);
          delete center;
          center = nullptr;
        }
        Point topLeft, botRight;
        double area = circle->area();
        circle->rect(topLeft, botRight);
        std::cout << "Area of circle: " << area << " rectangle: " << topLeft.x << " " << topLeft.y << " "
          << botRight.x << " " << botRight.y << std::endl;
        delete circle;
      }
    }
    else if ("triangle" == cmd)
    {
      double edge;
      std::cout << "Input edge" << std::endl;
      std::cin >> edge;
      if (edge > 0)
      {
        Triangle *triangle = new Triangle(edge);
        if (nullptr != center)
        {
          triangle->setCenter(*center);
          delete center;
          center = nullptr;
        }
        Point topLeft, botRight;
        double area = triangle->area();
        triangle->rect(topLeft, botRight);
        std::cout << "Area of triangle: " << area << std::endl << "Rectangle: " << topLeft.x << " " << topLeft.y << " "
                  << botRight.x << " " << botRight.y << std::endl;
        delete triangle;
      }
    }
    else if ("square" == cmd)
    {
      double edge;
      std::cout << "Input edge" << std::endl;
      std::cin >> edge;
      if (edge > 0)
      {
        Square *square = new Square(edge);
        if (nullptr != center)
        {
          square->setCenter(*center);
          delete center;
          center = nullptr;
        }
        Point topLeft, botRight;
        double area = square->area();
        square->rect(topLeft, botRight);
        std::cout << "Area of square: " << area << std::endl << "Rectangle: " << topLeft.x << " " << topLeft.y << " "
                  << botRight.x << " " << botRight.y << std::endl;
        delete square;
      }
    }
    else if ("rectangle" == cmd)
    {
      double width, height;
      std::cout << "Input width and height" << std::endl;
      std::cin >> width >> height;
      if (width > 0 && height > 0)
      {
        Rectangle *rectangle = new Rectangle(width, height);
        if (nullptr != center)
        {
          rectangle->setCenter(*center);
          delete center;
          center = nullptr;
        }
        Point topLeft, botRight;
        double area = rectangle->area();
        rectangle->rect(topLeft, botRight);
        std::cout << "Area of rectangle: " << area << std::endl << "Rectangle: " << topLeft.x << " " << topLeft.y << " "
                  << botRight.x << " " << botRight.y << std::endl;
        delete rectangle;
      }
    }
  }while(cmd != "exit");
  return 0;
}
