#pragma once

#include "point.hpp"

class Mar {
   Point _position;
public:
   Mar();
   Mar(const Point& position);
   Point GetPosition() const;
};