//
// Created by igora on 10.03.2022.
//

#pragma once

#include "Shape.h"
#include <cmath>


class Square : public Shape
{
  double edge;
public:
  Square() : Shape(), edge(1) {}
  Square(const double &inEdge) : Shape(), edge(inEdge) {}
  double area()
  {
    return edge * edge;
  }
  void rect(Point &outTopLeft, Point &outBotRight)
  {
    outTopLeft.x = center.x - edge / 2.0;
    outTopLeft.y = center.y - edge / 2.0;
    outBotRight.x = center.x + edge / 2.0;
    outBotRight.y = center.y + edge / 2.0;
  }
  void setEdge(const double &inEdge) {edge = inEdge;}

};


