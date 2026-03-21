https://github.com/Donestonke/CTU-OOP/tree/main/BaiThucHanh/Bai1
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
SW_ex.cpp (cai tien - 1)
```C++
#include <iostream>
#include <iomanip>
#include <unistd.h>
#include "StopWatch.h"
using namespace std;

void printTime(SWTime t) {
    cout << "\r  "
         << setfill('0') << setw(2) << t.getHours()   << ":"
         << setfill('0') << setw(2) << t.getMinutes()  << ":"
         << setfill('0') << setw(2) << t.getSeconds()  << "."
         << setfill('0') << setw(2) << t.getHundreths()
         << "  " << flush;
}

void runStopwatch() {
    StopWatch sw;
    SWTime t;
    int lapCount = 0;
    char input;

    cout << "\n  === STOPWATCH ===" << endl;
    cout << "  [ENTER] Start/Stop  |  [L] Lap  |  [R] Reset  |  [Q] Quit" << endl;
    cout << endl;

    cin.get();
    sw.start();
    cout << "  Started!" << endl;

    while(true) {
        sw.tick();
        t = sw.getTime();
        printTime(t);
        usleep(10000);

        if(cin.peek() != EOF) {
            input = cin.get();
            if(input == '\n') {
                static bool running = true;
                running = !running;
                if(running) sw.start();
                else        sw.stop();
            } else if(input == 'l' || input == 'L') {
                lapCount++;
                SWTime lap = sw.getLap();
                cout << "\n  Lap " << lapCount << ": "
                     << setfill('0') << setw(2) << lap.getHours()    << ":"
                     << setfill('0') << setw(2) << lap.getMinutes()   << ":"
                     << setfill('0') << setw(2) << lap.getSeconds()   << "."
                     << setfill('0') << setw(2) << lap.getHundreths() << endl;
            } else if(input == 'r' || input == 'R') {
                sw = StopWatch();
                sw.start();
                lapCount = 0;
                cout << "\n  Reset!" << endl;
            } else if(input == 'q' || input == 'Q') {
                break;
            }
        }
    }
    cout << "\n  Stopped." << endl;
}

void runCountdown() {
    StopWatch sw;
    SWTime t;
    int totalHundreths;
    int h, m, s;

    cout << "\n  === COUNTDOWN TIMER ===" << endl;
    cout << "  Nhap gio (0-11): ";  cin >> h;
    cout << "  Nhap phut (0-59): "; cin >> m;
    cout << "  Nhap giay (0-59): "; cin >> s;
    cin.ignore();

    totalHundreths = h * 360000 + m * 6000 + s * 100;

    if(totalHundreths <= 0) {
        cout << "  Thoi gian khong hop le!" << endl;
        return;
    }

    cout << "\n  [ENTER] de bat dau..." << endl;
    cin.get();

    sw.start();
    int elapsed = 0;

    while(elapsed < totalHundreths) {
        sw.tick();
        elapsed++;

        int remaining = totalHundreths - elapsed;
        int rh  =  remaining / 360000;
        int rm  = (remaining % 360000) / 6000;
        int rs  = (remaining % 6000)   / 100;
        int rhu =  remaining % 100;

        cout << "\r  "
             << setfill('0') << setw(2) << rh  << ":"
             << setfill('0') << setw(2) << rm  << ":"
             << setfill('0') << setw(2) << rs  << "."
             << setfill('0') << setw(2) << rhu
             << "  " << flush;

        usleep(10000);
    }

    cout << "\n  HET GIO!" << endl;
}

int main(void) {
    int choice;

    cout << "\n  ========================" << endl;
    cout << "     DONG HO BAM GIO     " << endl;
    cout << "  ========================" << endl;
    cout << "  1. Stopwatch" << endl;
    cout << "  2. Dem nguoc (Countdown)" << endl;
    cout << "  Lua chon: ";
    cin >> choice;
    cin.ignore();

    if(choice == 1)      runStopwatch();
    else if(choice == 2) runCountdown();
    else cout << "  Lua chon khong hop le!" << endl;

    cout << "\n  Nhan ENTER de thoat...";
    cin.get();
    return 0;
}
```
SW_ex.cpp (cai tien 2)
```C++
#include <iostream>
#include <iomanip>
#include <ctime>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include "StopWatch.h"
using namespace std;

struct termios orig_termios;

void setRawMode() {
    struct termios raw;
    tcgetattr(STDIN_FILENO, &orig_termios);
    raw = orig_termios;
    raw.c_lflag &= ~(ICANON | ECHO);
    raw.c_cc[VMIN] = 0;
    raw.c_cc[VTIME] = 0;
    tcsetattr(STDIN_FILENO, TCSANOW, &raw);
}

void restoreMode() {
    tcsetattr(STDIN_FILENO, TCSANOW, &orig_termios);
}

int kbhit() {
    char ch;
    return read(STDIN_FILENO, &ch, 1) == 1 ? ch : 0;
}

void printTime(SWTime t) {
    cout << "\r  "
         << setfill('0') << setw(2) << t.getHours()    << ":"
         << setfill('0') << setw(2) << t.getMinutes()   << ":"
         << setfill('0') << setw(2) << t.getSeconds()   << "."
         << setfill('0') << setw(2) << t.getHundreths()
         << "  " << flush;
}

void runStopwatch() {
    StopWatch sw;
    SWTime t;
    int lapCount = 0;
    bool running = false;
    char input;
    clock_t lastTick = clock();

    cout << "\n  === STOPWATCH ===" << endl;
    cout << "  [ENTER] Start/Stop  |  [L] Lap  |  [R] Reset  |  [Q] Quit\n" << endl;

    setRawMode();

    while(true) {
        clock_t now = clock();
        if((double)(now - lastTick) / CLOCKS_PER_SEC >= 0.01) {
            if(running) {
                sw.tick();
                t = sw.getTime();
                printTime(t);
            }
            lastTick = now;
        }

        input = kbhit();
        if(input) {
            if(input == '\n' || input == ' ') {
                running = !running;
                if(running) sw.start();
                else        sw.stop();
            } else if(input == 'l' || input == 'L') {
                lapCount++;
                SWTime lap = sw.getLap();
                cout << "\n  Lap " << lapCount << ": "
                     << setfill('0') << setw(2) << lap.getHours()    << ":"
                     << setfill('0') << setw(2) << lap.getMinutes()   << ":"
                     << setfill('0') << setw(2) << lap.getSeconds()   << "."
                     << setfill('0') << setw(2) << lap.getHundreths() << endl;
            } else if(input == 'r' || input == 'R') {
                sw = StopWatch();
                running = false;
                lapCount = 0;
                cout << "\n  Reset!" << endl;
            } else if(input == 'q' || input == 'Q') {
                break;
            }
        }
    }

    restoreMode();
    cout << "\n  Stopped." << endl;
}

void runCountdown() {
    StopWatch sw;
    int h, m, s;
    int totalHundreths, elapsed = 0;
    char input;
    clock_t lastTick = clock();

    restoreMode();
    cout << "\n  === COUNTDOWN TIMER ===" << endl;
    cout << "  Nhap gio (0-11): ";  cin >> h;
    cout << "  Nhap phut (0-59): "; cin >> m;
    cout << "  Nhap giay (0-59): "; cin >> s;
    cin.ignore();

    totalHundreths = h * 360000 + m * 6000 + s * 100;
    if(totalHundreths <= 0) {
        cout << "  Thoi gian khong hop le!" << endl;
        return;
    }

    cout << "\n  [ENTER] de bat dau  |  [Q] Quit\n" << endl;
    cin.get();

    setRawMode();
    sw.start();

    while(elapsed < totalHundreths) {
        clock_t now = clock();
        if((double)(now - lastTick) / CLOCKS_PER_SEC >= 0.01) {
            sw.tick();
            elapsed++;
            lastTick = now;

            int remaining = totalHundreths - elapsed;
            int rh  =  remaining / 360000;
            int rm  = (remaining % 360000) / 6000;
            int rs  = (remaining % 6000)   / 100;
            int rhu =  remaining % 100;

            cout << "\r  "
                 << setfill('0') << setw(2) << rh  << ":"
                 << setfill('0') << setw(2) << rm  << ":"
                 << setfill('0') << setw(2) << rs  << "."
                 << setfill('0') << setw(2) << rhu
                 << "  " << flush;
        }

        input = kbhit();
        if(input == 'q' || input == 'Q') break;
    }

    restoreMode();
    if(elapsed >= totalHundreths)
        cout << "\n  HET GIO!" << endl;
    else
        cout << "\n  Dung lai." << endl;
}

int main(void) {
    int choice;

    cout << "\n  ========================" << endl;
    cout << "     DONG HO BAM GIO     " << endl;
    cout << "  ========================" << endl;
    cout << "  1. Stopwatch" << endl;
    cout << "  2. Dem nguoc (Countdown)" << endl;
    cout << "  Lua chon: ";
    cin >> choice;
    cin.ignore();

    if(choice == 1)      runStopwatch();
    else if(choice == 2) runCountdown();
    else cout << "  Lua chon khong hop le!" << endl;

    restoreMode();
    cout << "\n  Nhan ENTER de thoat...";
    cin.get();
    return 0;
}
```
