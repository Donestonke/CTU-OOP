#include "myVect.h"
#include <iostream>
using namespace std;

int main(void) {
    myVect<int> int_vect(5);
    myVect<double> double_vect(5);
    myVect<char> char_vect(5);

    for(int i=0; i<5; i++) {
        int_vect[i] = 2*i;
        double_vect[i] = 2.1*i;
    }

    char_vect[0] = 's';
    char_vect[2] = 't';
    char_vect[4] = 'u';

    for(int i=0; i<5; i++)
        cout << i << " : " << int_vect[i] << " : "
             << double_vect[i] << " : " << char_vect[i] << endl;

    cin.get();
    return 0;
}
