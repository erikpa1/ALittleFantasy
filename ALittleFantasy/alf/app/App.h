#pragma once
#include "../prelude.h"

namespace alf
{
    class Entity;

    class App
    {
    public:
        void Start();

        void AddEntity(S<Entity> & entity);

    private:
        void Init();
        void Draw();
        void Update();

        IntMap<S<Entity>> _entities;
    };
}
