#include <iostream>
#include <string>
#include "Account.h"



int main() {
    // Create two Account objects using the constructor
    Account account1("Omar Doe", 1000);
    Account account2("Jane Smith", 500);

    // Display the initial balances
    std::cout << "Initial balances:" << std::endl;
    std::cout << account1.getName() << ": $" << account1.getBalance() << std::endl;
    std::cout << account2.getName() << ": $" << account2.getBalance() << std::endl;

    // Perform some transactions
    account1.deposit(500);
    account2.withdraw(200);

    // Display updated balances
    std::cout << "\nUpdated balances after transactions:" << std::endl;
    std::cout << account1.getName() << ": $" << account1.getBalance() << std::endl;
    std::cout << account2.getName() << ": $" << account2.getBalance() << std::endl;

    return 0;
}
