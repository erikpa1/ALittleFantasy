#pragma once
#include "../prelude.h"

namespace sf
{
    class RenderWindow;
}

namespace alf
{
    class DrawableHandler
    {
    public:
        DrawableHandler(sf::RenderWindow& window);

        void DrawSprite(Int spriteIndex, Float2& position, Float2& scale);

        sf::RenderWindow* _window;
    };
}
