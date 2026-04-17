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
