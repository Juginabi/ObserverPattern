#include "../include/observableentity.h"
#include "../include/iobserver.h"

ObservableEntity::ObservableEntity()
{
}

void ObservableEntity::addObserver(IObserver *observer)
{
    observers_.insert(observer);
}

void ObservableEntity::delObserver(IObserver *observer)
{
    observers_.erase(observer);
}

void ObservableEntity::update(Entity *me)
{
    for (std::set<IObserver*>::iterator it = observers_.begin(); it != observers_.end(); ++it)
        (*it)->onNotify(me);
}
