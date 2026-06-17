#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum;
    cin >> sum;

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                cout << "Pair: " << arr[i] << " " << arr[j];
                found = true;
            }
        }
    }

    if(!found) {
        cout << "No Pair Found";
    }

    return 0;
}