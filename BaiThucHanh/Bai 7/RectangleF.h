#ifndef RECTANGLEF_H_
#define RECTANGLEF_H_

class CircleF;

class RectangleF {
// member data
private:
    double width;
    double length;
// member functions
public:
    RectangleF(void);
    RectangleF(double w, double l);
    void setWidth(double w);
    void setLength(double l);
    void setRectangleF(double w, double l);
    double getWidth(void);
    double getLength(void);
    double getArea(void);
    void setRadiusF(CircleF &);
};

#endif /* RECTANGLEF_H_ */
