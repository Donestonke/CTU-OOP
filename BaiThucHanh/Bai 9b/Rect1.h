#ifndef RECT1_H_
#define RECT1_H_

class Rect1 {
private:
    double width;
    double length;
public:
    class NegativeDimension {
    };
    Rect1();
    void setWidth(double w);
    void setLength(double l);
    double getWidth(void);
    double getLength(void);
    double calcArea(void);
};

#endif /* RECT1_H_ */
