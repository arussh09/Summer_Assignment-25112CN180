#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

void lcm(int a, int b) {
    int maxNum;
    if(a>b){
        maxNum=a;
    }
    else{
        maxNum=b;
    }
    while (true) {
        if (maxNum % a == 0 && maxNum % b == 0) {
            cout << "LCM = " << maxNum;
            break;
        }
        maxNum++;
    }
}

int main() {
    lcm(7,9);

    return 0;
}