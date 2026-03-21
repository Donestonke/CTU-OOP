// Implementation of Des class
#include "Des.h"
#include <iostream>
#include <cstdlib>
using namespace std;
// Default Constructor
Des::Des(void){
    var1 = 0.0;
    cout << "Created object of type Des\n";
}
// Default Destructor
Des::~Des(void){
    // nothing to do here
    cout << "Object of type Des destroyed\n";
}
// setVar1 - sets the var1 variable
void Des::setVar1(double v1){
    var1 = v1;
}
// getVar1 - gets the var1 member variable
double Des::getVar1(){
    return var1;
}
