#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {
private:
    double savings;
    double checking;
public:
    Account(void);
    Account(double s, double c);
    void setSavings(double s);
    void setChecking(double c);
    double getSavings(void);
    double getChecking(void);
    double calcBalance(void) const;
    Account operator+(const Account & rhs);
    Account operator-(const Account & rhs);
    bool operator==(const Account & rhs);
    bool operator<(const Account & rhs);
    bool operator>(const Account & rhs);
};

#endif /* ACCOUNT_H_ */
