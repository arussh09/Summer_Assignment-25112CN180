#include <iostream>
using namespace std;

class Inventory {
    int id, quantity;
    string itemName;

public:
    void input() {
        cout << "Enter Item ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Item Name: ";
        getline(cin, itemName);

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display() {
        cout << "\nItem ID: " << id;
        cout << "\nItem Name: " << itemName;
        cout << "\nQuantity: " << quantity << endl;
    }
};

int main() {
    Inventory item;
    item.input();
    item.display();

    return 0;
}