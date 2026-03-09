#pragma once
#include <vector>

namespace engine { class RigidBody; }

namespace engine {

    class World {
    public:
        std::vector<RigidBody*> bodies;

        void AddBody(RigidBody* body);
    };

} // namespace engine