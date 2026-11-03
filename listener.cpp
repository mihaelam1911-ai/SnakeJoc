#include "listener.hpp"

#include <iostream>

int Listener::GetKeyPressed() {
    return std::cin.get();
}