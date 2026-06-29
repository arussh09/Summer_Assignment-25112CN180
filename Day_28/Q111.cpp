#include <iostream>
using namespace std;

class Ticket {
private:
    string passengerName, destination;
    int seatNo;

public:
    void bookTicket() {
        cin.ignore();

        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Seat Number: ";
        cin >> seatNo;
    }

    void displayTicket() {
        cout << "\n----- Ticket Details -----\n";
        cout << "Passenger Name : " << passengerName << endl;
        cout << "Destination    : " << destination << endl;
        cout << "Seat Number    : " << seatNo << endl;
    }
};

int main() {
    Ticket t;

    t.bookTicket();
    t.displayTicket();

    return 0;
}