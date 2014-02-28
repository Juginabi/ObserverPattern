#include "../include/observable.h"
#include "../include/iobserver.h"

Observable::Observable()
{
}

void Observable::attach(IObserver *observer)
{
    observers_.insert(observer);
}

void Observable::detach(IObserver *observer)
{
    std::set<IObserver*>::iterator it = observers_.find(observer);
    if (it != observers_.end())
    {
        // We cant remove observer here from the list, because observers_ list is currently being iterated in Observable::update method.
        // Store this observer in to the set of to-be-removed-observers.
        removedObservers_.insert(*it);
    }
}

Observable::~Observable()
{
    observers_.clear();
}

void Observable::update(Observable *me)
{
    for (std::set<IObserver*>::iterator it = observers_.begin(); it != observers_.end(); ++it)
    {
        (*it)->onNotify(me);
    }
    for (std::set<IObserver*>::iterator iter = removedObservers_.begin(); iter != removedObservers_.end(); ++iter)
    {
        std::set<IObserver*>::iterator it = observers_.find(*iter);
        if (it != observers_.end())
            observers_.erase(*iter);
    }
}
