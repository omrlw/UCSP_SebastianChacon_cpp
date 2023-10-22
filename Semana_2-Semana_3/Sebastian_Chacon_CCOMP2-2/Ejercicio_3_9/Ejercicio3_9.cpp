#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account myAccount("John Doe", 1000);

    cout << "Initial Balance: " << myAccount.getBalance() << endl;

    myAccount.deposit(500);
    cout << "Balance after deposit: " << myAccount.getBalance() << endl;

    myAccount.withdraw(200);
    cout << "Balance after withdrawal: " << myAccount.getBalance() << endl;

    myAccount.withdraw(1500); // This will exceed the balance
    cout << "Balance after withdrawal: " << myAccount.getBalance() << endl;

    return 0;
}

