//
// Created by igora on 06.03.2022.
//

#pragma once

#include "Shape.h"
#include <cmath>

class Circle : public Shape
{
  double radius = 0;
public:
  Circle() : Shape() , radius(1) {}
  Circle(const double &inRadius) : Shape() , radius(inRadius) {}
  double square()
  {
    return 4.0 * atan(1.0) * radius * radius;
  }
  void rect(Point &outTopLeft, Point &outBotRight)
  {
    outTopLeft.x = center.x - radius;
    outTopLeft.y = center.y - radius;
    outBotRight.x = center.x + radius;
    outBotRight.y = center.y + radius;
  }
  void setRadius(const double &inRadius) {radius = inRadius;}

};


