#include <iostream>
using namespace std;
#include "Right_Triangle.h"
#include "Isosceles_Triangle.h"

int main(void) {
    Triangle T1(1, 2, 3);
    RightTriangle T2(4, 5, 6);
    IsoscelesTriangle T3(7, 8, 9);

    T1.print_triangle();
    T2.print_triangle();
    T3.print_triangle();

    Triangle * array[3];
    array[0] = &T1;
    array[1] = &T2;
    array[2] = &T3;

    array[0]->print_triangle();
    array[1]->print_triangle();
    array[2]->print_triangle();

    cin.get();
    return 0;
}
