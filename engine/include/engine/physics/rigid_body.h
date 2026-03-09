#pragma once
#include "engine/math/vector3.h"

namespace engine {

    class RigidBody {
    public:
        Vector3 position;
        Vector3 velocity;
        Vector3 force;
        float mass;

        RigidBody(float mass = 1.0f);

        void ApplyForce(const Vector3& f);
        void ClearForces();
    };

} // namespace engine