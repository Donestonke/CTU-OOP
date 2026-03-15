cons.h:
[#ifndef CONS_H_
#define CONS_H_

// Cons class declaration
class Cons{
    // member data
    private:
        double var1;

    // member functions
    public:
        Cons(void);
        void setVar1(double v1);
        double getVar1(void);
};

#endif /* CONS_H_ */]

cons.cpp:
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

cons.ex1.cpp:
#include <iostream>
#include "cons.h"
using namespace std;

int main(void){
    double foo;

    // Create a few object
  Cons obj1;
  foo = obj1.getVar1();
  cout << foo << endl;
  cout << "-------------------\n";
  Cons obj2;
  cout << obj2.getVar1() << endl;
  obj2.setVar1(5);
  cout << obj2.getVar1() << endl;
  cout << "-------------------\n";
  system("pause");
  return 0;
}
