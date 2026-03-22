#include "RectangleF.h"
#include "CircleF.h"
#include <iostream>
#include <cstdlib>
using namespace std;

RectangleF::RectangleF() {
    setRectangleF(1, 1);
}

RectangleF::RectangleF(double w, double l) {
    setRectangleF(w, l);
}

void RectangleF::setWidth(double w) {
    width = w;
    return;
}

void RectangleF::setLength(double l) {
    length = l;
    return;
}

void RectangleF::setRectangleF(double w, double l) {
    setWidth(w);
    setLength(l);
    return;
}

double RectangleF::getWidth() {
    return width;
}

double RectangleF::getLength() {
    return length;
}

double RectangleF::getArea() {
    return getWidth() * getLength();
}

void RectangleF::setRadiusF(CircleF & cir) {
    if(getWidth() > getLength())
        cir.radius = (getLength() / 2);
    else
        cir.radius = (getWidth() / 2);
    return;
}
