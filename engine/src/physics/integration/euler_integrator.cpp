#include "physics/integration/euler_integrator.h"
#include "physics/core/particle.h"

void EulerIntegrator::Integrate(Particle& particle, float dt)
{
    if (particle.mass <= 0.0f)
        return;

    particle.acceleration = particle.GetForce() / particle.mass;

    particle.velocity += particle.acceleration * dt;
    particle.position += particle.velocity * dt;

    particle.ClearForces();
}