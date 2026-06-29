#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int roll[n];
    string name[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Roll No: ";
        cin >> roll[i];
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name[i]);
    }

    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll No: " << roll[i]
             << " Name: " << name[i] << endl;
    }

    return 0;
}