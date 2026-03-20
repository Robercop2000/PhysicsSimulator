#include "physics/forces/spring_force.h"
#include "physics/core/particle.h"

SpringForce::SpringForce(Particle* o, float r, float k) : other(o), restLength(r), stiffness(k) {}

void SpringForce::ApplyForce(Particle& p) {
    Vector3 f = p.position - other->position;
    float l = f.Length();
    float m = (l - restLength) * stiffness;
    p.AddForce(f.Normalized() * -m);
}