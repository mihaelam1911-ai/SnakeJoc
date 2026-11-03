#pragma once

#include "mar.hpp"
#include "snake.hpp"
#include "placa.hpp"

class GameEngine {
   Mar _mar;
   Snake _snake;
   Placa _placa;
public:
   GameEngine();
   void Init();
   void Run();
};
