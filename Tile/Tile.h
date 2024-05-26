#ifndef TILE_H
#define TILE_H

#include <SFML/Graphics.hpp>

class Tile {
public:
    Tile(const sf::Texture& texture, const sf::Vector2f& position);
    void render(sf::RenderWindow& window);

private:
    sf::Sprite sprite;
};

#endif // TILE_H
