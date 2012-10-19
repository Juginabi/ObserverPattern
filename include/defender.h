#ifndef DEFENDER_H
#define DEFENDER_H

#include "iobserver.h"
#include "entity.h"
#include <string>

class ObservableEntity;
class Attacker;

class Defender : public Entity, public IObserver
{
private:
    Attacker *observable_;
public:
    /// Default constructor
    Defender(Attacker *o);

    /// Constructor with name parameter
    Defender(std::string name, Attacker *o);

    /// Destructor
    ~Defender();

    /// Notifier method.
    void onNotify(ObservableEntity* observable);
};

#endif // DEFENDER_H
