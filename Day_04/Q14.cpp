#include <iostream>
using namespace std;

int main() {
    int terms;

    cout << "Enter number of Fibonacci terms: ";
    cin >> terms;

    int fib[terms];

    fib[0] = 0;
    if (terms > 1)
        fib[1] = 1;

    for (int i = 2; i < terms; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << "Fibonacci Series: ";
    for (int i = 0; i < terms; i++) {
        cout << fib[i] << " ";
    }

    int n;
    cout << "\nEnter position to find (1-" << terms << "): ";
    cin >> n;

    if (n >= 1 && n <= terms) {
        cout << n << "th term = " << fib[n - 1];
    } else {
        cout << "Invalid position!";
    }

    return 0;
}