#pragma once

#include "../prelude.h"

namespace alf
{
    class Entity
    {
    public:
        Entity();

        virtual void Init();
        virtual void Draw();
        virtual void Update();

        Int GetId();

        Int _id = 0;
    };
}
