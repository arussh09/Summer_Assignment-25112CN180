#include <iostream>
using namespace std;

class Library {
private:
    int bookId;
    string bookName, author;

public:
    void input() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "Enter Author Name: ";
        getline(cin, author);
    }

    void display() {
        cout << "\n----- Book Details -----\n";
        cout << "Book ID    : " << bookId << endl;
        cout << "Book Name  : " << bookName << endl;
        cout << "Author     : " << author << endl;
    }
};

int main() {
    Library b;

    b.input();
    b.display();

    return 0;
}