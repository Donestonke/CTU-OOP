#include "Rect1.h"

Rect1::Rect1() {
    setWidth(0.0);
    setLength(0.0);
}

void Rect1::setWidth(double w) {
    if(w >= 0)
        width = w;
    else
        throw NegativeDimension();
    return;
}

void Rect1::setLength(double l) {
    if(l >= 0)
        length = l;
    else
        throw NegativeDimension();
    return;
}

double Rect1::getWidth(void) {
    return width;
}

double Rect1::getLength(void) {
    return length;
}

double Rect1::calcArea(void) {
    return (width * length);
}
