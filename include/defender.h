#ifndef DEFENDER_H
#define DEFENDER_H

#include "iobserver.h"
#include "entity.h"
#include <string>

class Observable;
class Attacker;

class Defender : public Entity, public IObserver
{
private:
    Observable *observable_;
public:
    /// Default constructor
    Defender(Observable *o);

    /// Constructor with name parameter
    Defender(std::string name, Observable *o);

    /// Destructor
    ~Defender();

    /// Notifier method.
    void onNotify(Observable* observable);
};

#endif // DEFENDER_H
