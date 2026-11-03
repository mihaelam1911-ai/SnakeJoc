#include "mar.hpp"

Mar::Mar() {
    _position.x = 0;
    _position.y = 0;
}

Mar::Mar(const Point &position) {
    _position = position;
}

Point Mar::GetPosition() const {
    return _position;
}