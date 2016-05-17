#include "../include/defender.h"
#include "../include/participant.h"
#include "../include/attacker.h"
#include <iostream>

Defender::Defender(std::string name) : Entity(name) {

}


Defender::Defender(Participant *o)
{
    observable_ = o;
    o->attach(this);
}

Defender::Defender(std::string name, Participant *o) : Entity(name)
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

void Defender::onNotify(Participant *observable)
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

void Defender::registerParticipant(Participant *o) {
    observable_ = o;
    o->attach(this);
}
