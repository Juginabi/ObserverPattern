#include "../include/attacker.h"

Attacker::Attacker(std::string name) : Entity(name)
{
}

Attacker::~Attacker()
{
    setStatus(false);
    update(this);
}

void Attacker::notifyObservers()
{
    update(this);
}
