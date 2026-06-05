#include<iostream>
using namespace std;
void factors(int n){
    for (int i = 1; i <=n/2; i++)
    {
        if(n%i==0){
            cout<<i<<endl;
        }
    }
    
}
int main(){
    factors(12);
}