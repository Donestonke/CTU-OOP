    // Implementation of Cons class
    #include "cons.h"
    #include <iostream>
    #include <cstdlib>
    using namespace std;

    // Default Constructor
    Cons::Cons(void){
    var1 = 0.0;
    cout << "Created object of type Cons\n";
    }

    // setVar1 - sets the var1 variable
    void Cons::setVar1(double v1){
    var1 = v1;
    }

    // getVar1 - gets the var1 member variable
    double Cons::getVar1(){
    return var1;
    }
