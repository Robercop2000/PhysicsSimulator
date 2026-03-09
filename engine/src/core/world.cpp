#include "engine/core/world.h"
#include "engine/physics/rigid_body.h"

namespace engine {

	void World::AddBody(RigidBody* body) { bodies.push_back(body); }

} // namespace engine