#include <iostream>
#include <sstream>
#include "../include/attacker.h"
#include "../include/defender.h"

using namespace std;

int main()
{
    cout << "Observing entities v0.1!" << endl;

    Attacker spider("Spider");
    Defender mortar("jokutorni");

    spider.addObserver(&mortar);
    bool isAlive = spider.isAlive();;

    while (isAlive)
    {
        spider.dealDamage(1);
        isAlive = spider.isAlive();
        spider.notifyObservers();
    }
    return 0;
}

