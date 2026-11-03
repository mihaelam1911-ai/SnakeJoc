#include "placa.hpp"

Placa::Placa(int width, int height) : _width(width), _height(height) {}

Placa::Placa(const Placa &other) : _width(other.GetWidth()), _height(other.GetHeight()) {}

int Placa::GetWidth() const
{
    return _width;
}

int Placa::GetHeight() const
{
    return _height;
}

Placa Placa::operator=(const Placa &other)
{
    _width = other.GetWidth();
    _height = other.GetHeight();
    return *this;
}

bool Placa::operator==(const Placa &other) const
{
    return GetWidth() == other.GetWidth() && GetHeight() == other.GetHeight();
}

std::istream &operator>>(std::istream &in, Placa &placa)
{
    int width, height;
    in >> width >> height;
    placa = Placa(width, height);
    return in;
}

std::ostream &operator<<(std::ostream &out, const Placa &placa)
{
    out << placa.GetWidth() << " " << placa.GetHeight();
    return out;
}