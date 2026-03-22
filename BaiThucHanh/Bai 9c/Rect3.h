#ifndef RECT3_H_
#define RECT3_H_

class Rect3 {
private:
    double width;
    double length;
public:
    class NegativeWidth {
    private:
        double value;
    public:
        NegativeWidth(double val) {
            value = val;
        }
        double getValue() {
            return value;
        }
    };
    class NegativeLength {
    private:
        double value;
    public:
        NegativeLength(double val) {
            value = val;
        }
        double getValue() {
            return value;
        }
    };
    Rect3();
    void setWidth(double w);
    void setLength(double l);
    double getWidth(void);
    double getLength(void);
    double calcArea(void);
};

#endif /* RECT3_H_ */
