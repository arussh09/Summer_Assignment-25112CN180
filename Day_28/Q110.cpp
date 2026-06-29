#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNo;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Amount Deposited Successfully.\n";
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful.\n";
        } else {
            cout << "Insufficient Balance!\n";
        }
    }

    void display() {
        cout << "\n----- Account Details -----\n";
        cout << "Account Number : " << accNo << endl;
        cout << "Name           : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main() {
    BankAccount acc;

    acc.createAccount();
    acc.deposit();
    acc.withdraw();
    acc.display();

    return 0;
}