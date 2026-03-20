#pragma once
#include "force_generator.h"
#include "math/vector3.h"

class Particle;

class SpringForce : public ForceGenerator
{
public:
    SpringForce(Particle* other, float restLength, float k);
    void ApplyForce(Particle& p) override;
private:
    Particle* other;
    float restLength;
    float stiffness;
};