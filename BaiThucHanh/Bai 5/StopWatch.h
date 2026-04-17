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
