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
    Defender(std::string name);

    /// Constructor with participant
    Defender(Participant *o);

    /// Constructor with name and participant
    Defender(std::string name, Participant *o);

    /// Destructor
    ~Defender();

    /// Notifier method which is used by participant to notify this entity.
    void onNotify(Participant *observable);

    // Register entity which we want to observe.
    void registerParticipant(Participant *o);
};

#endif // DEFENDER_H
