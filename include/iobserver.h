#ifndef IOBSERVER_H
#define IOBSERVER_H

class IObserver
{
public:
    IObserver();

    /// Overloaded in derived classes. Observable entity notifies Observers through this.
    virtual void onNotify() = 0;

    virtual ~IObserver() {}
};

#endif // IOBSERVER_H
