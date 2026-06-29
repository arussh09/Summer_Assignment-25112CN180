#include <iostream>
using namespace std;

class SalaryManagement {
public:
    int empId;
    string name;
    float basicSalary, hra, da, grossSalary;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary() {
        hra = 0.20 * basicSalary; // 20% HRA
        da = 0.10 * basicSalary;  // 10% DA
        grossSalary = basicSalary + hra + da;
    }

    void display() {
        cout << "\nSalary Details\n";
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    SalaryManagement s;

    s.input();
    s.calculateSalary();
    s.display();

    return 0;
}