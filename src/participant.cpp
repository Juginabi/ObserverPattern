#include "../include/participant.h"
#include "../include/iobserver.h"

Participant::Participant()
{
}

void Participant::attach(IObserver *observer)
{
    observers_.insert(observer);
}

void Participant::detach(IObserver *observer)
{
    std::set<IObserver*>::iterator it = observers_.find(observer);
    if (it != observers_.end())
    {
        // We cant remove observer here from the list, because observers_ list is currently being iterated in Participant::update method.
        // Store this observer in to the set of to-be-removed-observers.
        removedObservers_.insert(*it);
    }
}

Participant::~Participant()
{
    observers_.clear();
}

void Participant::update(Participant *me)
{
    // Pre-update cleaning, because observer might have detached before update.
    for (std::set<IObserver*>::iterator iter = removedObservers_.begin(); iter != removedObservers_.end(); ++iter)
    {
        std::set<IObserver*>::iterator it = observers_.find(*iter);
        if (it != observers_.end())
            observers_.erase(*iter);
    }

    // Notify observers
    for (std::set<IObserver*>::iterator it = observers_.begin(); it != observers_.end(); ++it)
    {
        (*it)->onNotify(me);
    }

    // Post-update cleaning
    for (std::set<IObserver*>::iterator iter = removedObservers_.begin(); iter != removedObservers_.end(); ++iter)
    {
        std::set<IObserver*>::iterator it = observers_.find(*iter);
        if (it != observers_.end())
            observers_.erase(*iter);
    }
}
