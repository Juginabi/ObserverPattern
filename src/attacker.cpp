#include "../include/attacker.h"
#include <string>
#include "../include/iobserver.h"

Attacker::Attacker(std::string name) : Entity(name)
{
}

void Attacker::notifyObservers()
{
    for (std::set<IObserver*>::iterator it = observers_.begin(); it != observers_.end(); ++it)
        (*it)->onNotify();
}
