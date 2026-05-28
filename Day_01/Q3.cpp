#include<iostream>
using namespace std;
void factorial(int n){
    int num =n;
    int fact =1;
    while(n!=0){
        fact *=n;
        n--;

    }
    cout<<num<<"! : "<<fact;
}
int main(){
    factorial(5);
}