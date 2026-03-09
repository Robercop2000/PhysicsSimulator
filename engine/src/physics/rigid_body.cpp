#include "engine/physics/rigid_body.h"

namespace engine {

	RigidBody::RigidBody(float m) : mass(m), position(), velocity(), force() {}

	void RigidBody::ApplyForce(const Vector3& f) { force = force + f; }
	void RigidBody::ClearForces() { force = Vector3(); }

} // namespace engine