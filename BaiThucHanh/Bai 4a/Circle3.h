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
