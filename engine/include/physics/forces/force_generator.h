#pragma once
class Particle;

class ForceGenerator
{
public:
    virtual ~ForceGenerator() = default;
    virtual void ApplyForce(Particle& p) = 0;
};