#pragma once
#include "force_generator.h"
#include "math/vector3.h"

class GravityForce : public ForceGenerator
{
public:
    GravityForce(Vector3 g) : gravity(g) {}
    void ApplyForce(Particle& p) override;
private:
    Vector3 gravity;
};