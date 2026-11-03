#pragma once

#include <iostream>

class Placa {
   int _width;
   int _height;
public:
   Placa(int width = 20, int height = 20);
   Placa(const Placa& other);
   int GetWidth() const;
   int GetHeight() const;

   Placa operator = (const Placa& other);
   bool operator == (const Placa& other) const;
};

std::istream& operator >> (std::istream& in, Placa& placa);
std::ostream& operator << (std::ostream& out, const Placa& placa);;