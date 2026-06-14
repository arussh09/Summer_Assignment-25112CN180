#include <iostream>
using namespace std;

int main() {
    int n;
    int even = 0, odd = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Number of even elements = " << even << endl;
    cout << "Number of odd elements = " << odd;

    return 0;
}