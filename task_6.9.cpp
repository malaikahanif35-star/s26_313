#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    int pin;

public:
    BankAccount(string acc, double bal, int p) {
        accountNumber = acc;
        balance = bal;
        pin = p;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount, int enteredPin) {
        if (enteredPin != pin) {
            cout << "Wrong pin" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount acc("PK1234", 1000.0, 1234);

    acc.deposit(500.0);
    cout << acc.getBalance() << endl;

    acc.withdraw(200.0, 1234);
    cout << acc.getBalance() << endl;

    acc.withdraw(200.0, 0000);
    cout << acc.getBalance() << endl;

    acc.withdraw(5000.0, 1234);
    cout << acc.getBalance() << endl;

    return 0;
}