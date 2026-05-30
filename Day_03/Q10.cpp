#include<iostream>
using namespace std;

void Primes(int n){
    for(int i = 3; i <= n; i++){
        bool isPrime = true;

        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            cout << i << endl;
        }
    }
}

int main(){
    Primes(100);
    return 0;
}