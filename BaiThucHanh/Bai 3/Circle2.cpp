#include <iostream>
#include "Circle2.h"
using namespace std;

#define PI 3.14159

Circle2::Circle2() {
    r = 1;
    return;
}

Circle2::Circle2(double r){
    this->r = r;
    return;
}

void Circle2::setRadius(double r){
    this->r = r;
    return;
}

void Circle2::printPointer(void){
    cout << "This objects -this- pointer value is " << this << endl;
    cout << "this objects member variable r is " << this->r << endl;
}
