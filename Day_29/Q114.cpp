#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    do {
        cout << "\n1.Display\n2.Insert\n3.Delete\n4.Search\n5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 2:
                cout << "Enter position and value: ";
                cin >> pos >> value;

                for (int i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos - 1] = value;
                n++;
                break;

            case 3:
                cout << "Enter position to delete: ";
                cin >> pos;

                for (int i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;
                break;

            case 4:
                cout << "Enter value to search: ";
                cin >> value;

                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        cout << "Found at position " << i + 1;
                        break;
                    }
                }
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 5);

    return 0;
}