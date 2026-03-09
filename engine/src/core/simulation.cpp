#include "engine/core/simulation.h"
#include "engine/core/world.h"
#include "engine/physics/rigid_body.h"
#include "engine/physics/integrator.h"

namespace engine {

    void Simulation::Step(World& world, float dt) {
        for (RigidBody* body : world.bodies) {
            Integrator::Euler(*body, dt);
        }
    }

} // namespace engine