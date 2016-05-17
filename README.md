ObserverPattern
===============

This project is an example implementaion of classic 'Observer Pattern' -Design pattern. In observer pattern messaging between entities is done through list of oberservers who observe the observable entities. Observers register to the entity of interest and this entity messages status changes to these observers via list of registered entities.

This way code needs no external tracking of who needs the information and from where. All is done through registering and unregistering between entities.

This example can be further extended to implement a manager class which works as a middle man for observers and observables.