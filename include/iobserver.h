#ifndef IOBSERVER_H
#define IOBSERVER_H

class Observable;

class IObserver
{
protected:
    /// Constructor
    IObserver();
public:
    virtual ~IObserver() {}

    /// Overloaded in derived classes. Observable entity notifies Observers through this.
    virtual void onNotify(Observable*) = 0;
};

#endif // IOBSERVER_H
