#ifndef OBSERVABLEENTITY_H
#define OBSERVABLEENTITY_H

#include <set>
class IObserver;
class Entity;

class ObservableEntity
{
    /// Stores all observers in set
    std::set<IObserver*> observers_;

    /// Observers to be removed after update
    std::set<IObserver*> removedObservers_;
protected:
    /// Constructor
    ObservableEntity();

    /// Updater for inheriting classes
    virtual void update(ObservableEntity *);
public:
    /// Adds observer to this entity
    virtual void attach(IObserver *observer);

    /// Removes observer from this entity
    virtual void detach(IObserver *observer);

    /// Virtual destructor
    virtual ~ObservableEntity();

};

#endif // OBSERVABLEENTITY_H
