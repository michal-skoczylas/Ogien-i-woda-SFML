//Klasa  zawierajaca postac gracza , logike ruchu i kolizji

#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>
class Player {
    public:
    Player();
    void handleInput();
    void update();
    void render(sf::RenderWindow & window);
    private:
    sf::Texture texture;
    sf::Sprite sprite;
    float speed;
};
#endif // PLAYER_H