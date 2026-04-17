#include "Circle3.h"
#define PI 3.14159

Circle3::Circle3() {
    r = 1;
    circle_cnt++; 
    return;
}

void Circle3::setRadius(double r) {
    this->r = r;
    return;
}

double Circle3::getRadius(void) {
    return r;
}
