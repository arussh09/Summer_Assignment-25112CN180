#include <iostream>
using namespace std;

int main() {
    string book[5];
    int n;

    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Enter Book Name: ";
        getline(cin, book[i]);
    }

    cout << "\nAvailable Books:\n";
    for (int i = 0; i < n; i++)
        cout << i + 1 << ". " << book[i] << endl;

    return 0;
}