#ifndef LEVEL_H
#define LEVEL_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Tile/Tile.h"

class Level {
public:
    Level();
    void loadFromFile(const std::string& filename);
    void render(sf::RenderWindow& window);

private:
    std::vector<Tile> tiles;
};

#endif // LEVEL_H
