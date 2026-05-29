#include<iostream>
using namespace std;
void sumOfDig(int n){
    int num =n;
    int sum =0;
    int rem=0;
    while (n!=0)
    {
        rem=n%10;
        sum += rem;
        n = n/10;
    }
    cout<<"Sum Of Digits Of"<<num<<" : "<<sum;    
}
int main(){
    sumOfDig(1234);
}