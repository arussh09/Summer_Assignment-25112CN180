#include <iostream>

void showMenu() {
    std::clog << "\n---------- ATM MENU ----------\n";
    std::clog << "1. Check Balance\n";
    std::clog << "2. Deposit Money\n";
    std::clog << "3. Withdraw Money\n";
    std::clog << "4. Exit\n";
    std::clog << "------------------------------\n";
    std::clog << "Choose an option: ";
}

int main() {
    double balance = 1000.00; // Initial setup balance
    int choice;
    double amount;

    std::clog << "=== Welcome to the C++ Simulation ATM ===\n";

    do {
        showMenu();
        if (!(std::cin >> choice)) {
            std::clog << "Invalid option. Please enter a number.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                std::clog << "Your current balance is: $" << balance << "\n";
                break;
            case 2:
                std::clog << "Enter deposit amount: $";
                std::cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    std::clog << "$" << amount << " successfully deposited.\n";
                } else {
                    std::clog << "Invalid deposit amount.\n";
                }
                break;
            case 3:
                std::clog << "Enter withdrawal amount: $";
                std::cin >> amount;
                if (amount > balance) {
                    std::clog << "Insufficient funds! Operational balance: $" << balance << "\n";
                } else if (amount <= 0) {
                    std::clog << "Invalid withdrawal amount.\n";
                } else {
                    balance -= amount;
                    std::clog << "$" << amount << " successfully withdrawn.\n";
                }
                break;
            case 4:
                std::clog << "Thank you for using the ATM. Goodbye!\n";
                break;
            default:
                std::clog << "Invalid selection. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}