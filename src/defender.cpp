#include "../include/defender.h"
#include "../include/observable.h"
#include "../include/attacker.h"
#include <iostream>

Defender::Defender(Observable *o)
{
    observable_ = o;
    o->attach(this);
}

Defender::Defender(std::string name, Observable *o) : Entity(name)
{
    observable_ = o;
    o->attach(this);
}

Defender::~Defender()
{
    if (observable_)
    {
        observable_->detach(this);
        observable_ = 0;
    }
}

void Defender::onNotify(Observable *observable)
{
    if (observable_ && observable_ == observable)
    {
        if (static_cast<Attacker*>(observable)->isAlive())
        {
            std::cout << "Defender notified. Attacker status alive!\n";
        }
        else
        {
            std::cout << "Defender notified. Attacker status dead!\n";
            observable_->detach(this);
            observable_ = 0;
        }
    }
}
