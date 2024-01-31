#pragma once
#include "../prelude.h"
#include <SFML/Graphics.hpp>


namespace alf
{
    class Entity;
    class DrawableHandler;


    class App
    {
    public:
        void Start();

        void AddEntity(const S<Entity>& entity);


        void _Init();
        void _Draw(DrawableHandler& drawable);
        void _Update();

        sf::RenderWindow _window;
        StringMap<S<Entity>> _entities;
    };
}
