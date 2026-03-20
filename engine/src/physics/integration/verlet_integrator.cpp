#include "physics/integration/verlet_integrator.h"
#include "physics/core/particle.h"

void VerletIntegrator::Integrate(Particle& p, float dt)
{
    if (p.mass <= 0) return;
    Vector3 acc = p.GetForce() / p.mass;
    Vector3 temp = p.position;
    p.position = p.position + (p.position - p.previousPosition) + acc * dt * dt;
    p.previousPosition = temp;
    p.ClearForces();
}