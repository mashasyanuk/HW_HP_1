#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    sf::RenderWindow window(sf::VideoMode(1100, 1100), "Galaxy!");

    sf::CircleShape SUN(100.f);
    sf::CircleShape VENUS(25.f);
    sf::CircleShape EARTH(50.f);
    sf::CircleShape MOON(10.f);
    sf::CircleShape MARS(35.f);

    sf::RectangleShape rectangle(sf::Vector2f(10, 2));
    sf::RectangleShape rectangle2(sf::Vector2f(10, 2));
    sf::RectangleShape rectangle3(sf::Vector2f(10, 2));
    sf::RectangleShape rectangle4(sf::Vector2f(10, 2));

    SUN.setFillColor(sf::Color::Yellow);
    VENUS.setFillColor(sf::Color(200, 100, 0, 255));
    EARTH.setFillColor(sf::Color::Blue);
    MOON.setFillColor(sf::Color::White);
    MARS.setFillColor(sf::Color::Red);

    float x, y, x1, y1, x2, y2, x3, y3;
    int r3 = 380;
    int r2 = 330;
    int r1 = 250;
    int r = 150;
    int tmp = 250;
    SUN.setPosition(350, 350);
    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();

        for (float a = 0; a <= 360; a += 0.01) {

            x = r * sin((a + 160) * 3.14 / 180); //venus
            y = r * cos((a + 160) * 3.14 / 180);
            x1 = r1 * sin((a + 200) * 3.14 / 180); //earth
            y1 = r1 * cos((a + 200) * 3.14 / 180);
            x2 = r2 * sin((a + 195) * 3.14 / 180); //moon
            y2 = r2 * cos((a + 195) * 3.14 / 180);
            x3 = r3 * sin((a + 240) * 3.14 / 180); //mars
            y3 = r3 * cos((a + 240) * 3.14 / 180);

            VENUS.setPosition(x + 425, y + 425);
            EARTH.setPosition(x1 + 400, y1 + 400);
            MOON.setPosition(x2 + 440, y2 + 440);
            MARS.setPosition(x3 + 415, y3 + 415);

            window.draw(SUN);
            window.draw(VENUS);
            window.draw(EARTH);
            window.draw(MOON);
            window.draw(MARS);
            window.display();
            window.clear();

            for (int a = 0; a <= 360; a += 5) {

                x = r * sin(a * 3.14 / 180);
                y = r * cos(a * 3.14 / 180);
                x1 = r1 * sin((a + 200) * 3.14 / 180);
                y1 = r1 * cos((a + 200) * 3.14 / 180);
                x2 = r2 * sin((a + 195) * 3.14 / 180);
                y2 = r2 * cos((a + 195) * 3.14 / 180);
                x3 = r3 * sin((a + 240) * 3.14 / 180);
                y3 = r3 * cos((a + 240) * 3.14 / 180);
                rectangle.setPosition(x + 445, y + 446);
                rectangle2.setPosition(x1 + 445, y1 + 446);
            //    rectangle3.setPosition(x2 + 445, y2 + 446);
                rectangle4.setPosition(x3 + 445, y3 + 446);
                window.draw(rectangle);
                window.draw(rectangle2);
                window.draw(rectangle3);
                window.draw(rectangle4);

            }
        }

        window.display();
    }
    return 0;
}
