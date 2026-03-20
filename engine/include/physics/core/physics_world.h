#pragma once
#include <vector>
#include <memory>
#include "physics/integration/integrator.h"
#include "physics/registry/force_registry.h"
#include "particle.h"

class PhysicsWorld
{
public:
    PhysicsWorld(std::unique_ptr<Integrator> integrator);
    Particle& CreateParticle();
    void Step(float dt);
    ForceRegistry& GetForceRegistry() { return forceRegistry; }
    std::vector<std::unique_ptr<Particle>>& GetParticles() { return particles; }
private:
    std::vector<std::unique_ptr<Particle>> particles;
    ForceRegistry forceRegistry;
    std::unique_ptr<Integrator> integrator;
};