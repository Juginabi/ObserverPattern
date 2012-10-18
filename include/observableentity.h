#ifndef OBSERVABLEENTITY_H
#define OBSERVABLEENTITY_H

#include <set>
class IObserver;

class ObservableEntity
{
    /// Stores all observers in set
    std::set<IObserver*> observers_;
protected:
    /// Constructor
    ObservableEntity();

    /// Updater for inheriting classes
    virtual void update();
public:
    /// Adds observer to this entity
    virtual void addObserver(IObserver *observer);

    /// Removes observer from this entity
    virtual void delObserver(IObserver *observer);

    /// Virtual destructor
    virtual ~ObservableEntity() {}

};

#endif // OBSERVABLEENTITY_H
