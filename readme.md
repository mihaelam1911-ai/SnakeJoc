Descrierea proiectului

SnakeGame este o implementare în C++ a jocului clasic Snake. Jucătorul controlează un șarpe care se deplasează pe o tablă de joc, mănâncă mere și crește în lungime.

Regulile jocului
Șarpele se mișcă continuu pe tabla de joc în direcția curentă (sus, jos, stânga sau dreapta).
Jucătorul schimbă direcția de mișcare folosind tastatura.
Pe tablă apare un măr într-o poziție aleasă aleator.
Când capul șarpelui ajunge pe poziția mărului, șarpele îl mănâncă: lungimea lui crește cu un segment, iar scorul crește.
După ce un măr este mâncat, apare un măr nou.
Jocul se termină (jucătorul pierde) dacă șarpele lovește marginea tablei sau se lovește pe sine însuși.
Structuri de date
Tip	Fișier	Descriere
Point	point.hpp	Structură care reprezintă un punct pe tablă prin coordonatele întregi x și y. Este folosită pentru poziția mărului, a segmentelor șarpelui și pentru desenare.
Direction	direction.hpp	Enumerare (enum class) cu direcțiile posibile de mișcare: Top, Left, Right, Bottom.
Apple	apple.hpp	Clasă care reprezintă mărul. Memorează poziția lui (Point) și o oferă prin GetPosition().
Snake	snake.hpp	Clasă care reprezintă șarpele. Păstrează un vector de segmente (Point, maximum 100) și numărul lor curent. Permite deplasarea (Move), mâncarea unui măr (Eat), aflarea dimensiunii (GetSize) și a poziției capului (GetPosition).
Board	board.hpp	Clasă care reprezintă tabla de joc. Memorează lățimea și înălțimea (implicit 20 x 20).
GameEngine	game_engine.hpp	Motorul de joc. Conține obiectele jocului (Apple, Snake, Board) și gestionează inițializarea (Init) și bucla principală a jocului (Run).
Painter	painter.hpp	Desenatorul. Afișează imagini (DrawImage) și text (WriteText) pe ecran.
Listener	listener.hpp	Ascultătorul. Citește tasta apăsată de jucător (GetKeyPressed).