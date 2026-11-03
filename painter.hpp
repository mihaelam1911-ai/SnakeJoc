#pragma once

#include "abstractPainter.hpp"

class Painter: public AbstractPainter {
public:
   virtual void DrawImage(Point topLeft, Point bottomRight, char** image);
   virtual void WriteText(Point position, char* text);
};