#include "../include/attacker.h"
#include <string>

Attacker::Attacker(std::string name) : Entity(name)
{
}

void Attacker::notifyObservers()
{
    this->update();
}
