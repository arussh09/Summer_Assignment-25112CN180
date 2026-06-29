#include <iostream>
using namespace std;

void addStudent(int roll[], string name[], int &n) {
    cout << "Enter Roll No: ";
    cin >> roll[n];
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[n]);

    n++;
}

void displayStudents(int roll[], string name[], int n) {
    cout << "\n--- Student List ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll No: " << roll[i]
             << " Name: " << name[i] << endl;
    }
}

int main() {
    int roll[100], n = 0, choice;
    string name[100];

    do {
        cout << "\n1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(roll, name, n);
                break;

            case 2:
                displayStudents(roll, name, n);
                break;

            case 3:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 3);

    return 0;
}