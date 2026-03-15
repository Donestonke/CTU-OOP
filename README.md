# Thực Hành 2a

cons.h:

'''C
    #ifndef CONS_H_
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
    #endif /* CONS_H_ */
'''
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

# Thực hành 2b

Cons2.h: 

    #ifndef CONS2_H_
    #define CONS2_H_
    // cons2 class declaration
    class Cons2{
    // member data
    private:
        double var1;

    // member functions
    public:
        Cons2(double v1);      // constructor
        Cons2(void);           // default constructor
        void setVar1(double v1);
        double getVar1(void);
    };
    #endif /* CONS2_H_ */

Cons2.cpp:

    // Implementation of Cons2 class
    #include "Cons2.h"
    #include <iostream>
    #include <cstdlib>
    using namespace std;

    // Constructor
    Cons2::Cons2(double v1){
    var1 = v1;
    cout << "Created object of type Cons with value " << var1 << "\n";
    }

    // Default Constructor
    Cons2::Cons2(void){
    var1 = 0.0;
    cout << "Created object of type Cons\n";
    }

    // setVar1 - sets the var1 variable
    void Cons2::setVar1(double v1){
    var1 = v1;
    }

    // getVar1 - gets the var1 member variable
    double Cons2::getVar1(){
    return var1;
    }

Cons2_ex2.cpp:

    #include <iostream>
    #include "Cons2.h"
    using namespace std;

    int main(void){
    double foo;
    // Create a few objects
    Cons2 obj1(39);
    foo = obj1.getVar1();
    cout << foo << endl;
    cout << "-------------------\n";
    Cons2 obj2;
    cout << obj2.getVar1() << endl;
    obj2.setVar1(5);
    cout << obj2.getVar1() << endl;
    cout << "-------------------\n";
    system("pause");
    return 0;
    }
