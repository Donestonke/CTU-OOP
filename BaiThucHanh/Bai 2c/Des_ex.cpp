#include <iostream>
#include "Des.h"
using namespace std;

int main(void){
    double foo;

    // Create a few objects
    Des obj1;
    foo = obj1.getVar1();
    cout << foo << endl;
    cout << "-------------------\n";
    for(int i=0; i<1; i++){
        Des obj2;
        cout << obj2.getVar1() << endl;
    }
    cout << "\nnot to the end yet" << endl;
    cout << "-------------------\n";
    system("pause");
    return 0;
}
