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
