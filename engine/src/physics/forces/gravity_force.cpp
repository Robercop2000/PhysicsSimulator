#include "physics/forces/gravity_force.h"
#include "physics/core/particle.h"

void GravityForce::ApplyForce(Particle& p) 
{ 
	p.AddForce(gravity * p.mass); 
}