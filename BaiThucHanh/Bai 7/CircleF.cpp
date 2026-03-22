#include "CircleF.h"
#define PI 3.14159

CircleF::CircleF() {
    setRadius(1);
    return;
}

CircleF::CircleF(double r) {
    setRadius(r);
    return;
}

void CircleF::setRadius(double r) {
    radius = r;
    return;
}

double CircleF::getRadius(void) {
    return radius;
}

double CircleF::calcArea(void) {
    return PI * getRadius() * getRadius();
}

double CircleF::calcCirc(void) {
    return 2 * PI * getRadius();
}
