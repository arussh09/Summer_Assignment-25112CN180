#include<iostream>
using namespace std;
void prime(int n){
    for (int i = 2; i <=n/2; i++)
    {
        if(n%i==0){
            cout<<n<<" Is Not A Prime Number";
            break;
        }
        else{
            cout<<n<<" Is A Prime Number ";
        }
    }
    
}
int main(){
    prime(5);
}