#include "placa.hpp"

Placa::Placa(int width, int height) {
    _width = width;
    _height = height;
}

int Placa::GetWidth() const {
    return _width;
}

int Placa::GetHeight() const {
    return _height;
}