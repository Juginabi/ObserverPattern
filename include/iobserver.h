#ifndef IOBSERVER_H
#define IOBSERVER_H

class ObservableEntity;

class IObserver
{
protected:
    /// Constructor
    IObserver();
public:
    virtual ~IObserver() {}

    /// Overloaded in derived classes. Observable entity notifies Observers through this.
    virtual void onNotify(ObservableEntity*) = 0;
};

#endif // IOBSERVER_H
