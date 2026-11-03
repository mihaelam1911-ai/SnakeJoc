Am utilizat Inteligenta artificiala, prompturile utilizate:
1. ````markdown
Adăugați în repozitoriu fișier README.md cu descrierea proiectului
Adăugați în repozitoriu fișier README.md cu descrierea proiectului
Denumirea proiectului
Descrierea proiectului / reguli de joc
Structuri de date si descrierea lor
Creați fișiere hpp cu definirea structurilor de bază necesitate pentru proiect. Fisiere obligatorii:
motor de joaca (de exemplu, GameEngine.hpp sau Engine.hpp)
desenator (de exemplu Painter.hpp, Presenter.hpp sau Renderer.hpp)
ascultator (de exemplu Listener.hpp)
Plasați cod pe GitHubIn directorul `SnakeGame` creat de GIT, creați următoarele fișiere:

- `point.hpp`:

```cpp
#pragma once

struct Point{
   int x;
   int y;
};
```

- `apple.hpp`

```cpp
#pragma once

#include "point.hpp"

class Apple {
   Point _position;
public:
   Apple();
   Apple(const Point& position);
   Point GetPosition() const;
};
```

- `direction.hpp`

```cpp
#pragma once

enum class Direction {
   Top, Left, Right, Bottom
};
```

- `snake.hpp`
  
```cpp
#pragma once

#include "apple.hpp"
#include "direction.hpp"
#include "point.hpp"

class Snake {
   Point _segments[100];
   int _nr_segments;
public:
   Snake();
   Snake(const Point& _position);
   void Move(Direction direction);
   int GetSize() const;
   Point GetPosition() const;
   void Eat(const Apple& apple);
};
```

- `board.hpp`

```cpp
#pragma once

class Board {
   int _width;
   int _height;
public:
   Board(int width = 20, int height = 20);
   int GetWidth() const;
   int GetHeight() const;
};
```

- `game_engine.hpp`

```cpp
#pragma once
#include "apple.hpp"
#include "snake.hpp"
#include "board.hpp"

class GameEngine {
   Apple _apple;
   Snake _snake;
   Board _board;
public:
   GameEngine();
   void Init();
   void Run();
};
```

- `painter.hpp`

```cpp
#pragma once

#include "point.hpp"

class Painter {
public:
   void DrawImage(Point topLeft, Point bottomRight, char** image);
   void WriteText(Point position, char* text);
};
```

- `listener.hpp`

```cpp
#pragma once

class Listener {
   int GetKeyPressed();
};
```

### 5. Adăugarea descrierii proiectului

Creati în directorul `SnakeGame` fișierul `readme.md` cu următorul conținut:

1. denumirea proiectului
2. ce reprezintă proiectul
3. care sunt regulile jocului Snake
4. enumerați toate tipurile de date noi declarate, oferiți-le o scurtă explicație (ce reprezintă obiectele de acest tip).
````

Raspuns: Am creat în SnakeGame toate fișierele cerute: point.hpp, apple.hpp, direction.hpp, snake.hpp, board.hpp, game_engine.hpp, painter.hpp, listener.hpp și readme.md. Fișierul readme.md conține denumirea proiectului, descrierea, regulile jocului și un tabel cu toate tipurile de date declarate.

În listener.hpp am adăugat public:, pentru că în varianta din enunț metoda GetKeyPressed() era privată (implicit într-un class) și nu ar fi putut fi apelată din exterior.

Nu am putut publica nimic pe GitHub de aici. Din directorul SnakeGame, rulați:

bash
git add .
git commit -m "Add base headers and README"
git push


2. folosesc mai bine visual studio code sau visual studio?

raspuns: Pentru un proiect C++ de începători, ca acesta, depinde în principal de sistemul de operare.

**Visual Studio** (varianta Community, gratuită) e alegerea mai simplă pe **Windows**:
- vine cu compilator (MSVC) și debugger, deci nu configurați nimic în plus
- are expert pentru clase (`Add → Class`), care creează `.hpp` și `.cpp` deodată
- depanarea cu breakpoint-uri funcționează din prima
- dezavantaje: instalarea e mare (câțiva GB), e mai încet și funcționează doar pe Windows

**Visual Studio Code** e mai potrivit dacă:
- folosiți Linux sau macOS
- vreți un editor ușor și rapid, pe care îl puteți folosi și pentru alte limbaje
- nu vă deranjează o configurare inițială: instalați compilatorul (g++ sau MinGW), extensia C/C++ și eventual un fișier `tasks.json` pentru compilare

Dacă lucrați pe Windows și aceasta e prima întâlnire cu C++, vă recomand **Visual Studio**, pentru că pierdeți mai puțin timp cu configurarea. Dacă cursul sau profesorul folosește g++ și linia de comandă, VS Code e mai apropiat de felul în care va fi verificată tema.

Oricare ați alege, codul rămâne același, iar Git funcționează în ambele. Puteți schimba oricând editorul fără să modificați fișierele proiectului.