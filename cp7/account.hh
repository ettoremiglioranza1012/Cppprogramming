#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

constexpr int Account::period;

class Account {
public:
    // Static member functions can access static data members
    static double rate() { return interestRate; }
    static void rate(double newRate) { interestRate = newRate; }

private:
    std::string owner;
    double amount;

    // 1. Static data member shared by all instances
    static double interestRate;
    
    // 2. Static constexpr for integral types can be initialized here
    static constexpr int period = 30;

    // 3. We can use that constexpr to define array sizes
    double daily_tbl[period];

    // Helper to initialize the static rate
    static double initRate() { return 0.0045; }
};

double Account::interestRate = Account::initRate();

#endif