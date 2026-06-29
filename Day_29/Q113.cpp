#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    do {
        cout << "\n--- Calculator Menu ---\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n";
        cout << "4. Division\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1: cout << "Result = " << a + b; break;
            case 2: cout << "Result = " << a - b; break;
            case 3: cout << "Result = " << a * b; break;
            case 4:
                if (b != 0)
                    cout << "Result = " << a / b;
                else
                    cout << "Division by zero not possible";
                break;
            case 5: cout << "Exiting..."; break;
            default: cout << "Invalid Choice";
        }
    } while (choice != 5);

    return 0;
}