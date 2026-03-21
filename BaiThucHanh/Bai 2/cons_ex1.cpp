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
