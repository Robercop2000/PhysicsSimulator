#pragma once

#include "physics/force_generator.h"
#include "math/vector3.h"

class Particle;

class SpringForce : public ForceGenerator
{
public:

    SpringForce(Particle* other, float restLength, float stiffness);

    void ApplyForce(Particle& particle) override;

private:

    Particle* other;

    float restLength;
    float stiffness;
};