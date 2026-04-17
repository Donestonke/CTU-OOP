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
