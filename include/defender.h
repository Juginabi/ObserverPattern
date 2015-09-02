#ifndef DEFENDER_H
#define DEFENDER_H

#include "iobserver.h"
#include "entity.h"
#include <string>

class Participant;
class Attacker;

class Defender : public Entity, public IObserver
{
private:
    Participant *observable_;
public:
    /// Default constructor
    Defender(Participant *o);

    /// Constructor with name parameter
    Defender(std::string name, Participant *o);

    /// Destructor
    ~Defender();

    /// Notifier method.
    void onNotify(Participant* observable);
};

#endif // DEFENDER_H
