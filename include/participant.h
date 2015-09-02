#ifndef Participant_H
#define Participant_H

#include <set>
class IObserver;
class Entity;

class Participant
{
    /// Stores all observers in set
    std::set<IObserver*> observers_;

    /// Observers to be removed after update
    std::set<IObserver*> removedObservers_;
protected:
    /// Constructor
    Participant();

    /// Updater for inheriting classes
    virtual void update(Participant *);
public:
    /// Adds observer to this entity
    virtual void attach(IObserver *observer);

    /// Removes observer from this entity
    virtual void detach(IObserver *observer);

    /// Virtual destructor
    virtual ~Participant();

};

#endif // Participant_H
