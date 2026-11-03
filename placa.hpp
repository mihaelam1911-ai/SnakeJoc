#pragma once

class Placa {
   int _width;
   int _height;
public:
   Placa(int width = 20, int height = 20);
   int GetWidth() const;
   int GetHeight() const;
};