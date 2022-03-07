//
// Created by igora on 07.03.2022.
//

#ifndef INC_2_POINT_H
#define INC_2_POINT_H

struct Point
{
  double x = 0;
  double y = 0;
  Point () : x(0), y(0) {}
  Point (const double & inX, const double &inY) : x(inX), y(inY) {}
};

#endif //INC_2_POINT_H
