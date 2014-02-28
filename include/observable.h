#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <set>
class IObserver;
class Entity;

class Observable
{
    /// Stores all observers in set
    std::set<IObserver*> observers_;

    /// Observers to be removed after update
    std::set<IObserver*> removedObservers_;
protected:
    /// Constructor
    Observable();

    /// Updater for inheriting classes
    virtual void update(Observable *);
public:
    /// Adds observer to this entity
    virtual void attach(IObserver *observer);

    /// Removes observer from this entity
    virtual void detach(IObserver *observer);

    /// Virtual destructor
    virtual ~Observable();

};

#endif // OBSERVABLE_H
