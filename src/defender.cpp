#include "../include/defender.h"
#include <string>
#include <iostream>

Defender::Defender(std::string name) : Entity(name)
{
}

void Defender::onNotify()
{
    //std::cout << this->getName() << " notified!\n";
}
