#ifndef DEFENDER_H
#define DEFENDER_H

#include "entity.h"
#include "iobserver.h"
#include <string>

class Defender : public Entity, public IObserver
{
public:
    Defender() {}
    Defender(std::string name);

    /// Notifier method.
    void onNotify();
};

#endif // DEFENDER_H
