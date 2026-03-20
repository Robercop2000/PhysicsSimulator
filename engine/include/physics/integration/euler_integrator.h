#pragma once

#include "physics/integration/integrator.h"

class EulerIntegrator : public Integrator
{
public:

    void Integrate(Particle& particle, float dt) override;
};