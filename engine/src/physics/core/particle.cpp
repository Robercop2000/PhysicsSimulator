#include "engine/physics/core/particle.h"

void Particle::AddForce(const Vector3& f) { forceAccumulator += f; }
void Particle::ClearForces() { forceAccumulator = Vector3(); }
const Vector3& Particle::GetForce() const { return forceAccumulator; }