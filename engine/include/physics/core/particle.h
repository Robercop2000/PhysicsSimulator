#pragma once
#include "math/vector3.h"

class Particle
{
public:

    Vector3 position;
    Vector3 previousPosition;

    Vector3 velocity;
    Vector3 acceleration;

    float mass = 1.0f;

    void AddForce(const Vector3& force);
    void ClearForces();

    const Vector3& GetForce() const;

private:

    Vector3 forceAccumulator;
};