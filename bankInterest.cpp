#include <iostream>
using namespace std;

class BankAccount {
public:
    virtual float interest(float amount) { return 0; }
};

class SavingsAccount : public BankAccount {
public:
    float interest(float amount) {
        return amount * 0.04;
    }
};

class FixedDeposit : public BankAccount {
public:
    float interest(float amount) {
        return amount * 0.08;
    }
};

class RecurringDeposit : public BankAccount {
public:
    float interest(float amount) {
        return amount * 0.06;
    }
};

int main() {
    BankAccount *acc;

    acc = new SavingsAccount();
    cout << "Savings Interest: " << acc->interest(10000) << endl;
    delete acc;

    acc = new FixedDeposit();
    cout << "Fixed Deposit Interest: " << acc->interest(10000) << endl;
    delete acc;

    acc = new RecurringDeposit();
    cout << "Recurring Deposit Interest: " << acc->interest(10000) << endl;
    delete acc;

    return 0;
}

