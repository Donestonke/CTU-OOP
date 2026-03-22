#include "RectangleF.h"
#include "CircleF.h"
#include <iostream>
using namespace std;

int main(void) {
    CircleF cir1(5);
    cout << cir1.getRadius() << endl;

    RectangleF rect1(8, 12);
    rect1.setRadiusF(cir1);
    cout << cir1.getRadius() << endl;

    rect1.setRectangleF(15, 5);
    rect1.setRadiusF(cir1);
    cout << cir1.getRadius() << endl;

    cin.get();
    return 0;
}
