//
// Created by igora on 06.03.2022.
//

#pragma once

#include "Point.h"

enum ColorOfTheShape
{
  Red,
  Green,
  Blue
};

class Shape
{
  ColorOfTheShape color;
protected:
  Point center;
public:
  Shape() : center(), color(ColorOfTheShape::Red) {}
  Shape(double inX, double inY, ColorOfTheShape inColor) : center(inX, inY), color(inColor) {}
  void setCenter(const Point &inCenter) {center = inCenter;}
};


