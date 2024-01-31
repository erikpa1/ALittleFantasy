#include "App.h"
#include <SFML/Graphics.hpp>

#include "../entities/Entity.h"


namespace alf
{
    void App::Start()
    {
        sf::RenderWindow window(sf::VideoMode(800, 600), "A Little Fantasy");
        sf::RectangleShape shape(sf::Vector2(50.0f, 50.0f));
        shape.setFillColor(sf::Color::Green);

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                {
                    window.close();
                }
                else if (event.type == sf::Event::KeyPressed)
                {
                }
            }

            window.clear();
            window.draw(shape);
            window.display();
        }
    }

    void App::AddEntity(S<Entity>& entity)
    {
        _entities[entity->GetId()] = entity;
    }

    void App::Init()
    {
        for (const auto& [key, entity] : _entities)
        {
            entity->Init();
        }
    }

    void App::Draw()
    {
        for (const auto& [key, entity] : _entities)
        {
            entity->Draw();
        }
    }

    void App::Update()
    {
        for (const auto& [key, entity] : _entities)
        {
            entity->Draw();
        }
    }
}
