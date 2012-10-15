#include "../include/observableentity.h"

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
