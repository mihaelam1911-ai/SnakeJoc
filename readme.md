
Descriere
Proiectul reprezintă structura de bază pentru jocul Snake, scris în C++. În acest laborator am creat fișierele header (.hpp) cu clasele și structurile principale pentru joc.

## Regulile jocului
- Jucătorul controlează un șarpe pe o tablă de joc.
- Scopul este de a mânca merele care apar pe ecran.
- La fiecare măr mâncat, șarpele își mărește lungimea.
- Jocul se termină dacă șarpele se lovește de marginea tablei sau de propriul corp.

## Tipuri de date
- **Point**: structură pentru coordonatele (x, y) de pe ecran.
- **Direction**: enum cu direcțiile posibile (Top, Left, Right, Bottom).
- **Mar**: clasa pentru măr (salvează poziția mărului).
- **Snake**: clasa pentru șarpe (reține segmentele, dimensiunea și mișcarea).
- **Board**: clasa pentru tabla de joc (dimensiunile width și height).
- **GameEngine**: clasa principală care leagă tabla, șarpele și mărul.
- **Painter**: clasă folosită pentru desenarea pe ecran.
- **Listener**: clasă pentru citirea tastelor apăsate.
