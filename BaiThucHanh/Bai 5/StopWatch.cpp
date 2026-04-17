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
