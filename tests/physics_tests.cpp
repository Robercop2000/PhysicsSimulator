#include "engine/core/world.h"
#include "engine/physics/rigid_body.h"
#include "engine/core/simulation.h"
#include <cassert>
#include <iostream>

int main() {
    engine::World world;
    engine::RigidBody body(1.0f);
    world.AddBody(&body);

    body.ApplyForce({ 0,-9.8f,0 });
    engine::Simulation::Step(world, 0.1f);

    assert(body.velocity.y < 0);
    std::cout << "Test passed!" << std::endl;
    return 0;
}