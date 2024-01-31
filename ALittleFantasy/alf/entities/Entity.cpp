#include "Entity.h"


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

    void Entity::Draw()
    {
    }

    void Entity::Update()
    {
    }

    Int Entity::GetId()
    {
        return 0;
    }
}
