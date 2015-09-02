#ifndef IOBSERVER_H
#define IOBSERVER_H

class Participant;

class IObserver
{
protected:
    /// Constructor
    IObserver();
public:
    virtual ~IObserver() {}

    /// Overloaded in derived classes. Participant entity notifies Observers through this.
    virtual void onNotify(Participant*) = 0;
};

#endif // IOBSERVER_H
