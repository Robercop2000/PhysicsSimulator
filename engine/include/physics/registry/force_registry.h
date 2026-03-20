#pragma once
#include <vector>
class Particle;
class ForceGenerator;

struct ForceRegistration { Particle* particle; ForceGenerator* generator; };

class ForceRegistry
{
public:
    void Add(Particle* p, ForceGenerator* g);
    void ApplyForces();
private:
    std::vector<ForceRegistration> registrations;
};