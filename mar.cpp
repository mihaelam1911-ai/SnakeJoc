#include "mar.hpp"

Mar::Mar() : _position(0, 0) {}

Mar::Mar(const Point &position) : _position(position) {}

Mar::Mar(const Mar &other) : _position(other.GetPosition()) {}

Point Mar::GetPosition() const
{
    return _position;
}

Mar Mar::operator = (const Mar& other){
    _position = other.GetPosition();
    return *this;
}

bool Mar::operator == (const Mar& other) const{
    return GetPosition() == other.GetPosition();
}

std::istream& operator >> (std::istream& in, Mar& mar){
    Point position;
    in >> position;
    mar = Mar(position);
    return in;
}

std::ostream& operator << (std::ostream& out, const Mar& mar){
    out << mar.GetPosition();
    return out;
}