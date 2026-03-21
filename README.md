# Thực hành 1
HCN_main.cpp:
```C++
#include "HCN.h"
#include <iostream>
using namespace std;
int main(){
       Rectangle rect1;
       double dai, rong;
       cout<<"nhap gia tri cho hinh chu nhat";
       cout<<"Chieu Dai";
       cin>>dai;
       rect1.Datcd(dai);
       cout<<"Chieu Rong";
       cin>>rong;
       rect1.Datcr(rong);
       cout<<"Chieu Dai"<<rect1.GetDai()<<endl;
       cout<<"Chieu Rong"<<rect1.GetRong()<<endl;
       cout<<"Dien Tich"<<rect1.GetDienTich()<<endl;
       cout<<"Chu Vi"<<rect1.GetChuVi()<<endl;
       return 0;
   }
```
HCN.cpp:
```C++
#include "HCN.h"
#include <iostream>
#include <cstdlib>
using namespace std;
void Rectangle::Datcd (double Dai){
    if(Dai>0){
        ChieuDai=Dai;
}else{
    cout<<"gia tri khong hop le";
    exit(EXIT_FAILURE);
}
}
void Rectangle::Datcr (double Rong){
    if(Rong>0){
        ChieuRong=Rong;
}else{
    cout<<"gia tri khong hop le";
    exit(EXIT_FAILURE);
}
}
double Rectangle::GetDai(){
    return ChieuDai;
}
double Rectangle::GetRong(){
    return ChieuRong;
}
double Rectangle::GetDienTich(){
    return ChieuDai*ChieuRong;
}
double Rectangle::GetChuVi(){
    return 2*(ChieuDai+ChieuRong);
}
```
HCN.h:
```C
#ifndef HCN_H_
#define HCN_H_
class Rectangle{
private :
        double ChieuDai;
        double ChieuRong;

public:
        void Datcd(double Dai);
        void Datcr(double Rong);
        double GetDai(void);
        double GetRong(void);
        double GetChuVi(void);
        double GetDienTich(void);

};
#endif
```
# Thực Hành 2a

cons.h:

```C
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
```
cons.cpp:
```C++
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
```
cons.ex1.cpp:
```C++
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
```
# Thực hành 2b

Cons2.h: 
```C
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
```
Cons2.cpp:
```C++
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
```
Cons2_ex2.cpp:
```C++
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
```

# Thực hành bài 2c

Des.h:
```C
#ifndef DES_H_
#define DES_H_
// Des class declaration
class Des{
    // member data
    private:
        double var1;
    // member functions
    public:
        Des(void);// constructor
        ~Des(void);// destructor
        void setVar1(double v1);
        double getVar1(void);
};

#endif /* DES_H_ */
```
Des.cpp:
```C++
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
```
Des_Ex.cpp: 
```C++
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
```
# Thực hành 3
Circle2.h:
```C
class Circle2 {
    // member data
    private:
        double r;
    // member functions
    public:
        Circle2();
        Circle2(double r);
        void setRadius(double r);
        double getRadius(void);
        double calcArea(void);
        double calcCirc(void);
        void printPointer(void);
}; // end Circle2 class
```
Circle2.cpp:
```C++
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
```
This_ex1.cpp
```C++
#include <iostream>
#include "Circle2.h"
using namespace std;

int main(void){
    // Create an object
    Circle2 obj1;

    obj1.setRadius(5);
    obj1.printPointer();

    system("pause");
    return 0;
}
```
# Thực hành 4a
Circle3.h: 
```C
#ifndef CIRCLE3_H_
#define CIRCLE3_H_

class Circle3 {
// member data
private:
    double r;
public:
    static int circle_cnt;
// member functions
public:
    Circle3();
    void setRadius(double r);
    double getRadius(void);
}; // end Circle3 class

#endif /* CIRCLE3_H_ */
```
Circle3.cpp
```C++
#include "Circle3.h"
#define PI 3.14159

Circle3::Circle3() {
    r = 1;
    circle_cnt++; 
    return;
}

void Circle3::setRadius(double r) {
    this->r = r;
    return;
}

double Circle3::getRadius(void) {
    return r;
}
```
Static_ex.cpp
```C++
#include <iostream>
#include "Circle3.h"
using namespace std;

int Circle3::circle_cnt = 0;

int main(void) {
    Circle3 obj1;
    cout << "Current num circles: " << obj1.circle_cnt << endl;

    Circle3 obj2;
    cout << "Current num circles: " << obj2.circle_cnt << endl;

    Circle3 obj3;
    cout << "Current num circles: " << obj3.circle_cnt << endl;

    // 3 object khác nhau nhưng cùng trỏ vào 1 biến circle_cnt!
    cout << "Current num circles: " << obj2.circle_cnt << endl;
    cout << "Current num circles: " << obj1.circle_cnt << endl; 

    cin.get(); // thay system("pause") cho Ubuntu
    return 0;
}
```
# Thực hành 4b
Circle4.h
```C
#ifndef CIRCLE4_H_
#define CIRCLE4_H_

class Circle4 {
// member data
private:
    double r;
public:
    static int circle_cnt4;
// member functions
public:
    Circle4();
    void setRadius(double r);
    double getRadius(void);
    static int getCnt(void);
}; // end Circle4 class

#endif /* CIRCLE4_H_ */
```
Circle4.cpp
```C++
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
```
Circle4_ex.cpp: 
```C++
#include <iostream>
#include "Circle4.h"
using namespace std;

int Circle4::circle_cnt4 = 0;

int main(void) {
    Circle4 obj1;
    cout << "Current num circles: " << obj1.circle_cnt4 << endl;
    cout << "Current num circles using static fn: " << Circle4::getCnt() << endl;

    Circle4 obj2;
    cout << "Current num circles: " << obj2.circle_cnt4 << endl;

    Circle4 obj3;
    cout << "Current num circles: " << obj3.circle_cnt4 << endl;
    cout << "Current num circles using static fn: " << Circle4::getCnt() << endl;

    cin.get();
    return 0;
}
```
# Thực Hành 5
SWtime.h:
```C
#ifndef SWTIME_H_
#define SWTIME_H_

class SWTime {
// member data
private:
    int hundreths;
    int seconds;
    int minutes;
    int hours;
// member functions
public:
    SWTime();
    void clearTime(void);
    void incTime(int h, int m, int s, int hu);
    int getHours();
    int getMinutes();
    int getSeconds();
    int getHundreths();
}; // end SWTime class

#endif /* SWTIME_H_ */
```
SWtime.cpp:
```C++
#include "SWTime.h"

SWTime::SWTime(void) {
    clearTime();
}

void SWTime::clearTime(void) {
    hours = 0;
    minutes = 0;
    seconds = 0;
    hundreths = 0;
    return;
}

void SWTime::incTime(int h, int m, int s, int hu) {
    hundreths += hu;
    if(hundreths > 99) {
        seconds += hundreths / 100;
        hundreths %= 100;
    }
    seconds += s;
    if(seconds > 59) {
        minutes += seconds / 60;
        seconds %= 60;
    }
    minutes += m;
    if(minutes > 59) {
        hours += minutes / 60;
        minutes %= 60;
    }
    hours += h;
    if(hours > 11) {
        hours = 0;
    }
    return;
}

int SWTime::getHours(void) {
    return hours;
}

int SWTime::getMinutes(void) {
    return minutes;
}

int SWTime::getSeconds(void) {
    return seconds;
}

int SWTime::getHundreths(void) {
    return hundreths;
}
```
StopWatch.h:
```C
#ifndef STOPWATCH_H_
#define STOPWATCH_H_
#include "SWTime.h"

class StopWatch {
// member data
private:
    SWTime clock;
    SWTime split;
    bool running;
// member functions
public:
    StopWatch();
    void start(void);
    void stop(void);
    void tick(void);
    SWTime getTime(void);
    SWTime getLap(void);
}; // end StopWatch class

#endif /* STOPWATCH_H_ */
```
StopWatch.cpp:
```C++
#include "StopWatch.h"

StopWatch::StopWatch(void) {
    running = false;
    clock.clearTime();
    split.clearTime();
    return;
}

void StopWatch::start(void) {
    running = true;
    return;
}

void StopWatch::stop(void) {
    running = false;
    return;
}

void StopWatch::tick(void) {
    if(running) {
        clock.incTime(0, 0, 0, 1);
        split.incTime(0, 0, 0, 1);
    }
    return;
}

SWTime StopWatch::getTime(void) {
    return clock;
}

SWTime StopWatch::getLap(void) {
    SWTime tmp;
    tmp = split;
    split.clearTime();
    return tmp;
}
```
SW_ex.cpp
```C++
#include <iostream>
#include "StopWatch.h"
using namespace std;

int main(void) {
    StopWatch sw;
    SWTime t;

    sw.start();
    for(int i = 0; i < 100; i++)
        sw.tick();

    t = sw.getTime();
    cout << "Time: "
         << t.getHours() << ":"
         << t.getMinutes() << ":"
         << t.getSeconds() << "."
         << t.getHundreths() << endl;

    t = sw.getLap();
    cout << "Lap: "
         << t.getHours() << ":"
         << t.getMinutes() << ":"
         << t.getSeconds() << "."
         << t.getHundreths() << endl;

    sw.stop();
    cin.get();
    return 0;
}
```
