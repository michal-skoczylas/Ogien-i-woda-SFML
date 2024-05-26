#include <SFML/Graphics.hpp>

class Engine{
private:
sf::RenderWindow window;
sf::Event event;

//Metoda do tworzenia okna
void initWindow();

public:
//Konstruktor
Engine();
//Destruktor
~Engine(){};
//Obsługa zdarzeń
void pollEvents();

//Aktualizacja stanu gry
void update();

//Renderowanie gry
void render();

//Główna pętla
void run();
};
