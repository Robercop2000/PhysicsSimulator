#pragma once
class Particle;

class Integrator
{
public:
    virtual ~Integrator() = default;
    virtual void Integrate(Particle& particle, float dt) = 0;
};