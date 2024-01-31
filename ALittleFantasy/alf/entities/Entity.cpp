#include "Entity.h"

#include "../app/DrawableHandler.h"


namespace alf
{
    static Int COUNTER = 0;

    Entity::Entity()
    {
        _id = COUNTER;
        COUNTER++;
    }

    void Entity::Init()
    {
    }

    void Entity::Draw(DrawableHandler& drawable)
    {
        drawable.DrawSprite(_spriteId, _position, _scale);
    }

    void Entity::Update()
    {
    }

    Int Entity::GetId()
    {
        return 0;
    }
}
