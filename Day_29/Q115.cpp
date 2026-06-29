#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    int choice;

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    do {
        cout << "\n1.Length\n2.Copy\n3.Concatenate\n";
        cout << "4.Compare\n5.Reverse\n6.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Length = " << strlen(str1);
                break;

            case 2:
                strcpy(str2, str1);
                cout << "Copied String: " << str2;
                break;

            case 3:
                cout << "Enter second string: ";
                cin.getline(str2, 100);
                strcat(str1, str2);
                cout << "Concatenated String: " << str1;
                break;

            case 4:
                cout << "Enter second string: ";
                cin.getline(str2, 100);

                if (strcmp(str1, str2) == 0)
                    cout << "Strings are equal";
                else
                    cout << "Strings are not equal";
                break;

            case 5:
                strrev(str1);
                cout << "Reversed String: " << str1;
                break;

            case 6:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 6);

    return 0;
}