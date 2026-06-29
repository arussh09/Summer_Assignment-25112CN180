#include <iostream>
using namespace std;

class Marksheet {
private:
    int rollNo;
    string name;
    float marks[5], total = 0, percentage;
    char grade;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter marks in 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }
    }

    void calculate() {
        percentage = total / 5;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display() {
        cout << "\n========== MARKSHEET ==========\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Student Name: " << name << endl;

        cout << "\nMarks Obtained:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }

        cout << "\nTotal Marks : " << total << "/500" << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
        cout << "Grade       : " << grade << endl;
        cout << "================================\n";
    }
};

int main() {
    Marksheet s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}