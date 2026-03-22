#ifndef CIRCLEF_H_
#define CIRCLEF_H_

#include "RectangleF.h"

class CircleF {
// member data
private:
    double radius;
// member functions
public:
    CircleF();
    CircleF(double r);
    void setRadius(double r);
    double getRadius(void);
    double calcArea(void);
    double calcCirc(void);
    friend void RectangleF::setRadiusF(CircleF & cir);
}; // end CircleF class

#endif /* CIRCLEF_H_ */
