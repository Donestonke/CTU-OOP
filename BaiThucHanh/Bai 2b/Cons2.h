    #ifndef CONS2_H_
    #define CONS2_H_
    // cons2 class declaration
    class Cons2{
    // member data
    private:
        double var1;

    // member functions
    public:
        Cons2(double v1);      // constructor
        Cons2(void);           // default constructor
        void setVar1(double v1);
        double getVar1(void);
    };
    #endif /* CONS2_H_ */
