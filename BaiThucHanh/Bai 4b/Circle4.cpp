#include "Circle4.h"
#define PI 3.14159

Circle4::Circle4() {
    r = 1;
    circle_cnt4++;
    return;
}

void Circle4::setRadius(double r) {
    this->r = r;
    return;
}

double Circle4::getRadius(void) {
    return r;
}

int Circle4::getCnt(void) {
    return circle_cnt4;
}
