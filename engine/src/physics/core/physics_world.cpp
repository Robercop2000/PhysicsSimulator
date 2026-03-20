#include "physics/core/physics_world.h"

PhysicsWorld::PhysicsWorld(std::unique_ptr<Integrator> i) : integrator(std::move(i)) {}
Particle& PhysicsWorld::CreateParticle() {
    particles.push_back(std::make_unique<Particle>());
    return *particles.back();
}
void PhysicsWorld::Step(float dt) {
    forceRegistry.ApplyForces();
    for (auto& p : particles) integrator->Integrate(*p, dt);
}