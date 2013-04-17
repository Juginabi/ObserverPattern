#include "../include/defender.h"
#include "../include/observableentity.h"
#include "../include/attacker.h"
#include <iostream>

Defender::Defender(Attacker *o)
{
    observable_ = o;
    o->attach(this);
}

Defender::Defender(std::string name, Attacker *o) : Entity(name)
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

void Defender::onNotify(ObservableEntity *observable)
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
