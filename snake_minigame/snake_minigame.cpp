#include <SFML/Graphics.hpp>
#include <time.h>

int n = 30, m = 20;
int size = 16;
int width = size * n;
int height = size * m;
int dir, number = 4;

struct Snake {
    int x, y;
} s[100];

struct Fruit {
    int x, y;
} f;

void Tick()
{
    for (int i = number; i > 0; --i)
    {
        s[i].x = s[i - 1].x;
        s[i].y = s[i - 1].y;
    }

    if (dir == 0) s[0].y += 1;
    if (dir == 1) s[0].x -= 1;
    if (dir == 2) s[0].x += 1;
    if (dir == 3) s[0].y -= 1;

    if ((s[0].x == f.x) && (s[0].y == f.y))
    {
        number++;
        f.x = rand() % n;
        f.y = rand() % m;
    }

    if (s[0].x >= n) s[0].x = 0;
    if (s[0].x < 0) s[0].x = n - 1;
    if (s[0].y >= m) s[0].y = 0;
    if (s[0].y < 0) s[0].y = m - 1;

    for (int i = 1; i < number; i++)
        if (s[0].x == s[i].x && s[0].y == s[i].y) number = i;
}

int main()
{
    srand(time(0));

    sf::RenderWindow window(sf::VideoMode(width, height), "Snake Game!");

    sf::Texture t1, t2, t3;
    t1.loadFromFile("images/white.png");
    t2.loadFromFile("images/red.png");
    t3.loadFromFile("images/green.png");

    sf::Sprite sprite1(t1);
    sf::Sprite sprite2(t2);
    sf::Sprite sprite3(t3);

    sf::Clock clock;
    float timer = 0, delay = 0.1f;

    f.x = 10;
    f.y = 10;

    while (window.isOpen())
    {
        float time = clock.getElapsedTime().asSeconds();
        clock.restart();
        timer += time;

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && dir != 2) dir = 1;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && dir != 1) dir = 2;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && dir != 0) dir = 3;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && dir != 3) dir = 0;

        if (timer > delay)
        {
            timer = 0;
            Tick();
        }

        window.clear();

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                sprite1.setPosition(i * size, j * size);
                window.draw(sprite1);
            }

        for (int i = 0; i < number; i++)
        {
            sprite2.setPosition(s[i].x * size, s[i].y * size);
            window.draw(sprite2);
        }

        sprite3.setPosition(f.x * size, f.y * size);
        window.draw(sprite3);

        window.display();
    }

    return 0;
}
