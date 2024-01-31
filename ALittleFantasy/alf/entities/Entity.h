#pragma once

#include "../prelude.h"


namespace alf
{
    class DrawableHandler;

    class Entity
    {
    public:
        Entity();

        virtual void Init();
        virtual void Draw(DrawableHandler& drawable);
        virtual void Update();

        void SetName(const SString& string);

        const String& GetNameRef();
        String GetName();

        Int GetId();

        Int _id = 0;
        Int _spriteId = 0;

        Float2 _position;
        Float2 _scale;

        String _name;

    };
}
