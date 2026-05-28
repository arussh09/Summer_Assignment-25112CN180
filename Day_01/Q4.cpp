#include<iostream>
using namespace std;
void digits(int n){
    int num =n;
    int dig =0;
    while(n>0){
        n = n/10;
        dig++;

    }
    cout<<"Digits in "<<num<<" : "<<dig;
}
int main(){
    digits(678);
}