#include <iostream>
#include "../include/attacker.h"
#include "../include/defender.h"

using namespace std;

int main()
{
    cout << "Observing entities v0.1!" << endl;

    Attacker *spider = new Attacker("Spider");

    // Mortar tower registers spider on creation
    Defender *mortar = new Defender("Laser-tower", spider);
    Defender *arrow = new Defender("Arrow-tower");
    // Arrow tower registers spider here.
    arrow->registerParticipant(spider);
    // Notify observers
    spider->notifyObservers();

    delete spider;
    delete mortar;
    delete arrow;

    return 0;
}

