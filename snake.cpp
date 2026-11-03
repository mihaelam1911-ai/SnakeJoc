#include "snake.hpp"

Snake::Snake() {
    _nr_segments = 1;
    _segments[0].x = 0;
    _segments[0].y = 0;
}

Snake::Snake(const Point &_position) {
    _nr_segments = 1;
    _segments[0] = _position;
}

void Snake::Move(Direction direction) {
    // fiecare segment preia pozitia segmentului din fata lui
    for (int i = _nr_segments - 1; i > 0; --i) {
        _segments[i] = _segments[i - 1];
    }
    // capul se deplaseaza in directia ceruta
    switch (direction) {
        case Direction::Top:    _segments[0].y -= 1; break;
        case Direction::Bottom: _segments[0].y += 1; break;
        case Direction::Left:   _segments[0].x -= 1; break;
        case Direction::Right:  _segments[0].x += 1; break;
    }
}

int Snake::GetSize() const {
    return _nr_segments;
}

Point Snake::GetPosition() const {
    return _segments[0];
}

void Snake::Eat(const Mar &mar) {
    Point head = _segments[0];
    Point pos = mar.GetPosition();
    if (head.x == pos.x && head.y == pos.y && _nr_segments < 100) {
        // sarpele creste cu un segment, la coada
        _segments[_nr_segments] = _segments[_nr_segments - 1];
        ++_nr_segments;
    }
}