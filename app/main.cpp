#include <memory>
#include "physics/core/physics_world.h"
#include "physics/integration/verlet_integrator.h"
#include "physics/forces/spring_force.h"
#include "physics/forces/gravity_force.h"

int main()
{
    auto integrator = std::make_unique<VerletIntegrator>();
    PhysicsWorld world(std::move(integrator));

    auto& p1 = world.CreateParticle();
    auto& p2 = world.CreateParticle();

    p1.position = { 0,10,0 }; p1.previousPosition = p1.position;
    p2.position = { 2,10,0 }; p2.previousPosition = p2.position;

    GravityForce gravity({ 0,-9.8f,0 });
    SpringForce spring(&p2, 2.0f, 5.0f);

    world.GetForceRegistry().Add(&p1, &gravity);
    world.GetForceRegistry().Add(&p2, &gravity);
    world.GetForceRegistry().Add(&p1, &spring);

    for (int i = 0; i < 500; i++) {
        world.Step(0.016f);
        auto& pa = world.GetParticles()[0];
        auto& pb = world.GetParticles()[1];
        printf("Step %d: p1=(%.2f %.2f %.2f) p2=(%.2f %.2f %.2f)\n",
            i, pa.position.x, pa.position.y, pa.position.z,
            pb.position.x, pb.position.y, pb.position.z);
    }
}