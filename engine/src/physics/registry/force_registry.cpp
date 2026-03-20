#include "physics/registry/force_registry.h"
#include "physics/core/particle.h"
#include "physics/forces/force_generator.h"

void ForceRegistry::Add(Particle* particle, ForceGenerator* generator)
{
    registrations.push_back({ particle, generator });
}

void ForceRegistry::ApplyForces()
{
    for (auto& reg : registrations)
    {
        reg.generator->ApplyForce(*reg.particle);
    }
}