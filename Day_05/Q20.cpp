#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int largestPrime = 1;

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            largestPrime = i;
            n = n / i;
        }
    }

    cout << "Largest Prime Factor = " << largestPrime;

    return 0;
}