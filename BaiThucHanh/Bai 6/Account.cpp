#include "Account.h"

Account::Account(void) {
    savings = 0;
    checking = 0;
}

Account::Account(double s, double c) {
    savings = s;
    checking = c;
}

void Account::setSavings(double s) {
    savings = s;
}

void Account::setChecking(double c) {
    checking = c;
}

double Account::getSavings(void) {
    return savings;
}

double Account::getChecking(void) {
    return checking;
}

double Account::calcBalance(void) const {
    return savings + checking;
}

Account Account::operator+(const Account & rhs) {
    Account tmpacct;
    tmpacct.savings = savings + rhs.savings;
    tmpacct.checking = checking + rhs.checking;
    return tmpacct;
}

Account Account::operator-(const Account & rhs) {
    Account tmpacct;
    tmpacct.savings = savings - rhs.savings;
    tmpacct.checking = checking - rhs.checking;
    return tmpacct;
}

bool Account::operator==(const Account & rhs) {
    if((savings == rhs.savings) && (checking == rhs.checking))
        return true;
    else
        return false;
}

bool Account::operator>(const Account & rhs) {
    if(this->calcBalance() > rhs.calcBalance())
        return true;
    else
        return false;
}

bool Account::operator<(const Account & rhs) {
    if(this->calcBalance() < rhs.calcBalance())
        return true;
    else
        return false;
}
