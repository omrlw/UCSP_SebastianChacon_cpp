#include <iostream>
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

void displayAccount(Account accountToDisplay) {
    cout << "Account Name: " << accountToDisplay.getName() << endl;
    cout << "Balance: $" << accountToDisplay.getBalance() << endl;
}

int main() {
    // Crear dos objetos de Account
    Account account1("John Doe", 1000);
    Account account2("Jane Smith", 2000);

    // Mostrar la información de las cuentas usando la función displayAccount
    displayAccount(account1);
    displayAccount(account2);

    return 0;
}
