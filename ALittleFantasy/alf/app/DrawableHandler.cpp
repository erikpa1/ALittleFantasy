#include "DrawableHandler.h"


namespace alf
{
    DrawableHandler::DrawableHandler(sf::RenderWindow& window)
    {
        _window = _window;
    }

    void DrawableHandler::DrawSprite(Int spriteIndex, Float2& position, Float2& scale)
    {
        sf::RectangleShape shape(position);
        _window->draw(shape);
    }
}
