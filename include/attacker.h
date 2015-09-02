#ifndef ATTACKER_H
#define ATTACKER_H

#include "entity.h"
#include "observable.h"
#include <string>

class Attacker : public Entity, public Participant
{
public:
    /// Constructor
    Attacker(std::string name);

    /// Destructor
    ~Attacker();

    /// Notifies all observers of event
    void notifyObservers();
};

#endif // ATTACKER_H
