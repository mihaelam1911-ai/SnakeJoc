#pragma once

#include <iostream>
#include "point.hpp"

class Mar {
   Point _position;
public:
   Mar();
   Mar(const Point& position);
   Mar(const Mar& other);
   Point GetPosition() const;

   Mar operator = (const Mar& other);
   bool operator == (const Mar& other) const;
};

std::istream& operator >> (std::istream& in, Mar& mar);
std::ostream& operator << (std::ostream& out, const Mar& mar);