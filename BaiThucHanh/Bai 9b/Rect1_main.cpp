#include "Rect1.h"
#include <iostream>
using namespace std;

int main(void) {
    double width;
    double length;
    Rect1 myRect;

    while(1) {
        cout << "Enter the rectangles width and length: ";
        cin >> width >> length;

        try {
            myRect.setWidth(width);
            myRect.setLength(length);
            cout << "The area of the rectangle is: " << myRect.calcArea() << endl;
        }
        catch(Rect1::NegativeDimension &) {
            cout << "ERROR - negative value for width or length" << endl;
        }
    }
    return 0;
}
