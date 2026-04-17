#include <iostream>
#include "Circle4.h"
using namespace std;

int Circle4::circle_cnt4 = 0;

int main(void) {
    Circle4 obj1;
    cout << "Current num circles: " << obj1.circle_cnt4 << endl;
    cout << "Current num circles using static fn: " << Circle4::getCnt() << endl;

    Circle4 obj2;
    cout << "Current num circles: " << obj2.circle_cnt4 << endl;

    Circle4 obj3;
    cout << "Current num circles: " << obj3.circle_cnt4 << endl;
    cout << "Current num circles using static fn: " << Circle4::getCnt() << endl;

    cin.get();
    return 0;
}
