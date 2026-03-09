#include "engine/physics/integrator.h"
#include "engine/physics/rigid_body.h"

namespace engine {

    void Integrator::Euler(RigidBody& body, float dt) {
        Vector3 accel = body.force * (1.0f / body.mass);
        body.velocity = body.velocity + accel * dt;
        body.position = body.position + body.velocity * dt;
        body.ClearForces();
    }

} // namespace engine