#include "../include/observableentity.h"
#include "../include/iobserver.h"

ObservableEntity::ObservableEntity()
{
}

void ObservableEntity::attach(IObserver *observer)
{
    observers_.insert(observer);
}

void ObservableEntity::detach(IObserver *observer)
{
    std::set<IObserver*>::iterator it = observers_.find(observer);
    if (it != observers_.end())
    {
        // We cant remove observer here from the list, because observers_ list is currently being iterated in ObservableEntity::update method.
        // Store this observer in to the set of to-be-removed-observers.
        removedObservers_.insert(*it);
    }
}

ObservableEntity::~ObservableEntity()
{
    observers_.clear();
}

void ObservableEntity::update(ObservableEntity *me)
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
