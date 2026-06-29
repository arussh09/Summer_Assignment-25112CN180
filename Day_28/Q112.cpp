#include <iostream>
using namespace std;

class Contact {
private:
    string name;
    long long phoneNo;
    string email;

public:
    void input() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Phone Number: ";
        cin >> phoneNo;
        cin.ignore();

        cout << "Enter Email ID: ";
        getline(cin, email);
    }

    void display() {
        cout << "\n----- Contact Details -----\n";
        cout << "Name         : " << name << endl;
        cout << "Phone Number : " << phoneNo << endl;
        cout << "Email ID     : " << email << endl;
    }
};

int main() {
    Contact c;

    c.input();
    c.display();

    return 0;
}