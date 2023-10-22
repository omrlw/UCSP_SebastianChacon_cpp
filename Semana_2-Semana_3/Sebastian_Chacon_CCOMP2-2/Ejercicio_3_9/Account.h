//
// Created by omr_t on 13/09/2023.
//


#include <string>
using namespace std;

class Account {
public:
    Account(string accountName, int initialBalance)
            : name{accountName} {
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }

    void withdraw(int withdrawalAmount) {
        if (withdrawalAmount > 0) {
            if (withdrawalAmount <= balance) {
                balance -= withdrawalAmount;
            } else {
                cout << "The withdrawal amount exceeded the account balance." << endl;
            }
        }
    }

    int getBalance() const {
        return balance;
    }

    void setName(string accountName) {
        name = accountName;
    }

    string getName() const {
        return name;
    }

private:
    string name;
    int balance{0};
};
