#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>

int main()
{
    // Setup SFML window
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window;
    window.create(sf::VideoMode(800, 600), "Test", sf::Style::Default, settings);
    window.setVerticalSyncEnabled(true);

    // Setup Box2D world
    b2Vec2 gravity(0.0f, -10.0f);
    b2World world(gravity);

    float fixedTimeStep = 1 / 60.0f;
    int velocityIterations = 6;
    int positionIterations = 2;

    // Main loop
    while (window.isOpen())
    {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // Update
        // TODO: Update objects and apply forces based on user input.

        // Physics
        world.Step(fixedTimeStep, velocityIterations, positionIterations);

        // Draw
        window.clear(sf::Color::Black);
        // TODO: Draw objects to the screen.
        window.display();
    }

    return 0;
}
