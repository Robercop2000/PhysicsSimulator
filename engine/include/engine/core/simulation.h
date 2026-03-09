#pragma once
namespace engine { class World; }

namespace engine {

    class Simulation {
    public:
        static void Step(World& world, float dt);
    };

} // namespace engine