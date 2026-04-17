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
