#include "../include/attacker.h"

Attacker::Attacker(std::string name) : Entity(name)
{
}

void Attacker::notifyObservers()
{
    this->update(this);
}
