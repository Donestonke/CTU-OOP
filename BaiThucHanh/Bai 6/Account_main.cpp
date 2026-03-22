#include "Account.h"
#include <iostream>
using namespace std;

int main(void) {
    Account act1;
    Account act2(100, 100);
    Account act3;

    cout << "act1 == act2 " << (act1 == act2) << endl;
    act3 = act2 + act1;
    cout << "act3 == act2 " << (act3 == act2) << endl;
    act3 = act3 - act2;
    cout << "act3 == act2 " << (act3 == act2) << endl;
    cout << act2.calcBalance() << endl;
    cout << (act2 > act1) << endl;
    cout << (act2 < act1) << endl;

    cin.get();
    return 0;
}
