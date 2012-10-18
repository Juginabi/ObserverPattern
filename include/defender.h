#ifndef DEFENDER_H
#define DEFENDER_H

#include "entity.h"
#include "iobserver.h"
#include <string>

class Defender : public Entity, public IObserver
{
public:
    /// Default constructor
    Defender() {}

    /// Constructor with name parameter
    Defender(std::string name);

    /// Destructor
    ~Defender() {}

    /// Notifier method.
    void onNotify(Entity* observable);
};

#endif // DEFENDER_H
