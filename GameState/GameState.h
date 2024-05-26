#ifndef GAMESTATE_H
#define GAMESTATE_H

//Klasa bedzie sluzyc jako abstrkacja do roznych stanow gry typu menu, gra, pauza, ekran koncowy. Dzieki niej bedziemy mogli latwo przechodzic miedzy stanami
#include <SFML/Graphics.hpp>

class GameState{
public:

virtual ~GameState()=default;
//Obsluga wejscia od uzytkownikow
virtual void handleInput(sf::RenderWindow & window)=0;
//Aktualizacja stanu gry
virtual void update(sf::Time deltaTime)=0;
//Renderowanie stanu gry
virtual void render(sf::RenderWindow & window)=0;

};

#endif // GAMESTATE_H