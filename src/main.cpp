#include <iostream>
#include "../include/attacker.h"
#include "../include/defender.h"

using namespace std;

int main()
{
    cout << "Observing entities v0.1!" << endl;

    Attacker *spider = new Attacker("Spider");
    Defender *mortar = new Defender("Laser-tower", spider);

    spider->notifyObservers();

    delete spider;
    delete mortar;




    return 0;
}

