#ifndef MENUSTATE_H
#define MENUSTATE_H
//implementacja abstrakcyjnej klasy gamestate
#include "GameState/GameState.h"
class MenuState: public GameState{
    public:
    MenuState();
    void handleInput(sf::RenderWindow & window) override;
    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow & window) override;
private:
//Rzeczy do wyboru w panelu menu
sf::Font font;
sf::Text title;
sf::Text play_option;
sf::Text exit_option;
int selected_option;
};
#endif

