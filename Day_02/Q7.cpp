#include<iostream>
using namespace std;
void prd(int n){
    int num =n;
    int prd=1;
    int rem=0;
    while(n!=0){
        rem = n%10;
        prd *=rem;
        n /=10;
        }
    cout<<"Product Of Digits Of "<<num<<" : "<<prd;
}
int main(){
    prd(1234);
}