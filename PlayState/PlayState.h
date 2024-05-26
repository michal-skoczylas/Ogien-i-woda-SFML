#ifndef PLAYSTATE_H
#define PLAYSTATE_H
#include "GameState/GameState.h"
#include <SFML/Graphics.hpp>

class PlayState: public GameState{
    public:
    PlayState();
    void handleInput(sf::RenderWindow & window) override;
    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow & window) override;
private:

};

#endif // PLAYSTATE_H