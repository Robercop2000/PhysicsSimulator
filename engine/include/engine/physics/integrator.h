#pragma once
namespace engine { class RigidBody; }

namespace engine {

    class Integrator {
    public:
        static void Euler(RigidBody& body, float dt);
    };

} // namespace engine