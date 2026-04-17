#include <iostream>
#include "StopWatch.h"
using namespace std;

int main(void) {
    StopWatch sw;
    SWTime t;

    sw.start();
    for(int i = 0; i < 100; i++)
        sw.tick();

    t = sw.getTime();
    cout << "Time: "
         << t.getHours() << ":"
         << t.getMinutes() << ":"
         << t.getSeconds() << "."
         << t.getHundreths() << endl;

    t = sw.getLap();
    cout << "Lap: "
         << t.getHours() << ":"
         << t.getMinutes() << ":"
         << t.getSeconds() << "."
         << t.getHundreths() << endl;

    sw.stop();
    cin.get();
    return 0;
}
