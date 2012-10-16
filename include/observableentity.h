#ifndef OBSERVABLEENTITY_H
#define OBSERVABLEENTITY_H

#include <set>
class IObserver;

class ObservableEntity
{
protected:
    std::set<IObserver*> observers_;
public:
    /// Constructor
    ObservableEntity();

    /// Virtual destructor
    virtual ~ObservableEntity() {}

    /// Adds observer to this entity
    void addObserver(IObserver *observer);

    /// Removes observer from this entity
    void delObserver(IObserver *observer);
};

#endif // OBSERVABLEENTITY_H
