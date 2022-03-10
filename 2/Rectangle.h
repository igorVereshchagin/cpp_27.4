//
// Created by igora on 10.03.2022.
//

#pragma once

#include "Shape.h"
#include <cmath>

class Rectangle : public Shape
{
  double width;
  double height;
public:
  Rectangle() : Shape(), width(1), height(1) {}
  Rectangle(const double &inWidth, const double &inHeight) : Shape(), width(inWidth), height(inHeight) {}
  double area()
  {
    return width * height;
  }
  void rect(Point &outTopLeft, Point &outBotRight)
  {
    outTopLeft.x = center.x - width / 2.0;
    outTopLeft.y = center.y - height / 2.0;
    outBotRight.x = center.x + width / 2.0;
    outBotRight.y = center.y + height / 2.0;
  }
};
