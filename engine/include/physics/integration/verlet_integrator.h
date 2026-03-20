#pragma once
#include "integrator.h"

class VerletIntegrator : public Integrator
{
public:
    void Integrate(Particle& p, float dt) override;
};