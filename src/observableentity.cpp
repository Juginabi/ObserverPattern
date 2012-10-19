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
    observers_.erase(observer);
}

ObservableEntity::~ObservableEntity()
{
    observers_.clear();
}

void ObservableEntity::update(ObservableEntity *me)
{
    for (std::set<IObserver*>::iterator it = observers_.begin(); it != observers_.end(); ++it)
        (*it)->onNotify(me);
}
