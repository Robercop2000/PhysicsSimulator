#include "engine/core/world.h"
#include "engine/core/simulation.h"
#include "engine/physics/rigid_body.h"
#include <iostream>

int main() {
    engine::World world;
    engine::RigidBody body(1.0f);
    world.AddBody(&body);

    for (int i = 0; i < 100; i++) {
        body.ApplyForce({ 0,-9.8f,0 });
        engine::Simulation::Step(world, 0.016f);
        std::cout << "Y=" << body.position.y << std::endl;
    }
}