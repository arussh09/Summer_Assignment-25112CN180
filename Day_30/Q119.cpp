#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    int id[n];
    string name[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Employee ID: ";
        cin >> id[i];
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name[i]);
    }

    cout << "\n--- Employee Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << id[i]
             << " Name: " << name[i] << endl;
    }

    return 0;
}