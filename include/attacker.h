#ifndef ATTACKER_H
#define ATTACKER_H

#include "entity.h"
#include "observableentity.h"
#include <string>

class Attacker : public Entity, public ObservableEntity
{
public:
    Attacker(std::string name);

    /// Notifies all observers of event
    void notifyObservers();
};

#endif // ATTACKER_H
