#include "../include/defender.h"
#include "../include/entity.h"
#include <iostream>

Defender::Defender(std::string name) : Entity(name)
{
}

void Defender::onNotify(Entity *observable)
{
    std::cout << this->getName() << " notified by " << observable->getName() <<"!\n";
}
