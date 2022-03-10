//
// Created by igora on 10.03.2022.
//

#pragma once

#include "Shape.h"
#include <cmath>


class Triangle : public Shape
{
  double edge;
public:
  Triangle() : Shape(), edge(1) {}
  Triangle(const double &inEdge) : Shape(), edge(inEdge) {}
  double area()
  {
    return edge * edge * sqrt(3.0) / 4.0;
  }
  void rect(Point &outTopLeft, Point &outBotRight)
  {
    outTopLeft.x = center.x - edge / 2.0;
    outTopLeft.y = center.y - edge * sqrt(3.0) / 3.0;
    outBotRight.x = center.x + edge / 2.0;
    outBotRight.y = center.y + edge * sqrt(3.0) / 6.0;
  }
  void setEdge(const double &inEdge) {edge = inEdge;}
};
